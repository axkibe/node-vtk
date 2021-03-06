/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkMapper2DWrap.h"
#include "vtkPolyDataMapper2DWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkScalarsToColorsWrap.h"
#include "vtkCoordinateWrap.h"
#include "vtkUnsignedCharArrayWrap.h"
#include "vtkAbstractMapperWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPolyDataMapper2DWrap::ptpl;

VtkPolyDataMapper2DWrap::VtkPolyDataMapper2DWrap()
{ }

VtkPolyDataMapper2DWrap::VtkPolyDataMapper2DWrap(vtkSmartPointer<vtkPolyDataMapper2D> _native)
{ native = _native; }

VtkPolyDataMapper2DWrap::~VtkPolyDataMapper2DWrap()
{ }

void VtkPolyDataMapper2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPolyDataMapper2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PolyDataMapper2D").ToLocalChecked(), ConstructorGetter);
}

void VtkPolyDataMapper2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPolyDataMapper2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMapper2DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMapper2DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPolyDataMapper2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ColorByArrayComponent", ColorByArrayComponent);
	Nan::SetPrototypeMethod(tpl, "colorByArrayComponent", ColorByArrayComponent);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultLookupTable", CreateDefaultLookupTable);
	Nan::SetPrototypeMethod(tpl, "createDefaultLookupTable", CreateDefaultLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetArrayAccessMode", GetArrayAccessMode);
	Nan::SetPrototypeMethod(tpl, "getArrayAccessMode", GetArrayAccessMode);

	Nan::SetPrototypeMethod(tpl, "GetArrayComponent", GetArrayComponent);
	Nan::SetPrototypeMethod(tpl, "getArrayComponent", GetArrayComponent);

	Nan::SetPrototypeMethod(tpl, "GetArrayId", GetArrayId);
	Nan::SetPrototypeMethod(tpl, "getArrayId", GetArrayId);

	Nan::SetPrototypeMethod(tpl, "GetArrayName", GetArrayName);
	Nan::SetPrototypeMethod(tpl, "getArrayName", GetArrayName);

	Nan::SetPrototypeMethod(tpl, "GetColorMode", GetColorMode);
	Nan::SetPrototypeMethod(tpl, "getColorMode", GetColorMode);

	Nan::SetPrototypeMethod(tpl, "GetColorModeAsString", GetColorModeAsString);
	Nan::SetPrototypeMethod(tpl, "getColorModeAsString", GetColorModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetLookupTable", GetLookupTable);
	Nan::SetPrototypeMethod(tpl, "getLookupTable", GetLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetScalarMode", GetScalarMode);
	Nan::SetPrototypeMethod(tpl, "getScalarMode", GetScalarMode);

	Nan::SetPrototypeMethod(tpl, "GetScalarRange", GetScalarRange);
	Nan::SetPrototypeMethod(tpl, "getScalarRange", GetScalarRange);

	Nan::SetPrototypeMethod(tpl, "GetScalarVisibility", GetScalarVisibility);
	Nan::SetPrototypeMethod(tpl, "getScalarVisibility", GetScalarVisibility);

	Nan::SetPrototypeMethod(tpl, "GetTransformCoordinate", GetTransformCoordinate);
	Nan::SetPrototypeMethod(tpl, "getTransformCoordinate", GetTransformCoordinate);

	Nan::SetPrototypeMethod(tpl, "GetTransformCoordinateUseDouble", GetTransformCoordinateUseDouble);
	Nan::SetPrototypeMethod(tpl, "getTransformCoordinateUseDouble", GetTransformCoordinateUseDouble);

	Nan::SetPrototypeMethod(tpl, "GetUseLookupTableScalarRange", GetUseLookupTableScalarRange);
	Nan::SetPrototypeMethod(tpl, "getUseLookupTableScalarRange", GetUseLookupTableScalarRange);

	Nan::SetPrototypeMethod(tpl, "MapScalars", MapScalars);
	Nan::SetPrototypeMethod(tpl, "mapScalars", MapScalars);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScalarVisibilityOff", ScalarVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "scalarVisibilityOff", ScalarVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "ScalarVisibilityOn", ScalarVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "scalarVisibilityOn", ScalarVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "SetColorMode", SetColorMode);
	Nan::SetPrototypeMethod(tpl, "setColorMode", SetColorMode);

	Nan::SetPrototypeMethod(tpl, "SetColorModeToDefault", SetColorModeToDefault);
	Nan::SetPrototypeMethod(tpl, "setColorModeToDefault", SetColorModeToDefault);

	Nan::SetPrototypeMethod(tpl, "SetColorModeToDirectScalars", SetColorModeToDirectScalars);
	Nan::SetPrototypeMethod(tpl, "setColorModeToDirectScalars", SetColorModeToDirectScalars);

	Nan::SetPrototypeMethod(tpl, "SetColorModeToMapScalars", SetColorModeToMapScalars);
	Nan::SetPrototypeMethod(tpl, "setColorModeToMapScalars", SetColorModeToMapScalars);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetLookupTable", SetLookupTable);
	Nan::SetPrototypeMethod(tpl, "setLookupTable", SetLookupTable);

	Nan::SetPrototypeMethod(tpl, "SetScalarMode", SetScalarMode);
	Nan::SetPrototypeMethod(tpl, "setScalarMode", SetScalarMode);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToDefault", SetScalarModeToDefault);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToDefault", SetScalarModeToDefault);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToUseCellData", SetScalarModeToUseCellData);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToUseCellData", SetScalarModeToUseCellData);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToUseCellFieldData", SetScalarModeToUseCellFieldData);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToUseCellFieldData", SetScalarModeToUseCellFieldData);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToUsePointData", SetScalarModeToUsePointData);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToUsePointData", SetScalarModeToUsePointData);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToUsePointFieldData", SetScalarModeToUsePointFieldData);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToUsePointFieldData", SetScalarModeToUsePointFieldData);

	Nan::SetPrototypeMethod(tpl, "SetScalarRange", SetScalarRange);
	Nan::SetPrototypeMethod(tpl, "setScalarRange", SetScalarRange);

	Nan::SetPrototypeMethod(tpl, "SetScalarVisibility", SetScalarVisibility);
	Nan::SetPrototypeMethod(tpl, "setScalarVisibility", SetScalarVisibility);

	Nan::SetPrototypeMethod(tpl, "SetTransformCoordinate", SetTransformCoordinate);
	Nan::SetPrototypeMethod(tpl, "setTransformCoordinate", SetTransformCoordinate);

	Nan::SetPrototypeMethod(tpl, "SetTransformCoordinateUseDouble", SetTransformCoordinateUseDouble);
	Nan::SetPrototypeMethod(tpl, "setTransformCoordinateUseDouble", SetTransformCoordinateUseDouble);

	Nan::SetPrototypeMethod(tpl, "SetUseLookupTableScalarRange", SetUseLookupTableScalarRange);
	Nan::SetPrototypeMethod(tpl, "setUseLookupTableScalarRange", SetUseLookupTableScalarRange);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "TransformCoordinateUseDoubleOff", TransformCoordinateUseDoubleOff);
	Nan::SetPrototypeMethod(tpl, "transformCoordinateUseDoubleOff", TransformCoordinateUseDoubleOff);

	Nan::SetPrototypeMethod(tpl, "TransformCoordinateUseDoubleOn", TransformCoordinateUseDoubleOn);
	Nan::SetPrototypeMethod(tpl, "transformCoordinateUseDoubleOn", TransformCoordinateUseDoubleOn);

	Nan::SetPrototypeMethod(tpl, "UseLookupTableScalarRangeOff", UseLookupTableScalarRangeOff);
	Nan::SetPrototypeMethod(tpl, "useLookupTableScalarRangeOff", UseLookupTableScalarRangeOff);

	Nan::SetPrototypeMethod(tpl, "UseLookupTableScalarRangeOn", UseLookupTableScalarRangeOn);
	Nan::SetPrototypeMethod(tpl, "useLookupTableScalarRangeOn", UseLookupTableScalarRangeOn);

