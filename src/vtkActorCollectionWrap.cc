/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPropCollectionWrap.h"
#include "vtkActorCollectionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkActorWrap.h"
#include "vtkPropertyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkActorCollectionWrap::constructor;

VtkActorCollectionWrap::VtkActorCollectionWrap()
{ }

VtkActorCollectionWrap::VtkActorCollectionWrap(vtkSmartPointer<vtkActorCollection> _native)
{ native = _native; }

VtkActorCollectionWrap::~VtkActorCollectionWrap()
{ }

void VtkActorCollectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkActorCollectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkCollectionWrap::InitTpl(tpl);
	VtkPropCollectionWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkActorCollection").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ActorCollection").ToLocalChecked(),tpl->GetFunction());
}

void VtkActorCollectionWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddItem", AddItem);
	Nan::SetPrototypeMethod(tpl, "addItem", AddItem);

	Nan::SetPrototypeMethod(tpl, "ApplyProperties", ApplyProperties);
	Nan::SetPrototypeMethod(tpl, "applyProperties", ApplyProperties);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLastActor", GetLastActor);
	Nan::SetPrototypeMethod(tpl, "getLastActor", GetLastActor);

	Nan::SetPrototypeMethod(tpl, "GetLastItem", GetLastItem);
	Nan::SetPrototypeMethod(tpl, "getLastItem", GetLastItem);

	Nan::SetPrototypeMethod(tpl, "GetNextActor", GetNextActor);
	Nan::SetPrototypeMethod(tpl, "getNextActor", GetNextActor);

	Nan::SetPrototypeMethod(tpl, "GetNextItem", GetNextItem);
	Nan::SetPrototypeMethod(tpl, "getNextItem", GetNextItem);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkActorCollectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkActorCollection> native = vtkSmartPointer<vtkActorCollection>::New();
		VtkActorCollectionWrap* obj = new VtkActorCollectionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkActorCollectionWrap::AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkActorCollectionWrap>(info.Holder());
	vtkActorCollection *native = (vtkActorCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkActorWrap *a0 = ObjectWrap::Unwrap<VtkActorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddItem(
			(vtkActor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkActorCollectionWrap::ApplyProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkActorCollectionWrap>(info.Holder());
	vtkActorCollection *native = (vtkActorCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ApplyProperties(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkActorCollectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkActorCollectionWrap>(info.Holder());
	vtkActorCollection *native = (vtkActorCollection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkActorCollectionWrap::GetLastActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkActorCollectionWrap>(info.Holder());
	vtkActorCollection *native = (vtkActorCollection *)wrapper->native.GetPointer();
	vtkActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastActor();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkActorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkActorWrap *w = new VtkActorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkActorCollectionWrap::GetLastItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkActorCollectionWrap>(info.Holder());
	vtkActorCollection *native = (vtkActorCollection *)wrapper->native.GetPointer();
	vtkActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastItem();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkActorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkActorWrap *w = new VtkActorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkActorCollectionWrap::GetNextActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkActorCollectionWrap>(info.Holder());
	vtkActorCollection *native = (vtkActorCollection *)wrapper->native.GetPointer();
	vtkActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextActor();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkActorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkActorWrap *w = new VtkActorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkActorCollectionWrap::GetNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkActorCollectionWrap>(info.Holder());
	vtkActorCollection *native = (vtkActorCollection *)wrapper->native.GetPointer();
	vtkActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextItem();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkActorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkActorWrap *w = new VtkActorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkActorCollectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkActorCollectionWrap>(info.Holder());
	vtkActorCollection *native = (vtkActorCollection *)wrapper->native.GetPointer();
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

void VtkActorCollectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkActorCollectionWrap>(info.Holder());
	vtkActorCollection *native = (vtkActorCollection *)wrapper->native.GetPointer();
	vtkActorCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkActorCollectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkActorCollectionWrap *w = new VtkActorCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkActorCollectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkActorCollectionWrap>(info.Holder());
	vtkActorCollection *native = (vtkActorCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkActorCollection * r;
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
			Nan::New<v8::Function>(VtkActorCollectionWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkActorCollectionWrap *w = new VtkActorCollectionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

