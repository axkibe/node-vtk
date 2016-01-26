/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageSpatialAlgorithmWrap.h"
#include "vtkImageDilateErode3DWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageDilateErode3DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageDilateErode3DWrap::ptpl;

VtkImageDilateErode3DWrap::VtkImageDilateErode3DWrap()
{ }

VtkImageDilateErode3DWrap::VtkImageDilateErode3DWrap(vtkSmartPointer<vtkImageDilateErode3D> _native)
{ native = _native; }

VtkImageDilateErode3DWrap::~VtkImageDilateErode3DWrap()
{ }

void VtkImageDilateErode3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageDilateErode3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageDilateErode3D").ToLocalChecked(), ConstructorGetter);
}

void VtkImageDilateErode3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageDilateErode3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageSpatialAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageSpatialAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageDilateErode3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDilateValue", GetDilateValue);
	Nan::SetPrototypeMethod(tpl, "getDilateValue", GetDilateValue);

	Nan::SetPrototypeMethod(tpl, "GetErodeValue", GetErodeValue);
	Nan::SetPrototypeMethod(tpl, "getErodeValue", GetErodeValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDilateValue", SetDilateValue);
	Nan::SetPrototypeMethod(tpl, "setDilateValue", SetDilateValue);

	Nan::SetPrototypeMethod(tpl, "SetErodeValue", SetErodeValue);
	Nan::SetPrototypeMethod(tpl, "setErodeValue", SetErodeValue);

	Nan::SetPrototypeMethod(tpl, "SetKernelSize", SetKernelSize);
	Nan::SetPrototypeMethod(tpl, "setKernelSize", SetKernelSize);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkImageDilateErode3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageDilateErode3D> native = vtkSmartPointer<vtkImageDilateErode3D>::New();
		VtkImageDilateErode3DWrap* obj = new VtkImageDilateErode3DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageDilateErode3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDilateErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageDilateErode3DWrap>(info.Holder());
	vtkImageDilateErode3D *native = (vtkImageDilateErode3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageDilateErode3DWrap::GetDilateValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDilateErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageDilateErode3DWrap>(info.Holder());
	vtkImageDilateErode3D *native = (vtkImageDilateErode3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDilateValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDilateErode3DWrap::GetErodeValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDilateErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageDilateErode3DWrap>(info.Holder());
	vtkImageDilateErode3D *native = (vtkImageDilateErode3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetErodeValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDilateErode3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDilateErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageDilateErode3DWrap>(info.Holder());
	vtkImageDilateErode3D *native = (vtkImageDilateErode3D *)wrapper->native.GetPointer();
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

void VtkImageDilateErode3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDilateErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageDilateErode3DWrap>(info.Holder());
	vtkImageDilateErode3D *native = (vtkImageDilateErode3D *)wrapper->native.GetPointer();
	vtkImageDilateErode3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
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

void VtkImageDilateErode3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDilateErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageDilateErode3DWrap>(info.Holder());
	vtkImageDilateErode3D *native = (vtkImageDilateErode3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageDilateErode3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
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
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDilateErode3DWrap::SetDilateValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDilateErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageDilateErode3DWrap>(info.Holder());
	vtkImageDilateErode3D *native = (vtkImageDilateErode3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDilateValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDilateErode3DWrap::SetErodeValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDilateErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageDilateErode3DWrap>(info.Holder());
	vtkImageDilateErode3D *native = (vtkImageDilateErode3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetErodeValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDilateErode3DWrap::SetKernelSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDilateErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageDilateErode3DWrap>(info.Holder());
	vtkImageDilateErode3D *native = (vtkImageDilateErode3D *)wrapper->native.GetPointer();
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

