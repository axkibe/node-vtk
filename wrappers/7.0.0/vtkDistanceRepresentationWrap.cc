/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWidgetRepresentationWrap.h"
#include "vtkDistanceRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkHandleRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDistanceRepresentationWrap::ptpl;

VtkDistanceRepresentationWrap::VtkDistanceRepresentationWrap()
{ }

VtkDistanceRepresentationWrap::VtkDistanceRepresentationWrap(vtkSmartPointer<vtkDistanceRepresentation> _native)
{ native = _native; }

VtkDistanceRepresentationWrap::~VtkDistanceRepresentationWrap()
{ }

void VtkDistanceRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDistanceRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DistanceRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkDistanceRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDistanceRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWidgetRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDistanceRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLabelFormat", GetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "getLabelFormat", GetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfRulerTicks", GetNumberOfRulerTicks);
	Nan::SetPrototypeMethod(tpl, "getNumberOfRulerTicks", GetNumberOfRulerTicks);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfRulerTicksMaxValue", GetNumberOfRulerTicksMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfRulerTicksMaxValue", GetNumberOfRulerTicksMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfRulerTicksMinValue", GetNumberOfRulerTicksMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfRulerTicksMinValue", GetNumberOfRulerTicksMinValue);

	Nan::SetPrototypeMethod(tpl, "GetPoint1Representation", GetPoint1Representation);
	Nan::SetPrototypeMethod(tpl, "getPoint1Representation", GetPoint1Representation);

	Nan::SetPrototypeMethod(tpl, "GetPoint2Representation", GetPoint2Representation);
	Nan::SetPrototypeMethod(tpl, "getPoint2Representation", GetPoint2Representation);

	Nan::SetPrototypeMethod(tpl, "GetRulerDistance", GetRulerDistance);
	Nan::SetPrototypeMethod(tpl, "getRulerDistance", GetRulerDistance);

	Nan::SetPrototypeMethod(tpl, "GetRulerDistanceMaxValue", GetRulerDistanceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRulerDistanceMaxValue", GetRulerDistanceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRulerDistanceMinValue", GetRulerDistanceMinValue);
	Nan::SetPrototypeMethod(tpl, "getRulerDistanceMinValue", GetRulerDistanceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRulerMode", GetRulerMode);
	Nan::SetPrototypeMethod(tpl, "getRulerMode", GetRulerMode);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "InstantiateHandleRepresentation", InstantiateHandleRepresentation);
	Nan::SetPrototypeMethod(tpl, "instantiateHandleRepresentation", InstantiateHandleRepresentation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RulerModeOff", RulerModeOff);
	Nan::SetPrototypeMethod(tpl, "rulerModeOff", RulerModeOff);

	Nan::SetPrototypeMethod(tpl, "RulerModeOn", RulerModeOn);
	Nan::SetPrototypeMethod(tpl, "rulerModeOn", RulerModeOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHandleRepresentation", SetHandleRepresentation);
	Nan::SetPrototypeMethod(tpl, "setHandleRepresentation", SetHandleRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetLabelFormat", SetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "setLabelFormat", SetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfRulerTicks", SetNumberOfRulerTicks);
	Nan::SetPrototypeMethod(tpl, "setNumberOfRulerTicks", SetNumberOfRulerTicks);

	Nan::SetPrototypeMethod(tpl, "SetRulerDistance", SetRulerDistance);
	Nan::SetPrototypeMethod(tpl, "setRulerDistance", SetRulerDistance);

	Nan::SetPrototypeMethod(tpl, "SetRulerMode", SetRulerMode);
	Nan::SetPrototypeMethod(tpl, "setRulerMode", SetRulerMode);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	Nan::SetPrototypeMethod(tpl, "StartWidgetInteraction", StartWidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "startWidgetInteraction", StartWidgetInteraction);

	Nan::SetPrototypeMethod(tpl, "WidgetInteraction", WidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "widgetInteraction", WidgetInteraction);

	ptpl.Reset( tpl );
}

void VtkDistanceRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkDistanceRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkDistanceRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->ComputeInteractionState(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDistanceRepresentationWrap::GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelFormat();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDistanceRepresentationWrap::GetNumberOfRulerTicks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfRulerTicks();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentationWrap::GetNumberOfRulerTicksMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfRulerTicksMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentationWrap::GetNumberOfRulerTicksMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfRulerTicksMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentationWrap::GetPoint1Representation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	vtkHandleRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoint1Representation();
		VtkHandleRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHandleRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHandleRepresentationWrap *w = new VtkHandleRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDistanceRepresentationWrap::GetPoint2Representation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	vtkHandleRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoint2Representation();
		VtkHandleRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHandleRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHandleRepresentationWrap *w = new VtkHandleRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDistanceRepresentationWrap::GetRulerDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRulerDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentationWrap::GetRulerDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRulerDistanceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentationWrap::GetRulerDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRulerDistanceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentationWrap::GetRulerMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRulerMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentationWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentationWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentationWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentationWrap::InstantiateHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InstantiateHandleRepresentation();
}

void VtkDistanceRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
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

void VtkDistanceRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	vtkDistanceRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDistanceRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDistanceRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDistanceRepresentationWrap *w = new VtkDistanceRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDistanceRepresentationWrap::RulerModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RulerModeOff();
}

void VtkDistanceRepresentationWrap::RulerModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RulerModeOn();
}

void VtkDistanceRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDistanceRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDistanceRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDistanceRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDistanceRepresentationWrap *w = new VtkDistanceRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentationWrap::SetHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHandleRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHandleRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHandleRepresentation(
			(vtkHandleRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentationWrap::SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelFormat(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentationWrap::SetNumberOfRulerTicks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfRulerTicks(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentationWrap::SetRulerDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRulerDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentationWrap::SetRulerMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRulerMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentationWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
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

void VtkDistanceRepresentationWrap::StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->StartWidgetInteraction(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->StartWidgetInteraction(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentationWrap::WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info.Holder());
	vtkDistanceRepresentation *native = (vtkDistanceRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->WidgetInteraction(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->WidgetInteraction(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

