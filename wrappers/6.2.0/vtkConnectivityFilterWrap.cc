/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkConnectivityFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkConnectivityFilterWrap::ptpl;

VtkConnectivityFilterWrap::VtkConnectivityFilterWrap()
{ }

VtkConnectivityFilterWrap::VtkConnectivityFilterWrap(vtkSmartPointer<vtkConnectivityFilter> _native)
{ native = _native; }

VtkConnectivityFilterWrap::~VtkConnectivityFilterWrap()
{ }

void VtkConnectivityFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkConnectivityFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ConnectivityFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkConnectivityFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkConnectivityFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkConnectivityFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddSpecifiedRegion", AddSpecifiedRegion);
	Nan::SetPrototypeMethod(tpl, "addSpecifiedRegion", AddSpecifiedRegion);

	Nan::SetPrototypeMethod(tpl, "ColorRegionsOff", ColorRegionsOff);
	Nan::SetPrototypeMethod(tpl, "colorRegionsOff", ColorRegionsOff);

	Nan::SetPrototypeMethod(tpl, "ColorRegionsOn", ColorRegionsOn);
	Nan::SetPrototypeMethod(tpl, "colorRegionsOn", ColorRegionsOn);

	Nan::SetPrototypeMethod(tpl, "DeleteSpecifiedRegion", DeleteSpecifiedRegion);
	Nan::SetPrototypeMethod(tpl, "deleteSpecifiedRegion", DeleteSpecifiedRegion);

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

	Nan::SetPrototypeMethod(tpl, "GetNumberOfExtractedRegions", GetNumberOfExtractedRegions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfExtractedRegions", GetNumberOfExtractedRegions);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetScalarConnectivity", GetScalarConnectivity);
	Nan::SetPrototypeMethod(tpl, "getScalarConnectivity", GetScalarConnectivity);

	Nan::SetPrototypeMethod(tpl, "InitializeSeedList", InitializeSeedList);
	Nan::SetPrototypeMethod(tpl, "initializeSeedList", InitializeSeedList);

	Nan::SetPrototypeMethod(tpl, "InitializeSpecifiedRegionList", InitializeSpecifiedRegionList);
	Nan::SetPrototypeMethod(tpl, "initializeSpecifiedRegionList", InitializeSpecifiedRegionList);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

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

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetScalarConnectivity", SetScalarConnectivity);
	Nan::SetPrototypeMethod(tpl, "setScalarConnectivity", SetScalarConnectivity);

	Nan::SetPrototypeMethod(tpl, "SetScalarRange", SetScalarRange);
	Nan::SetPrototypeMethod(tpl, "setScalarRange", SetScalarRange);

	ptpl.Reset( tpl );
}

void VtkConnectivityFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkConnectivityFilter> native = vtkSmartPointer<vtkConnectivityFilter>::New();
		VtkConnectivityFilterWrap* obj = new VtkConnectivityFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkConnectivityFilterWrap::AddSpecifiedRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
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

void VtkConnectivityFilterWrap::ColorRegionsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorRegionsOff();
}

void VtkConnectivityFilterWrap::ColorRegionsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorRegionsOn();
}

void VtkConnectivityFilterWrap::DeleteSpecifiedRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
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

void VtkConnectivityFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkConnectivityFilterWrap::GetColorRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorRegions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConnectivityFilterWrap::GetExtractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractionMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConnectivityFilterWrap::GetExtractionModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractionModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkConnectivityFilterWrap::GetExtractionModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractionModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConnectivityFilterWrap::GetExtractionModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractionModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConnectivityFilterWrap::GetNumberOfExtractedRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfExtractedRegions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConnectivityFilterWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConnectivityFilterWrap::GetScalarConnectivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarConnectivity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConnectivityFilterWrap::InitializeSeedList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitializeSeedList();
}

void VtkConnectivityFilterWrap::InitializeSpecifiedRegionList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitializeSpecifiedRegionList();
}

void VtkConnectivityFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
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

void VtkConnectivityFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	vtkConnectivityFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkConnectivityFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkConnectivityFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkConnectivityFilterWrap *w = new VtkConnectivityFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConnectivityFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkConnectivityFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkConnectivityFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkConnectivityFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkConnectivityFilterWrap *w = new VtkConnectivityFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConnectivityFilterWrap::ScalarConnectivityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarConnectivityOff();
}

void VtkConnectivityFilterWrap::ScalarConnectivityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarConnectivityOn();
}

void VtkConnectivityFilterWrap::SetClosestPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
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

void VtkConnectivityFilterWrap::SetColorRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
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

void VtkConnectivityFilterWrap::SetExtractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
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

void VtkConnectivityFilterWrap::SetExtractionModeToAllRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToAllRegions();
}

void VtkConnectivityFilterWrap::SetExtractionModeToCellSeededRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToCellSeededRegions();
}

void VtkConnectivityFilterWrap::SetExtractionModeToClosestPointRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToClosestPointRegion();
}

void VtkConnectivityFilterWrap::SetExtractionModeToLargestRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToLargestRegion();
}

void VtkConnectivityFilterWrap::SetExtractionModeToPointSeededRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToPointSeededRegions();
}

void VtkConnectivityFilterWrap::SetExtractionModeToSpecifiedRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtractionModeToSpecifiedRegions();
}

void VtkConnectivityFilterWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
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

void VtkConnectivityFilterWrap::SetScalarConnectivity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
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

void VtkConnectivityFilterWrap::SetScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConnectivityFilterWrap *wrapper = ObjectWrap::Unwrap<VtkConnectivityFilterWrap>(info.Holder());
	vtkConnectivityFilter *native = (vtkConnectivityFilter *)wrapper->native.GetPointer();
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

