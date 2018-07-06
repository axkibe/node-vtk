/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPiecewiseFunctionAlgorithmWrap.h"
#include "vtkPiecewiseFunctionShiftScaleWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPiecewiseFunctionShiftScaleWrap::ptpl;

VtkPiecewiseFunctionShiftScaleWrap::VtkPiecewiseFunctionShiftScaleWrap()
{ }

VtkPiecewiseFunctionShiftScaleWrap::VtkPiecewiseFunctionShiftScaleWrap(vtkSmartPointer<vtkPiecewiseFunctionShiftScale> _native)
{ native = _native; }

VtkPiecewiseFunctionShiftScaleWrap::~VtkPiecewiseFunctionShiftScaleWrap()
{ }

void VtkPiecewiseFunctionShiftScaleWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPiecewiseFunctionShiftScale").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PiecewiseFunctionShiftScale").ToLocalChecked(), ConstructorGetter);
}

void VtkPiecewiseFunctionShiftScaleWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPiecewiseFunctionShiftScaleWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPiecewiseFunctionAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPiecewiseFunctionAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPiecewiseFunctionShiftScaleWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetPositionScale", GetPositionScale);
	Nan::SetPrototypeMethod(tpl, "getPositionScale", GetPositionScale);

	Nan::SetPrototypeMethod(tpl, "GetPositionShift", GetPositionShift);
	Nan::SetPrototypeMethod(tpl, "getPositionShift", GetPositionShift);

	Nan::SetPrototypeMethod(tpl, "GetValueScale", GetValueScale);
	Nan::SetPrototypeMethod(tpl, "getValueScale", GetValueScale);

	Nan::SetPrototypeMethod(tpl, "GetValueShift", GetValueShift);
	Nan::SetPrototypeMethod(tpl, "getValueShift", GetValueShift);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPositionScale", SetPositionScale);
	Nan::SetPrototypeMethod(tpl, "setPositionScale", SetPositionScale);

	Nan::SetPrototypeMethod(tpl, "SetPositionShift", SetPositionShift);
	Nan::SetPrototypeMethod(tpl, "setPositionShift", SetPositionShift);

	Nan::SetPrototypeMethod(tpl, "SetValueScale", SetValueScale);
	Nan::SetPrototypeMethod(tpl, "setValueScale", SetValueScale);

	Nan::SetPrototypeMethod(tpl, "SetValueShift", SetValueShift);
	Nan::SetPrototypeMethod(tpl, "setValueShift", SetValueShift);

#ifdef VTK_NODE_PLUS_VTKPIECEWISEFUNCTIONSHIFTSCALEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPIECEWISEFUNCTIONSHIFTSCALEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPiecewiseFunctionShiftScaleWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPiecewiseFunctionShiftScale> native = vtkSmartPointer<vtkPiecewiseFunctionShiftScale>::New();
		VtkPiecewiseFunctionShiftScaleWrap* obj = new VtkPiecewiseFunctionShiftScaleWrap(native);
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

void VtkPiecewiseFunctionShiftScaleWrap::GetPositionScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionShiftScaleWrap>(info.Holder());
	vtkPiecewiseFunctionShiftScale *native = (vtkPiecewiseFunctionShiftScale *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPositionScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPiecewiseFunctionShiftScaleWrap::GetPositionShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionShiftScaleWrap>(info.Holder());
	vtkPiecewiseFunctionShiftScale *native = (vtkPiecewiseFunctionShiftScale *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPositionShift();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPiecewiseFunctionShiftScaleWrap::GetValueScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionShiftScaleWrap>(info.Holder());
	vtkPiecewiseFunctionShiftScale *native = (vtkPiecewiseFunctionShiftScale *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValueScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPiecewiseFunctionShiftScaleWrap::GetValueShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionShiftScaleWrap>(info.Holder());
	vtkPiecewiseFunctionShiftScale *native = (vtkPiecewiseFunctionShiftScale *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValueShift();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPiecewiseFunctionShiftScaleWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionShiftScaleWrap>(info.Holder());
	vtkPiecewiseFunctionShiftScale *native = (vtkPiecewiseFunctionShiftScale *)wrapper->native.GetPointer();
	vtkPiecewiseFunctionShiftScale * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPiecewiseFunctionShiftScaleWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPiecewiseFunctionShiftScaleWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPiecewiseFunctionShiftScaleWrap *w = new VtkPiecewiseFunctionShiftScaleWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPiecewiseFunctionShiftScaleWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionShiftScaleWrap>(info.Holder());
	vtkPiecewiseFunctionShiftScale *native = (vtkPiecewiseFunctionShiftScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPiecewiseFunctionShiftScale * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPiecewiseFunctionShiftScaleWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPiecewiseFunctionShiftScaleWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPiecewiseFunctionShiftScaleWrap *w = new VtkPiecewiseFunctionShiftScaleWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPiecewiseFunctionShiftScaleWrap::SetPositionScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionShiftScaleWrap>(info.Holder());
	vtkPiecewiseFunctionShiftScale *native = (vtkPiecewiseFunctionShiftScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPositionScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPiecewiseFunctionShiftScaleWrap::SetPositionShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionShiftScaleWrap>(info.Holder());
	vtkPiecewiseFunctionShiftScale *native = (vtkPiecewiseFunctionShiftScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPositionShift(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPiecewiseFunctionShiftScaleWrap::SetValueScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionShiftScaleWrap>(info.Holder());
	vtkPiecewiseFunctionShiftScale *native = (vtkPiecewiseFunctionShiftScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetValueScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPiecewiseFunctionShiftScaleWrap::SetValueShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionShiftScaleWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionShiftScaleWrap>(info.Holder());
	vtkPiecewiseFunctionShiftScale *native = (vtkPiecewiseFunctionShiftScale *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetValueShift(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