#ifdef VTK_NODE_PLUS_VTKPOLYDATAMAPPER2DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPOLYDATAMAPPER2DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPolyDataMapper2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolyDataMapper2D> native = vtkSmartPointer<vtkPolyDataMapper2D>::New();
		VtkPolyDataMapper2DWrap* obj = new VtkPolyDataMapper2DWrap(native);
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

void VtkPolyDataMapper2DWrap::ColorByArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
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
			native->ColorByArrayComponent(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ColorByArrayComponent(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapper2DWrap::CreateDefaultLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLookupTable();
}

void VtkPolyDataMapper2DWrap::GetArrayAccessMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayAccessMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataMapper2DWrap::GetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataMapper2DWrap::GetArrayId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataMapper2DWrap::GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolyDataMapper2DWrap::GetColorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataMapper2DWrap::GetColorModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolyDataMapper2DWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataMapper2DWrap::GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
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
		Nan::New<v8::FunctionTemplate>(VtkScalarsToColorsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarsToColorsWrap *w = new VtkScalarsToColorsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataMapper2DWrap::GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataMapper2DWrap::GetScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
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

void VtkPolyDataMapper2DWrap::GetScalarVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataMapper2DWrap::GetTransformCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	vtkCoordinate * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransformCoordinate();
	VtkCoordinateWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCoordinateWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCoordinateWrap *w = new VtkCoordinateWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataMapper2DWrap::GetTransformCoordinateUseDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransformCoordinateUseDouble();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataMapper2DWrap::GetUseLookupTableScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseLookupTableScalarRange();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataMapper2DWrap::MapScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		vtkUnsignedCharArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->MapScalars(
			info[0]->NumberValue()
		);
		VtkUnsignedCharArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUnsignedCharArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapper2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	vtkPolyDataMapper2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPolyDataMapper2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataMapper2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataMapper2DWrap *w = new VtkPolyDataMapper2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataMapper2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPolyDataMapper2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPolyDataMapper2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolyDataMapper2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataMapper2DWrap *w = new VtkPolyDataMapper2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapper2DWrap::ScalarVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarVisibilityOff();
}

void VtkPolyDataMapper2DWrap::ScalarVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarVisibilityOn();
}

