/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkWidgetCallbackMapperWrap.h"
#include "vtkWidgetEventTranslatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkWidgetCallbackMapperWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkWidgetCallbackMapperWrap::ptpl;

VtkWidgetCallbackMapperWrap::VtkWidgetCallbackMapperWrap()
{ }

VtkWidgetCallbackMapperWrap::VtkWidgetCallbackMapperWrap(vtkSmartPointer<vtkWidgetCallbackMapper> _native)
{ native = _native; }

VtkWidgetCallbackMapperWrap::~VtkWidgetCallbackMapperWrap()
{ }

void VtkWidgetCallbackMapperWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkWidgetCallbackMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkWidgetCallbackMapper").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("WidgetCallbackMapper").ToLocalChecked(),tpl->GetFunction());
}

void VtkWidgetCallbackMapperWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEventTranslator", GetEventTranslator);
	Nan::SetPrototypeMethod(tpl, "getEventTranslator", GetEventTranslator);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEventTranslator", SetEventTranslator);
	Nan::SetPrototypeMethod(tpl, "setEventTranslator", SetEventTranslator);

}

void VtkWidgetCallbackMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkWidgetCallbackMapper> native = vtkSmartPointer<vtkWidgetCallbackMapper>::New();
		VtkWidgetCallbackMapperWrap* obj = new VtkWidgetCallbackMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkWidgetCallbackMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetCallbackMapperWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetCallbackMapperWrap>(info.Holder());
	vtkWidgetCallbackMapper *native = (vtkWidgetCallbackMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWidgetCallbackMapperWrap::GetEventTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetCallbackMapperWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetCallbackMapperWrap>(info.Holder());
	vtkWidgetCallbackMapper *native = (vtkWidgetCallbackMapper *)wrapper->native.GetPointer();
	vtkWidgetEventTranslator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEventTranslator();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkWidgetEventTranslatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWidgetEventTranslatorWrap *w = new VtkWidgetEventTranslatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWidgetCallbackMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetCallbackMapperWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetCallbackMapperWrap>(info.Holder());
	vtkWidgetCallbackMapper *native = (vtkWidgetCallbackMapper *)wrapper->native.GetPointer();
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

void VtkWidgetCallbackMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetCallbackMapperWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetCallbackMapperWrap>(info.Holder());
	vtkWidgetCallbackMapper *native = (vtkWidgetCallbackMapper *)wrapper->native.GetPointer();
	vtkWidgetCallbackMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkWidgetCallbackMapperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWidgetCallbackMapperWrap *w = new VtkWidgetCallbackMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWidgetCallbackMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetCallbackMapperWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetCallbackMapperWrap>(info.Holder());
	vtkWidgetCallbackMapper *native = (vtkWidgetCallbackMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkWidgetCallbackMapper * r;
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
			Nan::New<v8::Function>(VtkWidgetCallbackMapperWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkWidgetCallbackMapperWrap *w = new VtkWidgetCallbackMapperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetCallbackMapperWrap::SetEventTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetCallbackMapperWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetCallbackMapperWrap>(info.Holder());
	vtkWidgetCallbackMapper *native = (vtkWidgetCallbackMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkWidgetEventTranslatorWrap *a0 = ObjectWrap::Unwrap<VtkWidgetEventTranslatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEventTranslator(
			(vtkWidgetEventTranslator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

