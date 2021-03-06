/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkMPASReaderWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkUnstructuredGridWrap.h"
#include "vtkStringArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMPASReaderWrap::ptpl;

VtkMPASReaderWrap::VtkMPASReaderWrap()
{ }

VtkMPASReaderWrap::VtkMPASReaderWrap(vtkSmartPointer<vtkMPASReader> _native)
{ native = _native; }

VtkMPASReaderWrap::~VtkMPASReaderWrap()
{ }

void VtkMPASReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMPASReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MPASReader").ToLocalChecked(), ConstructorGetter);
}

void VtkMPASReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMPASReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMPASReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CanReadFile", CanReadFile);
	Nan::SetPrototypeMethod(tpl, "canReadFile", CanReadFile);

	Nan::SetPrototypeMethod(tpl, "DisableAllCellArrays", DisableAllCellArrays);
	Nan::SetPrototypeMethod(tpl, "disableAllCellArrays", DisableAllCellArrays);

	Nan::SetPrototypeMethod(tpl, "DisableAllPointArrays", DisableAllPointArrays);
	Nan::SetPrototypeMethod(tpl, "disableAllPointArrays", DisableAllPointArrays);

	Nan::SetPrototypeMethod(tpl, "EnableAllCellArrays", EnableAllCellArrays);
	Nan::SetPrototypeMethod(tpl, "enableAllCellArrays", EnableAllCellArrays);

	Nan::SetPrototypeMethod(tpl, "EnableAllPointArrays", EnableAllPointArrays);
	Nan::SetPrototypeMethod(tpl, "enableAllPointArrays", EnableAllPointArrays);

	Nan::SetPrototypeMethod(tpl, "GetAllDimensions", GetAllDimensions);
	Nan::SetPrototypeMethod(tpl, "getAllDimensions", GetAllDimensions);

	Nan::SetPrototypeMethod(tpl, "GetCellArrayName", GetCellArrayName);
	Nan::SetPrototypeMethod(tpl, "getCellArrayName", GetCellArrayName);

	Nan::SetPrototypeMethod(tpl, "GetCellArrayStatus", GetCellArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getCellArrayStatus", GetCellArrayStatus);

	Nan::SetPrototypeMethod(tpl, "GetCenterLonRange", GetCenterLonRange);
	Nan::SetPrototypeMethod(tpl, "getCenterLonRange", GetCenterLonRange);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetIsAtmosphere", GetIsAtmosphere);
	Nan::SetPrototypeMethod(tpl, "getIsAtmosphere", GetIsAtmosphere);

	Nan::SetPrototypeMethod(tpl, "GetIsZeroCentered", GetIsZeroCentered);
	Nan::SetPrototypeMethod(tpl, "getIsZeroCentered", GetIsZeroCentered);

	Nan::SetPrototypeMethod(tpl, "GetLayerThickness", GetLayerThickness);
	Nan::SetPrototypeMethod(tpl, "getLayerThickness", GetLayerThickness);

	Nan::SetPrototypeMethod(tpl, "GetLayerThicknessRange", GetLayerThicknessRange);
	Nan::SetPrototypeMethod(tpl, "getLayerThicknessRange", GetLayerThicknessRange);

	Nan::SetPrototypeMethod(tpl, "GetMaximumCells", GetMaximumCells);
	Nan::SetPrototypeMethod(tpl, "getMaximumCells", GetMaximumCells);

	Nan::SetPrototypeMethod(tpl, "GetMaximumPoints", GetMaximumPoints);
	Nan::SetPrototypeMethod(tpl, "getMaximumPoints", GetMaximumPoints);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCellArrays", GetNumberOfCellArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCellArrays", GetNumberOfCellArrays);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCellVars", GetNumberOfCellVars);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCellVars", GetNumberOfCellVars);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfDimensions", GetNumberOfDimensions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfDimensions", GetNumberOfDimensions);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPointArrays", GetNumberOfPointArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPointArrays", GetNumberOfPointArrays);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPointVars", GetNumberOfPointVars);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPointVars", GetNumberOfPointVars);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "GetPointArrayName", GetPointArrayName);
	Nan::SetPrototypeMethod(tpl, "getPointArrayName", GetPointArrayName);

	Nan::SetPrototypeMethod(tpl, "GetPointArrayStatus", GetPointArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getPointArrayStatus", GetPointArrayStatus);

	Nan::SetPrototypeMethod(tpl, "GetProjectLatLon", GetProjectLatLon);
	Nan::SetPrototypeMethod(tpl, "getProjectLatLon", GetProjectLatLon);

	Nan::SetPrototypeMethod(tpl, "GetShowMultilayerView", GetShowMultilayerView);
	Nan::SetPrototypeMethod(tpl, "getShowMultilayerView", GetShowMultilayerView);

	Nan::SetPrototypeMethod(tpl, "GetUseDimensionedArrayNames", GetUseDimensionedArrayNames);
	Nan::SetPrototypeMethod(tpl, "getUseDimensionedArrayNames", GetUseDimensionedArrayNames);

	Nan::SetPrototypeMethod(tpl, "GetVerticalLevel", GetVerticalLevel);
	Nan::SetPrototypeMethod(tpl, "getVerticalLevel", GetVerticalLevel);

	Nan::SetPrototypeMethod(tpl, "GetVerticalLevelRange", GetVerticalLevelRange);
	Nan::SetPrototypeMethod(tpl, "getVerticalLevelRange", GetVerticalLevelRange);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellArrayStatus", SetCellArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setCellArrayStatus", SetCellArrayStatus);

	Nan::SetPrototypeMethod(tpl, "SetCenterLon", SetCenterLon);
	Nan::SetPrototypeMethod(tpl, "setCenterLon", SetCenterLon);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetIsAtmosphere", SetIsAtmosphere);
	Nan::SetPrototypeMethod(tpl, "setIsAtmosphere", SetIsAtmosphere);

	Nan::SetPrototypeMethod(tpl, "SetIsZeroCentered", SetIsZeroCentered);
	Nan::SetPrototypeMethod(tpl, "setIsZeroCentered", SetIsZeroCentered);

	Nan::SetPrototypeMethod(tpl, "SetLayerThickness", SetLayerThickness);
	Nan::SetPrototypeMethod(tpl, "setLayerThickness", SetLayerThickness);

	Nan::SetPrototypeMethod(tpl, "SetPointArrayStatus", SetPointArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setPointArrayStatus", SetPointArrayStatus);

	Nan::SetPrototypeMethod(tpl, "SetProjectLatLon", SetProjectLatLon);
	Nan::SetPrototypeMethod(tpl, "setProjectLatLon", SetProjectLatLon);

	Nan::SetPrototypeMethod(tpl, "SetShowMultilayerView", SetShowMultilayerView);
	Nan::SetPrototypeMethod(tpl, "setShowMultilayerView", SetShowMultilayerView);

	Nan::SetPrototypeMethod(tpl, "SetUseDimensionedArrayNames", SetUseDimensionedArrayNames);
	Nan::SetPrototypeMethod(tpl, "setUseDimensionedArrayNames", SetUseDimensionedArrayNames);

	Nan::SetPrototypeMethod(tpl, "SetVerticalLevel", SetVerticalLevel);
	Nan::SetPrototypeMethod(tpl, "setVerticalLevel", SetVerticalLevel);

	Nan::SetPrototypeMethod(tpl, "UseDimensionedArrayNamesOff", UseDimensionedArrayNamesOff);
	Nan::SetPrototypeMethod(tpl, "useDimensionedArrayNamesOff", UseDimensionedArrayNamesOff);

	Nan::SetPrototypeMethod(tpl, "UseDimensionedArrayNamesOn", UseDimensionedArrayNamesOn);
	Nan::SetPrototypeMethod(tpl, "useDimensionedArrayNamesOn", UseDimensionedArrayNamesOn);

#ifdef VTK_NODE_PLUS_VTKMPASREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMPASREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMPASReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMPASReader> native = vtkSmartPointer<vtkMPASReader>::New();
		VtkMPASReaderWrap* obj = new VtkMPASReaderWrap(native);
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

void VtkMPASReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CanReadFile(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::DisableAllCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisableAllCellArrays();
}

void VtkMPASReaderWrap::DisableAllPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisableAllPointArrays();
}

