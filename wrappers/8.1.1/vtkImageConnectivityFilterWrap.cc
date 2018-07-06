/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageAlgorithmWrap.h"
#include "vtkImageConnectivityFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkImageStencilDataWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkIntArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageConnectivityFilterWrap::ptpl;

VtkImageConnectivityFilterWrap::VtkImageConnectivityFilterWrap()
{ }

VtkImageConnectivityFilterWrap::VtkImageConnectivityFilterWrap(vtkSmartPointer<vtkImageConnectivityFilter> _native)
{ native = _native; }

VtkImageConnectivityFilterWrap::~VtkImageConnectivityFilterWrap()
{ }

void VtkImageConnectivityFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageConnectivityFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageConnectivityFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkImageConnectivityFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageConnectivityFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageConnectivityFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GenerateRegionExtentsOff", GenerateRegionExtentsOff);
	Nan::SetPrototypeMethod(tpl, "generateRegionExtentsOff", GenerateRegionExtentsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateRegionExtentsOn", GenerateRegionExtentsOn);
	Nan::SetPrototypeMethod(tpl, "generateRegionExtentsOn", GenerateRegionExtentsOn);

	Nan::SetPrototypeMethod(tpl, "GetActiveComponent", GetActiveComponent);
	Nan::SetPrototypeMethod(tpl, "getActiveComponent", GetActiveComponent);

	Nan::SetPrototypeMethod(tpl, "GetExtractedRegionExtents", GetExtractedRegionExtents);
	Nan::SetPrototypeMethod(tpl, "getExtractedRegionExtents", GetExtractedRegionExtents);

	Nan::SetPrototypeMethod(tpl, "GetExtractedRegionLabels", GetExtractedRegionLabels);
	Nan::SetPrototypeMethod(tpl, "getExtractedRegionLabels", GetExtractedRegionLabels);

	Nan::SetPrototypeMethod(tpl, "GetExtractedRegionSeedIds", GetExtractedRegionSeedIds);
	Nan::SetPrototypeMethod(tpl, "getExtractedRegionSeedIds", GetExtractedRegionSeedIds);

	Nan::SetPrototypeMethod(tpl, "GetExtractedRegionSizes", GetExtractedRegionSizes);
	Nan::SetPrototypeMethod(tpl, "getExtractedRegionSizes", GetExtractedRegionSizes);

	Nan::SetPrototypeMethod(tpl, "GetExtractionMode", GetExtractionMode);
	Nan::SetPrototypeMethod(tpl, "getExtractionMode", GetExtractionMode);

	Nan::SetPrototypeMethod(tpl, "GetExtractionModeAsString", GetExtractionModeAsString);
	Nan::SetPrototypeMethod(tpl, "getExtractionModeAsString", GetExtractionModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetGenerateRegionExtents", GetGenerateRegionExtents);
	Nan::SetPrototypeMethod(tpl, "getGenerateRegionExtents", GetGenerateRegionExtents);

	Nan::SetPrototypeMethod(tpl, "GetLabelConstantValue", GetLabelConstantValue);
	Nan::SetPrototypeMethod(tpl, "getLabelConstantValue", GetLabelConstantValue);

	Nan::SetPrototypeMethod(tpl, "GetLabelMode", GetLabelMode);
	Nan::SetPrototypeMethod(tpl, "getLabelMode", GetLabelMode);

	Nan::SetPrototypeMethod(tpl, "GetLabelModeAsString", GetLabelModeAsString);
	Nan::SetPrototypeMethod(tpl, "getLabelModeAsString", GetLabelModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetLabelScalarType", GetLabelScalarType);
	Nan::SetPrototypeMethod(tpl, "getLabelScalarType", GetLabelScalarType);

	Nan::SetPrototypeMethod(tpl, "GetLabelScalarTypeAsString", GetLabelScalarTypeAsString);
	Nan::SetPrototypeMethod(tpl, "getLabelScalarTypeAsString", GetLabelScalarTypeAsString);

	Nan::SetPrototypeMethod(tpl, "GetScalarRange", GetScalarRange);
	Nan::SetPrototypeMethod(tpl, "getScalarRange", GetScalarRange);

	Nan::SetPrototypeMethod(tpl, "GetSeedConnection", GetSeedConnection);
	Nan::SetPrototypeMethod(tpl, "getSeedConnection", GetSeedConnection);

	Nan::SetPrototypeMethod(tpl, "GetStencilConnection", GetStencilConnection);
	Nan::SetPrototypeMethod(tpl, "getStencilConnection", GetStencilConnection);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetActiveComponent", SetActiveComponent);
	Nan::SetPrototypeMethod(tpl, "setActiveComponent", SetActiveComponent);

	Nan::SetPrototypeMethod(tpl, "SetExtractionMode", SetExtractionMode);
	Nan::SetPrototypeMethod(tpl, "setExtractionMode", SetExtractionMode);

	Nan::SetPrototypeMethod(tpl, "SetExtractionModeToAllRegions", SetExtractionModeToAllRegions);
	Nan::SetPrototypeMethod(tpl, "setExtractionModeToAllRegions", SetExtractionModeToAllRegions);

	Nan::SetPrototypeMethod(tpl, "SetExtractionModeToLargestRegion", SetExtractionModeToLargestRegion);
	Nan::SetPrototypeMethod(tpl, "setExtractionModeToLargestRegion", SetExtractionModeToLargestRegion);

	Nan::SetPrototypeMethod(tpl, "SetExtractionModeToSeededRegions", SetExtractionModeToSeededRegions);
	Nan::SetPrototypeMethod(tpl, "setExtractionModeToSeededRegions", SetExtractionModeToSeededRegions);

	Nan::SetPrototypeMethod(tpl, "SetGenerateRegionExtents", SetGenerateRegionExtents);
	Nan::SetPrototypeMethod(tpl, "setGenerateRegionExtents", SetGenerateRegionExtents);

	Nan::SetPrototypeMethod(tpl, "SetLabelConstantValue", SetLabelConstantValue);
	Nan::SetPrototypeMethod(tpl, "setLabelConstantValue", SetLabelConstantValue);

	Nan::SetPrototypeMethod(tpl, "SetLabelMode", SetLabelMode);
	Nan::SetPrototypeMethod(tpl, "setLabelMode", SetLabelMode);

	Nan::SetPrototypeMethod(tpl, "SetLabelModeToConstantValue", SetLabelModeToConstantValue);
	Nan::SetPrototypeMethod(tpl, "setLabelModeToConstantValue", SetLabelModeToConstantValue);

	Nan::SetPrototypeMethod(tpl, "SetLabelModeToSeedScalar", SetLabelModeToSeedScalar);
	Nan::SetPrototypeMethod(tpl, "setLabelModeToSeedScalar", SetLabelModeToSeedScalar);

	Nan::SetPrototypeMethod(tpl, "SetLabelModeToSizeRank", SetLabelModeToSizeRank);
	Nan::SetPrototypeMethod(tpl, "setLabelModeToSizeRank", SetLabelModeToSizeRank);

	Nan::SetPrototypeMethod(tpl, "SetLabelScalarType", SetLabelScalarType);
	Nan::SetPrototypeMethod(tpl, "setLabelScalarType", SetLabelScalarType);

	Nan::SetPrototypeMethod(tpl, "SetLabelScalarTypeToInt", SetLabelScalarTypeToInt);
	Nan::SetPrototypeMethod(tpl, "setLabelScalarTypeToInt", SetLabelScalarTypeToInt);

	Nan::SetPrototypeMethod(tpl, "SetLabelScalarTypeToShort", SetLabelScalarTypeToShort);
	Nan::SetPrototypeMethod(tpl, "setLabelScalarTypeToShort", SetLabelScalarTypeToShort);

	Nan::SetPrototypeMethod(tpl, "SetLabelScalarTypeToUnsignedChar", SetLabelScalarTypeToUnsignedChar);
	Nan::SetPrototypeMethod(tpl, "setLabelScalarTypeToUnsignedChar", SetLabelScalarTypeToUnsignedChar);

	Nan::SetPrototypeMethod(tpl, "SetLabelScalarTypeToUnsignedShort", SetLabelScalarTypeToUnsignedShort);
	Nan::SetPrototypeMethod(tpl, "setLabelScalarTypeToUnsignedShort", SetLabelScalarTypeToUnsignedShort);

	Nan::SetPrototypeMethod(tpl, "SetScalarRange", SetScalarRange);
	Nan::SetPrototypeMethod(tpl, "setScalarRange", SetScalarRange);

	Nan::SetPrototypeMethod(tpl, "SetSeedConnection", SetSeedConnection);
	Nan::SetPrototypeMethod(tpl, "setSeedConnection", SetSeedConnection);

	Nan::SetPrototypeMethod(tpl, "SetSeedData", SetSeedData);
	Nan::SetPrototypeMethod(tpl, "setSeedData", SetSeedData);

	Nan::SetPrototypeMethod(tpl, "SetStencilConnection", SetStencilConnection);
	Nan::SetPrototypeMethod(tpl, "setStencilConnection", SetStencilConnection);

	Nan::SetPrototypeMethod(tpl, "SetStencilData", SetStencilData);
	Nan::SetPrototypeMethod(tpl, "setStencilData", SetStencilData);

#ifdef VTK_NODE_PLUS_VTKIMAGECONNECTIVITYFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGECONNECTIVITYFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageConnectivityFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageConnectivityFilter> native = vtkSmartPointer<vtkImageConnectivityFilter>::New();
		VtkImageConnectivityFilterWrap* obj = new VtkImageConnectivityFilterWrap(native);
		obj->Wrap(info.This());
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

void VtkImageConnectivityFilterWrap::GenerateRegionExtentsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateRegionExtentsOff();
}

void VtkImageConnectivityFilterWrap::GenerateRegionExtentsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateRegionExtentsOn();
}

void VtkImageConnectivityFilterWrap::GetActiveComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageConnectivityFilterWrap::GetExtractedRegionExtents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	vtkIntArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractedRegionExtents();
	VtkIntArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIntArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIntArrayWrap *w = new VtkIntArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageConnectivityFilterWrap::GetExtractedRegionLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractedRegionLabels();
	VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageConnectivityFilterWrap::GetExtractedRegionSeedIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractedRegionSeedIds();
	VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageConnectivityFilterWrap::GetExtractedRegionSizes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractedRegionSizes();
	VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageConnectivityFilterWrap::GetExtractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractionMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageConnectivityFilterWrap::GetExtractionModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractionModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageConnectivityFilterWrap::GetGenerateRegionExtents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateRegionExtents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageConnectivityFilterWrap::GetLabelConstantValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelConstantValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageConnectivityFilterWrap::GetLabelMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageConnectivityFilterWrap::GetLabelModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageConnectivityFilterWrap::GetLabelScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageConnectivityFilterWrap::GetLabelScalarTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelScalarTypeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageConnectivityFilterWrap::GetScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkImageConnectivityFilterWrap::GetSeedConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	vtkAlgorithmOutput * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSeedConnection();
	VtkAlgorithmOutputWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAlgorithmOutputWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAlgorithmOutputWrap *w = new VtkAlgorithmOutputWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageConnectivityFilterWrap::GetStencilConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	vtkAlgorithmOutput * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStencilConnection();
	VtkAlgorithmOutputWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAlgorithmOutputWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAlgorithmOutputWrap *w = new VtkAlgorithmOutputWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageConnectivityFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	vtkImageConnectivityFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageConnectivityFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageConnectivityFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageConnectivityFilterWrap *w = new VtkImageConnectivityFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageConnectivityFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkImageConnectivityFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkImageConnectivityFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageConnectivityFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageConnectivityFilterWrap *w = new VtkImageConnectivityFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageConnectivityFilterWrap::SetActiveComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetActiveComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageConnectivityFilterWrap::SetExtractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtractionMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageConnectivityFilterWrap::SetExtractionModeToAllRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToAllRegions();
}

