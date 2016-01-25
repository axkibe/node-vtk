/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCollectionWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPropWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPropCollectionWrap::constructor;

VtkPropCollectionWrap::VtkPropCollectionWrap()
{ }

VtkPropCollectionWrap::VtkPropCollectionWrap(vtkSmartPointer<vtkPropCollection> _native)
{ native = _native; }

VtkPropCollectionWrap::~VtkPropCollectionWrap()
{ }

void VtkPropCollectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkPropCollectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkCollectionWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkPropCollection").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PropCollection").ToLocalChecked(),tpl->GetFunction());
}

void VtkPropCollectionWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddItem", AddItem);
	Nan::SetPrototypeMethod(tpl, "addItem", AddItem);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLastProp", GetLastProp);
	Nan::SetPrototypeMethod(tpl, "getLastProp", GetLastProp);

	Nan::SetPrototypeMethod(tpl, "GetNextProp", GetNextProp);
	Nan::SetPrototypeMethod(tpl, "getNextProp", GetNextProp);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPaths", GetNumberOfPaths);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPaths", GetNumberOfPaths);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkPropCollectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPropCollection> native = vtkSmartPointer<vtkPropCollection>::New();
		VtkPropCollectionWrap* obj = new VtkPropCollectionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPropCollectionWrap::AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddItem(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropCollectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPropCollectionWrap::GetLastProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
	vtkProp * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastProp();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropWrap *w = new VtkPropWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPropCollectionWrap::GetNextProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
	vtkProp * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextProp();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropWrap *w = new VtkPropWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPropCollectionWrap::GetNumberOfPaths(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPaths();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPropCollectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
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

void VtkPropCollectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
	vtkPropCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropCollectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropCollectionWrap *w = new VtkPropCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPropCollectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPropCollection * r;
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
			Nan::New<v8::Function>(VtkPropCollectionWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPropCollectionWrap *w = new VtkPropCollectionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

