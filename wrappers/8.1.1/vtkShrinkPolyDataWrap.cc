/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkShrinkPolyDataWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkShrinkPolyDataWrap::ptpl;

VtkShrinkPolyDataWrap::VtkShrinkPolyDataWrap()
{ }

VtkShrinkPolyDataWrap::VtkShrinkPolyDataWrap(vtkSmartPointer<vtkShrinkPolyData> _native)
{ native = _native; }

VtkShrinkPolyDataWrap::~VtkShrinkPolyDataWrap()
{ }

void VtkShrinkPolyDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkShrinkPolyData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ShrinkPolyData").ToLocalChecked(), ConstructorGetter);
}

void VtkShrinkPolyDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkShrinkPolyDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkShrinkPolyDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetShrinkFactor", GetShrinkFactor);
	Nan::SetPrototypeMethod(tpl, "getShrinkFactor", GetShrinkFactor);

	Nan::SetPrototypeMethod(tpl, "GetShrinkFactorMaxValue", GetShrinkFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getShrinkFactorMaxValue", GetShrinkFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetShrinkFactorMinValue", GetShrinkFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getShrinkFactorMinValue", GetShrinkFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetShrinkFactor", SetShrinkFactor);
	Nan::SetPrototypeMethod(tpl, "setShrinkFactor", SetShrinkFactor);

#ifdef VTK_NODE_PLUS_VTKSHRINKPOLYDATAWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSHRINKPOLYDATAWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkShrinkPolyDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkShrinkPolyData> native = vtkSmartPointer<vtkShrinkPolyData>::New();
		VtkShrinkPolyDataWrap* obj = new VtkShrinkPolyDataWrap(native);
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

void VtkShrinkPolyDataWrap::GetShrinkFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkPolyDataWrap>(info.Holder());
	vtkShrinkPolyData *native = (vtkShrinkPolyData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShrinkFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkShrinkPolyDataWrap::GetShrinkFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkPolyDataWrap>(info.Holder());
	vtkShrinkPolyData *native = (vtkShrinkPolyData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShrinkFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkShrinkPolyDataWrap::GetShrinkFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkPolyDataWrap>(info.Holder());
	vtkShrinkPolyData *native = (vtkShrinkPolyData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShrinkFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkShrinkPolyDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkPolyDataWrap>(info.Holder());
	vtkShrinkPolyData *native = (vtkShrinkPolyData *)wrapper->native.GetPointer();
	vtkShrinkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkShrinkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkShrinkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkShrinkPolyDataWrap *w = new VtkShrinkPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkShrinkPolyDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkPolyDataWrap>(info.Holder());
	vtkShrinkPolyData *native = (vtkShrinkPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkShrinkPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkShrinkPolyDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkShrinkPolyDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkShrinkPolyDataWrap *w = new VtkShrinkPolyDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkShrinkPolyDataWrap::SetShrinkFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkShrinkPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkShrinkPolyDataWrap>(info.Holder());
	vtkShrinkPolyData *native = (vtkShrinkPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShrinkFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

