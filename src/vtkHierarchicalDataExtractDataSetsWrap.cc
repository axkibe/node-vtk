/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkExtractDataSetsWrap.h"
#include "vtkHierarchicalDataExtractDataSetsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHierarchicalDataExtractDataSetsWrap::ptpl;

VtkHierarchicalDataExtractDataSetsWrap::VtkHierarchicalDataExtractDataSetsWrap()
{ }

VtkHierarchicalDataExtractDataSetsWrap::VtkHierarchicalDataExtractDataSetsWrap(vtkSmartPointer<vtkHierarchicalDataExtractDataSets> _native)
{ native = _native; }

VtkHierarchicalDataExtractDataSetsWrap::~VtkHierarchicalDataExtractDataSetsWrap()
{ }

void VtkHierarchicalDataExtractDataSetsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHierarchicalDataExtractDataSets").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HierarchicalDataExtractDataSets").ToLocalChecked(), ConstructorGetter);
}

void VtkHierarchicalDataExtractDataSetsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHierarchicalDataExtractDataSetsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkExtractDataSetsWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkExtractDataSetsWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHierarchicalDataExtractDataSetsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

void VtkHierarchicalDataExtractDataSetsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHierarchicalDataExtractDataSets> native = vtkSmartPointer<vtkHierarchicalDataExtractDataSets>::New();
		VtkHierarchicalDataExtractDataSetsWrap* obj = new VtkHierarchicalDataExtractDataSetsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHierarchicalDataExtractDataSetsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalDataExtractDataSetsWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalDataExtractDataSetsWrap>(info.Holder());
	vtkHierarchicalDataExtractDataSets *native = (vtkHierarchicalDataExtractDataSets *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHierarchicalDataExtractDataSetsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalDataExtractDataSetsWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalDataExtractDataSetsWrap>(info.Holder());
	vtkHierarchicalDataExtractDataSets *native = (vtkHierarchicalDataExtractDataSets *)wrapper->native.GetPointer();
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

void VtkHierarchicalDataExtractDataSetsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalDataExtractDataSetsWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalDataExtractDataSetsWrap>(info.Holder());
	vtkHierarchicalDataExtractDataSets *native = (vtkHierarchicalDataExtractDataSets *)wrapper->native.GetPointer();
	vtkHierarchicalDataExtractDataSets * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHierarchicalDataExtractDataSetsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHierarchicalDataExtractDataSetsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHierarchicalDataExtractDataSetsWrap *w = new VtkHierarchicalDataExtractDataSetsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHierarchicalDataExtractDataSetsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalDataExtractDataSetsWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalDataExtractDataSetsWrap>(info.Holder());
	vtkHierarchicalDataExtractDataSets *native = (vtkHierarchicalDataExtractDataSets *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHierarchicalDataExtractDataSets * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHierarchicalDataExtractDataSetsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHierarchicalDataExtractDataSetsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHierarchicalDataExtractDataSetsWrap *w = new VtkHierarchicalDataExtractDataSetsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

