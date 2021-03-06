/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGraphAlgorithmWrap.h"
#include "vtkThresholdGraphWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkThresholdGraphWrap::ptpl;

VtkThresholdGraphWrap::VtkThresholdGraphWrap()
{ }

VtkThresholdGraphWrap::VtkThresholdGraphWrap(vtkSmartPointer<vtkThresholdGraph> _native)
{ native = _native; }

VtkThresholdGraphWrap::~VtkThresholdGraphWrap()
{ }

void VtkThresholdGraphWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkThresholdGraph").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ThresholdGraph").ToLocalChecked(), ConstructorGetter);
}

void VtkThresholdGraphWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkThresholdGraphWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkThresholdGraphWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetLowerThreshold", GetLowerThreshold);
	Nan::SetPrototypeMethod(tpl, "getLowerThreshold", GetLowerThreshold);

	Nan::SetPrototypeMethod(tpl, "GetUpperThreshold", GetUpperThreshold);
	Nan::SetPrototypeMethod(tpl, "getUpperThreshold", GetUpperThreshold);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLowerThreshold", SetLowerThreshold);
	Nan::SetPrototypeMethod(tpl, "setLowerThreshold", SetLowerThreshold);

	Nan::SetPrototypeMethod(tpl, "SetUpperThreshold", SetUpperThreshold);
	Nan::SetPrototypeMethod(tpl, "setUpperThreshold", SetUpperThreshold);

#ifdef VTK_NODE_PLUS_VTKTHRESHOLDGRAPHWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTHRESHOLDGRAPHWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkThresholdGraphWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkThresholdGraph> native = vtkSmartPointer<vtkThresholdGraph>::New();
		VtkThresholdGraphWrap* obj = new VtkThresholdGraphWrap(native);
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

void VtkThresholdGraphWrap::GetLowerThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdGraphWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdGraphWrap>(info.Holder());
	vtkThresholdGraph *native = (vtkThresholdGraph *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLowerThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdGraphWrap::GetUpperThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdGraphWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdGraphWrap>(info.Holder());
	vtkThresholdGraph *native = (vtkThresholdGraph *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUpperThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdGraphWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdGraphWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdGraphWrap>(info.Holder());
	vtkThresholdGraph *native = (vtkThresholdGraph *)wrapper->native.GetPointer();
	vtkThresholdGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkThresholdGraphWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkThresholdGraphWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkThresholdGraphWrap *w = new VtkThresholdGraphWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkThresholdGraphWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdGraphWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdGraphWrap>(info.Holder());
	vtkThresholdGraph *native = (vtkThresholdGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkThresholdGraph * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkThresholdGraphWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkThresholdGraphWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkThresholdGraphWrap *w = new VtkThresholdGraphWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdGraphWrap::SetLowerThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdGraphWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdGraphWrap>(info.Holder());
	vtkThresholdGraph *native = (vtkThresholdGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLowerThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdGraphWrap::SetUpperThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdGraphWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdGraphWrap>(info.Holder());
	vtkThresholdGraph *native = (vtkThresholdGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUpperThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

