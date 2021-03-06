/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkGenericDataSetTessellatorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGenericDataSetTessellatorWrap::ptpl;

VtkGenericDataSetTessellatorWrap::VtkGenericDataSetTessellatorWrap()
{ }

VtkGenericDataSetTessellatorWrap::VtkGenericDataSetTessellatorWrap(vtkSmartPointer<vtkGenericDataSetTessellator> _native)
{ native = _native; }

VtkGenericDataSetTessellatorWrap::~VtkGenericDataSetTessellatorWrap()
{ }

void VtkGenericDataSetTessellatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGenericDataSetTessellator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GenericDataSetTessellator").ToLocalChecked(), ConstructorGetter);
}

void VtkGenericDataSetTessellatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGenericDataSetTessellatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGenericDataSetTessellatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultLocator", CreateDefaultLocator);
	Nan::SetPrototypeMethod(tpl, "createDefaultLocator", CreateDefaultLocator);

	Nan::SetPrototypeMethod(tpl, "GetKeepCellIds", GetKeepCellIds);
	Nan::SetPrototypeMethod(tpl, "getKeepCellIds", GetKeepCellIds);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetMerging", GetMerging);
	Nan::SetPrototypeMethod(tpl, "getMerging", GetMerging);

	Nan::SetPrototypeMethod(tpl, "KeepCellIdsOff", KeepCellIdsOff);
	Nan::SetPrototypeMethod(tpl, "keepCellIdsOff", KeepCellIdsOff);

	Nan::SetPrototypeMethod(tpl, "KeepCellIdsOn", KeepCellIdsOn);
	Nan::SetPrototypeMethod(tpl, "keepCellIdsOn", KeepCellIdsOn);

	Nan::SetPrototypeMethod(tpl, "MergingOff", MergingOff);
	Nan::SetPrototypeMethod(tpl, "mergingOff", MergingOff);

	Nan::SetPrototypeMethod(tpl, "MergingOn", MergingOn);
	Nan::SetPrototypeMethod(tpl, "mergingOn", MergingOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetKeepCellIds", SetKeepCellIds);
	Nan::SetPrototypeMethod(tpl, "setKeepCellIds", SetKeepCellIds);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetMerging", SetMerging);
	Nan::SetPrototypeMethod(tpl, "setMerging", SetMerging);

#ifdef VTK_NODE_PLUS_VTKGENERICDATASETTESSELLATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGENERICDATASETTESSELLATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGenericDataSetTessellatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGenericDataSetTessellator> native = vtkSmartPointer<vtkGenericDataSetTessellator>::New();
		VtkGenericDataSetTessellatorWrap* obj = new VtkGenericDataSetTessellatorWrap(native);
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

void VtkGenericDataSetTessellatorWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetTessellatorWrap>(info.Holder());
	vtkGenericDataSetTessellator *native = (vtkGenericDataSetTessellator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkGenericDataSetTessellatorWrap::GetKeepCellIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetTessellatorWrap>(info.Holder());
	vtkGenericDataSetTessellator *native = (vtkGenericDataSetTessellator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetKeepCellIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericDataSetTessellatorWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetTessellatorWrap>(info.Holder());
	vtkGenericDataSetTessellator *native = (vtkGenericDataSetTessellator *)wrapper->native.GetPointer();
	vtkIncrementalPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocator();
	VtkIncrementalPointLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIncrementalPointLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalPointLocatorWrap *w = new VtkIncrementalPointLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataSetTessellatorWrap::GetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetTessellatorWrap>(info.Holder());
	vtkGenericDataSetTessellator *native = (vtkGenericDataSetTessellator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMerging();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericDataSetTessellatorWrap::KeepCellIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetTessellatorWrap>(info.Holder());
	vtkGenericDataSetTessellator *native = (vtkGenericDataSetTessellator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->KeepCellIdsOff();
}

void VtkGenericDataSetTessellatorWrap::KeepCellIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetTessellatorWrap>(info.Holder());
	vtkGenericDataSetTessellator *native = (vtkGenericDataSetTessellator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->KeepCellIdsOn();
}

void VtkGenericDataSetTessellatorWrap::MergingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetTessellatorWrap>(info.Holder());
	vtkGenericDataSetTessellator *native = (vtkGenericDataSetTessellator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergingOff();
}

void VtkGenericDataSetTessellatorWrap::MergingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetTessellatorWrap>(info.Holder());
	vtkGenericDataSetTessellator *native = (vtkGenericDataSetTessellator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergingOn();
}

void VtkGenericDataSetTessellatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetTessellatorWrap>(info.Holder());
	vtkGenericDataSetTessellator *native = (vtkGenericDataSetTessellator *)wrapper->native.GetPointer();
	vtkGenericDataSetTessellator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGenericDataSetTessellatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericDataSetTessellatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericDataSetTessellatorWrap *w = new VtkGenericDataSetTessellatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataSetTessellatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetTessellatorWrap>(info.Holder());
	vtkGenericDataSetTessellator *native = (vtkGenericDataSetTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkGenericDataSetTessellator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkGenericDataSetTessellatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericDataSetTessellatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericDataSetTessellatorWrap *w = new VtkGenericDataSetTessellatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericDataSetTessellatorWrap::SetKeepCellIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetTessellatorWrap>(info.Holder());
	vtkGenericDataSetTessellator *native = (vtkGenericDataSetTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetKeepCellIds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericDataSetTessellatorWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetTessellatorWrap>(info.Holder());
	vtkGenericDataSetTessellator *native = (vtkGenericDataSetTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIncrementalPointLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIncrementalPointLocatorWrap *a0 = ObjectWrap::Unwrap<VtkIncrementalPointLocatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocator(
			(vtkIncrementalPointLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericDataSetTessellatorWrap::SetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetTessellatorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetTessellatorWrap>(info.Holder());
	vtkGenericDataSetTessellator *native = (vtkGenericDataSetTessellator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMerging(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

