/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImplicitModellerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImplicitModellerWrap::ptpl;

VtkImplicitModellerWrap::VtkImplicitModellerWrap()
{ }

VtkImplicitModellerWrap::VtkImplicitModellerWrap(vtkSmartPointer<vtkImplicitModeller> _native)
{ native = _native; }

VtkImplicitModellerWrap::~VtkImplicitModellerWrap()
{ }

void VtkImplicitModellerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImplicitModeller").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImplicitModeller").ToLocalChecked(), ConstructorGetter);
}

void VtkImplicitModellerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImplicitModellerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImplicitModellerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AdjustBoundsOff", AdjustBoundsOff);
	Nan::SetPrototypeMethod(tpl, "adjustBoundsOff", AdjustBoundsOff);

	Nan::SetPrototypeMethod(tpl, "AdjustBoundsOn", AdjustBoundsOn);
	Nan::SetPrototypeMethod(tpl, "adjustBoundsOn", AdjustBoundsOn);

	Nan::SetPrototypeMethod(tpl, "Append", Append);
	Nan::SetPrototypeMethod(tpl, "append", Append);

	Nan::SetPrototypeMethod(tpl, "CappingOff", CappingOff);
	Nan::SetPrototypeMethod(tpl, "cappingOff", CappingOff);

	Nan::SetPrototypeMethod(tpl, "CappingOn", CappingOn);
	Nan::SetPrototypeMethod(tpl, "cappingOn", CappingOn);

	Nan::SetPrototypeMethod(tpl, "ComputeModelBounds", ComputeModelBounds);
	Nan::SetPrototypeMethod(tpl, "computeModelBounds", ComputeModelBounds);

	Nan::SetPrototypeMethod(tpl, "EndAppend", EndAppend);
	Nan::SetPrototypeMethod(tpl, "endAppend", EndAppend);

	Nan::SetPrototypeMethod(tpl, "GetAdjustBounds", GetAdjustBounds);
	Nan::SetPrototypeMethod(tpl, "getAdjustBounds", GetAdjustBounds);

	Nan::SetPrototypeMethod(tpl, "GetAdjustDistance", GetAdjustDistance);
	Nan::SetPrototypeMethod(tpl, "getAdjustDistance", GetAdjustDistance);

	Nan::SetPrototypeMethod(tpl, "GetAdjustDistanceMaxValue", GetAdjustDistanceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAdjustDistanceMaxValue", GetAdjustDistanceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAdjustDistanceMinValue", GetAdjustDistanceMinValue);
	Nan::SetPrototypeMethod(tpl, "getAdjustDistanceMinValue", GetAdjustDistanceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetCapValue", GetCapValue);
	Nan::SetPrototypeMethod(tpl, "getCapValue", GetCapValue);

	Nan::SetPrototypeMethod(tpl, "GetCapping", GetCapping);
	Nan::SetPrototypeMethod(tpl, "getCapping", GetCapping);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLocatorMaxLevel", GetLocatorMaxLevel);
	Nan::SetPrototypeMethod(tpl, "getLocatorMaxLevel", GetLocatorMaxLevel);

	Nan::SetPrototypeMethod(tpl, "GetMaximumDistance", GetMaximumDistance);
	Nan::SetPrototypeMethod(tpl, "getMaximumDistance", GetMaximumDistance);

	Nan::SetPrototypeMethod(tpl, "GetMaximumDistanceMaxValue", GetMaximumDistanceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumDistanceMaxValue", GetMaximumDistanceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumDistanceMinValue", GetMaximumDistanceMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumDistanceMinValue", GetMaximumDistanceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfThreads", GetNumberOfThreads);
	Nan::SetPrototypeMethod(tpl, "getNumberOfThreads", GetNumberOfThreads);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfThreadsMaxValue", GetNumberOfThreadsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfThreadsMaxValue", GetNumberOfThreadsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfThreadsMinValue", GetNumberOfThreadsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfThreadsMinValue", GetNumberOfThreadsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputScalarType", GetOutputScalarType);
	Nan::SetPrototypeMethod(tpl, "getOutputScalarType", GetOutputScalarType);

	Nan::SetPrototypeMethod(tpl, "GetProcessMode", GetProcessMode);
	Nan::SetPrototypeMethod(tpl, "getProcessMode", GetProcessMode);

	Nan::SetPrototypeMethod(tpl, "GetProcessModeAsString", GetProcessModeAsString);
	Nan::SetPrototypeMethod(tpl, "getProcessModeAsString", GetProcessModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetProcessModeMaxValue", GetProcessModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getProcessModeMaxValue", GetProcessModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetProcessModeMinValue", GetProcessModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getProcessModeMinValue", GetProcessModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetScaleToMaximumDistance", GetScaleToMaximumDistance);
	Nan::SetPrototypeMethod(tpl, "getScaleToMaximumDistance", GetScaleToMaximumDistance);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScaleToMaximumDistanceOff", ScaleToMaximumDistanceOff);
	Nan::SetPrototypeMethod(tpl, "scaleToMaximumDistanceOff", ScaleToMaximumDistanceOff);

	Nan::SetPrototypeMethod(tpl, "ScaleToMaximumDistanceOn", ScaleToMaximumDistanceOn);
	Nan::SetPrototypeMethod(tpl, "scaleToMaximumDistanceOn", ScaleToMaximumDistanceOn);

	Nan::SetPrototypeMethod(tpl, "SetAdjustBounds", SetAdjustBounds);
	Nan::SetPrototypeMethod(tpl, "setAdjustBounds", SetAdjustBounds);

	Nan::SetPrototypeMethod(tpl, "SetAdjustDistance", SetAdjustDistance);
	Nan::SetPrototypeMethod(tpl, "setAdjustDistance", SetAdjustDistance);

	Nan::SetPrototypeMethod(tpl, "SetCapValue", SetCapValue);
	Nan::SetPrototypeMethod(tpl, "setCapValue", SetCapValue);

	Nan::SetPrototypeMethod(tpl, "SetCapping", SetCapping);
	Nan::SetPrototypeMethod(tpl, "setCapping", SetCapping);

	Nan::SetPrototypeMethod(tpl, "SetLocatorMaxLevel", SetLocatorMaxLevel);
	Nan::SetPrototypeMethod(tpl, "setLocatorMaxLevel", SetLocatorMaxLevel);

	Nan::SetPrototypeMethod(tpl, "SetMaximumDistance", SetMaximumDistance);
	Nan::SetPrototypeMethod(tpl, "setMaximumDistance", SetMaximumDistance);

	Nan::SetPrototypeMethod(tpl, "SetModelBounds", SetModelBounds);
	Nan::SetPrototypeMethod(tpl, "setModelBounds", SetModelBounds);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfThreads", SetNumberOfThreads);
	Nan::SetPrototypeMethod(tpl, "setNumberOfThreads", SetNumberOfThreads);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarType", SetOutputScalarType);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarType", SetOutputScalarType);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToChar", SetOutputScalarTypeToChar);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToChar", SetOutputScalarTypeToChar);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToDouble", SetOutputScalarTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToDouble", SetOutputScalarTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToFloat", SetOutputScalarTypeToFloat);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToFloat", SetOutputScalarTypeToFloat);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToInt", SetOutputScalarTypeToInt);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToInt", SetOutputScalarTypeToInt);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToLong", SetOutputScalarTypeToLong);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToLong", SetOutputScalarTypeToLong);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToShort", SetOutputScalarTypeToShort);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToShort", SetOutputScalarTypeToShort);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedChar", SetOutputScalarTypeToUnsignedChar);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedChar", SetOutputScalarTypeToUnsignedChar);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedInt", SetOutputScalarTypeToUnsignedInt);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedInt", SetOutputScalarTypeToUnsignedInt);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedLong", SetOutputScalarTypeToUnsignedLong);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedLong", SetOutputScalarTypeToUnsignedLong);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedShort", SetOutputScalarTypeToUnsignedShort);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedShort", SetOutputScalarTypeToUnsignedShort);

	Nan::SetPrototypeMethod(tpl, "SetProcessMode", SetProcessMode);
	Nan::SetPrototypeMethod(tpl, "setProcessMode", SetProcessMode);

	Nan::SetPrototypeMethod(tpl, "SetProcessModeToPerCell", SetProcessModeToPerCell);
	Nan::SetPrototypeMethod(tpl, "setProcessModeToPerCell", SetProcessModeToPerCell);

	Nan::SetPrototypeMethod(tpl, "SetProcessModeToPerVoxel", SetProcessModeToPerVoxel);
	Nan::SetPrototypeMethod(tpl, "setProcessModeToPerVoxel", SetProcessModeToPerVoxel);

	Nan::SetPrototypeMethod(tpl, "SetSampleDimensions", SetSampleDimensions);
	Nan::SetPrototypeMethod(tpl, "setSampleDimensions", SetSampleDimensions);

	Nan::SetPrototypeMethod(tpl, "SetScaleToMaximumDistance", SetScaleToMaximumDistance);
	Nan::SetPrototypeMethod(tpl, "setScaleToMaximumDistance", SetScaleToMaximumDistance);

	Nan::SetPrototypeMethod(tpl, "StartAppend", StartAppend);
	Nan::SetPrototypeMethod(tpl, "startAppend", StartAppend);

	ptpl.Reset( tpl );
}

void VtkImplicitModellerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImplicitModeller> native = vtkSmartPointer<vtkImplicitModeller>::New();
		VtkImplicitModellerWrap* obj = new VtkImplicitModellerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImplicitModellerWrap::AdjustBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AdjustBoundsOff();
}

void VtkImplicitModellerWrap::AdjustBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AdjustBoundsOn();
}

void VtkImplicitModellerWrap::Append(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Append(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::CappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOff();
}

void VtkImplicitModellerWrap::CappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOn();
}

void VtkImplicitModellerWrap::ComputeModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->ComputeModelBounds(
			(vtkDataSet *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::EndAppend(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndAppend();
}

void VtkImplicitModellerWrap::GetAdjustBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAdjustBounds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetAdjustDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAdjustDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetAdjustDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAdjustDistanceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetAdjustDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAdjustDistanceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetCapValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCapValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCapping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImplicitModellerWrap::GetLocatorMaxLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocatorMaxLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetMaximumDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumDistanceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetMaximumDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumDistanceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfThreads();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetNumberOfThreadsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfThreadsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetNumberOfThreadsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfThreadsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetProcessMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetProcessModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImplicitModellerWrap::GetProcessModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetProcessModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::GetScaleToMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleToMaximumDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitModellerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
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

void VtkImplicitModellerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	vtkImplicitModeller * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImplicitModellerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImplicitModellerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImplicitModellerWrap *w = new VtkImplicitModellerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImplicitModellerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImplicitModeller * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImplicitModellerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImplicitModellerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImplicitModellerWrap *w = new VtkImplicitModellerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::ScaleToMaximumDistanceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScaleToMaximumDistanceOff();
}

void VtkImplicitModellerWrap::ScaleToMaximumDistanceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScaleToMaximumDistanceOn();
}

