/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkInteractorObserverWrap.h"
#include "vtkRenderWindowInteractorWrap.h"
#include "vtkRendererWrap.h"
#include "vtkCommandWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorObserverWrap::ptpl;

VtkInteractorObserverWrap::VtkInteractorObserverWrap()
{ }

VtkInteractorObserverWrap::VtkInteractorObserverWrap(vtkSmartPointer<vtkInteractorObserver> _native)
{ native = _native; }

VtkInteractorObserverWrap::~VtkInteractorObserverWrap()
{ }

void VtkInteractorObserverWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorObserver").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorObserver").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorObserverWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorObserverWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorObserverWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EnabledOff", EnabledOff);
	Nan::SetPrototypeMethod(tpl, "enabledOff", EnabledOff);

	Nan::SetPrototypeMethod(tpl, "EnabledOn", EnabledOn);
	Nan::SetPrototypeMethod(tpl, "enabledOn", EnabledOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentRenderer", GetCurrentRenderer);
	Nan::SetPrototypeMethod(tpl, "getCurrentRenderer", GetCurrentRenderer);

	Nan::SetPrototypeMethod(tpl, "GetDefaultRenderer", GetDefaultRenderer);
	Nan::SetPrototypeMethod(tpl, "getDefaultRenderer", GetDefaultRenderer);

	Nan::SetPrototypeMethod(tpl, "GetEnabled", GetEnabled);
	Nan::SetPrototypeMethod(tpl, "getEnabled", GetEnabled);

	Nan::SetPrototypeMethod(tpl, "GetInteractor", GetInteractor);
	Nan::SetPrototypeMethod(tpl, "getInteractor", GetInteractor);

	Nan::SetPrototypeMethod(tpl, "GetKeyPressActivation", GetKeyPressActivation);
	Nan::SetPrototypeMethod(tpl, "getKeyPressActivation", GetKeyPressActivation);

	Nan::SetPrototypeMethod(tpl, "GetKeyPressActivationValue", GetKeyPressActivationValue);
	Nan::SetPrototypeMethod(tpl, "getKeyPressActivationValue", GetKeyPressActivationValue);

	Nan::SetPrototypeMethod(tpl, "GrabFocus", GrabFocus);
	Nan::SetPrototypeMethod(tpl, "grabFocus", GrabFocus);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "KeyPressActivationOff", KeyPressActivationOff);
	Nan::SetPrototypeMethod(tpl, "keyPressActivationOff", KeyPressActivationOff);

	Nan::SetPrototypeMethod(tpl, "KeyPressActivationOn", KeyPressActivationOn);
	Nan::SetPrototypeMethod(tpl, "keyPressActivationOn", KeyPressActivationOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Off", Off);
	Nan::SetPrototypeMethod(tpl, "off", Off);

	Nan::SetPrototypeMethod(tpl, "On", On);
	Nan::SetPrototypeMethod(tpl, "on", On);

	Nan::SetPrototypeMethod(tpl, "OnChar", OnChar);
	Nan::SetPrototypeMethod(tpl, "onChar", OnChar);

	Nan::SetPrototypeMethod(tpl, "PickingManagedOff", PickingManagedOff);
	Nan::SetPrototypeMethod(tpl, "pickingManagedOff", PickingManagedOff);

	Nan::SetPrototypeMethod(tpl, "PickingManagedOn", PickingManagedOn);
	Nan::SetPrototypeMethod(tpl, "pickingManagedOn", PickingManagedOn);

	Nan::SetPrototypeMethod(tpl, "ReleaseFocus", ReleaseFocus);
	Nan::SetPrototypeMethod(tpl, "releaseFocus", ReleaseFocus);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCurrentRenderer", SetCurrentRenderer);
	Nan::SetPrototypeMethod(tpl, "setCurrentRenderer", SetCurrentRenderer);

	Nan::SetPrototypeMethod(tpl, "SetDefaultRenderer", SetDefaultRenderer);
	Nan::SetPrototypeMethod(tpl, "setDefaultRenderer", SetDefaultRenderer);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetInteractor", SetInteractor);
	Nan::SetPrototypeMethod(tpl, "setInteractor", SetInteractor);

	Nan::SetPrototypeMethod(tpl, "SetKeyPressActivation", SetKeyPressActivation);
	Nan::SetPrototypeMethod(tpl, "setKeyPressActivation", SetKeyPressActivation);

	Nan::SetPrototypeMethod(tpl, "SetKeyPressActivationValue", SetKeyPressActivationValue);
	Nan::SetPrototypeMethod(tpl, "setKeyPressActivationValue", SetKeyPressActivationValue);

	ptpl.Reset( tpl );
}

void VtkInteractorObserverWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInteractorObserverWrap::EnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnabledOff();
}

void VtkInteractorObserverWrap::EnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnabledOn();
}

void VtkInteractorObserverWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorObserverWrap::GetCurrentRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentRenderer();
		VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorObserverWrap::GetDefaultRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultRenderer();
		VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorObserverWrap::GetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnabled();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorObserverWrap::GetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	vtkRenderWindowInteractor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractor();
		VtkRenderWindowInteractorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderWindowInteractorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderWindowInteractorWrap *w = new VtkRenderWindowInteractorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorObserverWrap::GetKeyPressActivation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetKeyPressActivation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorObserverWrap::GetKeyPressActivationValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	char r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetKeyPressActivationValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorObserverWrap::GrabFocus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCommandWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCommandWrap *a0 = ObjectWrap::Unwrap<VtkCommandWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkCommandWrap::ptpl))->HasInstance(info[1]))
		{
			VtkCommandWrap *a1 = ObjectWrap::Unwrap<VtkCommandWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GrabFocus(
				(vtkCommand *) a0->native.GetPointer(),
				(vtkCommand *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorObserverWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
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

void VtkInteractorObserverWrap::KeyPressActivationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->KeyPressActivationOff();
}

void VtkInteractorObserverWrap::KeyPressActivationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->KeyPressActivationOn();
}

void VtkInteractorObserverWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	vtkInteractorObserver * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInteractorObserverWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorObserverWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorObserverWrap *w = new VtkInteractorObserverWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorObserverWrap::Off(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Off();
}

void VtkInteractorObserverWrap::On(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->On();
}

void VtkInteractorObserverWrap::OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnChar();
}

void VtkInteractorObserverWrap::PickingManagedOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickingManagedOff();
}

void VtkInteractorObserverWrap::PickingManagedOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickingManagedOn();
}

void VtkInteractorObserverWrap::ReleaseFocus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReleaseFocus();
}

void VtkInteractorObserverWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorObserver * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInteractorObserverWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInteractorObserverWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorObserverWrap *w = new VtkInteractorObserverWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorObserverWrap::SetCurrentRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCurrentRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorObserverWrap::SetDefaultRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDefaultRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorObserverWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnabled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorObserverWrap::SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowInteractorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowInteractorWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowInteractorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractor(
			(vtkRenderWindowInteractor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorObserverWrap::SetKeyPressActivation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetKeyPressActivation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorObserverWrap::SetKeyPressActivationValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorObserverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info.Holder());
	vtkInteractorObserver *native = (vtkInteractorObserver *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		char a0 = info[0]->Int32Value();
		if( a0 < -127 || a0 > 128 )
		{
			Nan::ThrowError("char value out of bounds.");
			return;
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetKeyPressActivationValue(
			a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

