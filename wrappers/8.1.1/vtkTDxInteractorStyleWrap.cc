/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkTDxInteractorStyleWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkTDxInteractorStyleSettingsWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTDxInteractorStyleWrap::ptpl;

VtkTDxInteractorStyleWrap::VtkTDxInteractorStyleWrap()
{ }

VtkTDxInteractorStyleWrap::VtkTDxInteractorStyleWrap(vtkSmartPointer<vtkTDxInteractorStyle> _native)
{ native = _native; }

VtkTDxInteractorStyleWrap::~VtkTDxInteractorStyleWrap()
{ }

void VtkTDxInteractorStyleWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTDxInteractorStyle").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TDxInteractorStyle").ToLocalChecked(), ConstructorGetter);
}

void VtkTDxInteractorStyleWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTDxInteractorStyleWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTDxInteractorStyleWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetSettings", GetSettings);
	Nan::SetPrototypeMethod(tpl, "getSettings", GetSettings);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnButtonPressedEvent", OnButtonPressedEvent);
	Nan::SetPrototypeMethod(tpl, "onButtonPressedEvent", OnButtonPressedEvent);

	Nan::SetPrototypeMethod(tpl, "OnButtonReleasedEvent", OnButtonReleasedEvent);
	Nan::SetPrototypeMethod(tpl, "onButtonReleasedEvent", OnButtonReleasedEvent);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSettings", SetSettings);
	Nan::SetPrototypeMethod(tpl, "setSettings", SetSettings);

#ifdef VTK_NODE_PLUS_VTKTDXINTERACTORSTYLEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTDXINTERACTORSTYLEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTDxInteractorStyleWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkTDxInteractorStyleWrap::GetSettings(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleWrap>(info.Holder());
	vtkTDxInteractorStyle *native = (vtkTDxInteractorStyle *)wrapper->native.GetPointer();
	vtkTDxInteractorStyleSettings * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSettings();
	VtkTDxInteractorStyleSettingsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTDxInteractorStyleSettingsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTDxInteractorStyleSettingsWrap *w = new VtkTDxInteractorStyleSettingsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTDxInteractorStyleWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleWrap>(info.Holder());
	vtkTDxInteractorStyle *native = (vtkTDxInteractorStyle *)wrapper->native.GetPointer();
	vtkTDxInteractorStyle * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTDxInteractorStyleWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTDxInteractorStyleWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTDxInteractorStyleWrap *w = new VtkTDxInteractorStyleWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTDxInteractorStyleWrap::OnButtonPressedEvent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleWrap>(info.Holder());
	vtkTDxInteractorStyle *native = (vtkTDxInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->OnButtonPressedEvent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTDxInteractorStyleWrap::OnButtonReleasedEvent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleWrap>(info.Holder());
	vtkTDxInteractorStyle *native = (vtkTDxInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->OnButtonReleasedEvent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTDxInteractorStyleWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleWrap>(info.Holder());
	vtkTDxInteractorStyle *native = (vtkTDxInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkTDxInteractorStyle * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkTDxInteractorStyleWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTDxInteractorStyleWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTDxInteractorStyleWrap *w = new VtkTDxInteractorStyleWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTDxInteractorStyleWrap::SetSettings(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTDxInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkTDxInteractorStyleWrap>(info.Holder());
	vtkTDxInteractorStyle *native = (vtkTDxInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTDxInteractorStyleSettingsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTDxInteractorStyleSettingsWrap *a0 = ObjectWrap::Unwrap<VtkTDxInteractorStyleSettingsWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSettings(
			(vtkTDxInteractorStyleSettings *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

