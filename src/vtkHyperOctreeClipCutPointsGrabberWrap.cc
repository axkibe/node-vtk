/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkHyperOctreePointsGrabberWrap.h"
#include "vtkHyperOctreeClipCutPointsGrabberWrap.h"
#include "vtkObjectWrap.h"
#include "vtkOrderedTriangulatorWrap.h"
#include "vtkPolygonWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkHyperOctreeClipCutPointsGrabberWrap::constructor;

VtkHyperOctreeClipCutPointsGrabberWrap::VtkHyperOctreeClipCutPointsGrabberWrap()
{ }

VtkHyperOctreeClipCutPointsGrabberWrap::VtkHyperOctreeClipCutPointsGrabberWrap(vtkSmartPointer<vtkHyperOctreeClipCutPointsGrabber> _native)
{ native = _native; }

VtkHyperOctreeClipCutPointsGrabberWrap::~VtkHyperOctreeClipCutPointsGrabberWrap()
{ }

void VtkHyperOctreeClipCutPointsGrabberWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkHyperOctreeClipCutPointsGrabberWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkHyperOctreePointsGrabberWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkHyperOctreeClipCutPointsGrabber").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("HyperOctreeClipCutPointsGrabber").ToLocalChecked(),tpl->GetFunction());
}

void VtkHyperOctreeClipCutPointsGrabberWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPolygon", GetPolygon);
	Nan::SetPrototypeMethod(tpl, "getPolygon", GetPolygon);

	Nan::SetPrototypeMethod(tpl, "GetTriangulator", GetTriangulator);
	Nan::SetPrototypeMethod(tpl, "getTriangulator", GetTriangulator);

	Nan::SetPrototypeMethod(tpl, "InitPointInsertion", InitPointInsertion);
	Nan::SetPrototypeMethod(tpl, "initPointInsertion", InitPointInsertion);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDimension", SetDimension);
	Nan::SetPrototypeMethod(tpl, "setDimension", SetDimension);

}

void VtkHyperOctreeClipCutPointsGrabberWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperOctreeClipCutPointsGrabber> native = vtkSmartPointer<vtkHyperOctreeClipCutPointsGrabber>::New();
		VtkHyperOctreeClipCutPointsGrabberWrap* obj = new VtkHyperOctreeClipCutPointsGrabberWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHyperOctreeClipCutPointsGrabberWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHyperOctreeClipCutPointsGrabberWrap::GetPolygon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	vtkPolygon * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolygon();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolygonWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolygonWrap *w = new VtkPolygonWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeClipCutPointsGrabberWrap::GetTriangulator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	vtkOrderedTriangulator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTriangulator();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOrderedTriangulatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOrderedTriangulatorWrap *w = new VtkOrderedTriangulatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeClipCutPointsGrabberWrap::InitPointInsertion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitPointInsertion();
}

void VtkHyperOctreeClipCutPointsGrabberWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
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

void VtkHyperOctreeClipCutPointsGrabberWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	vtkHyperOctreeClipCutPointsGrabber * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHyperOctreeClipCutPointsGrabberWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeClipCutPointsGrabberWrap *w = new VtkHyperOctreeClipCutPointsGrabberWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeClipCutPointsGrabberWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHyperOctreeClipCutPointsGrabber * r;
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
			Nan::New<v8::Function>(VtkHyperOctreeClipCutPointsGrabberWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperOctreeClipCutPointsGrabberWrap *w = new VtkHyperOctreeClipCutPointsGrabberWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeClipCutPointsGrabberWrap::SetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDimension(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

