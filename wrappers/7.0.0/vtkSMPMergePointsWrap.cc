/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkMergePointsWrap.h"
#include "vtkSMPMergePointsWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSMPMergePointsWrap::ptpl;

VtkSMPMergePointsWrap::VtkSMPMergePointsWrap()
{ }

VtkSMPMergePointsWrap::VtkSMPMergePointsWrap(vtkSmartPointer<vtkSMPMergePoints> _native)
{ native = _native; }

VtkSMPMergePointsWrap::~VtkSMPMergePointsWrap()
{ }

void VtkSMPMergePointsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSMPMergePoints").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SMPMergePoints").ToLocalChecked(), ConstructorGetter);
}

void VtkSMPMergePointsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSMPMergePointsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMergePointsWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMergePointsWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSMPMergePointsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FixSizeOfPointArray", FixSizeOfPointArray);
	Nan::SetPrototypeMethod(tpl, "fixSizeOfPointArray", FixSizeOfPointArray);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "InitializeMerge", InitializeMerge);
	Nan::SetPrototypeMethod(tpl, "initializeMerge", InitializeMerge);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKSMPMERGEPOINTSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSMPMERGEPOINTSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSMPMergePointsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSMPMergePoints> native = vtkSmartPointer<vtkSMPMergePoints>::New();
		VtkSMPMergePointsWrap* obj = new VtkSMPMergePointsWrap(native);
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

void VtkSMPMergePointsWrap::FixSizeOfPointArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPMergePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSMPMergePointsWrap>(info.Holder());
	vtkSMPMergePoints *native = (vtkSMPMergePoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FixSizeOfPointArray();
}

void VtkSMPMergePointsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPMergePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSMPMergePointsWrap>(info.Holder());
	vtkSMPMergePoints *native = (vtkSMPMergePoints *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSMPMergePointsWrap::InitializeMerge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPMergePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSMPMergePointsWrap>(info.Holder());
	vtkSMPMergePoints *native = (vtkSMPMergePoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitializeMerge();
}

void VtkSMPMergePointsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPMergePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSMPMergePointsWrap>(info.Holder());
	vtkSMPMergePoints *native = (vtkSMPMergePoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkSMPMergePointsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPMergePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSMPMergePointsWrap>(info.Holder());
	vtkSMPMergePoints *native = (vtkSMPMergePoints *)wrapper->native.GetPointer();
	vtkSMPMergePoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSMPMergePointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSMPMergePointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSMPMergePointsWrap *w = new VtkSMPMergePointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSMPMergePointsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPMergePointsWrap *wrapper = ObjectWrap::Unwrap<VtkSMPMergePointsWrap>(info.Holder());
	vtkSMPMergePoints *native = (vtkSMPMergePoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSMPMergePoints * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSMPMergePointsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSMPMergePointsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSMPMergePointsWrap *w = new VtkSMPMergePointsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

