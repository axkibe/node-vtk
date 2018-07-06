/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkWidgetRepresentationWrap.h"
#include "vtkSliderRepresentationWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSliderRepresentationWrap::ptpl;

VtkSliderRepresentationWrap::VtkSliderRepresentationWrap()
{ }

VtkSliderRepresentationWrap::VtkSliderRepresentationWrap(vtkSmartPointer<vtkSliderRepresentation> _native)
{ native = _native; }

VtkSliderRepresentationWrap::~VtkSliderRepresentationWrap()
{ }

void VtkSliderRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSliderRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SliderRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkSliderRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSliderRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWidgetRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSliderRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCurrentT", GetCurrentT);
	Nan::SetPrototypeMethod(tpl, "getCurrentT", GetCurrentT);

	Nan::SetPrototypeMethod(tpl, "GetEndCapLength", GetEndCapLength);
	Nan::SetPrototypeMethod(tpl, "getEndCapLength", GetEndCapLength);

	Nan::SetPrototypeMethod(tpl, "GetEndCapLengthMaxValue", GetEndCapLengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getEndCapLengthMaxValue", GetEndCapLengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetEndCapLengthMinValue", GetEndCapLengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getEndCapLengthMinValue", GetEndCapLengthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetEndCapWidth", GetEndCapWidth);
	Nan::SetPrototypeMethod(tpl, "getEndCapWidth", GetEndCapWidth);

	Nan::SetPrototypeMethod(tpl, "GetEndCapWidthMaxValue", GetEndCapWidthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getEndCapWidthMaxValue", GetEndCapWidthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetEndCapWidthMinValue", GetEndCapWidthMinValue);
	Nan::SetPrototypeMethod(tpl, "getEndCapWidthMinValue", GetEndCapWidthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLabelFormat", GetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "getLabelFormat", GetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "GetLabelHeight", GetLabelHeight);
	Nan::SetPrototypeMethod(tpl, "getLabelHeight", GetLabelHeight);

	Nan::SetPrototypeMethod(tpl, "GetLabelHeightMaxValue", GetLabelHeightMaxValue);
	Nan::SetPrototypeMethod(tpl, "getLabelHeightMaxValue", GetLabelHeightMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetLabelHeightMinValue", GetLabelHeightMinValue);
	Nan::SetPrototypeMethod(tpl, "getLabelHeightMinValue", GetLabelHeightMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumValue", GetMaximumValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumValue", GetMaximumValue);

	Nan::SetPrototypeMethod(tpl, "GetMinimumValue", GetMinimumValue);
	Nan::SetPrototypeMethod(tpl, "getMinimumValue", GetMinimumValue);

	Nan::SetPrototypeMethod(tpl, "GetPickedT", GetPickedT);
	Nan::SetPrototypeMethod(tpl, "getPickedT", GetPickedT);

	Nan::SetPrototypeMethod(tpl, "GetShowSliderLabel", GetShowSliderLabel);
	Nan::SetPrototypeMethod(tpl, "getShowSliderLabel", GetShowSliderLabel);

	Nan::SetPrototypeMethod(tpl, "GetSliderLength", GetSliderLength);
	Nan::SetPrototypeMethod(tpl, "getSliderLength", GetSliderLength);

	Nan::SetPrototypeMethod(tpl, "GetSliderLengthMaxValue", GetSliderLengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSliderLengthMaxValue", GetSliderLengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSliderLengthMinValue", GetSliderLengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getSliderLengthMinValue", GetSliderLengthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSliderWidth", GetSliderWidth);
	Nan::SetPrototypeMethod(tpl, "getSliderWidth", GetSliderWidth);

	Nan::SetPrototypeMethod(tpl, "GetSliderWidthMaxValue", GetSliderWidthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSliderWidthMaxValue", GetSliderWidthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSliderWidthMinValue", GetSliderWidthMinValue);
	Nan::SetPrototypeMethod(tpl, "getSliderWidthMinValue", GetSliderWidthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTitleHeight", GetTitleHeight);
	Nan::SetPrototypeMethod(tpl, "getTitleHeight", GetTitleHeight);

	Nan::SetPrototypeMethod(tpl, "GetTitleHeightMaxValue", GetTitleHeightMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTitleHeightMaxValue", GetTitleHeightMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTitleHeightMinValue", GetTitleHeightMinValue);
	Nan::SetPrototypeMethod(tpl, "getTitleHeightMinValue", GetTitleHeightMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTitleText", GetTitleText);
	Nan::SetPrototypeMethod(tpl, "getTitleText", GetTitleText);

	Nan::SetPrototypeMethod(tpl, "GetTubeWidth", GetTubeWidth);
	Nan::SetPrototypeMethod(tpl, "getTubeWidth", GetTubeWidth);

	Nan::SetPrototypeMethod(tpl, "GetTubeWidthMaxValue", GetTubeWidthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTubeWidthMaxValue", GetTubeWidthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTubeWidthMinValue", GetTubeWidthMinValue);
	Nan::SetPrototypeMethod(tpl, "getTubeWidthMinValue", GetTubeWidthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEndCapLength", SetEndCapLength);
	Nan::SetPrototypeMethod(tpl, "setEndCapLength", SetEndCapLength);

	Nan::SetPrototypeMethod(tpl, "SetEndCapWidth", SetEndCapWidth);
	Nan::SetPrototypeMethod(tpl, "setEndCapWidth", SetEndCapWidth);

	Nan::SetPrototypeMethod(tpl, "SetLabelFormat", SetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "setLabelFormat", SetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "SetLabelHeight", SetLabelHeight);
	Nan::SetPrototypeMethod(tpl, "setLabelHeight", SetLabelHeight);

	Nan::SetPrototypeMethod(tpl, "SetMaximumValue", SetMaximumValue);
	Nan::SetPrototypeMethod(tpl, "setMaximumValue", SetMaximumValue);

	Nan::SetPrototypeMethod(tpl, "SetMinimumValue", SetMinimumValue);
	Nan::SetPrototypeMethod(tpl, "setMinimumValue", SetMinimumValue);

	Nan::SetPrototypeMethod(tpl, "SetShowSliderLabel", SetShowSliderLabel);
	Nan::SetPrototypeMethod(tpl, "setShowSliderLabel", SetShowSliderLabel);

	Nan::SetPrototypeMethod(tpl, "SetSliderLength", SetSliderLength);
	Nan::SetPrototypeMethod(tpl, "setSliderLength", SetSliderLength);

	Nan::SetPrototypeMethod(tpl, "SetSliderWidth", SetSliderWidth);
	Nan::SetPrototypeMethod(tpl, "setSliderWidth", SetSliderWidth);

	Nan::SetPrototypeMethod(tpl, "SetTitleHeight", SetTitleHeight);
	Nan::SetPrototypeMethod(tpl, "setTitleHeight", SetTitleHeight);

	Nan::SetPrototypeMethod(tpl, "SetTitleText", SetTitleText);
	Nan::SetPrototypeMethod(tpl, "setTitleText", SetTitleText);

	Nan::SetPrototypeMethod(tpl, "SetTubeWidth", SetTubeWidth);
	Nan::SetPrototypeMethod(tpl, "setTubeWidth", SetTubeWidth);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	Nan::SetPrototypeMethod(tpl, "ShowSliderLabelOff", ShowSliderLabelOff);
	Nan::SetPrototypeMethod(tpl, "showSliderLabelOff", ShowSliderLabelOff);

	Nan::SetPrototypeMethod(tpl, "ShowSliderLabelOn", ShowSliderLabelOn);
	Nan::SetPrototypeMethod(tpl, "showSliderLabelOn", ShowSliderLabelOn);

#ifdef VTK_NODE_PLUS_VTKSLIDERREPRESENTATIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSLIDERREPRESENTATIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSliderRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkSliderRepresentationWrap::GetCurrentT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentT();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetEndCapLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndCapLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetEndCapLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndCapLengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetEndCapLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndCapLengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetEndCapWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndCapWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetEndCapWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndCapWidthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetEndCapWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndCapWidthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelFormat();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSliderRepresentationWrap::GetLabelHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetLabelHeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelHeightMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetLabelHeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelHeightMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetMaximumValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetMinimumValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinimumValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetPickedT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickedT();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetShowSliderLabel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowSliderLabel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetSliderLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliderLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetSliderLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliderLengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetSliderLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliderLengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetSliderWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliderWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetSliderWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliderWidthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetSliderWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliderWidthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetTitleHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTitleHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetTitleHeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTitleHeightMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetTitleHeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTitleHeightMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetTitleText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTitleText();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSliderRepresentationWrap::GetTubeWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTubeWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetTubeWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTubeWidthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetTubeWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTubeWidthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSliderRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	vtkSliderRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSliderRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSliderRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSliderRepresentationWrap *w = new VtkSliderRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSliderRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkSliderRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkSliderRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSliderRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSliderRepresentationWrap *w = new VtkSliderRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderRepresentationWrap::SetEndCapLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEndCapLength(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderRepresentationWrap::SetEndCapWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEndCapWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderRepresentationWrap::SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
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

void VtkSliderRepresentationWrap::SetLabelHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelHeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderRepresentationWrap::SetMaximumValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderRepresentationWrap::SetMinimumValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinimumValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderRepresentationWrap::SetShowSliderLabel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShowSliderLabel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderRepresentationWrap::SetSliderLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSliderLength(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderRepresentationWrap::SetSliderWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSliderWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderRepresentationWrap::SetTitleHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTitleHeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderRepresentationWrap::SetTitleText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTitleText(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderRepresentationWrap::SetTubeWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTubeWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderRepresentationWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSliderRepresentationWrap::ShowSliderLabelOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShowSliderLabelOff();
}

void VtkSliderRepresentationWrap::ShowSliderLabelOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info.Holder());
	vtkSliderRepresentation *native = (vtkSliderRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShowSliderLabelOn();
}

