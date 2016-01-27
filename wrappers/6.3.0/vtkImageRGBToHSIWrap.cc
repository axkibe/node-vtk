/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageRGBToHSIWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageRGBToHSIWrap::ptpl;

VtkImageRGBToHSIWrap::VtkImageRGBToHSIWrap()
{ }

VtkImageRGBToHSIWrap::VtkImageRGBToHSIWrap(vtkSmartPointer<vtkImageRGBToHSI> _native)
{ native = _native; }

VtkImageRGBToHSIWrap::~VtkImageRGBToHSIWrap()
{ }

void VtkImageRGBToHSIWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageRGBToHSI").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageRGBToHSI").ToLocalChecked(), ConstructorGetter);
}

void VtkImageRGBToHSIWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageRGBToHSIWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageRGBToHSIWrap").ToLocalChecked());
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

void VtkImageRGBToHSIWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageRGBToHSI> native = vtkSmartPointer<vtkImageRGBToHSI>::New();
		VtkImageRGBToHSIWrap* obj = new VtkImageRGBToHSIWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageRGBToHSIWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRGBToHSIWrap *wrapper = ObjectWrap::Unwrap<VtkImageRGBToHSIWrap>(info.Holder());
	vtkImageRGBToHSI *native = (vtkImageRGBToHSI *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageRGBToHSIWrap::GetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRGBToHSIWrap *wrapper = ObjectWrap::Unwrap<VtkImageRGBToHSIWrap>(info.Holder());
	vtkImageRGBToHSI *native = (vtkImageRGBToHSI *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageRGBToHSIWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRGBToHSIWrap *wrapper = ObjectWrap::Unwrap<VtkImageRGBToHSIWrap>(info.Holder());
	vtkImageRGBToHSI *native = (vtkImageRGBToHSI *)wrapper->native.GetPointer();
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

void VtkImageRGBToHSIWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRGBToHSIWrap *wrapper = ObjectWrap::Unwrap<VtkImageRGBToHSIWrap>(info.Holder());
	vtkImageRGBToHSI *native = (vtkImageRGBToHSI *)wrapper->native.GetPointer();
	vtkImageRGBToHSI * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageRGBToHSIWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageRGBToHSIWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageRGBToHSIWrap *w = new VtkImageRGBToHSIWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageRGBToHSIWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRGBToHSIWrap *wrapper = ObjectWrap::Unwrap<VtkImageRGBToHSIWrap>(info.Holder());
	vtkImageRGBToHSI *native = (vtkImageRGBToHSI *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageRGBToHSI * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageRGBToHSIWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageRGBToHSIWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageRGBToHSIWrap *w = new VtkImageRGBToHSIWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageRGBToHSIWrap::SetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRGBToHSIWrap *wrapper = ObjectWrap::Unwrap<VtkImageRGBToHSIWrap>(info.Holder());
	vtkImageRGBToHSI *native = (vtkImageRGBToHSI *)wrapper->native.GetPointer();
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

