/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkInteractorStyleWrap.h"
#include "vtkInteractorStyleSwitchBaseWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkRenderWindowInteractorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleSwitchBaseWrap::ptpl;

VtkInteractorStyleSwitchBaseWrap::VtkInteractorStyleSwitchBaseWrap()
{ }

VtkInteractorStyleSwitchBaseWrap::VtkInteractorStyleSwitchBaseWrap(vtkSmartPointer<vtkInteractorStyleSwitchBase> _native)
{ native = _native; }

VtkInteractorStyleSwitchBaseWrap::~VtkInteractorStyleSwitchBaseWrap()
{ }

void VtkInteractorStyleSwitchBaseWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleSwitchBase").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleSwitchBase").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleSwitchBaseWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleSwitchBaseWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleSwitchBaseWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetInteractor", GetInteractor);
	Nan::SetPrototypeMethod(tpl, "getInteractor", GetInteractor);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKINTERACTORSTYLESWITCHBASEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINTERACTORSTYLESWITCHBASEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkInteractorStyleSwitchBaseWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleSwitchBase> native = vtkSmartPointer<vtkInteractorStyleSwitchBase>::New();
		VtkInteractorStyleSwitchBaseWrap* obj = new VtkInteractorStyleSwitchBaseWrap(native);
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

void VtkInteractorStyleSwitchBaseWrap::GetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchBaseWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchBaseWrap>(info.Holder());
	vtkInteractorStyleSwitchBase *native = (vtkInteractorStyleSwitchBase *)wrapper->native.GetPointer();
	vtkRenderWindowInteractor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractor();
	VtkRenderWindowInteractorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderWindowInteractorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderWindowInteractorWrap *w = new VtkRenderWindowInteractorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleSwitchBaseWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchBaseWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchBaseWrap>(info.Holder());
	vtkInteractorStyleSwitchBase *native = (vtkInteractorStyleSwitchBase *)wrapper->native.GetPointer();
	vtkInteractorStyleSwitchBase * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInteractorStyleSwitchBaseWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorStyleSwitchBaseWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleSwitchBaseWrap *w = new VtkInteractorStyleSwitchBaseWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleSwitchBaseWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchBaseWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchBaseWrap>(info.Holder());
	vtkInteractorStyleSwitchBase *native = (vtkInteractorStyleSwitchBase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkInteractorStyleSwitchBase * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkInteractorStyleSwitchBaseWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInteractorStyleSwitchBaseWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleSwitchBaseWrap *w = new VtkInteractorStyleSwitchBaseWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

