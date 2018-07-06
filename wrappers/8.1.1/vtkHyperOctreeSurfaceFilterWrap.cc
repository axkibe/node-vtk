/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkHyperOctreeSurfaceFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperOctreeSurfaceFilterWrap::ptpl;

VtkHyperOctreeSurfaceFilterWrap::VtkHyperOctreeSurfaceFilterWrap()
{ }

VtkHyperOctreeSurfaceFilterWrap::VtkHyperOctreeSurfaceFilterWrap(vtkSmartPointer<vtkHyperOctreeSurfaceFilter> _native)
{ native = _native; }

VtkHyperOctreeSurfaceFilterWrap::~VtkHyperOctreeSurfaceFilterWrap()
{ }

void VtkHyperOctreeSurfaceFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperOctreeSurfaceFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperOctreeSurfaceFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperOctreeSurfaceFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperOctreeSurfaceFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperOctreeSurfaceFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetMerging", GetMerging);
	Nan::SetPrototypeMethod(tpl, "getMerging", GetMerging);

	Nan::SetPrototypeMethod(tpl, "GetPassThroughCellIds", GetPassThroughCellIds);
	Nan::SetPrototypeMethod(tpl, "getPassThroughCellIds", GetPassThroughCellIds);

	Nan::SetPrototypeMethod(tpl, "MergingOff", MergingOff);
	Nan::SetPrototypeMethod(tpl, "mergingOff", MergingOff);

	Nan::SetPrototypeMethod(tpl, "MergingOn", MergingOn);
	Nan::SetPrototypeMethod(tpl, "mergingOn", MergingOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassThroughCellIdsOff", PassThroughCellIdsOff);
	Nan::SetPrototypeMethod(tpl, "passThroughCellIdsOff", PassThroughCellIdsOff);

	Nan::SetPrototypeMethod(tpl, "PassThroughCellIdsOn", PassThroughCellIdsOn);
	Nan::SetPrototypeMethod(tpl, "passThroughCellIdsOn", PassThroughCellIdsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetMerging", SetMerging);
	Nan::SetPrototypeMethod(tpl, "setMerging", SetMerging);

	Nan::SetPrototypeMethod(tpl, "SetPassThroughCellIds", SetPassThroughCellIds);
	Nan::SetPrototypeMethod(tpl, "setPassThroughCellIds", SetPassThroughCellIds);

#ifdef VTK_NODE_PLUS_VTKHYPEROCTREESURFACEFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHYPEROCTREESURFACEFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHyperOctreeSurfaceFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperOctreeSurfaceFilter> native = vtkSmartPointer<vtkHyperOctreeSurfaceFilter>::New();
		VtkHyperOctreeSurfaceFilterWrap* obj = new VtkHyperOctreeSurfaceFilterWrap(native);
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

void VtkHyperOctreeSurfaceFilterWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
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

void VtkHyperOctreeSurfaceFilterWrap::GetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMerging();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeSurfaceFilterWrap::GetPassThroughCellIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassThroughCellIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeSurfaceFilterWrap::MergingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergingOff();
}

void VtkHyperOctreeSurfaceFilterWrap::MergingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergingOn();
}

void VtkHyperOctreeSurfaceFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
	vtkHyperOctreeSurfaceFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHyperOctreeSurfaceFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperOctreeSurfaceFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeSurfaceFilterWrap *w = new VtkHyperOctreeSurfaceFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeSurfaceFilterWrap::PassThroughCellIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughCellIdsOff();
}

void VtkHyperOctreeSurfaceFilterWrap::PassThroughCellIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughCellIdsOn();
}

void VtkHyperOctreeSurfaceFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkHyperOctreeSurfaceFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkHyperOctreeSurfaceFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperOctreeSurfaceFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperOctreeSurfaceFilterWrap *w = new VtkHyperOctreeSurfaceFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeSurfaceFilterWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
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

void VtkHyperOctreeSurfaceFilterWrap::SetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
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

void VtkHyperOctreeSurfaceFilterWrap::SetPassThroughCellIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassThroughCellIds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