void VtkMPASReaderWrap::EnableAllCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableAllCellArrays();
}

void VtkMPASReaderWrap::EnableAllPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableAllPointArrays();
}

void VtkMPASReaderWrap::GetAllDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAllDimensions();
	VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMPASReaderWrap::GetCellArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetCellArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::GetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetCellArrayStatus(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::GetCenterLonRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCenterLonRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkMPASReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMPASReaderWrap::GetIsAtmosphere(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIsAtmosphere();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetIsZeroCentered(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIsZeroCentered();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetLayerThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLayerThickness();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetLayerThicknessRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLayerThicknessRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkMPASReaderWrap::GetMaximumCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetMaximumPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetNumberOfCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCellArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetNumberOfCellVars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCellVars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetNumberOfDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfDimensions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetNumberOfPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPointArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetNumberOfPointVars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPointVars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkUnstructuredGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOutput(
			info[0]->Int32Value()
		);
		VtkUnstructuredGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkUnstructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
	VtkUnstructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMPASReaderWrap::GetPointArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPointArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::GetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPointArrayStatus(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::GetProjectLatLon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectLatLon();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetShowMultilayerView(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowMultilayerView();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetUseDimensionedArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseDimensionedArrayNames();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetVerticalLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVerticalLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMPASReaderWrap::GetVerticalLevelRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVerticalLevelRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkMPASReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	vtkMPASReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMPASReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMPASReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMPASReaderWrap *w = new VtkMPASReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMPASReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkMPASReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkMPASReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMPASReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMPASReaderWrap *w = new VtkMPASReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::SetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetCellArrayStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::SetCenterLon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCenterLon(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::SetIsAtmosphere(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIsAtmosphere(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::SetIsZeroCentered(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIsZeroCentered(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::SetLayerThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLayerThickness(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::SetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPointArrayStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::SetProjectLatLon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProjectLatLon(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::SetShowMultilayerView(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShowMultilayerView(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::SetUseDimensionedArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseDimensionedArrayNames(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::SetVerticalLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVerticalLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMPASReaderWrap::UseDimensionedArrayNamesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseDimensionedArrayNamesOff();
}

void VtkMPASReaderWrap::UseDimensionedArrayNamesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMPASReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMPASReaderWrap>(info.Holder());
	vtkMPASReader *native = (vtkMPASReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseDimensionedArrayNamesOn();
}

