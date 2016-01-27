/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCollectionWrap.h"
#include "vtkOverrideInformationCollectionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkOverrideInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOverrideInformationCollectionWrap::ptpl;

VtkOverrideInformationCollectionWrap::VtkOverrideInformationCollectionWrap()
{ }

VtkOverrideInformationCollectionWrap::VtkOverrideInformationCollectionWrap(vtkSmartPointer<vtkOverrideInformationCollection> _native)
{ native = _native; }

VtkOverrideInformationCollectionWrap::~VtkOverrideInformationCollectionWrap()
{ }

void VtkOverrideInformationCollectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOverrideInformationCollection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OverrideInformationCollection").ToLocalChecked(), ConstructorGetter);
}

void VtkOverrideInformationCollectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOverrideInformationCollectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCollectionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCollectionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOverrideInformationCollectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddItem", AddItem);
	Nan::SetPrototypeMethod(tpl, "addItem", AddItem);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNextItem", GetNextItem);
	Nan::SetPrototypeMethod(tpl, "getNextItem", GetNextItem);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkOverrideInformationCollectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOverrideInformationCollection> native = vtkSmartPointer<vtkOverrideInformationCollection>::New();
		VtkOverrideInformationCollectionWrap* obj = new VtkOverrideInformationCollectionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOverrideInformationCollectionWrap::AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationCollectionWrap>(info.Holder());
	vtkOverrideInformationCollection *native = (vtkOverrideInformationCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkOverrideInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkOverrideInformationWrap *a0 = ObjectWrap::Unwrap<VtkOverrideInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddItem(
			(vtkOverrideInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOverrideInformationCollectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationCollectionWrap>(info.Holder());
	vtkOverrideInformationCollection *native = (vtkOverrideInformationCollection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOverrideInformationCollectionWrap::GetNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationCollectionWrap>(info.Holder());
	vtkOverrideInformationCollection *native = (vtkOverrideInformationCollection *)wrapper->native.GetPointer();
	vtkOverrideInformation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextItem();
		VtkOverrideInformationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOverrideInformationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOverrideInformationWrap *w = new VtkOverrideInformationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOverrideInformationCollectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationCollectionWrap>(info.Holder());
	vtkOverrideInformationCollection *native = (vtkOverrideInformationCollection *)wrapper->native.GetPointer();
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

void VtkOverrideInformationCollectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationCollectionWrap>(info.Holder());
	vtkOverrideInformationCollection *native = (vtkOverrideInformationCollection *)wrapper->native.GetPointer();
	vtkOverrideInformationCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOverrideInformationCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOverrideInformationCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOverrideInformationCollectionWrap *w = new VtkOverrideInformationCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOverrideInformationCollectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationCollectionWrap>(info.Holder());
	vtkOverrideInformationCollection *native = (vtkOverrideInformationCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOverrideInformationCollection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOverrideInformationCollectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOverrideInformationCollectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOverrideInformationCollectionWrap *w = new VtkOverrideInformationCollectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

