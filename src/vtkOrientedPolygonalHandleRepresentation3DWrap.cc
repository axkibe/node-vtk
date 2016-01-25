/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractPolygonalHandleRepresentation3DWrap.h"
#include "vtkOrientedPolygonalHandleRepresentation3DWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOrientedPolygonalHandleRepresentation3DWrap::constructor;

VtkOrientedPolygonalHandleRepresentation3DWrap::VtkOrientedPolygonalHandleRepresentation3DWrap()
{ }

VtkOrientedPolygonalHandleRepresentation3DWrap::VtkOrientedPolygonalHandleRepresentation3DWrap(vtkSmartPointer<vtkOrientedPolygonalHandleRepresentation3D> _native)
{ native = _native; }

VtkOrientedPolygonalHandleRepresentation3DWrap::~VtkOrientedPolygonalHandleRepresentation3DWrap()
{ }

void VtkOrientedPolygonalHandleRepresentation3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkOrientedPolygonalHandleRepresentation3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkPropWrap::InitTpl(tpl);
	VtkWidgetRepresentationWrap::InitTpl(tpl);
	VtkHandleRepresentationWrap::InitTpl(tpl);
	VtkAbstractPolygonalHandleRepresentation3DWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkOrientedPolygonalHandleRepresentation3D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("OrientedPolygonalHandleRepresentation3D").ToLocalChecked(),tpl->GetFunction());
}

void VtkOrientedPolygonalHandleRepresentation3DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkOrientedPolygonalHandleRepresentation3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOrientedPolygonalHandleRepresentation3D> native = vtkSmartPointer<vtkOrientedPolygonalHandleRepresentation3D>::New();
		VtkOrientedPolygonalHandleRepresentation3DWrap* obj = new VtkOrientedPolygonalHandleRepresentation3DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOrientedPolygonalHandleRepresentation3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkOrientedPolygonalHandleRepresentation3D *native = (vtkOrientedPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOrientedPolygonalHandleRepresentation3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkOrientedPolygonalHandleRepresentation3D *native = (vtkOrientedPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientedPolygonalHandleRepresentation3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkOrientedPolygonalHandleRepresentation3D *native = (vtkOrientedPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	vtkOrientedPolygonalHandleRepresentation3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOrientedPolygonalHandleRepresentation3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOrientedPolygonalHandleRepresentation3DWrap *w = new VtkOrientedPolygonalHandleRepresentation3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientedPolygonalHandleRepresentation3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientedPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkOrientedPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkOrientedPolygonalHandleRepresentation3D *native = (vtkOrientedPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOrientedPolygonalHandleRepresentation3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkOrientedPolygonalHandleRepresentation3DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOrientedPolygonalHandleRepresentation3DWrap *w = new VtkOrientedPolygonalHandleRepresentation3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

