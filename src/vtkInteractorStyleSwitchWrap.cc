/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleSwitchBaseWrap.h"
#include "vtkInteractorStyleSwitchWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRenderWindowInteractorWrap.h"
#include "vtkInteractorStyleWrap.h"
#include "vtkRendererWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInteractorStyleSwitchWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleSwitchWrap::ptpl;

VtkInteractorStyleSwitchWrap::VtkInteractorStyleSwitchWrap()
{ }

VtkInteractorStyleSwitchWrap::VtkInteractorStyleSwitchWrap(vtkSmartPointer<vtkInteractorStyleSwitch> _native)
{ native = _native; }

VtkInteractorStyleSwitchWrap::~VtkInteractorStyleSwitchWrap()
{ }

void VtkInteractorStyleSwitchWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleSwitchBaseWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleSwitchBaseWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkInteractorStyleSwitchWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkInteractorStyleSwitch").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("InteractorStyleSwitch").ToLocalChecked(),tpl->GetFunction());
}

void VtkInteractorStyleSwitchWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentStyle", GetCurrentStyle);
	Nan::SetPrototypeMethod(tpl, "getCurrentStyle", GetCurrentStyle);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnChar", OnChar);
	Nan::SetPrototypeMethod(tpl, "onChar", OnChar);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAutoAdjustCameraClippingRange", SetAutoAdjustCameraClippingRange);
	Nan::SetPrototypeMethod(tpl, "setAutoAdjustCameraClippingRange", SetAutoAdjustCameraClippingRange);

	Nan::SetPrototypeMethod(tpl, "SetCurrentRenderer", SetCurrentRenderer);
	Nan::SetPrototypeMethod(tpl, "setCurrentRenderer", SetCurrentRenderer);

	Nan::SetPrototypeMethod(tpl, "SetCurrentStyleToJoystickActor", SetCurrentStyleToJoystickActor);
	Nan::SetPrototypeMethod(tpl, "setCurrentStyleToJoystickActor", SetCurrentStyleToJoystickActor);

	Nan::SetPrototypeMethod(tpl, "SetCurrentStyleToJoystickCamera", SetCurrentStyleToJoystickCamera);
	Nan::SetPrototypeMethod(tpl, "setCurrentStyleToJoystickCamera", SetCurrentStyleToJoystickCamera);

	Nan::SetPrototypeMethod(tpl, "SetCurrentStyleToTrackballActor", SetCurrentStyleToTrackballActor);
	Nan::SetPrototypeMethod(tpl, "setCurrentStyleToTrackballActor", SetCurrentStyleToTrackballActor);

	Nan::SetPrototypeMethod(tpl, "SetCurrentStyleToTrackballCamera", SetCurrentStyleToTrackballCamera);
	Nan::SetPrototypeMethod(tpl, "setCurrentStyleToTrackballCamera", SetCurrentStyleToTrackballCamera);

	Nan::SetPrototypeMethod(tpl, "SetDefaultRenderer", SetDefaultRenderer);
	Nan::SetPrototypeMethod(tpl, "setDefaultRenderer", SetDefaultRenderer);

	Nan::SetPrototypeMethod(tpl, "SetInteractor", SetInteractor);
	Nan::SetPrototypeMethod(tpl, "setInteractor", SetInteractor);

}

void VtkInteractorStyleSwitchWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleSwitch> native = vtkSmartPointer<vtkInteractorStyleSwitch>::New();
		VtkInteractorStyleSwitchWrap* obj = new VtkInteractorStyleSwitchWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInteractorStyleSwitchWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleSwitchWrap::GetCurrentStyle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
	vtkInteractorStyle * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentStyle();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInteractorStyleWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleWrap *w = new VtkInteractorStyleWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleSwitchWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
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

void VtkInteractorStyleSwitchWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
	vtkInteractorStyleSwitch * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInteractorStyleSwitchWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleSwitchWrap *w = new VtkInteractorStyleSwitchWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleSwitchWrap::OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnChar();
}

void VtkInteractorStyleSwitchWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleSwitch * r;
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
			Nan::New<v8::Function>(VtkInteractorStyleSwitchWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleSwitchWrap *w = new VtkInteractorStyleSwitchWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleSwitchWrap::SetAutoAdjustCameraClippingRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutoAdjustCameraClippingRange(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleSwitchWrap::SetCurrentRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkInteractorStyleSwitchWrap::SetCurrentStyleToJoystickActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCurrentStyleToJoystickActor();
}

void VtkInteractorStyleSwitchWrap::SetCurrentStyleToJoystickCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCurrentStyleToJoystickCamera();
}

void VtkInteractorStyleSwitchWrap::SetCurrentStyleToTrackballActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCurrentStyleToTrackballActor();
}

void VtkInteractorStyleSwitchWrap::SetCurrentStyleToTrackballCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCurrentStyleToTrackballCamera();
}

void VtkInteractorStyleSwitchWrap::SetDefaultRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkInteractorStyleSwitchWrap::SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleSwitchWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleSwitchWrap>(info.Holder());
	vtkInteractorStyleSwitch *native = (vtkInteractorStyleSwitch *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

