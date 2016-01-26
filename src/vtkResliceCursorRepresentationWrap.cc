/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWidgetRepresentationWrap.h"
#include "vtkResliceCursorRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMatrix4x4Wrap.h"
#include "vtkImageAlgorithmWrap.h"
#include "vtkImageActorWrap.h"
#include "vtkScalarsToColorsWrap.h"
#include "vtkImageMapToColorsWrap.h"
#include "vtkResliceCursorWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkResliceCursorPolyDataAlgorithmWrap.h"
#include "vtkPlaneSourceWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkResliceCursorRepresentationWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkResliceCursorRepresentationWrap::ptpl;

VtkResliceCursorRepresentationWrap::VtkResliceCursorRepresentationWrap()
{ }

VtkResliceCursorRepresentationWrap::VtkResliceCursorRepresentationWrap(vtkSmartPointer<vtkResliceCursorRepresentation> _native)
{ native = _native; }

VtkResliceCursorRepresentationWrap::~VtkResliceCursorRepresentationWrap()
{ }

void VtkResliceCursorRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkResliceCursorRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ResliceCursorRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkResliceCursorRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkResliceCursorRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWidgetRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkResliceCursorRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ActivateText", ActivateText);
	Nan::SetPrototypeMethod(tpl, "activateText", ActivateText);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "DisplayTextOff", DisplayTextOff);
	Nan::SetPrototypeMethod(tpl, "displayTextOff", DisplayTextOff);

	Nan::SetPrototypeMethod(tpl, "DisplayTextOn", DisplayTextOn);
	Nan::SetPrototypeMethod(tpl, "displayTextOn", DisplayTextOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColorMap", GetColorMap);
	Nan::SetPrototypeMethod(tpl, "getColorMap", GetColorMap);

	Nan::SetPrototypeMethod(tpl, "GetCursorAlgorithm", GetCursorAlgorithm);
	Nan::SetPrototypeMethod(tpl, "getCursorAlgorithm", GetCursorAlgorithm);

	Nan::SetPrototypeMethod(tpl, "GetDisplayText", GetDisplayText);
	Nan::SetPrototypeMethod(tpl, "getDisplayText", GetDisplayText);

	Nan::SetPrototypeMethod(tpl, "GetImageActor", GetImageActor);
	Nan::SetPrototypeMethod(tpl, "getImageActor", GetImageActor);

	Nan::SetPrototypeMethod(tpl, "GetLevel", GetLevel);
	Nan::SetPrototypeMethod(tpl, "getLevel", GetLevel);

	Nan::SetPrototypeMethod(tpl, "GetLookupTable", GetLookupTable);
	Nan::SetPrototypeMethod(tpl, "getLookupTable", GetLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetManipulationMode", GetManipulationMode);
	Nan::SetPrototypeMethod(tpl, "getManipulationMode", GetManipulationMode);

	Nan::SetPrototypeMethod(tpl, "GetPlaneSource", GetPlaneSource);
	Nan::SetPrototypeMethod(tpl, "getPlaneSource", GetPlaneSource);

	Nan::SetPrototypeMethod(tpl, "GetReslice", GetReslice);
	Nan::SetPrototypeMethod(tpl, "getReslice", GetReslice);

	Nan::SetPrototypeMethod(tpl, "GetResliceAxes", GetResliceAxes);
	Nan::SetPrototypeMethod(tpl, "getResliceAxes", GetResliceAxes);

	Nan::SetPrototypeMethod(tpl, "GetResliceCursor", GetResliceCursor);
	Nan::SetPrototypeMethod(tpl, "getResliceCursor", GetResliceCursor);

	Nan::SetPrototypeMethod(tpl, "GetRestrictPlaneToVolume", GetRestrictPlaneToVolume);
	Nan::SetPrototypeMethod(tpl, "getRestrictPlaneToVolume", GetRestrictPlaneToVolume);

	Nan::SetPrototypeMethod(tpl, "GetShowReslicedImage", GetShowReslicedImage);
	Nan::SetPrototypeMethod(tpl, "getShowReslicedImage", GetShowReslicedImage);

	Nan::SetPrototypeMethod(tpl, "GetTextProperty", GetTextProperty);
	Nan::SetPrototypeMethod(tpl, "getTextProperty", GetTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetThicknessLabelFormat", GetThicknessLabelFormat);
	Nan::SetPrototypeMethod(tpl, "getThicknessLabelFormat", GetThicknessLabelFormat);

	Nan::SetPrototypeMethod(tpl, "GetThicknessLabelText", GetThicknessLabelText);
	Nan::SetPrototypeMethod(tpl, "getThicknessLabelText", GetThicknessLabelText);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetUseImageActor", GetUseImageActor);
	Nan::SetPrototypeMethod(tpl, "getUseImageActor", GetUseImageActor);

	Nan::SetPrototypeMethod(tpl, "GetWindow", GetWindow);
	Nan::SetPrototypeMethod(tpl, "getWindow", GetWindow);

	Nan::SetPrototypeMethod(tpl, "InitializeReslicePlane", InitializeReslicePlane);
	Nan::SetPrototypeMethod(tpl, "initializeReslicePlane", InitializeReslicePlane);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "ManageTextDisplay", ManageTextDisplay);
	Nan::SetPrototypeMethod(tpl, "manageTextDisplay", ManageTextDisplay);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ResetCamera", ResetCamera);
	Nan::SetPrototypeMethod(tpl, "resetCamera", ResetCamera);

	Nan::SetPrototypeMethod(tpl, "RestrictPlaneToVolumeOff", RestrictPlaneToVolumeOff);
	Nan::SetPrototypeMethod(tpl, "restrictPlaneToVolumeOff", RestrictPlaneToVolumeOff);

	Nan::SetPrototypeMethod(tpl, "RestrictPlaneToVolumeOn", RestrictPlaneToVolumeOn);
	Nan::SetPrototypeMethod(tpl, "restrictPlaneToVolumeOn", RestrictPlaneToVolumeOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColorMap", SetColorMap);
	Nan::SetPrototypeMethod(tpl, "setColorMap", SetColorMap);

	Nan::SetPrototypeMethod(tpl, "SetDisplayText", SetDisplayText);
	Nan::SetPrototypeMethod(tpl, "setDisplayText", SetDisplayText);

	Nan::SetPrototypeMethod(tpl, "SetLookupTable", SetLookupTable);
	Nan::SetPrototypeMethod(tpl, "setLookupTable", SetLookupTable);

	Nan::SetPrototypeMethod(tpl, "SetManipulationMode", SetManipulationMode);
	Nan::SetPrototypeMethod(tpl, "setManipulationMode", SetManipulationMode);

	Nan::SetPrototypeMethod(tpl, "SetRestrictPlaneToVolume", SetRestrictPlaneToVolume);
	Nan::SetPrototypeMethod(tpl, "setRestrictPlaneToVolume", SetRestrictPlaneToVolume);

	Nan::SetPrototypeMethod(tpl, "SetShowReslicedImage", SetShowReslicedImage);
	Nan::SetPrototypeMethod(tpl, "setShowReslicedImage", SetShowReslicedImage);

	Nan::SetPrototypeMethod(tpl, "SetTextProperty", SetTextProperty);
	Nan::SetPrototypeMethod(tpl, "setTextProperty", SetTextProperty);

	Nan::SetPrototypeMethod(tpl, "SetThicknessLabelFormat", SetThicknessLabelFormat);
	Nan::SetPrototypeMethod(tpl, "setThicknessLabelFormat", SetThicknessLabelFormat);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	Nan::SetPrototypeMethod(tpl, "SetUseImageActor", SetUseImageActor);
	Nan::SetPrototypeMethod(tpl, "setUseImageActor", SetUseImageActor);

	Nan::SetPrototypeMethod(tpl, "SetWindowLevel", SetWindowLevel);
	Nan::SetPrototypeMethod(tpl, "setWindowLevel", SetWindowLevel);

	Nan::SetPrototypeMethod(tpl, "ShowReslicedImageOff", ShowReslicedImageOff);
	Nan::SetPrototypeMethod(tpl, "showReslicedImageOff", ShowReslicedImageOff);

	Nan::SetPrototypeMethod(tpl, "ShowReslicedImageOn", ShowReslicedImageOn);
	Nan::SetPrototypeMethod(tpl, "showReslicedImageOn", ShowReslicedImageOn);

	Nan::SetPrototypeMethod(tpl, "UseImageActorOff", UseImageActorOff);
	Nan::SetPrototypeMethod(tpl, "useImageActorOff", UseImageActorOff);

	Nan::SetPrototypeMethod(tpl, "UseImageActorOn", UseImageActorOn);
	Nan::SetPrototypeMethod(tpl, "useImageActorOn", UseImageActorOn);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkResliceCursorRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkResliceCursorRepresentationWrap::ActivateText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ActivateText(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkResliceCursorRepresentationWrap::DisplayTextOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisplayTextOff();
}

void VtkResliceCursorRepresentationWrap::DisplayTextOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisplayTextOn();
}

void VtkResliceCursorRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkResliceCursorRepresentationWrap::GetColorMap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	vtkImageMapToColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorMap();
		VtkImageMapToColorsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageMapToColorsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageMapToColorsWrap *w = new VtkImageMapToColorsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorRepresentationWrap::GetCursorAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	vtkResliceCursorPolyDataAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCursorAlgorithm();
		VtkResliceCursorPolyDataAlgorithmWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkResliceCursorPolyDataAlgorithmWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorPolyDataAlgorithmWrap *w = new VtkResliceCursorPolyDataAlgorithmWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorRepresentationWrap::GetDisplayText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplayText();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorRepresentationWrap::GetImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	vtkImageActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageActor();
		VtkImageActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageActorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageActorWrap *w = new VtkImageActorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorRepresentationWrap::GetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorRepresentationWrap::GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	vtkScalarsToColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLookupTable();
		VtkScalarsToColorsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkScalarsToColorsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarsToColorsWrap *w = new VtkScalarsToColorsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorRepresentationWrap::GetManipulationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetManipulationMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorRepresentationWrap::GetPlaneSource(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	vtkPlaneSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlaneSource();
		VtkPlaneSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPlaneSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaneSourceWrap *w = new VtkPlaneSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorRepresentationWrap::GetReslice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	vtkImageAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReslice();
		VtkImageAlgorithmWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageAlgorithmWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageAlgorithmWrap *w = new VtkImageAlgorithmWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorRepresentationWrap::GetResliceAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	vtkMatrix4x4 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResliceAxes();
		VtkMatrix4x4Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMatrix4x4Wrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorRepresentationWrap::GetResliceCursor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	vtkResliceCursor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResliceCursor();
		VtkResliceCursorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkResliceCursorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorWrap *w = new VtkResliceCursorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorRepresentationWrap::GetRestrictPlaneToVolume(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRestrictPlaneToVolume();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorRepresentationWrap::GetShowReslicedImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowReslicedImage();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorRepresentationWrap::GetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextProperty();
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTextPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorRepresentationWrap::GetThicknessLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThicknessLabelFormat();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkResliceCursorRepresentationWrap::GetThicknessLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThicknessLabelText();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkResliceCursorRepresentationWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorRepresentationWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorRepresentationWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorRepresentationWrap::GetUseImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseImageActor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorRepresentationWrap::GetWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWindow();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorRepresentationWrap::InitializeReslicePlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitializeReslicePlane();
}

void VtkResliceCursorRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorRepresentationWrap::ManageTextDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ManageTextDisplay();
}

void VtkResliceCursorRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	vtkResliceCursorRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkResliceCursorRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkResliceCursorRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorRepresentationWrap *w = new VtkResliceCursorRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorRepresentationWrap::ResetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetCamera();
}

void VtkResliceCursorRepresentationWrap::RestrictPlaneToVolumeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RestrictPlaneToVolumeOff();
}

