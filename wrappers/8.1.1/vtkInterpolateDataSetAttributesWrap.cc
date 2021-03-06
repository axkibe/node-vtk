/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "vtkInterpolateDataSetAttributesWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkDataSetCollectionWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInterpolateDataSetAttributesWrap::ptpl;

VtkInterpolateDataSetAttributesWrap::VtkInterpolateDataSetAttributesWrap()
{ }

VtkInterpolateDataSetAttributesWrap::VtkInterpolateDataSetAttributesWrap(vtkSmartPointer<vtkInterpolateDataSetAttributes> _native)
{ native = _native; }

VtkInterpolateDataSetAttributesWrap::~VtkInterpolateDataSetAttributesWrap()
{ }

void VtkInterpolateDataSetAttributesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInterpolateDataSetAttributes").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InterpolateDataSetAttributes").ToLocalChecked(), ConstructorGetter);
}

void VtkInterpolateDataSetAttributesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInterpolateDataSetAttributesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInterpolateDataSetAttributesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetInputList", GetInputList);
	Nan::SetPrototypeMethod(tpl, "getInputList", GetInputList);

	Nan::SetPrototypeMethod(tpl, "GetT", GetT);
	Nan::SetPrototypeMethod(tpl, "getT", GetT);

	Nan::SetPrototypeMethod(tpl, "GetTMaxValue", GetTMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTMaxValue", GetTMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTMinValue", GetTMinValue);
	Nan::SetPrototypeMethod(tpl, "getTMinValue", GetTMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetT", SetT);
	Nan::SetPrototypeMethod(tpl, "setT", SetT);

#ifdef VTK_NODE_PLUS_VTKINTERPOLATEDATASETATTRIBUTESWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINTERPOLATEDATASETATTRIBUTESWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkInterpolateDataSetAttributesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInterpolateDataSetAttributes> native = vtkSmartPointer<vtkInterpolateDataSetAttributes>::New();
		VtkInterpolateDataSetAttributesWrap* obj = new VtkInterpolateDataSetAttributesWrap(native);
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

void VtkInterpolateDataSetAttributesWrap::GetInputList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolateDataSetAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolateDataSetAttributesWrap>(info.Holder());
	vtkInterpolateDataSetAttributes *native = (vtkInterpolateDataSetAttributes *)wrapper->native.GetPointer();
	vtkDataSetCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputList();
	VtkDataSetCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetCollectionWrap *w = new VtkDataSetCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInterpolateDataSetAttributesWrap::GetT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolateDataSetAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolateDataSetAttributesWrap>(info.Holder());
	vtkInterpolateDataSetAttributes *native = (vtkInterpolateDataSetAttributes *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetT();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInterpolateDataSetAttributesWrap::GetTMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolateDataSetAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolateDataSetAttributesWrap>(info.Holder());
	vtkInterpolateDataSetAttributes *native = (vtkInterpolateDataSetAttributes *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInterpolateDataSetAttributesWrap::GetTMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolateDataSetAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolateDataSetAttributesWrap>(info.Holder());
	vtkInterpolateDataSetAttributes *native = (vtkInterpolateDataSetAttributes *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInterpolateDataSetAttributesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolateDataSetAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolateDataSetAttributesWrap>(info.Holder());
	vtkInterpolateDataSetAttributes *native = (vtkInterpolateDataSetAttributes *)wrapper->native.GetPointer();
	vtkInterpolateDataSetAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInterpolateDataSetAttributesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInterpolateDataSetAttributesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInterpolateDataSetAttributesWrap *w = new VtkInterpolateDataSetAttributesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInterpolateDataSetAttributesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolateDataSetAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolateDataSetAttributesWrap>(info.Holder());
	vtkInterpolateDataSetAttributes *native = (vtkInterpolateDataSetAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkInterpolateDataSetAttributes * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkInterpolateDataSetAttributesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInterpolateDataSetAttributesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInterpolateDataSetAttributesWrap *w = new VtkInterpolateDataSetAttributesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInterpolateDataSetAttributesWrap::SetT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolateDataSetAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolateDataSetAttributesWrap>(info.Holder());
	vtkInterpolateDataSetAttributes *native = (vtkInterpolateDataSetAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetT(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

