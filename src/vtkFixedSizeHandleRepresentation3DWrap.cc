/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolygonalHandleRepresentation3DWrap.h"
#include "vtkFixedSizeHandleRepresentation3DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSphereSourceWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkFixedSizeHandleRepresentation3DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkFixedSizeHandleRepresentation3DWrap::ptpl;

VtkFixedSizeHandleRepresentation3DWrap::VtkFixedSizeHandleRepresentation3DWrap()
{ }

VtkFixedSizeHandleRepresentation3DWrap::VtkFixedSizeHandleRepresentation3DWrap(vtkSmartPointer<vtkFixedSizeHandleRepresentation3D> _native)
{ native = _native; }

VtkFixedSizeHandleRepresentation3DWrap::~VtkFixedSizeHandleRepresentation3DWrap()
{ }

void VtkFixedSizeHandleRepresentation3DWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolygonalHandleRepresentation3DWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolygonalHandleRepresentation3DWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkFixedSizeHandleRepresentation3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkFixedSizeHandleRepresentation3D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("FixedSizeHandleRepresentation3D").ToLocalChecked(),tpl->GetFunction());
}

void VtkFixedSizeHandleRepresentation3DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHandleSizeInPixels", GetHandleSizeInPixels);
	Nan::SetPrototypeMethod(tpl, "getHandleSizeInPixels", GetHandleSizeInPixels);

	Nan::SetPrototypeMethod(tpl, "GetHandleSizeToleranceInPixels", GetHandleSizeToleranceInPixels);
	Nan::SetPrototypeMethod(tpl, "getHandleSizeToleranceInPixels", GetHandleSizeToleranceInPixels);

	Nan::SetPrototypeMethod(tpl, "GetSphereSource", GetSphereSource);
	Nan::SetPrototypeMethod(tpl, "getSphereSource", GetSphereSource);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHandleSizeInPixels", SetHandleSizeInPixels);
	Nan::SetPrototypeMethod(tpl, "setHandleSizeInPixels", SetHandleSizeInPixels);

	Nan::SetPrototypeMethod(tpl, "SetHandleSizeToleranceInPixels", SetHandleSizeToleranceInPixels);
	Nan::SetPrototypeMethod(tpl, "setHandleSizeToleranceInPixels", SetHandleSizeToleranceInPixels);

}

void VtkFixedSizeHandleRepresentation3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFixedSizeHandleRepresentation3D> native = vtkSmartPointer<vtkFixedSizeHandleRepresentation3D>::New();
		VtkFixedSizeHandleRepresentation3DWrap* obj = new VtkFixedSizeHandleRepresentation3DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkFixedSizeHandleRepresentation3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedSizeHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkFixedSizeHandleRepresentation3DWrap>(info.Holder());
	vtkFixedSizeHandleRepresentation3D *native = (vtkFixedSizeHandleRepresentation3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFixedSizeHandleRepresentation3DWrap::GetHandleSizeInPixels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedSizeHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkFixedSizeHandleRepresentation3DWrap>(info.Holder());
	vtkFixedSizeHandleRepresentation3D *native = (vtkFixedSizeHandleRepresentation3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleSizeInPixels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFixedSizeHandleRepresentation3DWrap::GetHandleSizeToleranceInPixels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedSizeHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkFixedSizeHandleRepresentation3DWrap>(info.Holder());
	vtkFixedSizeHandleRepresentation3D *native = (vtkFixedSizeHandleRepresentation3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleSizeToleranceInPixels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFixedSizeHandleRepresentation3DWrap::GetSphereSource(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedSizeHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkFixedSizeHandleRepresentation3DWrap>(info.Holder());
	vtkFixedSizeHandleRepresentation3D *native = (vtkFixedSizeHandleRepresentation3D *)wrapper->native.GetPointer();
	vtkSphereSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSphereSource();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSphereSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSphereSourceWrap *w = new VtkSphereSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFixedSizeHandleRepresentation3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedSizeHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkFixedSizeHandleRepresentation3DWrap>(info.Holder());
	vtkFixedSizeHandleRepresentation3D *native = (vtkFixedSizeHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkFixedSizeHandleRepresentation3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedSizeHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkFixedSizeHandleRepresentation3DWrap>(info.Holder());
	vtkFixedSizeHandleRepresentation3D *native = (vtkFixedSizeHandleRepresentation3D *)wrapper->native.GetPointer();
	vtkFixedSizeHandleRepresentation3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkFixedSizeHandleRepresentation3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFixedSizeHandleRepresentation3DWrap *w = new VtkFixedSizeHandleRepresentation3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFixedSizeHandleRepresentation3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedSizeHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkFixedSizeHandleRepresentation3DWrap>(info.Holder());
	vtkFixedSizeHandleRepresentation3D *native = (vtkFixedSizeHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkFixedSizeHandleRepresentation3D * r;
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
			Nan::New<v8::Function>(VtkFixedSizeHandleRepresentation3DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFixedSizeHandleRepresentation3DWrap *w = new VtkFixedSizeHandleRepresentation3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFixedSizeHandleRepresentation3DWrap::SetHandleSizeInPixels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedSizeHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkFixedSizeHandleRepresentation3DWrap>(info.Holder());
	vtkFixedSizeHandleRepresentation3D *native = (vtkFixedSizeHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHandleSizeInPixels(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFixedSizeHandleRepresentation3DWrap::SetHandleSizeToleranceInPixels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedSizeHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkFixedSizeHandleRepresentation3DWrap>(info.Holder());
	vtkFixedSizeHandleRepresentation3D *native = (vtkFixedSizeHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHandleSizeToleranceInPixels(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

