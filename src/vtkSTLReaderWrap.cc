/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkSTLReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSTLReaderWrap::ptpl;

VtkSTLReaderWrap::VtkSTLReaderWrap()
{ }

VtkSTLReaderWrap::VtkSTLReaderWrap(vtkSmartPointer<vtkSTLReader> _native)
{ native = _native; }

VtkSTLReaderWrap::~VtkSTLReaderWrap()
{ }

void VtkSTLReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSTLReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("STLReader").ToLocalChecked(), ConstructorGetter);
}

void VtkSTLReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSTLReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSTLReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetMerging", GetMerging);
	Nan::SetPrototypeMethod(tpl, "getMerging", GetMerging);

	Nan::SetPrototypeMethod(tpl, "GetScalarTags", GetScalarTags);
	Nan::SetPrototypeMethod(tpl, "getScalarTags", GetScalarTags);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MergingOff", MergingOff);
	Nan::SetPrototypeMethod(tpl, "mergingOff", MergingOff);

	Nan::SetPrototypeMethod(tpl, "MergingOn", MergingOn);
	Nan::SetPrototypeMethod(tpl, "mergingOn", MergingOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScalarTagsOff", ScalarTagsOff);
	Nan::SetPrototypeMethod(tpl, "scalarTagsOff", ScalarTagsOff);

	Nan::SetPrototypeMethod(tpl, "ScalarTagsOn", ScalarTagsOn);
	Nan::SetPrototypeMethod(tpl, "scalarTagsOn", ScalarTagsOn);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetMerging", SetMerging);
	Nan::SetPrototypeMethod(tpl, "setMerging", SetMerging);

	Nan::SetPrototypeMethod(tpl, "SetScalarTags", SetScalarTags);
	Nan::SetPrototypeMethod(tpl, "setScalarTags", SetScalarTags);

	ptpl.Reset( tpl );
}

void VtkSTLReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSTLReader> native = vtkSmartPointer<vtkSTLReader>::New();
		VtkSTLReaderWrap* obj = new VtkSTLReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSTLReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSTLReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSTLReaderWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
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
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSTLReaderWrap::GetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMerging();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSTLReaderWrap::GetScalarTags(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarTags();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSTLReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
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

void VtkSTLReaderWrap::MergingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergingOff();
}

void VtkSTLReaderWrap::MergingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergingOn();
}

void VtkSTLReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
	vtkSTLReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSTLReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSTLReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSTLReaderWrap *w = new VtkSTLReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSTLReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSTLReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSTLReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSTLReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSTLReaderWrap *w = new VtkSTLReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSTLReaderWrap::ScalarTagsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarTagsOff();
}

void VtkSTLReaderWrap::ScalarTagsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarTagsOn();
}

void VtkSTLReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSTLReaderWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
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

void VtkSTLReaderWrap::SetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
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

void VtkSTLReaderWrap::SetScalarTags(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSTLReaderWrap>(info.Holder());
	vtkSTLReader *native = (vtkSTLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarTags(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

