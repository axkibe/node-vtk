/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageOpenClose3DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDilateErode3DWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageOpenClose3DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageOpenClose3DWrap::ptpl;

VtkImageOpenClose3DWrap::VtkImageOpenClose3DWrap()
{ }

VtkImageOpenClose3DWrap::VtkImageOpenClose3DWrap(vtkSmartPointer<vtkImageOpenClose3D> _native)
{ native = _native; }

VtkImageOpenClose3DWrap::~VtkImageOpenClose3DWrap()
{ }

void VtkImageOpenClose3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageOpenClose3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageOpenClose3D").ToLocalChecked(), ConstructorGetter);
}

void VtkImageOpenClose3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageOpenClose3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageOpenClose3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DebugOff", DebugOff);
	Nan::SetPrototypeMethod(tpl, "debugOff", DebugOff);

	Nan::SetPrototypeMethod(tpl, "DebugOn", DebugOn);
	Nan::SetPrototypeMethod(tpl, "debugOn", DebugOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCloseValue", GetCloseValue);
	Nan::SetPrototypeMethod(tpl, "getCloseValue", GetCloseValue);

	Nan::SetPrototypeMethod(tpl, "GetFilter0", GetFilter0);
	Nan::SetPrototypeMethod(tpl, "getFilter0", GetFilter0);

	Nan::SetPrototypeMethod(tpl, "GetFilter1", GetFilter1);
	Nan::SetPrototypeMethod(tpl, "getFilter1", GetFilter1);

	Nan::SetPrototypeMethod(tpl, "GetOpenValue", GetOpenValue);
	Nan::SetPrototypeMethod(tpl, "getOpenValue", GetOpenValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Modified", Modified);
	Nan::SetPrototypeMethod(tpl, "modified", Modified);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCloseValue", SetCloseValue);
	Nan::SetPrototypeMethod(tpl, "setCloseValue", SetCloseValue);

	Nan::SetPrototypeMethod(tpl, "SetKernelSize", SetKernelSize);
	Nan::SetPrototypeMethod(tpl, "setKernelSize", SetKernelSize);

	Nan::SetPrototypeMethod(tpl, "SetOpenValue", SetOpenValue);
	Nan::SetPrototypeMethod(tpl, "setOpenValue", SetOpenValue);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkImageOpenClose3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageOpenClose3D> native = vtkSmartPointer<vtkImageOpenClose3D>::New();
		VtkImageOpenClose3DWrap* obj = new VtkImageOpenClose3DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageOpenClose3DWrap::DebugOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DebugOff();
}

void VtkImageOpenClose3DWrap::DebugOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DebugOn();
}

void VtkImageOpenClose3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageOpenClose3DWrap::GetCloseValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCloseValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageOpenClose3DWrap::GetFilter0(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
	vtkImageDilateErode3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilter0();
		VtkImageDilateErode3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDilateErode3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDilateErode3DWrap *w = new VtkImageDilateErode3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageOpenClose3DWrap::GetFilter1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
	vtkImageDilateErode3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilter1();
		VtkImageDilateErode3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDilateErode3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDilateErode3DWrap *w = new VtkImageDilateErode3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageOpenClose3DWrap::GetOpenValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpenValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageOpenClose3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
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

void VtkImageOpenClose3DWrap::Modified(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Modified();
}

void VtkImageOpenClose3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
	vtkImageOpenClose3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageOpenClose3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageOpenClose3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageOpenClose3DWrap *w = new VtkImageOpenClose3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageOpenClose3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageOpenClose3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageOpenClose3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkImageOpenClose3DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageOpenClose3DWrap *w = new VtkImageOpenClose3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageOpenClose3DWrap::SetCloseValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCloseValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageOpenClose3DWrap::SetKernelSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetKernelSize(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageOpenClose3DWrap::SetOpenValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageOpenClose3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageOpenClose3DWrap>(info.Holder());
	vtkImageOpenClose3D *native = (vtkImageOpenClose3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOpenValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

