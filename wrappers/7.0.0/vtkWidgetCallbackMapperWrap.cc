/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkWidgetCallbackMapperWrap.h"
#include "vtkWidgetEventTranslatorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkWidgetCallbackMapperWrap::ptpl;

VtkWidgetCallbackMapperWrap::VtkWidgetCallbackMapperWrap()
{ }

VtkWidgetCallbackMapperWrap::VtkWidgetCallbackMapperWrap(vtkSmartPointer<vtkWidgetCallbackMapper> _native)
{ native = _native; }

VtkWidgetCallbackMapperWrap::~VtkWidgetCallbackMapperWrap()
{ }

void VtkWidgetCallbackMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkWidgetCallbackMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("WidgetCallbackMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkWidgetCallbackMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkWidgetCallbackMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkWidgetCallbackMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEventTranslator", GetEventTranslator);
	Nan::SetPrototypeMethod(tpl, "getEventTranslator", GetEventTranslator);

	Nan::SetPrototypeMethod(tpl, "InvokeCallback", InvokeCallback);
	Nan::SetPrototypeMethod(tpl, "invokeCallback", InvokeCallback);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEventTranslator", SetEventTranslator);
	Nan::SetPrototypeMethod(tpl, "setEventTranslator", SetEventTranslator);

#ifdef VTK_NODE_PLUS_VTKWIDGETCALLBACKMAPPERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKWIDGETCALLBACKMAPPERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
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
		VtkWidgetCallbackMapperWrap* obj = new VtkWidgetCallbackMapperWrap(native);
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

void VtkWidgetCallbackMapperWrap::InvokeCallback(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetCallbackMapperWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetCallbackMapperWrap>(info.Holder());
	vtkWidgetCallbackMapper *native = (vtkWidgetCallbackMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->InvokeCallback(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetCallbackMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetCallbackMapperWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetCallbackMapperWrap>(info.Holder());
	vtkWidgetCallbackMapper *native = (vtkWidgetCallbackMapper *)wrapper->native.GetPointer();
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
	VtkWidgetCallbackMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkWidgetCallbackMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWidgetCallbackMapperWrap *w = new VtkWidgetCallbackMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWidgetCallbackMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetCallbackMapperWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetCallbackMapperWrap>(info.Holder());
	vtkWidgetCallbackMapper *native = (vtkWidgetCallbackMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
		VtkWidgetCallbackMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkWidgetCallbackMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkWidgetCallbackMapperWrap *w = new VtkWidgetCallbackMapperWrap();
		w->native = r;
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWidgetEventTranslatorWrap::ptpl))->HasInstance(info[0]))
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

