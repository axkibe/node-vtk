/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkRandomSequenceWrap.h"
#include "vtkGaussianRandomSequenceWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGaussianRandomSequenceWrap::ptpl;

VtkGaussianRandomSequenceWrap::VtkGaussianRandomSequenceWrap()
{ }

VtkGaussianRandomSequenceWrap::VtkGaussianRandomSequenceWrap(vtkSmartPointer<vtkGaussianRandomSequence> _native)
{ native = _native; }

VtkGaussianRandomSequenceWrap::~VtkGaussianRandomSequenceWrap()
{ }

void VtkGaussianRandomSequenceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGaussianRandomSequence").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GaussianRandomSequence").ToLocalChecked(), ConstructorGetter);
}

void VtkGaussianRandomSequenceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGaussianRandomSequenceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRandomSequenceWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRandomSequenceWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGaussianRandomSequenceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetScaledValue", GetScaledValue);
	Nan::SetPrototypeMethod(tpl, "getScaledValue", GetScaledValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKGAUSSIANRANDOMSEQUENCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGAUSSIANRANDOMSEQUENCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGaussianRandomSequenceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkGaussianRandomSequenceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianRandomSequenceWrap>(info.Holder());
	vtkGaussianRandomSequence *native = (vtkGaussianRandomSequence *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGaussianRandomSequenceWrap::GetScaledValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianRandomSequenceWrap>(info.Holder());
	vtkGaussianRandomSequence *native = (vtkGaussianRandomSequence *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			double r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetScaledValue(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGaussianRandomSequenceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianRandomSequenceWrap>(info.Holder());
	vtkGaussianRandomSequence *native = (vtkGaussianRandomSequence *)wrapper->native.GetPointer();
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

void VtkGaussianRandomSequenceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianRandomSequenceWrap>(info.Holder());
	vtkGaussianRandomSequence *native = (vtkGaussianRandomSequence *)wrapper->native.GetPointer();
	vtkGaussianRandomSequence * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGaussianRandomSequenceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGaussianRandomSequenceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGaussianRandomSequenceWrap *w = new VtkGaussianRandomSequenceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGaussianRandomSequenceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGaussianRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkGaussianRandomSequenceWrap>(info.Holder());
	vtkGaussianRandomSequence *native = (vtkGaussianRandomSequence *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGaussianRandomSequence * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkGaussianRandomSequenceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGaussianRandomSequenceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGaussianRandomSequenceWrap *w = new VtkGaussianRandomSequenceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

