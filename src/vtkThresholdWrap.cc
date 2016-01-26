/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkThresholdWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkThresholdWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkThresholdWrap::ptpl;

VtkThresholdWrap::VtkThresholdWrap()
{ }

VtkThresholdWrap::VtkThresholdWrap(vtkSmartPointer<vtkThreshold> _native)
{ native = _native; }

VtkThresholdWrap::~VtkThresholdWrap()
{ }

void VtkThresholdWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkThreshold").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Threshold").ToLocalChecked(), ConstructorGetter);
}

void VtkThresholdWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkThresholdWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkThresholdWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AllScalarsOff", AllScalarsOff);
	Nan::SetPrototypeMethod(tpl, "allScalarsOff", AllScalarsOff);

	Nan::SetPrototypeMethod(tpl, "AllScalarsOn", AllScalarsOn);
	Nan::SetPrototypeMethod(tpl, "allScalarsOn", AllScalarsOn);

	Nan::SetPrototypeMethod(tpl, "GetAllScalars", GetAllScalars);
	Nan::SetPrototypeMethod(tpl, "getAllScalars", GetAllScalars);

	Nan::SetPrototypeMethod(tpl, "GetAttributeMode", GetAttributeMode);
	Nan::SetPrototypeMethod(tpl, "getAttributeMode", GetAttributeMode);

	Nan::SetPrototypeMethod(tpl, "GetAttributeModeAsString", GetAttributeModeAsString);
	Nan::SetPrototypeMethod(tpl, "getAttributeModeAsString", GetAttributeModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComponentMode", GetComponentMode);
	Nan::SetPrototypeMethod(tpl, "getComponentMode", GetComponentMode);

	Nan::SetPrototypeMethod(tpl, "GetComponentModeAsString", GetComponentModeAsString);
	Nan::SetPrototypeMethod(tpl, "getComponentModeAsString", GetComponentModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetComponentModeMaxValue", GetComponentModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getComponentModeMaxValue", GetComponentModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetComponentModeMinValue", GetComponentModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getComponentModeMinValue", GetComponentModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLowerThreshold", GetLowerThreshold);
	Nan::SetPrototypeMethod(tpl, "getLowerThreshold", GetLowerThreshold);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetPointsDataType", GetPointsDataType);
	Nan::SetPrototypeMethod(tpl, "getPointsDataType", GetPointsDataType);

	Nan::SetPrototypeMethod(tpl, "GetSelectedComponent", GetSelectedComponent);
	Nan::SetPrototypeMethod(tpl, "getSelectedComponent", GetSelectedComponent);

	Nan::SetPrototypeMethod(tpl, "GetSelectedComponentMaxValue", GetSelectedComponentMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSelectedComponentMaxValue", GetSelectedComponentMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSelectedComponentMinValue", GetSelectedComponentMinValue);
	Nan::SetPrototypeMethod(tpl, "getSelectedComponentMinValue", GetSelectedComponentMinValue);

	Nan::SetPrototypeMethod(tpl, "GetUpperThreshold", GetUpperThreshold);
	Nan::SetPrototypeMethod(tpl, "getUpperThreshold", GetUpperThreshold);

	Nan::SetPrototypeMethod(tpl, "GetUseContinuousCellRange", GetUseContinuousCellRange);
	Nan::SetPrototypeMethod(tpl, "getUseContinuousCellRange", GetUseContinuousCellRange);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAllScalars", SetAllScalars);
	Nan::SetPrototypeMethod(tpl, "setAllScalars", SetAllScalars);

	Nan::SetPrototypeMethod(tpl, "SetAttributeMode", SetAttributeMode);
	Nan::SetPrototypeMethod(tpl, "setAttributeMode", SetAttributeMode);

	Nan::SetPrototypeMethod(tpl, "SetAttributeModeToDefault", SetAttributeModeToDefault);
	Nan::SetPrototypeMethod(tpl, "setAttributeModeToDefault", SetAttributeModeToDefault);

	Nan::SetPrototypeMethod(tpl, "SetAttributeModeToUseCellData", SetAttributeModeToUseCellData);
	Nan::SetPrototypeMethod(tpl, "setAttributeModeToUseCellData", SetAttributeModeToUseCellData);

	Nan::SetPrototypeMethod(tpl, "SetAttributeModeToUsePointData", SetAttributeModeToUsePointData);
	Nan::SetPrototypeMethod(tpl, "setAttributeModeToUsePointData", SetAttributeModeToUsePointData);

	Nan::SetPrototypeMethod(tpl, "SetComponentMode", SetComponentMode);
	Nan::SetPrototypeMethod(tpl, "setComponentMode", SetComponentMode);

	Nan::SetPrototypeMethod(tpl, "SetComponentModeToUseAll", SetComponentModeToUseAll);
	Nan::SetPrototypeMethod(tpl, "setComponentModeToUseAll", SetComponentModeToUseAll);

	Nan::SetPrototypeMethod(tpl, "SetComponentModeToUseAny", SetComponentModeToUseAny);
	Nan::SetPrototypeMethod(tpl, "setComponentModeToUseAny", SetComponentModeToUseAny);

	Nan::SetPrototypeMethod(tpl, "SetComponentModeToUseSelected", SetComponentModeToUseSelected);
	Nan::SetPrototypeMethod(tpl, "setComponentModeToUseSelected", SetComponentModeToUseSelected);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetPointsDataType", SetPointsDataType);
	Nan::SetPrototypeMethod(tpl, "setPointsDataType", SetPointsDataType);

	Nan::SetPrototypeMethod(tpl, "SetPointsDataTypeToDouble", SetPointsDataTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setPointsDataTypeToDouble", SetPointsDataTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetPointsDataTypeToFloat", SetPointsDataTypeToFloat);
	Nan::SetPrototypeMethod(tpl, "setPointsDataTypeToFloat", SetPointsDataTypeToFloat);

	Nan::SetPrototypeMethod(tpl, "SetSelectedComponent", SetSelectedComponent);
	Nan::SetPrototypeMethod(tpl, "setSelectedComponent", SetSelectedComponent);

	Nan::SetPrototypeMethod(tpl, "SetUseContinuousCellRange", SetUseContinuousCellRange);
	Nan::SetPrototypeMethod(tpl, "setUseContinuousCellRange", SetUseContinuousCellRange);

	Nan::SetPrototypeMethod(tpl, "ThresholdBetween", ThresholdBetween);
	Nan::SetPrototypeMethod(tpl, "thresholdBetween", ThresholdBetween);

	Nan::SetPrototypeMethod(tpl, "ThresholdByLower", ThresholdByLower);
	Nan::SetPrototypeMethod(tpl, "thresholdByLower", ThresholdByLower);

	Nan::SetPrototypeMethod(tpl, "ThresholdByUpper", ThresholdByUpper);
	Nan::SetPrototypeMethod(tpl, "thresholdByUpper", ThresholdByUpper);

	Nan::SetPrototypeMethod(tpl, "UseContinuousCellRangeOff", UseContinuousCellRangeOff);
	Nan::SetPrototypeMethod(tpl, "useContinuousCellRangeOff", UseContinuousCellRangeOff);

	Nan::SetPrototypeMethod(tpl, "UseContinuousCellRangeOn", UseContinuousCellRangeOn);
	Nan::SetPrototypeMethod(tpl, "useContinuousCellRangeOn", UseContinuousCellRangeOn);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkThresholdWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkThreshold> native = vtkSmartPointer<vtkThreshold>::New();
		VtkThresholdWrap* obj = new VtkThresholdWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkThresholdWrap::AllScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AllScalarsOff();
}

void VtkThresholdWrap::AllScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AllScalarsOn();
}