void VtkImageConnectivityFilterWrap::SetExtractionModeToLargestRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToLargestRegion();
}

void VtkImageConnectivityFilterWrap::SetExtractionModeToSeededRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToSeededRegions();
}

void VtkImageConnectivityFilterWrap::SetGenerateRegionExtents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateRegionExtents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageConnectivityFilterWrap::SetLabelConstantValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelConstantValue(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageConnectivityFilterWrap::SetLabelMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageConnectivityFilterWrap::SetLabelModeToConstantValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelModeToConstantValue();
}

void VtkImageConnectivityFilterWrap::SetLabelModeToSeedScalar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelModeToSeedScalar();
}

void VtkImageConnectivityFilterWrap::SetLabelModeToSizeRank(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelModeToSizeRank();
}

void VtkImageConnectivityFilterWrap::SetLabelScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelScalarType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageConnectivityFilterWrap::SetLabelScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelScalarTypeToInt();
}

void VtkImageConnectivityFilterWrap::SetLabelScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelScalarTypeToShort();
}

void VtkImageConnectivityFilterWrap::SetLabelScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelScalarTypeToUnsignedChar();
}

void VtkImageConnectivityFilterWrap::SetLabelScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelScalarTypeToUnsignedShort();
}

void VtkImageConnectivityFilterWrap::SetScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
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
		native->SetScalarRange(
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
		native->SetScalarRange(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetScalarRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageConnectivityFilterWrap::SetSeedConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSeedConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageConnectivityFilterWrap::SetSeedData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSeedData(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageConnectivityFilterWrap::SetStencilConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStencilConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageConnectivityFilterWrap::SetStencilData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageConnectivityFilterWrap>(info.Holder());
	vtkImageConnectivityFilter *native = (vtkImageConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageStencilDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageStencilDataWrap *a0 = ObjectWrap::Unwrap<VtkImageStencilDataWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStencilData(
			(vtkImageStencilData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
