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
Nan::Persistent<v8::FunctionTemplate> VtkFixedSizeHandleRepresentation3DWrap::ptpl;

VtkFixedSizeHandleRepresentation3DWrap::VtkFixedSizeHandleRepresentation3DWrap()
{ }

VtkFixedSizeHandleRepresentation3DWrap::VtkFixedSizeHandleRepresentation3DWrap(vtkSmartPointer<vtkFixedSizeHandleRepresentation3D> _native)
{ native = _native; }

VtkFixedSizeHandleRepresentation3DWrap::~VtkFixedSizeHandleRepresentation3DWrap()
{ }

void VtkFixedSizeHandleRepresentation3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFixedSizeHandleRepresentation3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FixedSizeHandleRepresentation3D").ToLocalChecked(), ConstructorGetter);
}

void VtkFixedSizeHandleRepresentation3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFixedSizeHandleRepresentation3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolygonalHandleRepresentation3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolygonalHandleRepresentation3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFixedSizeHandleRepresentation3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

	ptpl.Reset( tpl );
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
		VtkFixedSizeHandleRepresentation3DWrap* obj = new VtkFixedSizeHandleRepresentation3DWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
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
		VtkSphereSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSphereSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSphereSourceWrap *w = new VtkSphereSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFixedSizeHandleRepresentation3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedSizeHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkFixedSizeHandleRepresentation3DWrap>(info.Holder());
	vtkFixedSizeHandleRepresentation3D *native = (vtkFixedSizeHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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
		VtkFixedSizeHandleRepresentation3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFixedSizeHandleRepresentation3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFixedSizeHandleRepresentation3DWrap *w = new VtkFixedSizeHandleRepresentation3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFixedSizeHandleRepresentation3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedSizeHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkFixedSizeHandleRepresentation3DWrap>(info.Holder());
	vtkFixedSizeHandleRepresentation3D *native = (vtkFixedSizeHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
			VtkFixedSizeHandleRepresentation3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFixedSizeHandleRepresentation3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFixedSizeHandleRepresentation3DWrap *w = new VtkFixedSizeHandleRepresentation3DWrap();
		w->native = r;
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

