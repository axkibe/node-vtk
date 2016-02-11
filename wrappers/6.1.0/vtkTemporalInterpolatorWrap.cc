/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMultiTimeStepAlgorithmWrap.h"
#include "vtkTemporalInterpolatorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTemporalInterpolatorWrap::ptpl;

VtkTemporalInterpolatorWrap::VtkTemporalInterpolatorWrap()
{ }

VtkTemporalInterpolatorWrap::VtkTemporalInterpolatorWrap(vtkSmartPointer<vtkTemporalInterpolator> _native)
{ native = _native; }

VtkTemporalInterpolatorWrap::~VtkTemporalInterpolatorWrap()
{ }

void VtkTemporalInterpolatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTemporalInterpolator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TemporalInterpolator").ToLocalChecked(), ConstructorGetter);
}

void VtkTemporalInterpolatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTemporalInterpolatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiTimeStepAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiTimeStepAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTemporalInterpolatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDiscreteTimeStepInterval", GetDiscreteTimeStepInterval);
	Nan::SetPrototypeMethod(tpl, "getDiscreteTimeStepInterval", GetDiscreteTimeStepInterval);

	Nan::SetPrototypeMethod(tpl, "GetResampleFactor", GetResampleFactor);
	Nan::SetPrototypeMethod(tpl, "getResampleFactor", GetResampleFactor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDiscreteTimeStepInterval", SetDiscreteTimeStepInterval);
	Nan::SetPrototypeMethod(tpl, "setDiscreteTimeStepInterval", SetDiscreteTimeStepInterval);

	Nan::SetPrototypeMethod(tpl, "SetResampleFactor", SetResampleFactor);
	Nan::SetPrototypeMethod(tpl, "setResampleFactor", SetResampleFactor);

	ptpl.Reset( tpl );
}

void VtkTemporalInterpolatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTemporalInterpolator> native = vtkSmartPointer<vtkTemporalInterpolator>::New();
		VtkTemporalInterpolatorWrap* obj = new VtkTemporalInterpolatorWrap(native);
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

void VtkTemporalInterpolatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalInterpolatorWrap>(info.Holder());
	vtkTemporalInterpolator *native = (vtkTemporalInterpolator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTemporalInterpolatorWrap::GetDiscreteTimeStepInterval(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalInterpolatorWrap>(info.Holder());
	vtkTemporalInterpolator *native = (vtkTemporalInterpolator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDiscreteTimeStepInterval();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalInterpolatorWrap::GetResampleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalInterpolatorWrap>(info.Holder());
	vtkTemporalInterpolator *native = (vtkTemporalInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResampleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalInterpolatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalInterpolatorWrap>(info.Holder());
	vtkTemporalInterpolator *native = (vtkTemporalInterpolator *)wrapper->native.GetPointer();
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

void VtkTemporalInterpolatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalInterpolatorWrap>(info.Holder());
	vtkTemporalInterpolator *native = (vtkTemporalInterpolator *)wrapper->native.GetPointer();
	vtkTemporalInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTemporalInterpolatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTemporalInterpolatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTemporalInterpolatorWrap *w = new VtkTemporalInterpolatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTemporalInterpolatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalInterpolatorWrap>(info.Holder());
	vtkTemporalInterpolator *native = (vtkTemporalInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTemporalInterpolator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTemporalInterpolatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTemporalInterpolatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTemporalInterpolatorWrap *w = new VtkTemporalInterpolatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalInterpolatorWrap::SetDiscreteTimeStepInterval(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalInterpolatorWrap>(info.Holder());
	vtkTemporalInterpolator *native = (vtkTemporalInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDiscreteTimeStepInterval(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalInterpolatorWrap::SetResampleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalInterpolatorWrap>(info.Holder());
	vtkTemporalInterpolator *native = (vtkTemporalInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResampleFactor(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