void VtkImplicitModellerWrap::SetAdjustBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAdjustBounds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::SetAdjustDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAdjustDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::SetCapValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCapValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::SetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCapping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::SetLocatorMaxLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocatorMaxLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::SetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetModelBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::SetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfThreads(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::SetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputScalarType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::SetOutputScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToChar();
}

void VtkImplicitModellerWrap::SetOutputScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToDouble();
}

void VtkImplicitModellerWrap::SetOutputScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToFloat();
}

void VtkImplicitModellerWrap::SetOutputScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToInt();
}

void VtkImplicitModellerWrap::SetOutputScalarTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToLong();
}

void VtkImplicitModellerWrap::SetOutputScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToShort();
}

void VtkImplicitModellerWrap::SetOutputScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedChar();
}

void VtkImplicitModellerWrap::SetOutputScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedInt();
}

void VtkImplicitModellerWrap::SetOutputScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedLong();
}

void VtkImplicitModellerWrap::SetOutputScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedShort();
}

void VtkImplicitModellerWrap::SetProcessMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProcessMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::SetProcessModeToPerCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProcessModeToPerCell();
}

void VtkImplicitModellerWrap::SetProcessModeToPerVoxel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProcessModeToPerVoxel();
}

void VtkImplicitModellerWrap::SetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetSampleDimensions(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::SetScaleToMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleToMaximumDistance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitModellerWrap::StartAppend(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitModellerWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitModellerWrap>(info.Holder());
	vtkImplicitModeller *native = (vtkImplicitModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartAppend();
}

