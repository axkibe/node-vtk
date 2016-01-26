/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkExtractDataSetsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractDataSetsWrap::ptpl;

VtkExtractDataSetsWrap::VtkExtractDataSetsWrap()
{ }

VtkExtractDataSetsWrap::VtkExtractDataSetsWrap(vtkSmartPointer<vtkExtractDataSets> _native)
{ native = _native; }

VtkExtractDataSetsWrap::~VtkExtractDataSetsWrap()
{ }

void VtkExtractDataSetsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractDataSets").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractDataSets").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractDataSetsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractDataSetsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractDataSetsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClearDataSetList", ClearDataSetList);
	Nan::SetPrototypeMethod(tpl, "clearDataSetList", ClearDataSetList);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkExtractDataSetsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractDataSets> native = vtkSmartPointer<vtkExtractDataSets>::New();
		VtkExtractDataSetsWrap* obj = new VtkExtractDataSetsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExtractDataSetsWrap::ClearDataSetList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractDataSetsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractDataSetsWrap>(info.Holder());
	vtkExtractDataSets *native = (vtkExtractDataSets *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearDataSetList();
}

void VtkExtractDataSetsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractDataSetsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractDataSetsWrap>(info.Holder());
	vtkExtractDataSets *native = (vtkExtractDataSets *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractDataSetsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractDataSetsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractDataSetsWrap>(info.Holder());
	vtkExtractDataSets *native = (vtkExtractDataSets *)wrapper->native.GetPointer();
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

void VtkExtractDataSetsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractDataSetsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractDataSetsWrap>(info.Holder());
	vtkExtractDataSets *native = (vtkExtractDataSets *)wrapper->native.GetPointer();
	vtkExtractDataSets * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkExtractDataSetsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractDataSetsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractDataSetsWrap *w = new VtkExtractDataSetsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractDataSetsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractDataSetsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractDataSetsWrap>(info.Holder());
	vtkExtractDataSets *native = (vtkExtractDataSets *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractDataSets * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkExtractDataSetsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractDataSetsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractDataSetsWrap *w = new VtkExtractDataSetsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