void VtkResliceCursorRepresentationWrap::RestrictPlaneToVolumeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RestrictPlaneToVolumeOn();
}

void VtkResliceCursorRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkResliceCursorRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkResliceCursorRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkResliceCursorRepresentationWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkResliceCursorRepresentationWrap *w = new VtkResliceCursorRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorRepresentationWrap::SetColorMap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageMapToColorsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageMapToColorsWrap *a0 = ObjectWrap::Unwrap<VtkImageMapToColorsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorMap(
			(vtkImageMapToColors *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorRepresentationWrap::SetDisplayText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplayText(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorRepresentationWrap::SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarsToColorsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarsToColorsWrap *a0 = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLookupTable(
			(vtkScalarsToColors *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorRepresentationWrap::SetManipulationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetManipulationMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorRepresentationWrap::SetRestrictPlaneToVolume(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRestrictPlaneToVolume(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorRepresentationWrap::SetShowReslicedImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShowReslicedImage(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorRepresentationWrap::SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextProperty(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorRepresentationWrap::SetThicknessLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThicknessLabelFormat(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorRepresentationWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorRepresentationWrap::SetUseImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseImageActor(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorRepresentationWrap::SetWindowLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetWindowLevel(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorRepresentationWrap::ShowReslicedImageOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShowReslicedImageOff();
}

void VtkResliceCursorRepresentationWrap::ShowReslicedImageOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShowReslicedImageOn();
}

void VtkResliceCursorRepresentationWrap::UseImageActorOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseImageActorOff();
}

void VtkResliceCursorRepresentationWrap::UseImageActorOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorRepresentationWrap>(info.Holder());
	vtkResliceCursorRepresentation *native = (vtkResliceCursorRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseImageActorOn();
}

