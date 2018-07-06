/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataObjectAlgorithmWrap.h"
#include "vtkExtractSelectionBaseWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractSelectionBaseWrap::ptpl;

VtkExtractSelectionBaseWrap::VtkExtractSelectionBaseWrap()
{ }

VtkExtractSelectionBaseWrap::VtkExtractSelectionBaseWrap(vtkSmartPointer<vtkExtractSelectionBase> _native)
{ native = _native; }

VtkExtractSelectionBaseWrap::~VtkExtractSelectionBaseWrap()
{ }

void VtkExtractSelectionBaseWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractSelectionBase").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractSelectionBase").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractSelectionBaseWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractSelectionBaseWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractSelectionBaseWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetPreserveTopology", GetPreserveTopology);
	Nan::SetPrototypeMethod(tpl, "getPreserveTopology", GetPreserveTopology);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PreserveTopologyOff", PreserveTopologyOff);
	Nan::SetPrototypeMethod(tpl, "preserveTopologyOff", PreserveTopologyOff);

	Nan::SetPrototypeMethod(tpl, "PreserveTopologyOn", PreserveTopologyOn);
	Nan::SetPrototypeMethod(tpl, "preserveTopologyOn", PreserveTopologyOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPreserveTopology", SetPreserveTopology);
	Nan::SetPrototypeMethod(tpl, "setPreserveTopology", SetPreserveTopology);

	Nan::SetPrototypeMethod(tpl, "SetSelectionConnection", SetSelectionConnection);
	Nan::SetPrototypeMethod(tpl, "setSelectionConnection", SetSelectionConnection);

#ifdef VTK_NODE_PLUS_VTKEXTRACTSELECTIONBASEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKEXTRACTSELECTIONBASEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkExtractSelectionBaseWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkExtractSelectionBaseWrap::GetPreserveTopology(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionBaseWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionBaseWrap>(info.Holder());
	vtkExtractSelectionBase *native = (vtkExtractSelectionBase *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreserveTopology();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractSelectionBaseWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionBaseWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionBaseWrap>(info.Holder());
	vtkExtractSelectionBase *native = (vtkExtractSelectionBase *)wrapper->native.GetPointer();
	vtkExtractSelectionBase * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkExtractSelectionBaseWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractSelectionBaseWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractSelectionBaseWrap *w = new VtkExtractSelectionBaseWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractSelectionBaseWrap::PreserveTopologyOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionBaseWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionBaseWrap>(info.Holder());
	vtkExtractSelectionBase *native = (vtkExtractSelectionBase *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreserveTopologyOff();
}

void VtkExtractSelectionBaseWrap::PreserveTopologyOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionBaseWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionBaseWrap>(info.Holder());
	vtkExtractSelectionBase *native = (vtkExtractSelectionBase *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreserveTopologyOn();
}

void VtkExtractSelectionBaseWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionBaseWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionBaseWrap>(info.Holder());
	vtkExtractSelectionBase *native = (vtkExtractSelectionBase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkExtractSelectionBase * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkExtractSelectionBaseWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractSelectionBaseWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractSelectionBaseWrap *w = new VtkExtractSelectionBaseWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractSelectionBaseWrap::SetPreserveTopology(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionBaseWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionBaseWrap>(info.Holder());
	vtkExtractSelectionBase *native = (vtkExtractSelectionBase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPreserveTopology(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractSelectionBaseWrap::SetSelectionConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectionBaseWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectionBaseWrap>(info.Holder());
	vtkExtractSelectionBase *native = (vtkExtractSelectionBase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

