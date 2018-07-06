/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkExtractArraysOverTimeWrap.h"
#include "vtkPExtractArraysOverTimeWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkMultiProcessControllerWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPExtractArraysOverTimeWrap::ptpl;

VtkPExtractArraysOverTimeWrap::VtkPExtractArraysOverTimeWrap()
{ }

VtkPExtractArraysOverTimeWrap::VtkPExtractArraysOverTimeWrap(vtkSmartPointer<vtkPExtractArraysOverTime> _native)
{ native = _native; }

VtkPExtractArraysOverTimeWrap::~VtkPExtractArraysOverTimeWrap()
{ }

void VtkPExtractArraysOverTimeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPExtractArraysOverTime").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PExtractArraysOverTime").ToLocalChecked(), ConstructorGetter);
}

void VtkPExtractArraysOverTimeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPExtractArraysOverTimeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkExtractArraysOverTimeWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkExtractArraysOverTimeWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPExtractArraysOverTimeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

#ifdef VTK_NODE_PLUS_VTKPEXTRACTARRAYSOVERTIMEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPEXTRACTARRAYSOVERTIMEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPExtractArraysOverTimeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPExtractArraysOverTime> native = vtkSmartPointer<vtkPExtractArraysOverTime>::New();
		VtkPExtractArraysOverTimeWrap* obj = new VtkPExtractArraysOverTimeWrap(native);
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

void VtkPExtractArraysOverTimeWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkPExtractArraysOverTimeWrap>(info.Holder());
	vtkPExtractArraysOverTime *native = (vtkPExtractArraysOverTime *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
	VtkMultiProcessControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPExtractArraysOverTimeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkPExtractArraysOverTimeWrap>(info.Holder());
	vtkPExtractArraysOverTime *native = (vtkPExtractArraysOverTime *)wrapper->native.GetPointer();
	vtkPExtractArraysOverTime * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPExtractArraysOverTimeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPExtractArraysOverTimeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPExtractArraysOverTimeWrap *w = new VtkPExtractArraysOverTimeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPExtractArraysOverTimeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkPExtractArraysOverTimeWrap>(info.Holder());
	vtkPExtractArraysOverTime *native = (vtkPExtractArraysOverTime *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPExtractArraysOverTime * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPExtractArraysOverTimeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPExtractArraysOverTimeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPExtractArraysOverTimeWrap *w = new VtkPExtractArraysOverTimeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPExtractArraysOverTimeWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPExtractArraysOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkPExtractArraysOverTimeWrap>(info.Holder());
	vtkPExtractArraysOverTime *native = (vtkPExtractArraysOverTime *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMultiProcessControllerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetController(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