void VtkThresholdWrap::GetAllScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAllScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdWrap::GetAttributeMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAttributeMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdWrap::GetAttributeModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAttributeModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkThresholdWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkThresholdWrap::GetComponentMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComponentMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdWrap::GetComponentModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComponentModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkThresholdWrap::GetComponentModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComponentModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdWrap::GetComponentModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComponentModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdWrap::GetLowerThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLowerThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdWrap::GetPointsDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointsDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdWrap::GetSelectedComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdWrap::GetSelectedComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedComponentMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdWrap::GetSelectedComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedComponentMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdWrap::GetUpperThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUpperThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdWrap::GetUseContinuousCellRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseContinuousCellRange();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThresholdWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
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

void VtkThresholdWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	vtkThreshold * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkThresholdWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkThresholdWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkThresholdWrap *w = new VtkThresholdWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkThresholdWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkThreshold * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkThresholdWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkThresholdWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkThresholdWrap *w = new VtkThresholdWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdWrap::SetAllScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAllScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdWrap::SetAttributeMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAttributeMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdWrap::SetAttributeModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAttributeModeToDefault();
}

void VtkThresholdWrap::SetAttributeModeToUseCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAttributeModeToUseCellData();
}

void VtkThresholdWrap::SetAttributeModeToUsePointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAttributeModeToUsePointData();
}

void VtkThresholdWrap::SetComponentMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComponentMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdWrap::SetComponentModeToUseAll(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetComponentModeToUseAll();
}

void VtkThresholdWrap::SetComponentModeToUseAny(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetComponentModeToUseAny();
}

void VtkThresholdWrap::SetComponentModeToUseSelected(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetComponentModeToUseSelected();
}

void VtkThresholdWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdWrap::SetPointsDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointsDataType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdWrap::SetPointsDataTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPointsDataTypeToDouble();
}

void VtkThresholdWrap::SetPointsDataTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPointsDataTypeToFloat();
}

void VtkThresholdWrap::SetSelectedComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdWrap::SetUseContinuousCellRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseContinuousCellRange(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdWrap::ThresholdBetween(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ThresholdBetween(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdWrap::ThresholdByLower(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ThresholdByLower(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdWrap::ThresholdByUpper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ThresholdByUpper(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThresholdWrap::UseContinuousCellRangeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseContinuousCellRangeOff();
}

void VtkThresholdWrap::UseContinuousCellRangeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkThresholdWrap>(info.Holder());
	vtkThreshold *native = (vtkThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseContinuousCellRangeOn();
}

