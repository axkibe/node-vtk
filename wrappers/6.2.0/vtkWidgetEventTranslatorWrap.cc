/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkWidgetEventTranslatorWrap.h"
#include "vtkEventWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkWidgetEventTranslatorWrap::ptpl;

VtkWidgetEventTranslatorWrap::VtkWidgetEventTranslatorWrap()
{ }

VtkWidgetEventTranslatorWrap::VtkWidgetEventTranslatorWrap(vtkSmartPointer<vtkWidgetEventTranslator> _native)
{ native = _native; }

VtkWidgetEventTranslatorWrap::~VtkWidgetEventTranslatorWrap()
{ }

void VtkWidgetEventTranslatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkWidgetEventTranslator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("WidgetEventTranslator").ToLocalChecked(), ConstructorGetter);
}

void VtkWidgetEventTranslatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkWidgetEventTranslatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkWidgetEventTranslatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClearEvents", ClearEvents);
	Nan::SetPrototypeMethod(tpl, "clearEvents", ClearEvents);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetTranslation", GetTranslation);
	Nan::SetPrototypeMethod(tpl, "getTranslation", GetTranslation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveTranslation", RemoveTranslation);
	Nan::SetPrototypeMethod(tpl, "removeTranslation", RemoveTranslation);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTranslation", SetTranslation);
	Nan::SetPrototypeMethod(tpl, "setTranslation", SetTranslation);

	ptpl.Reset( tpl );
}

void VtkWidgetEventTranslatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkWidgetEventTranslator> native = vtkSmartPointer<vtkWidgetEventTranslator>::New();
		VtkWidgetEventTranslatorWrap* obj = new VtkWidgetEventTranslatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkWidgetEventTranslatorWrap::ClearEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetEventTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetEventTranslatorWrap>(info.Holder());
	vtkWidgetEventTranslator *native = (vtkWidgetEventTranslator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearEvents();
}

void VtkWidgetEventTranslatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetEventTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetEventTranslatorWrap>(info.Holder());
	vtkWidgetEventTranslator *native = (vtkWidgetEventTranslator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWidgetEventTranslatorWrap::GetTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetEventTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetEventTranslatorWrap>(info.Holder());
	vtkWidgetEventTranslator *native = (vtkWidgetEventTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetTranslation(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetEventTranslatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetEventTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetEventTranslatorWrap>(info.Holder());
	vtkWidgetEventTranslator *native = (vtkWidgetEventTranslator *)wrapper->native.GetPointer();
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

void VtkWidgetEventTranslatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetEventTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetEventTranslatorWrap>(info.Holder());
	vtkWidgetEventTranslator *native = (vtkWidgetEventTranslator *)wrapper->native.GetPointer();
	vtkWidgetEventTranslator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkWidgetEventTranslatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkWidgetEventTranslatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWidgetEventTranslatorWrap *w = new VtkWidgetEventTranslatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWidgetEventTranslatorWrap::RemoveTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetEventTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetEventTranslatorWrap>(info.Holder());
	vtkWidgetEventTranslator *native = (vtkWidgetEventTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RemoveTranslation(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkEventWrap::ptpl))->HasInstance(info[0]))
	{
		VtkEventWrap *a0 = ObjectWrap::Unwrap<VtkEventWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RemoveTranslation(
			(vtkEvent *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetEventTranslatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetEventTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetEventTranslatorWrap>(info.Holder());
	vtkWidgetEventTranslator *native = (vtkWidgetEventTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkWidgetEventTranslator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkWidgetEventTranslatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkWidgetEventTranslatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkWidgetEventTranslatorWrap *w = new VtkWidgetEventTranslatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetEventTranslatorWrap::SetTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetEventTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetEventTranslatorWrap>(info.Holder());
	vtkWidgetEventTranslator *native = (vtkWidgetEventTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetTranslation(
				*a0,
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

