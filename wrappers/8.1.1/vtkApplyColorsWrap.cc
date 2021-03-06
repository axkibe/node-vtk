/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkApplyColorsWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkScalarsToColorsWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkApplyColorsWrap::ptpl;

VtkApplyColorsWrap::VtkApplyColorsWrap()
{ }

VtkApplyColorsWrap::VtkApplyColorsWrap(vtkSmartPointer<vtkApplyColors> _native)
{ native = _native; }

VtkApplyColorsWrap::~VtkApplyColorsWrap()
{ }

void VtkApplyColorsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkApplyColors").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ApplyColors").ToLocalChecked(), ConstructorGetter);
}

void VtkApplyColorsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkApplyColorsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPassInputTypeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkApplyColorsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCellColorOutputArrayName", GetCellColorOutputArrayName);
	Nan::SetPrototypeMethod(tpl, "getCellColorOutputArrayName", GetCellColorOutputArrayName);

	Nan::SetPrototypeMethod(tpl, "GetCellLookupTable", GetCellLookupTable);
	Nan::SetPrototypeMethod(tpl, "getCellLookupTable", GetCellLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetDefaultCellColor", GetDefaultCellColor);
	Nan::SetPrototypeMethod(tpl, "getDefaultCellColor", GetDefaultCellColor);

	Nan::SetPrototypeMethod(tpl, "GetDefaultCellOpacity", GetDefaultCellOpacity);
	Nan::SetPrototypeMethod(tpl, "getDefaultCellOpacity", GetDefaultCellOpacity);

	Nan::SetPrototypeMethod(tpl, "GetDefaultPointColor", GetDefaultPointColor);
	Nan::SetPrototypeMethod(tpl, "getDefaultPointColor", GetDefaultPointColor);

	Nan::SetPrototypeMethod(tpl, "GetDefaultPointOpacity", GetDefaultPointOpacity);
	Nan::SetPrototypeMethod(tpl, "getDefaultPointOpacity", GetDefaultPointOpacity);

	Nan::SetPrototypeMethod(tpl, "GetPointColorOutputArrayName", GetPointColorOutputArrayName);
	Nan::SetPrototypeMethod(tpl, "getPointColorOutputArrayName", GetPointColorOutputArrayName);

	Nan::SetPrototypeMethod(tpl, "GetPointLookupTable", GetPointLookupTable);
	Nan::SetPrototypeMethod(tpl, "getPointLookupTable", GetPointLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetScaleCellLookupTable", GetScaleCellLookupTable);
	Nan::SetPrototypeMethod(tpl, "getScaleCellLookupTable", GetScaleCellLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetScalePointLookupTable", GetScalePointLookupTable);
	Nan::SetPrototypeMethod(tpl, "getScalePointLookupTable", GetScalePointLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetSelectedCellColor", GetSelectedCellColor);
	Nan::SetPrototypeMethod(tpl, "getSelectedCellColor", GetSelectedCellColor);

	Nan::SetPrototypeMethod(tpl, "GetSelectedCellOpacity", GetSelectedCellOpacity);
	Nan::SetPrototypeMethod(tpl, "getSelectedCellOpacity", GetSelectedCellOpacity);

	Nan::SetPrototypeMethod(tpl, "GetSelectedPointColor", GetSelectedPointColor);
	Nan::SetPrototypeMethod(tpl, "getSelectedPointColor", GetSelectedPointColor);

	Nan::SetPrototypeMethod(tpl, "GetSelectedPointOpacity", GetSelectedPointOpacity);
	Nan::SetPrototypeMethod(tpl, "getSelectedPointOpacity", GetSelectedPointOpacity);

	Nan::SetPrototypeMethod(tpl, "GetUseCellLookupTable", GetUseCellLookupTable);
	Nan::SetPrototypeMethod(tpl, "getUseCellLookupTable", GetUseCellLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetUseCurrentAnnotationColor", GetUseCurrentAnnotationColor);
	Nan::SetPrototypeMethod(tpl, "getUseCurrentAnnotationColor", GetUseCurrentAnnotationColor);

	Nan::SetPrototypeMethod(tpl, "GetUsePointLookupTable", GetUsePointLookupTable);
	Nan::SetPrototypeMethod(tpl, "getUsePointLookupTable", GetUsePointLookupTable);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScaleCellLookupTableOff", ScaleCellLookupTableOff);
	Nan::SetPrototypeMethod(tpl, "scaleCellLookupTableOff", ScaleCellLookupTableOff);

	Nan::SetPrototypeMethod(tpl, "ScaleCellLookupTableOn", ScaleCellLookupTableOn);
	Nan::SetPrototypeMethod(tpl, "scaleCellLookupTableOn", ScaleCellLookupTableOn);

	Nan::SetPrototypeMethod(tpl, "ScalePointLookupTableOff", ScalePointLookupTableOff);
	Nan::SetPrototypeMethod(tpl, "scalePointLookupTableOff", ScalePointLookupTableOff);

	Nan::SetPrototypeMethod(tpl, "ScalePointLookupTableOn", ScalePointLookupTableOn);
	Nan::SetPrototypeMethod(tpl, "scalePointLookupTableOn", ScalePointLookupTableOn);

	Nan::SetPrototypeMethod(tpl, "SetCellColorOutputArrayName", SetCellColorOutputArrayName);
	Nan::SetPrototypeMethod(tpl, "setCellColorOutputArrayName", SetCellColorOutputArrayName);

	Nan::SetPrototypeMethod(tpl, "SetCellLookupTable", SetCellLookupTable);
	Nan::SetPrototypeMethod(tpl, "setCellLookupTable", SetCellLookupTable);

	Nan::SetPrototypeMethod(tpl, "SetDefaultCellColor", SetDefaultCellColor);
	Nan::SetPrototypeMethod(tpl, "setDefaultCellColor", SetDefaultCellColor);

	Nan::SetPrototypeMethod(tpl, "SetDefaultCellOpacity", SetDefaultCellOpacity);
	Nan::SetPrototypeMethod(tpl, "setDefaultCellOpacity", SetDefaultCellOpacity);

	Nan::SetPrototypeMethod(tpl, "SetDefaultPointColor", SetDefaultPointColor);
	Nan::SetPrototypeMethod(tpl, "setDefaultPointColor", SetDefaultPointColor);

	Nan::SetPrototypeMethod(tpl, "SetDefaultPointOpacity", SetDefaultPointOpacity);
	Nan::SetPrototypeMethod(tpl, "setDefaultPointOpacity", SetDefaultPointOpacity);

	Nan::SetPrototypeMethod(tpl, "SetPointColorOutputArrayName", SetPointColorOutputArrayName);
	Nan::SetPrototypeMethod(tpl, "setPointColorOutputArrayName", SetPointColorOutputArrayName);

	Nan::SetPrototypeMethod(tpl, "SetPointLookupTable", SetPointLookupTable);
	Nan::SetPrototypeMethod(tpl, "setPointLookupTable", SetPointLookupTable);

	Nan::SetPrototypeMethod(tpl, "SetScaleCellLookupTable", SetScaleCellLookupTable);
	Nan::SetPrototypeMethod(tpl, "setScaleCellLookupTable", SetScaleCellLookupTable);

	Nan::SetPrototypeMethod(tpl, "SetScalePointLookupTable", SetScalePointLookupTable);
	Nan::SetPrototypeMethod(tpl, "setScalePointLookupTable", SetScalePointLookupTable);

	Nan::SetPrototypeMethod(tpl, "SetSelectedCellColor", SetSelectedCellColor);
	Nan::SetPrototypeMethod(tpl, "setSelectedCellColor", SetSelectedCellColor);

	Nan::SetPrototypeMethod(tpl, "SetSelectedCellOpacity", SetSelectedCellOpacity);
	Nan::SetPrototypeMethod(tpl, "setSelectedCellOpacity", SetSelectedCellOpacity);

	Nan::SetPrototypeMethod(tpl, "SetSelectedPointColor", SetSelectedPointColor);
	Nan::SetPrototypeMethod(tpl, "setSelectedPointColor", SetSelectedPointColor);

	Nan::SetPrototypeMethod(tpl, "SetSelectedPointOpacity", SetSelectedPointOpacity);
	Nan::SetPrototypeMethod(tpl, "setSelectedPointOpacity", SetSelectedPointOpacity);

	Nan::SetPrototypeMethod(tpl, "SetUseCellLookupTable", SetUseCellLookupTable);
	Nan::SetPrototypeMethod(tpl, "setUseCellLookupTable", SetUseCellLookupTable);

	Nan::SetPrototypeMethod(tpl, "SetUseCurrentAnnotationColor", SetUseCurrentAnnotationColor);
	Nan::SetPrototypeMethod(tpl, "setUseCurrentAnnotationColor", SetUseCurrentAnnotationColor);

	Nan::SetPrototypeMethod(tpl, "SetUsePointLookupTable", SetUsePointLookupTable);
	Nan::SetPrototypeMethod(tpl, "setUsePointLookupTable", SetUsePointLookupTable);

	Nan::SetPrototypeMethod(tpl, "UseCellLookupTableOff", UseCellLookupTableOff);
	Nan::SetPrototypeMethod(tpl, "useCellLookupTableOff", UseCellLookupTableOff);

	Nan::SetPrototypeMethod(tpl, "UseCellLookupTableOn", UseCellLookupTableOn);
	Nan::SetPrototypeMethod(tpl, "useCellLookupTableOn", UseCellLookupTableOn);

	Nan::SetPrototypeMethod(tpl, "UseCurrentAnnotationColorOff", UseCurrentAnnotationColorOff);
	Nan::SetPrototypeMethod(tpl, "useCurrentAnnotationColorOff", UseCurrentAnnotationColorOff);

	Nan::SetPrototypeMethod(tpl, "UseCurrentAnnotationColorOn", UseCurrentAnnotationColorOn);
	Nan::SetPrototypeMethod(tpl, "useCurrentAnnotationColorOn", UseCurrentAnnotationColorOn);

	Nan::SetPrototypeMethod(tpl, "UsePointLookupTableOff", UsePointLookupTableOff);
	Nan::SetPrototypeMethod(tpl, "usePointLookupTableOff", UsePointLookupTableOff);

	Nan::SetPrototypeMethod(tpl, "UsePointLookupTableOn", UsePointLookupTableOn);
	Nan::SetPrototypeMethod(tpl, "usePointLookupTableOn", UsePointLookupTableOn);

#ifdef VTK_NODE_PLUS_VTKAPPLYCOLORSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKAPPLYCOLORSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkApplyColorsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkApplyColors> native = vtkSmartPointer<vtkApplyColors>::New();
		VtkApplyColorsWrap* obj = new VtkApplyColorsWrap(native);
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

void VtkApplyColorsWrap::GetCellColorOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellColorOutputArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkApplyColorsWrap::GetCellLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	vtkScalarsToColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellLookupTable();
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

void VtkApplyColorsWrap::GetDefaultCellColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultCellColor();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkApplyColorsWrap::GetDefaultCellOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultCellOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyColorsWrap::GetDefaultPointColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultPointColor();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkApplyColorsWrap::GetDefaultPointOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultPointOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyColorsWrap::GetPointColorOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointColorOutputArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkApplyColorsWrap::GetPointLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	vtkScalarsToColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointLookupTable();
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

void VtkApplyColorsWrap::GetScaleCellLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleCellLookupTable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyColorsWrap::GetScalePointLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalePointLookupTable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyColorsWrap::GetSelectedCellColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedCellColor();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkApplyColorsWrap::GetSelectedCellOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedCellOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyColorsWrap::GetSelectedPointColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedPointColor();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkApplyColorsWrap::GetSelectedPointOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedPointOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyColorsWrap::GetUseCellLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseCellLookupTable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyColorsWrap::GetUseCurrentAnnotationColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseCurrentAnnotationColor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyColorsWrap::GetUsePointLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUsePointLookupTable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyColorsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	vtkApplyColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkApplyColorsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkApplyColorsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkApplyColorsWrap *w = new VtkApplyColorsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkApplyColorsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkApplyColors * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkApplyColorsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkApplyColorsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkApplyColorsWrap *w = new VtkApplyColorsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::ScaleCellLookupTableOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScaleCellLookupTableOff();
}

void VtkApplyColorsWrap::ScaleCellLookupTableOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScaleCellLookupTableOn();
}

void VtkApplyColorsWrap::ScalePointLookupTableOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalePointLookupTableOff();
}

void VtkApplyColorsWrap::ScalePointLookupTableOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalePointLookupTableOn();
}

void VtkApplyColorsWrap::SetCellColorOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellColorOutputArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::SetCellLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarsToColorsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarsToColorsWrap *a0 = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellLookupTable(
			(vtkScalarsToColors *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::SetDefaultCellColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDefaultCellColor(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetDefaultCellColor(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetDefaultCellColor(
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

void VtkApplyColorsWrap::SetDefaultCellOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDefaultCellOpacity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::SetDefaultPointColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDefaultPointColor(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetDefaultPointColor(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetDefaultPointColor(
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

void VtkApplyColorsWrap::SetDefaultPointOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDefaultPointOpacity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::SetPointColorOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointColorOutputArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::SetPointLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarsToColorsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarsToColorsWrap *a0 = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointLookupTable(
			(vtkScalarsToColors *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::SetScaleCellLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleCellLookupTable(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::SetScalePointLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalePointLookupTable(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::SetSelectedCellColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedCellColor(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetSelectedCellColor(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetSelectedCellColor(
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

void VtkApplyColorsWrap::SetSelectedCellOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedCellOpacity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::SetSelectedPointColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedPointColor(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetSelectedPointColor(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetSelectedPointColor(
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

void VtkApplyColorsWrap::SetSelectedPointOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedPointOpacity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::SetUseCellLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseCellLookupTable(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::SetUseCurrentAnnotationColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseCurrentAnnotationColor(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::SetUsePointLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUsePointLookupTable(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyColorsWrap::UseCellLookupTableOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseCellLookupTableOff();
}

void VtkApplyColorsWrap::UseCellLookupTableOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseCellLookupTableOn();
}

void VtkApplyColorsWrap::UseCurrentAnnotationColorOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseCurrentAnnotationColorOff();
}

void VtkApplyColorsWrap::UseCurrentAnnotationColorOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseCurrentAnnotationColorOn();
}

void VtkApplyColorsWrap::UsePointLookupTableOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UsePointLookupTableOff();
}

void VtkApplyColorsWrap::UsePointLookupTableOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyColorsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyColorsWrap>(info.Holder());
	vtkApplyColors *native = (vtkApplyColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UsePointLookupTableOn();
}

