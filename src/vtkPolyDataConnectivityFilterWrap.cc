/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkPolyDataConnectivityFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkIdListWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPolyDataConnectivityFilterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPolyDataConnectivityFilterWrap::ptpl;

VtkPolyDataConnectivityFilterWrap::VtkPolyDataConnectivityFilterWrap()
{ }

VtkPolyDataConnectivityFilterWrap::VtkPolyDataConnectivityFilterWrap(vtkSmartPointer<vtkPolyDataConnectivityFilter> _native)
{ native = _native; }

VtkPolyDataConnectivityFilterWrap::~VtkPolyDataConnectivityFilterWrap()
{ }

void VtkPolyDataConnectivityFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPolyDataConnectivityFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PolyDataConnectivityFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkPolyDataConnectivityFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPolyDataConnectivityFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPolyDataConnectivityFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddSeed", AddSeed);
	Nan::SetPrototypeMethod(tpl, "addSeed", AddSeed);

	Nan::SetPrototypeMethod(tpl, "AddSpecifiedRegion", AddSpecifiedRegion);
	Nan::SetPrototypeMethod(tpl, "addSpecifiedRegion", AddSpecifiedRegion);

	Nan::SetPrototypeMethod(tpl, "ColorRegionsOff", ColorRegionsOff);
	Nan::SetPrototypeMethod(tpl, "colorRegionsOff", ColorRegionsOff);

	Nan::SetPrototypeMethod(tpl, "ColorRegionsOn", ColorRegionsOn);
	Nan::SetPrototypeMethod(tpl, "colorRegionsOn", ColorRegionsOn);

	Nan::SetPrototypeMethod(tpl, "DeleteSeed", DeleteSeed);
	Nan::SetPrototypeMethod(tpl, "deleteSeed", DeleteSeed);

	Nan::SetPrototypeMethod(tpl, "DeleteSpecifiedRegion", DeleteSpecifiedRegion);
	Nan::SetPrototypeMethod(tpl, "deleteSpecifiedRegion", DeleteSpecifiedRegion);

	Nan::SetPrototypeMethod(tpl, "FullScalarConnectivityOff", FullScalarConnectivityOff);
	Nan::SetPrototypeMethod(tpl, "fullScalarConnectivityOff", FullScalarConnectivityOff);

	Nan::SetPrototypeMethod(tpl, "FullScalarConnectivityOn", FullScalarConnectivityOn);
	Nan::SetPrototypeMethod(tpl, "fullScalarConnectivityOn", FullScalarConnectivityOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColorRegions", GetColorRegions);
	Nan::SetPrototypeMethod(tpl, "getColorRegions", GetColorRegions);

	Nan::SetPrototypeMethod(tpl, "GetExtractionMode", GetExtractionMode);
	Nan::SetPrototypeMethod(tpl, "getExtractionMode", GetExtractionMode);

	Nan::SetPrototypeMethod(tpl, "GetExtractionModeAsString", GetExtractionModeAsString);
	Nan::SetPrototypeMethod(tpl, "getExtractionModeAsString", GetExtractionModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetExtractionModeMaxValue", GetExtractionModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getExtractionModeMaxValue", GetExtractionModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetExtractionModeMinValue", GetExtractionModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getExtractionModeMinValue", GetExtractionModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetFullScalarConnectivity", GetFullScalarConnectivity);
	Nan::SetPrototypeMethod(tpl, "getFullScalarConnectivity", GetFullScalarConnectivity);

	Nan::SetPrototypeMethod(tpl, "GetMarkVisitedPointIds", GetMarkVisitedPointIds);
	Nan::SetPrototypeMethod(tpl, "getMarkVisitedPointIds", GetMarkVisitedPointIds);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfExtractedRegions", GetNumberOfExtractedRegions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfExtractedRegions", GetNumberOfExtractedRegions);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetRegionSizes", GetRegionSizes);
	Nan::SetPrototypeMethod(tpl, "getRegionSizes", GetRegionSizes);

	Nan::SetPrototypeMethod(tpl, "GetScalarConnectivity", GetScalarConnectivity);
	Nan::SetPrototypeMethod(tpl, "getScalarConnectivity", GetScalarConnectivity);

	Nan::SetPrototypeMethod(tpl, "GetVisitedPointIds", GetVisitedPointIds);
	Nan::SetPrototypeMethod(tpl, "getVisitedPointIds", GetVisitedPointIds);

	Nan::SetPrototypeMethod(tpl, "InitializeSeedList", InitializeSeedList);
	Nan::SetPrototypeMethod(tpl, "initializeSeedList", InitializeSeedList);

	Nan::SetPrototypeMethod(tpl, "InitializeSpecifiedRegionList", InitializeSpecifiedRegionList);
	Nan::SetPrototypeMethod(tpl, "initializeSpecifiedRegionList", InitializeSpecifiedRegionList);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MarkVisitedPointIdsOff", MarkVisitedPointIdsOff);
	Nan::SetPrototypeMethod(tpl, "markVisitedPointIdsOff", MarkVisitedPointIdsOff);

	Nan::SetPrototypeMethod(tpl, "MarkVisitedPointIdsOn", MarkVisitedPointIdsOn);
	Nan::SetPrototypeMethod(tpl, "markVisitedPointIdsOn", MarkVisitedPointIdsOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScalarConnectivityOff", ScalarConnectivityOff);
	Nan::SetPrototypeMethod(tpl, "scalarConnectivityOff", ScalarConnectivityOff);

	Nan::SetPrototypeMethod(tpl, "ScalarConnectivityOn", ScalarConnectivityOn);
	Nan::SetPrototypeMethod(tpl, "scalarConnectivityOn", ScalarConnectivityOn);

	Nan::SetPrototypeMethod(tpl, "SetClosestPoint", SetClosestPoint);
	Nan::SetPrototypeMethod(tpl, "setClosestPoint", SetClosestPoint);

	Nan::SetPrototypeMethod(tpl, "SetColorRegions", SetColorRegions);
	Nan::SetPrototypeMethod(tpl, "setColorRegions", SetColorRegions);

	Nan::SetPrototypeMethod(tpl, "SetExtractionMode", SetExtractionMode);
	Nan::SetPrototypeMethod(tpl, "setExtractionMode", SetExtractionMode);

	Nan::SetPrototypeMethod(tpl, "SetExtractionModeToAllRegions", SetExtractionModeToAllRegions);
	Nan::SetPrototypeMethod(tpl, "setExtractionModeToAllRegions", SetExtractionModeToAllRegions);

	Nan::SetPrototypeMethod(tpl, "SetExtractionModeToCellSeededRegions", SetExtractionModeToCellSeededRegions);
	Nan::SetPrototypeMethod(tpl, "setExtractionModeToCellSeededRegions", SetExtractionModeToCellSeededRegions);

	Nan::SetPrototypeMethod(tpl, "SetExtractionModeToClosestPointRegion", SetExtractionModeToClosestPointRegion);
	Nan::SetPrototypeMethod(tpl, "setExtractionModeToClosestPointRegion", SetExtractionModeToClosestPointRegion);

	Nan::SetPrototypeMethod(tpl, "SetExtractionModeToLargestRegion", SetExtractionModeToLargestRegion);
	Nan::SetPrototypeMethod(tpl, "setExtractionModeToLargestRegion", SetExtractionModeToLargestRegion);

	Nan::SetPrototypeMethod(tpl, "SetExtractionModeToPointSeededRegions", SetExtractionModeToPointSeededRegions);
	Nan::SetPrototypeMethod(tpl, "setExtractionModeToPointSeededRegions", SetExtractionModeToPointSeededRegions);

	Nan::SetPrototypeMethod(tpl, "SetExtractionModeToSpecifiedRegions", SetExtractionModeToSpecifiedRegions);
	Nan::SetPrototypeMethod(tpl, "setExtractionModeToSpecifiedRegions", SetExtractionModeToSpecifiedRegions);

	Nan::SetPrototypeMethod(tpl, "SetFullScalarConnectivity", SetFullScalarConnectivity);
	Nan::SetPrototypeMethod(tpl, "setFullScalarConnectivity", SetFullScalarConnectivity);

	Nan::SetPrototypeMethod(tpl, "SetMarkVisitedPointIds", SetMarkVisitedPointIds);
	Nan::SetPrototypeMethod(tpl, "setMarkVisitedPointIds", SetMarkVisitedPointIds);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetScalarConnectivity", SetScalarConnectivity);
	Nan::SetPrototypeMethod(tpl, "setScalarConnectivity", SetScalarConnectivity);

	Nan::SetPrototypeMethod(tpl, "SetScalarRange", SetScalarRange);
	Nan::SetPrototypeMethod(tpl, "setScalarRange", SetScalarRange);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkPolyDataConnectivityFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolyDataConnectivityFilter> native = vtkSmartPointer<vtkPolyDataConnectivityFilter>::New();
		VtkPolyDataConnectivityFilterWrap* obj = new VtkPolyDataConnectivityFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPolyDataConnectivityFilterWrap::AddSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddSeed(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataConnectivityFilterWrap::AddSpecifiedRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddSpecifiedRegion(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataConnectivityFilterWrap::ColorRegionsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorRegionsOff();
}

void VtkPolyDataConnectivityFilterWrap::ColorRegionsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorRegionsOn();
}

void VtkPolyDataConnectivityFilterWrap::DeleteSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeleteSeed(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataConnectivityFilterWrap::DeleteSpecifiedRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeleteSpecifiedRegion(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataConnectivityFilterWrap::FullScalarConnectivityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FullScalarConnectivityOff();
}

void VtkPolyDataConnectivityFilterWrap::FullScalarConnectivityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FullScalarConnectivityOn();
}

void VtkPolyDataConnectivityFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolyDataConnectivityFilterWrap::GetColorRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorRegions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataConnectivityFilterWrap::GetExtractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractionMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataConnectivityFilterWrap::GetExtractionModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractionModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolyDataConnectivityFilterWrap::GetExtractionModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractionModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataConnectivityFilterWrap::GetExtractionModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractionModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataConnectivityFilterWrap::GetFullScalarConnectivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFullScalarConnectivity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataConnectivityFilterWrap::GetMarkVisitedPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMarkVisitedPointIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataConnectivityFilterWrap::GetNumberOfExtractedRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfExtractedRegions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataConnectivityFilterWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataConnectivityFilterWrap::GetRegionSizes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRegionSizes();
		VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkIdTypeArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataConnectivityFilterWrap::GetScalarConnectivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarConnectivity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataConnectivityFilterWrap::GetVisitedPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	vtkIdList * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVisitedPointIds();
		VtkIdListWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkIdListWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdListWrap *w = new VtkIdListWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataConnectivityFilterWrap::InitializeSeedList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitializeSeedList();
}

void VtkPolyDataConnectivityFilterWrap::InitializeSpecifiedRegionList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitializeSpecifiedRegionList();
}

void VtkPolyDataConnectivityFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
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

void VtkPolyDataConnectivityFilterWrap::MarkVisitedPointIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MarkVisitedPointIdsOff();
}

void VtkPolyDataConnectivityFilterWrap::MarkVisitedPointIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MarkVisitedPointIdsOn();
}

void VtkPolyDataConnectivityFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	vtkPolyDataConnectivityFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPolyDataConnectivityFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataConnectivityFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataConnectivityFilterWrap *w = new VtkPolyDataConnectivityFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataConnectivityFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPolyDataConnectivityFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPolyDataConnectivityFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkPolyDataConnectivityFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataConnectivityFilterWrap *w = new VtkPolyDataConnectivityFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataConnectivityFilterWrap::ScalarConnectivityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarConnectivityOff();
}

void VtkPolyDataConnectivityFilterWrap::ScalarConnectivityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarConnectivityOn();
}

void VtkPolyDataConnectivityFilterWrap::SetClosestPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
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
				native->SetClosestPoint(
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

void VtkPolyDataConnectivityFilterWrap::SetColorRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorRegions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataConnectivityFilterWrap::SetExtractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
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

void VtkPolyDataConnectivityFilterWrap::SetExtractionModeToAllRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToAllRegions();
}

void VtkPolyDataConnectivityFilterWrap::SetExtractionModeToCellSeededRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToCellSeededRegions();
}

void VtkPolyDataConnectivityFilterWrap::SetExtractionModeToClosestPointRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToClosestPointRegion();
}

void VtkPolyDataConnectivityFilterWrap::SetExtractionModeToLargestRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToLargestRegion();
}

void VtkPolyDataConnectivityFilterWrap::SetExtractionModeToPointSeededRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToPointSeededRegions();
}

void VtkPolyDataConnectivityFilterWrap::SetExtractionModeToSpecifiedRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToSpecifiedRegions();
}

void VtkPolyDataConnectivityFilterWrap::SetFullScalarConnectivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFullScalarConnectivity(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataConnectivityFilterWrap::SetMarkVisitedPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMarkVisitedPointIds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataConnectivityFilterWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
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

void VtkPolyDataConnectivityFilterWrap::SetScalarConnectivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarConnectivity(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataConnectivityFilterWrap::SetScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataConnectivityFilterWrap>(info.Holder());
	vtkPolyDataConnectivityFilter *native = (vtkPolyDataConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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

