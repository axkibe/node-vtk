/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorObserverWrap.h"
#include "vtkOrientationMarkerWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPropWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOrientationMarkerWidgetWrap::ptpl;

VtkOrientationMarkerWidgetWrap::VtkOrientationMarkerWidgetWrap()
{ }

VtkOrientationMarkerWidgetWrap::VtkOrientationMarkerWidgetWrap(vtkSmartPointer<vtkOrientationMarkerWidget> _native)
{ native = _native; }

VtkOrientationMarkerWidgetWrap::~VtkOrientationMarkerWidgetWrap()
{ }

void VtkOrientationMarkerWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOrientationMarkerWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OrientationMarkerWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkOrientationMarkerWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOrientationMarkerWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorObserverWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorObserverWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOrientationMarkerWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInteractive", GetInteractive);
	Nan::SetPrototypeMethod(tpl, "getInteractive", GetInteractive);

	Nan::SetPrototypeMethod(tpl, "GetOrientationMarker", GetOrientationMarker);
	Nan::SetPrototypeMethod(tpl, "getOrientationMarker", GetOrientationMarker);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "InteractiveOff", InteractiveOff);
	Nan::SetPrototypeMethod(tpl, "interactiveOff", InteractiveOff);

	Nan::SetPrototypeMethod(tpl, "InteractiveOn", InteractiveOn);
	Nan::SetPrototypeMethod(tpl, "interactiveOn", InteractiveOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetInteractive", SetInteractive);
	Nan::SetPrototypeMethod(tpl, "setInteractive", SetInteractive);

	Nan::SetPrototypeMethod(tpl, "SetOrientationMarker", SetOrientationMarker);
	Nan::SetPrototypeMethod(tpl, "setOrientationMarker", SetOrientationMarker);

	Nan::SetPrototypeMethod(tpl, "SetOutlineColor", SetOutlineColor);
	Nan::SetPrototypeMethod(tpl, "setOutlineColor", SetOutlineColor);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	Nan::SetPrototypeMethod(tpl, "SetViewport", SetViewport);
	Nan::SetPrototypeMethod(tpl, "setViewport", SetViewport);

	ptpl.Reset( tpl );
}

void VtkOrientationMarkerWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOrientationMarkerWidget> native = vtkSmartPointer<vtkOrientationMarkerWidget>::New();
		VtkOrientationMarkerWidgetWrap* obj = new VtkOrientationMarkerWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOrientationMarkerWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOrientationMarkerWidgetWrap::GetInteractive(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractive();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOrientationMarkerWidgetWrap::GetOrientationMarker(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	vtkProp * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientationMarker();
		VtkPropWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropWrap *w = new VtkPropWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientationMarkerWidgetWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOrientationMarkerWidgetWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOrientationMarkerWidgetWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOrientationMarkerWidgetWrap::InteractiveOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InteractiveOff();
}

void VtkOrientationMarkerWidgetWrap::InteractiveOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InteractiveOn();
}

void VtkOrientationMarkerWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
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

void VtkOrientationMarkerWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	vtkOrientationMarkerWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOrientationMarkerWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOrientationMarkerWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOrientationMarkerWidgetWrap *w = new VtkOrientationMarkerWidgetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOrientationMarkerWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOrientationMarkerWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOrientationMarkerWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOrientationMarkerWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOrientationMarkerWidgetWrap *w = new VtkOrientationMarkerWidgetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientationMarkerWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
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

void VtkOrientationMarkerWidgetWrap::SetInteractive(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractive(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientationMarkerWidgetWrap::SetOrientationMarker(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientationMarker(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientationMarkerWidgetWrap::SetOutlineColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOutlineColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientationMarkerWidgetWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOrientationMarkerWidgetWrap::SetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOrientationMarkerWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkOrientationMarkerWidgetWrap>(info.Holder());
	vtkOrientationMarkerWidget *native = (vtkOrientationMarkerWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetViewport(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

