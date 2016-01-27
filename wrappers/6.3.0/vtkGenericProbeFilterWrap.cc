/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkGenericProbeFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkGenericDataSetWrap.h"
#include "vtkIdTypeArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGenericProbeFilterWrap::ptpl;

VtkGenericProbeFilterWrap::VtkGenericProbeFilterWrap()
{ }

VtkGenericProbeFilterWrap::VtkGenericProbeFilterWrap(vtkSmartPointer<vtkGenericProbeFilter> _native)
{ native = _native; }

VtkGenericProbeFilterWrap::~VtkGenericProbeFilterWrap()
{ }

void VtkGenericProbeFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGenericProbeFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GenericProbeFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkGenericProbeFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGenericProbeFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGenericProbeFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSource", GetSource);
	Nan::SetPrototypeMethod(tpl, "getSource", GetSource);

	Nan::SetPrototypeMethod(tpl, "GetValidPoints", GetValidPoints);
	Nan::SetPrototypeMethod(tpl, "getValidPoints", GetValidPoints);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSourceData", SetSourceData);
	Nan::SetPrototypeMethod(tpl, "setSourceData", SetSourceData);

	ptpl.Reset( tpl );
}

void VtkGenericProbeFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGenericProbeFilter> native = vtkSmartPointer<vtkGenericProbeFilter>::New();
		VtkGenericProbeFilterWrap* obj = new VtkGenericProbeFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGenericProbeFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericProbeFilterWrap>(info.Holder());
	vtkGenericProbeFilter *native = (vtkGenericProbeFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericProbeFilterWrap::GetSource(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericProbeFilterWrap>(info.Holder());
	vtkGenericProbeFilter *native = (vtkGenericProbeFilter *)wrapper->native.GetPointer();
	vtkGenericDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSource();
		VtkGenericDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericDataSetWrap *w = new VtkGenericDataSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericProbeFilterWrap::GetValidPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericProbeFilterWrap>(info.Holder());
	vtkGenericProbeFilter *native = (vtkGenericProbeFilter *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValidPoints();
		VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericProbeFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericProbeFilterWrap>(info.Holder());
	vtkGenericProbeFilter *native = (vtkGenericProbeFilter *)wrapper->native.GetPointer();
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

void VtkGenericProbeFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericProbeFilterWrap>(info.Holder());
	vtkGenericProbeFilter *native = (vtkGenericProbeFilter *)wrapper->native.GetPointer();
	vtkGenericProbeFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGenericProbeFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericProbeFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericProbeFilterWrap *w = new VtkGenericProbeFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericProbeFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericProbeFilterWrap>(info.Holder());
	vtkGenericProbeFilter *native = (vtkGenericProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericProbeFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGenericProbeFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericProbeFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericProbeFilterWrap *w = new VtkGenericProbeFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericProbeFilterWrap::SetSourceData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericProbeFilterWrap>(info.Holder());
	vtkGenericProbeFilter *native = (vtkGenericProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericDataSetWrap *a0 = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceData(
			(vtkGenericDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

