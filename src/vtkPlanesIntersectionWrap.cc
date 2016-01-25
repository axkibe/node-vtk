/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPlanesWrap.h"
#include "vtkPlanesIntersectionWrap.h"
#include "vtkPointsWrap.h"
#include "vtkCellWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPlanesIntersectionWrap::constructor;

VtkPlanesIntersectionWrap::VtkPlanesIntersectionWrap()
{ }

VtkPlanesIntersectionWrap::VtkPlanesIntersectionWrap(vtkSmartPointer<vtkPlanesIntersection> _native)
{ native = _native; }

VtkPlanesIntersectionWrap::~VtkPlanesIntersectionWrap()
{ }

void VtkPlanesIntersectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkPlanesIntersectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkImplicitFunctionWrap::InitTpl(tpl);
	VtkPlanesWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkPlanesIntersection").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PlanesIntersection").ToLocalChecked(),tpl->GetFunction());
}

void VtkPlanesIntersectionWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "Convert3DCell", Convert3DCell);
	Nan::SetPrototypeMethod(tpl, "convert3DCell", Convert3DCell);

	Nan::SetPrototypeMethod(tpl, "GetNumRegionVertices", GetNumRegionVertices);
	Nan::SetPrototypeMethod(tpl, "getNumRegionVertices", GetNumRegionVertices);

	Nan::SetPrototypeMethod(tpl, "IntersectsRegion", IntersectsRegion);
	Nan::SetPrototypeMethod(tpl, "intersectsRegion", IntersectsRegion);

	Nan::SetPrototypeMethod(tpl, "SetRegionVertices", SetRegionVertices);
	Nan::SetPrototypeMethod(tpl, "setRegionVertices", SetRegionVertices);

}

void VtkPlanesIntersectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlanesIntersection> native = vtkSmartPointer<vtkPlanesIntersection>::New();
		VtkPlanesIntersectionWrap* obj = new VtkPlanesIntersectionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPlanesIntersectionWrap::Convert3DCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlanesIntersectionWrap *wrapper = ObjectWrap::Unwrap<VtkPlanesIntersectionWrap>(info.Holder());
	vtkPlanesIntersection *native = (vtkPlanesIntersection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkCellWrap *a0 = ObjectWrap::Unwrap<VtkCellWrap>(info[0]->ToObject());
		vtkPlanesIntersection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Convert3DCell(
			(vtkCell *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkPlanesIntersectionWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlanesIntersectionWrap *w = new VtkPlanesIntersectionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlanesIntersectionWrap::GetNumRegionVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlanesIntersectionWrap *wrapper = ObjectWrap::Unwrap<VtkPlanesIntersectionWrap>(info.Holder());
	vtkPlanesIntersection *native = (vtkPlanesIntersection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumRegionVertices();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlanesIntersectionWrap::IntersectsRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlanesIntersectionWrap *wrapper = ObjectWrap::Unwrap<VtkPlanesIntersectionWrap>(info.Holder());
	vtkPlanesIntersection *native = (vtkPlanesIntersection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IntersectsRegion(
			(vtkPoints *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlanesIntersectionWrap::SetRegionVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlanesIntersectionWrap *wrapper = ObjectWrap::Unwrap<VtkPlanesIntersectionWrap>(info.Holder());
	vtkPlanesIntersection *native = (vtkPlanesIntersection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRegionVertices(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