void VtkPolyDataMapper2DWrap::SetColorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapper2DWrap::SetColorModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetColorModeToDefault();
}

void VtkPolyDataMapper2DWrap::SetColorModeToDirectScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetColorModeToDirectScalars();
}

void VtkPolyDataMapper2DWrap::SetColorModeToMapScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetColorModeToMapScalars();
}

void VtkPolyDataMapper2DWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapper2DWrap::SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
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

void VtkPolyDataMapper2DWrap::SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapper2DWrap::SetScalarModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToDefault();
}

void VtkPolyDataMapper2DWrap::SetScalarModeToUseCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToUseCellData();
}

void VtkPolyDataMapper2DWrap::SetScalarModeToUseCellFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToUseCellFieldData();
}

void VtkPolyDataMapper2DWrap::SetScalarModeToUsePointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToUsePointData();
}

void VtkPolyDataMapper2DWrap::SetScalarModeToUsePointFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToUsePointFieldData();
}

void VtkPolyDataMapper2DWrap::SetScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
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

void VtkPolyDataMapper2DWrap::SetScalarVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarVisibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapper2DWrap::SetTransformCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCoordinateWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCoordinateWrap *a0 = ObjectWrap::Unwrap<VtkCoordinateWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransformCoordinate(
			(vtkCoordinate *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapper2DWrap::SetTransformCoordinateUseDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransformCoordinateUseDouble(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapper2DWrap::SetUseLookupTableScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseLookupTableScalarRange(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapper2DWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractMapperWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractMapperWrap *a0 = ObjectWrap::Unwrap<VtkAbstractMapperWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkAbstractMapper *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapper2DWrap::TransformCoordinateUseDoubleOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TransformCoordinateUseDoubleOff();
}

void VtkPolyDataMapper2DWrap::TransformCoordinateUseDoubleOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TransformCoordinateUseDoubleOn();
}

void VtkPolyDataMapper2DWrap::UseLookupTableScalarRangeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseLookupTableScalarRangeOff();
}

void VtkPolyDataMapper2DWrap::UseLookupTableScalarRangeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info.Holder());
	vtkPolyDataMapper2D *native = (vtkPolyDataMapper2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseLookupTableScalarRangeOn();
}

