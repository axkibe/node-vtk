/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractWidgetWrap.h"
#include "vtkSliderWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSliderRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSliderWidgetWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkSliderWidgetWrap::ptpl;

VtkSliderWidgetWrap::VtkSliderWidgetWrap()
{ }

VtkSliderWidgetWrap::VtkSliderWidgetWrap(vtkSmartPointer<vtkSliderWidget> _native)
{ native = _native; }

VtkSliderWidgetWrap::~VtkSliderWidgetWrap()
{ }

void VtkSliderWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractWidgetWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractWidgetWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkSliderWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkSliderWidget").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("SliderWidget").ToLocalChecked(),tpl->GetFunction());
}

void VtkSliderWidgetWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetAnimationMode", GetAnimationMode);
	Nan::SetPrototypeMethod(tpl, "getAnimationMode", GetAnimationMode);

	Nan::SetPrototypeMethod(tpl, "GetAnimationModeMaxValue", GetAnimationModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAnimationModeMaxValue", GetAnimationModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAnimationModeMinValue", GetAnimationModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getAnimationModeMinValue", GetAnimationModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfAnimationSteps", GetNumberOfAnimationSteps);
	Nan::SetPrototypeMethod(tpl, "getNumberOfAnimationSteps", GetNumberOfAnimationSteps);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfAnimationStepsMaxValue", GetNumberOfAnimationStepsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfAnimationStepsMaxValue", GetNumberOfAnimationStepsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfAnimationStepsMinValue", GetNumberOfAnimationStepsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfAnimationStepsMinValue", GetNumberOfAnimationStepsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSliderRepresentation", GetSliderRepresentation);
	Nan::SetPrototypeMethod(tpl, "getSliderRepresentation", GetSliderRepresentation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAnimationMode", SetAnimationMode);
	Nan::SetPrototypeMethod(tpl, "setAnimationMode", SetAnimationMode);

	Nan::SetPrototypeMethod(tpl, "SetAnimationModeToAnimate", SetAnimationModeToAnimate);
	Nan::SetPrototypeMethod(tpl, "setAnimationModeToAnimate", SetAnimationModeToAnimate);

	Nan::SetPrototypeMethod(tpl, "SetAnimationModeToJump", SetAnimationModeToJump);
	Nan::SetPrototypeMethod(tpl, "setAnimationModeToJump", SetAnimationModeToJump);

	Nan::SetPrototypeMethod(tpl, "SetAnimationModeToOff", SetAnimationModeToOff);
	Nan::SetPrototypeMethod(tpl, "setAnimationModeToOff", SetAnimationModeToOff);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfAnimationSteps", SetNumberOfAnimationSteps);
	Nan::SetPrototypeMethod(tpl, "setNumberOfAnimationSteps", SetNumberOfAnimationSteps);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

}

void VtkSliderWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSliderWidget> native = vtkSmartPointer<vtkSliderWidget>::New();
		VtkSliderWidgetWrap* obj = new VtkSliderWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSliderWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkSliderWidgetWrap::GetAnimationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAnimationMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderWidgetWrap::GetAnimationModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAnimationModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderWidgetWrap::GetAnimationModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAnimationModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSliderWidgetWrap::GetNumberOfAnimationSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfAnimationSteps();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderWidgetWrap::GetNumberOfAnimationStepsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfAnimationStepsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderWidgetWrap::GetNumberOfAnimationStepsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfAnimationStepsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderWidgetWrap::GetSliderRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	vtkSliderRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliderRepresentation();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSliderRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSliderRepresentationWrap *w = new VtkSliderRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSliderWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
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

void VtkSliderWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	vtkSliderWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSliderWidgetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSliderWidgetWrap *w = new VtkSliderWidgetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSliderWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSliderWidget * r;
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
			Nan::New<v8::Function>(VtkSliderWidgetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSliderWidgetWrap *w = new VtkSliderWidgetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderWidgetWrap::SetAnimationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAnimationMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderWidgetWrap::SetAnimationModeToAnimate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAnimationModeToAnimate();
}

void VtkSliderWidgetWrap::SetAnimationModeToJump(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAnimationModeToJump();
}

void VtkSliderWidgetWrap::SetAnimationModeToOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAnimationModeToOff();
}

void VtkSliderWidgetWrap::SetNumberOfAnimationSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfAnimationSteps(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSliderWidgetWrap>(info.Holder());
	vtkSliderWidget *native = (vtkSliderWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkSliderRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkSliderRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

