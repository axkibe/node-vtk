/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAlgorithmWrap.h"
#include "vtkTemporalShiftScaleWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTemporalShiftScaleWrap::ptpl;

VtkTemporalShiftScaleWrap::VtkTemporalShiftScaleWrap()
{ }

VtkTemporalShiftScaleWrap::VtkTemporalShiftScaleWrap(vtkSmartPointer<vtkTemporalShiftScale> _native)
{ native = _native; }

VtkTemporalShiftScaleWrap::~VtkTemporalShiftScaleWrap()
{ }

void VtkTemporalShiftScaleWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTemporalShiftScale").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TemporalShiftScale").ToLocalChecked(), ConstructorGetter);
}

void VtkTemporalShiftScaleWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTemporalShiftScaleWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTemporalShiftScaleWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfPeriods", GetMaximumNumberOfPeriods);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfPeriods", GetMaximumNumberOfPeriods);

	Nan::SetPrototypeMethod(tpl, "GetPeriodic", GetPeriodic);
	Nan::SetPrototypeMethod(tpl, "getPeriodic", GetPeriodic);

	Nan::SetPrototypeMethod(tpl, "GetPeriodicEndCorrection", GetPeriodicEndCorrection);
	Nan::SetPrototypeMethod(tpl, "getPeriodicEndCorrection", GetPeriodicEndCorrection);

	Nan::SetPrototypeMethod(tpl, "GetPostShift", GetPostShift);
	Nan::SetPrototypeMethod(tpl, "getPostShift", GetPostShift);

	Nan::SetPrototypeMethod(tpl, "GetPreShift", GetPreShift);
	Nan::SetPrototypeMethod(tpl, "getPreShift", GetPreShift);

	Nan::SetPrototypeMethod(tpl, "GetScale", GetScale);
	Nan::SetPrototypeMethod(tpl, "getScale", GetScale);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PeriodicEndCorrectionOff", PeriodicEndCorrectionOff);
	Nan::SetPrototypeMethod(tpl, "periodicEndCorrectionOff", PeriodicEndCorrectionOff);

	Nan::SetPrototypeMethod(tpl, "PeriodicEndCorrectionOn", PeriodicEndCorrectionOn);
	Nan::SetPrototypeMethod(tpl, "periodicEndCorrectionOn", PeriodicEndCorrectionOn);

	Nan::SetPrototypeMethod(tpl, "PeriodicOff", PeriodicOff);
	Nan::SetPrototypeMethod(tpl, "periodicOff", PeriodicOff);

	Nan::SetPrototypeMethod(tpl, "PeriodicOn", PeriodicOn);
	Nan::SetPrototypeMethod(tpl, "periodicOn", PeriodicOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMaximumNumberOfPeriods", SetMaximumNumberOfPeriods);
	Nan::SetPrototypeMethod(tpl, "setMaximumNumberOfPeriods", SetMaximumNumberOfPeriods);

	Nan::SetPrototypeMethod(tpl, "SetPeriodic", SetPeriodic);
	Nan::SetPrototypeMethod(tpl, "setPeriodic", SetPeriodic);

	Nan::SetPrototypeMethod(tpl, "SetPeriodicEndCorrection", SetPeriodicEndCorrection);
	Nan::SetPrototypeMethod(tpl, "setPeriodicEndCorrection", SetPeriodicEndCorrection);

	Nan::SetPrototypeMethod(tpl, "SetPostShift", SetPostShift);
	Nan::SetPrototypeMethod(tpl, "setPostShift", SetPostShift);

	Nan::SetPrototypeMethod(tpl, "SetPreShift", SetPreShift);
	Nan::SetPrototypeMethod(tpl, "setPreShift", SetPreShift);

	Nan::SetPrototypeMethod(tpl, "SetScale", SetScale);
	Nan::SetPrototypeMethod(tpl, "setScale", SetScale);

#ifdef VTK_NODE_PLUS_VTKTEMPORALSHIFTSCALEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTEMPORALSHIFTSCALEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTemporalShiftScaleWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTemporalShiftScale> native = vtkSmartPointer<vtkTemporalShiftScale>::New();
		VtkTemporalShiftScaleWrap* obj = new VtkTemporalShiftScaleWrap(native);
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

void VtkTemporalShiftScaleWrap::GetMaximumNumberOfPeriods(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfPeriods();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalShiftScaleWrap::GetPeriodic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPeriodic();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalShiftScaleWrap::GetPeriodicEndCorrection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPeriodicEndCorrection();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalShiftScaleWrap::GetPostShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPostShift();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalShiftScaleWrap::GetPreShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreShift();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalShiftScaleWrap::GetScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalShiftScaleWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	vtkTemporalShiftScale * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTemporalShiftScaleWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTemporalShiftScaleWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTemporalShiftScaleWrap *w = new VtkTemporalShiftScaleWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTemporalShiftScaleWrap::PeriodicEndCorrectionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PeriodicEndCorrectionOff();
}

void VtkTemporalShiftScaleWrap::PeriodicEndCorrectionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PeriodicEndCorrectionOn();
}

void VtkTemporalShiftScaleWrap::PeriodicOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PeriodicOff();
}

void VtkTemporalShiftScaleWrap::PeriodicOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PeriodicOn();
}

void VtkTemporalShiftScaleWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkTemporalShiftScale * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkTemporalShiftScaleWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTemporalShiftScaleWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTemporalShiftScaleWrap *w = new VtkTemporalShiftScaleWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalShiftScaleWrap::SetMaximumNumberOfPeriods(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumNumberOfPeriods(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalShiftScaleWrap::SetPeriodic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPeriodic(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalShiftScaleWrap::SetPeriodicEndCorrection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPeriodicEndCorrection(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalShiftScaleWrap::SetPostShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPostShift(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalShiftScaleWrap::SetPreShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPreShift(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalShiftScaleWrap::SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalShiftScaleWrap>(info.Holder());
	vtkTemporalShiftScale *native = (vtkTemporalShiftScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

