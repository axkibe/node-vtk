/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAlgorithmWrap.h"
#include "vtkTemporalSnapToTimeStepWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTemporalSnapToTimeStepWrap::ptpl;

VtkTemporalSnapToTimeStepWrap::VtkTemporalSnapToTimeStepWrap()
{ }

VtkTemporalSnapToTimeStepWrap::VtkTemporalSnapToTimeStepWrap(vtkSmartPointer<vtkTemporalSnapToTimeStep> _native)
{ native = _native; }

VtkTemporalSnapToTimeStepWrap::~VtkTemporalSnapToTimeStepWrap()
{ }

void VtkTemporalSnapToTimeStepWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTemporalSnapToTimeStep").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TemporalSnapToTimeStep").ToLocalChecked(), ConstructorGetter);
}

void VtkTemporalSnapToTimeStepWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTemporalSnapToTimeStepWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTemporalSnapToTimeStepWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSnapMode", GetSnapMode);
	Nan::SetPrototypeMethod(tpl, "getSnapMode", GetSnapMode);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSnapMode", SetSnapMode);
	Nan::SetPrototypeMethod(tpl, "setSnapMode", SetSnapMode);

	Nan::SetPrototypeMethod(tpl, "SetSnapModeToNearest", SetSnapModeToNearest);
	Nan::SetPrototypeMethod(tpl, "setSnapModeToNearest", SetSnapModeToNearest);

	Nan::SetPrototypeMethod(tpl, "SetSnapModeToNextAboveOrEqual", SetSnapModeToNextAboveOrEqual);
	Nan::SetPrototypeMethod(tpl, "setSnapModeToNextAboveOrEqual", SetSnapModeToNextAboveOrEqual);

	Nan::SetPrototypeMethod(tpl, "SetSnapModeToNextBelowOrEqual", SetSnapModeToNextBelowOrEqual);
	Nan::SetPrototypeMethod(tpl, "setSnapModeToNextBelowOrEqual", SetSnapModeToNextBelowOrEqual);

	ptpl.Reset( tpl );
}

void VtkTemporalSnapToTimeStepWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTemporalSnapToTimeStep> native = vtkSmartPointer<vtkTemporalSnapToTimeStep>::New();
		VtkTemporalSnapToTimeStepWrap* obj = new VtkTemporalSnapToTimeStepWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTemporalSnapToTimeStepWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalSnapToTimeStepWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalSnapToTimeStepWrap>(info.Holder());
	vtkTemporalSnapToTimeStep *native = (vtkTemporalSnapToTimeStep *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTemporalSnapToTimeStepWrap::GetSnapMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalSnapToTimeStepWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalSnapToTimeStepWrap>(info.Holder());
	vtkTemporalSnapToTimeStep *native = (vtkTemporalSnapToTimeStep *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSnapMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalSnapToTimeStepWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalSnapToTimeStepWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalSnapToTimeStepWrap>(info.Holder());
	vtkTemporalSnapToTimeStep *native = (vtkTemporalSnapToTimeStep *)wrapper->native.GetPointer();
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

void VtkTemporalSnapToTimeStepWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalSnapToTimeStepWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalSnapToTimeStepWrap>(info.Holder());
	vtkTemporalSnapToTimeStep *native = (vtkTemporalSnapToTimeStep *)wrapper->native.GetPointer();
	vtkTemporalSnapToTimeStep * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTemporalSnapToTimeStepWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTemporalSnapToTimeStepWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTemporalSnapToTimeStepWrap *w = new VtkTemporalSnapToTimeStepWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTemporalSnapToTimeStepWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalSnapToTimeStepWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalSnapToTimeStepWrap>(info.Holder());
	vtkTemporalSnapToTimeStep *native = (vtkTemporalSnapToTimeStep *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTemporalSnapToTimeStep * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTemporalSnapToTimeStepWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTemporalSnapToTimeStepWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTemporalSnapToTimeStepWrap *w = new VtkTemporalSnapToTimeStepWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalSnapToTimeStepWrap::SetSnapMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalSnapToTimeStepWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalSnapToTimeStepWrap>(info.Holder());
	vtkTemporalSnapToTimeStep *native = (vtkTemporalSnapToTimeStep *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSnapMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalSnapToTimeStepWrap::SetSnapModeToNearest(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalSnapToTimeStepWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalSnapToTimeStepWrap>(info.Holder());
	vtkTemporalSnapToTimeStep *native = (vtkTemporalSnapToTimeStep *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSnapModeToNearest();
}

void VtkTemporalSnapToTimeStepWrap::SetSnapModeToNextAboveOrEqual(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalSnapToTimeStepWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalSnapToTimeStepWrap>(info.Holder());
	vtkTemporalSnapToTimeStep *native = (vtkTemporalSnapToTimeStep *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSnapModeToNextAboveOrEqual();
}

void VtkTemporalSnapToTimeStepWrap::SetSnapModeToNextBelowOrEqual(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalSnapToTimeStepWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalSnapToTimeStepWrap>(info.Holder());
	vtkTemporalSnapToTimeStep *native = (vtkTemporalSnapToTimeStep *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSnapModeToNextBelowOrEqual();
}
