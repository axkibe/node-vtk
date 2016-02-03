/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkHedgeHogWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHedgeHogWrap::ptpl;

VtkHedgeHogWrap::VtkHedgeHogWrap()
{ }

VtkHedgeHogWrap::VtkHedgeHogWrap(vtkSmartPointer<vtkHedgeHog> _native)
{ native = _native; }

VtkHedgeHogWrap::~VtkHedgeHogWrap()
{ }

void VtkHedgeHogWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHedgeHog").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HedgeHog").ToLocalChecked(), ConstructorGetter);
}

void VtkHedgeHogWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHedgeHogWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHedgeHogWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetScaleFactor", GetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "getScaleFactor", GetScaleFactor);

	Nan::SetPrototypeMethod(tpl, "GetVectorMode", GetVectorMode);
	Nan::SetPrototypeMethod(tpl, "getVectorMode", GetVectorMode);

	Nan::SetPrototypeMethod(tpl, "GetVectorModeAsString", GetVectorModeAsString);
	Nan::SetPrototypeMethod(tpl, "getVectorModeAsString", GetVectorModeAsString);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetScaleFactor", SetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "setScaleFactor", SetScaleFactor);

	Nan::SetPrototypeMethod(tpl, "SetVectorMode", SetVectorMode);
	Nan::SetPrototypeMethod(tpl, "setVectorMode", SetVectorMode);

	Nan::SetPrototypeMethod(tpl, "SetVectorModeToUseNormal", SetVectorModeToUseNormal);
	Nan::SetPrototypeMethod(tpl, "setVectorModeToUseNormal", SetVectorModeToUseNormal);

	Nan::SetPrototypeMethod(tpl, "SetVectorModeToUseVector", SetVectorModeToUseVector);
	Nan::SetPrototypeMethod(tpl, "setVectorModeToUseVector", SetVectorModeToUseVector);

	ptpl.Reset( tpl );
}

void VtkHedgeHogWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHedgeHog> native = vtkSmartPointer<vtkHedgeHog>::New();
		VtkHedgeHogWrap* obj = new VtkHedgeHogWrap(native);
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

void VtkHedgeHogWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHedgeHogWrap *wrapper = ObjectWrap::Unwrap<VtkHedgeHogWrap>(info.Holder());
	vtkHedgeHog *native = (vtkHedgeHog *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHedgeHogWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHedgeHogWrap *wrapper = ObjectWrap::Unwrap<VtkHedgeHogWrap>(info.Holder());
	vtkHedgeHog *native = (vtkHedgeHog *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHedgeHogWrap::GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHedgeHogWrap *wrapper = ObjectWrap::Unwrap<VtkHedgeHogWrap>(info.Holder());
	vtkHedgeHog *native = (vtkHedgeHog *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHedgeHogWrap::GetVectorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHedgeHogWrap *wrapper = ObjectWrap::Unwrap<VtkHedgeHogWrap>(info.Holder());
	vtkHedgeHog *native = (vtkHedgeHog *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHedgeHogWrap::GetVectorModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHedgeHogWrap *wrapper = ObjectWrap::Unwrap<VtkHedgeHogWrap>(info.Holder());
	vtkHedgeHog *native = (vtkHedgeHog *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHedgeHogWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHedgeHogWrap *wrapper = ObjectWrap::Unwrap<VtkHedgeHogWrap>(info.Holder());
	vtkHedgeHog *native = (vtkHedgeHog *)wrapper->native.GetPointer();
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

void VtkHedgeHogWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHedgeHogWrap *wrapper = ObjectWrap::Unwrap<VtkHedgeHogWrap>(info.Holder());
	vtkHedgeHog *native = (vtkHedgeHog *)wrapper->native.GetPointer();
	vtkHedgeHog * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHedgeHogWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHedgeHogWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHedgeHogWrap *w = new VtkHedgeHogWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHedgeHogWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHedgeHogWrap *wrapper = ObjectWrap::Unwrap<VtkHedgeHogWrap>(info.Holder());
	vtkHedgeHog *native = (vtkHedgeHog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHedgeHog * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHedgeHogWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHedgeHogWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHedgeHogWrap *w = new VtkHedgeHogWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHedgeHogWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHedgeHogWrap *wrapper = ObjectWrap::Unwrap<VtkHedgeHogWrap>(info.Holder());
	vtkHedgeHog *native = (vtkHedgeHog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHedgeHogWrap::SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHedgeHogWrap *wrapper = ObjectWrap::Unwrap<VtkHedgeHogWrap>(info.Holder());
	vtkHedgeHog *native = (vtkHedgeHog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHedgeHogWrap::SetVectorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHedgeHogWrap *wrapper = ObjectWrap::Unwrap<VtkHedgeHogWrap>(info.Holder());
	vtkHedgeHog *native = (vtkHedgeHog *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVectorMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHedgeHogWrap::SetVectorModeToUseNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHedgeHogWrap *wrapper = ObjectWrap::Unwrap<VtkHedgeHogWrap>(info.Holder());
	vtkHedgeHog *native = (vtkHedgeHog *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVectorModeToUseNormal();
}

void VtkHedgeHogWrap::SetVectorModeToUseVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHedgeHogWrap *wrapper = ObjectWrap::Unwrap<VtkHedgeHogWrap>(info.Holder());
	vtkHedgeHog *native = (vtkHedgeHog *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVectorModeToUseVector();
}

