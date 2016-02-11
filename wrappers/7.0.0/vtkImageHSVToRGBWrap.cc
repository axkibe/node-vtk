/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageHSVToRGBWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageHSVToRGBWrap::ptpl;

VtkImageHSVToRGBWrap::VtkImageHSVToRGBWrap()
{ }

VtkImageHSVToRGBWrap::VtkImageHSVToRGBWrap(vtkSmartPointer<vtkImageHSVToRGB> _native)
{ native = _native; }

VtkImageHSVToRGBWrap::~VtkImageHSVToRGBWrap()
{ }

void VtkImageHSVToRGBWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageHSVToRGB").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageHSVToRGB").ToLocalChecked(), ConstructorGetter);
}

void VtkImageHSVToRGBWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageHSVToRGBWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageHSVToRGBWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaximum", GetMaximum);
	Nan::SetPrototypeMethod(tpl, "getMaximum", GetMaximum);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMaximum", SetMaximum);
	Nan::SetPrototypeMethod(tpl, "setMaximum", SetMaximum);

	ptpl.Reset( tpl );
}

void VtkImageHSVToRGBWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageHSVToRGB> native = vtkSmartPointer<vtkImageHSVToRGB>::New();
		VtkImageHSVToRGBWrap* obj = new VtkImageHSVToRGBWrap(native);
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

void VtkImageHSVToRGBWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHSVToRGBWrap *wrapper = ObjectWrap::Unwrap<VtkImageHSVToRGBWrap>(info.Holder());
	vtkImageHSVToRGB *native = (vtkImageHSVToRGB *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageHSVToRGBWrap::GetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHSVToRGBWrap *wrapper = ObjectWrap::Unwrap<VtkImageHSVToRGBWrap>(info.Holder());
	vtkImageHSVToRGB *native = (vtkImageHSVToRGB *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageHSVToRGBWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHSVToRGBWrap *wrapper = ObjectWrap::Unwrap<VtkImageHSVToRGBWrap>(info.Holder());
	vtkImageHSVToRGB *native = (vtkImageHSVToRGB *)wrapper->native.GetPointer();
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

void VtkImageHSVToRGBWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHSVToRGBWrap *wrapper = ObjectWrap::Unwrap<VtkImageHSVToRGBWrap>(info.Holder());
	vtkImageHSVToRGB *native = (vtkImageHSVToRGB *)wrapper->native.GetPointer();
	vtkImageHSVToRGB * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageHSVToRGBWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageHSVToRGBWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageHSVToRGBWrap *w = new VtkImageHSVToRGBWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageHSVToRGBWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHSVToRGBWrap *wrapper = ObjectWrap::Unwrap<VtkImageHSVToRGBWrap>(info.Holder());
	vtkImageHSVToRGB *native = (vtkImageHSVToRGB *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageHSVToRGB * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImageHSVToRGBWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageHSVToRGBWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageHSVToRGBWrap *w = new VtkImageHSVToRGBWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageHSVToRGBWrap::SetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHSVToRGBWrap *wrapper = ObjectWrap::Unwrap<VtkImageHSVToRGBWrap>(info.Holder());
	vtkImageHSVToRGB *native = (vtkImageHSVToRGB *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximum(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

