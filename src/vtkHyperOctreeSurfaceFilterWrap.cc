/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkHyperOctreeSurfaceFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkHyperOctreeSurfaceFilterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkHyperOctreeSurfaceFilterWrap::ptpl;

VtkHyperOctreeSurfaceFilterWrap::VtkHyperOctreeSurfaceFilterWrap()
{ }

VtkHyperOctreeSurfaceFilterWrap::VtkHyperOctreeSurfaceFilterWrap(vtkSmartPointer<vtkHyperOctreeSurfaceFilter> _native)
{ native = _native; }

VtkHyperOctreeSurfaceFilterWrap::~VtkHyperOctreeSurfaceFilterWrap()
{ }

void VtkHyperOctreeSurfaceFilterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkHyperOctreeSurfaceFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkHyperOctreeSurfaceFilter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("HyperOctreeSurfaceFilter").ToLocalChecked(),tpl->GetFunction());
}

void VtkHyperOctreeSurfaceFilterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetMerging", GetMerging);
	Nan::SetPrototypeMethod(tpl, "getMerging", GetMerging);

	Nan::SetPrototypeMethod(tpl, "GetPassThroughCellIds", GetPassThroughCellIds);
	Nan::SetPrototypeMethod(tpl, "getPassThroughCellIds", GetPassThroughCellIds);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

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
		VtkHyperOctreeSurfaceFilterWrap* obj = new VtkHyperOctreeSurfaceFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHyperOctreeSurfaceFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkIncrementalPointLocatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalPointLocatorWrap *w = new VtkIncrementalPointLocatorWrap();
	w->native.TakeReference(r);
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

void VtkHyperOctreeSurfaceFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSurfaceFilterWrap>(info.Holder());
	vtkHyperOctreeSurfaceFilter *native = (vtkHyperOctreeSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHyperOctreeSurfaceFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeSurfaceFilterWrap *w = new VtkHyperOctreeSurfaceFilterWrap();
	w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHyperOctreeSurfaceFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkHyperOctreeSurfaceFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperOctreeSurfaceFilterWrap *w = new VtkHyperOctreeSurfaceFilterWrap();
		w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsObject())
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
