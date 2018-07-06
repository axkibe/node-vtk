/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkRenderedRepresentationWrap.h"
#include "vtkParallelCoordinatesRepresentationWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkViewThemeWrap.h"
#include "vtkViewWrap.h"
#include "vtkStringArrayWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkPointsWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkParallelCoordinatesRepresentationWrap::ptpl;

VtkParallelCoordinatesRepresentationWrap::VtkParallelCoordinatesRepresentationWrap()
{ }

VtkParallelCoordinatesRepresentationWrap::VtkParallelCoordinatesRepresentationWrap(vtkSmartPointer<vtkParallelCoordinatesRepresentation> _native)
{ native = _native; }

VtkParallelCoordinatesRepresentationWrap::~VtkParallelCoordinatesRepresentationWrap()
{ }

void VtkParallelCoordinatesRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkParallelCoordinatesRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ParallelCoordinatesRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkParallelCoordinatesRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkParallelCoordinatesRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderedRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderedRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkParallelCoordinatesRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ApplyViewTheme", ApplyViewTheme);
	Nan::SetPrototypeMethod(tpl, "applyViewTheme", ApplyViewTheme);

	Nan::SetPrototypeMethod(tpl, "GetAngleBrushThreshold", GetAngleBrushThreshold);
	Nan::SetPrototypeMethod(tpl, "getAngleBrushThreshold", GetAngleBrushThreshold);

	Nan::SetPrototypeMethod(tpl, "GetAxisColor", GetAxisColor);
	Nan::SetPrototypeMethod(tpl, "getAxisColor", GetAxisColor);

	Nan::SetPrototypeMethod(tpl, "GetAxisLabelColor", GetAxisLabelColor);
	Nan::SetPrototypeMethod(tpl, "getAxisLabelColor", GetAxisLabelColor);

	Nan::SetPrototypeMethod(tpl, "GetCurveResolution", GetCurveResolution);
	Nan::SetPrototypeMethod(tpl, "getCurveResolution", GetCurveResolution);

	Nan::SetPrototypeMethod(tpl, "GetFontSize", GetFontSize);
	Nan::SetPrototypeMethod(tpl, "getFontSize", GetFontSize);

	Nan::SetPrototypeMethod(tpl, "GetFunctionBrushThreshold", GetFunctionBrushThreshold);
	Nan::SetPrototypeMethod(tpl, "getFunctionBrushThreshold", GetFunctionBrushThreshold);

	Nan::SetPrototypeMethod(tpl, "GetHoverText", GetHoverText);
	Nan::SetPrototypeMethod(tpl, "getHoverText", GetHoverText);

	Nan::SetPrototypeMethod(tpl, "GetLineColor", GetLineColor);
	Nan::SetPrototypeMethod(tpl, "getLineColor", GetLineColor);

	Nan::SetPrototypeMethod(tpl, "GetLineOpacity", GetLineOpacity);
	Nan::SetPrototypeMethod(tpl, "getLineOpacity", GetLineOpacity);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfAxes", GetNumberOfAxes);
	Nan::SetPrototypeMethod(tpl, "getNumberOfAxes", GetNumberOfAxes);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfAxisLabels", GetNumberOfAxisLabels);
	Nan::SetPrototypeMethod(tpl, "getNumberOfAxisLabels", GetNumberOfAxisLabels);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSamples", GetNumberOfSamples);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSamples", GetNumberOfSamples);

	Nan::SetPrototypeMethod(tpl, "GetPositionNearXCoordinate", GetPositionNearXCoordinate);
	Nan::SetPrototypeMethod(tpl, "getPositionNearXCoordinate", GetPositionNearXCoordinate);

	Nan::SetPrototypeMethod(tpl, "GetRangeAtPosition", GetRangeAtPosition);
	Nan::SetPrototypeMethod(tpl, "getRangeAtPosition", GetRangeAtPosition);

	Nan::SetPrototypeMethod(tpl, "GetUseCurves", GetUseCurves);
	Nan::SetPrototypeMethod(tpl, "getUseCurves", GetUseCurves);

	Nan::SetPrototypeMethod(tpl, "GetXCoordinateOfPosition", GetXCoordinateOfPosition);
	Nan::SetPrototypeMethod(tpl, "getXCoordinateOfPosition", GetXCoordinateOfPosition);

	Nan::SetPrototypeMethod(tpl, "LassoSelect", LassoSelect);
	Nan::SetPrototypeMethod(tpl, "lassoSelect", LassoSelect);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ResetAxes", ResetAxes);
	Nan::SetPrototypeMethod(tpl, "resetAxes", ResetAxes);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAngleBrushThreshold", SetAngleBrushThreshold);
	Nan::SetPrototypeMethod(tpl, "setAngleBrushThreshold", SetAngleBrushThreshold);

	Nan::SetPrototypeMethod(tpl, "SetAxisColor", SetAxisColor);
	Nan::SetPrototypeMethod(tpl, "setAxisColor", SetAxisColor);

	Nan::SetPrototypeMethod(tpl, "SetAxisLabelColor", SetAxisLabelColor);
	Nan::SetPrototypeMethod(tpl, "setAxisLabelColor", SetAxisLabelColor);

	Nan::SetPrototypeMethod(tpl, "SetAxisTitles", SetAxisTitles);
	Nan::SetPrototypeMethod(tpl, "setAxisTitles", SetAxisTitles);

	Nan::SetPrototypeMethod(tpl, "SetCurveResolution", SetCurveResolution);
	Nan::SetPrototypeMethod(tpl, "setCurveResolution", SetCurveResolution);

	Nan::SetPrototypeMethod(tpl, "SetFontSize", SetFontSize);
	Nan::SetPrototypeMethod(tpl, "setFontSize", SetFontSize);

	Nan::SetPrototypeMethod(tpl, "SetFunctionBrushThreshold", SetFunctionBrushThreshold);
	Nan::SetPrototypeMethod(tpl, "setFunctionBrushThreshold", SetFunctionBrushThreshold);

	Nan::SetPrototypeMethod(tpl, "SetLineColor", SetLineColor);
	Nan::SetPrototypeMethod(tpl, "setLineColor", SetLineColor);

	Nan::SetPrototypeMethod(tpl, "SetLineOpacity", SetLineOpacity);
	Nan::SetPrototypeMethod(tpl, "setLineOpacity", SetLineOpacity);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfAxisLabels", SetNumberOfAxisLabels);
	Nan::SetPrototypeMethod(tpl, "setNumberOfAxisLabels", SetNumberOfAxisLabels);

	Nan::SetPrototypeMethod(tpl, "SetPlotTitle", SetPlotTitle);
	Nan::SetPrototypeMethod(tpl, "setPlotTitle", SetPlotTitle);

	Nan::SetPrototypeMethod(tpl, "SetRangeAtPosition", SetRangeAtPosition);
	Nan::SetPrototypeMethod(tpl, "setRangeAtPosition", SetRangeAtPosition);

	Nan::SetPrototypeMethod(tpl, "SetUseCurves", SetUseCurves);
	Nan::SetPrototypeMethod(tpl, "setUseCurves", SetUseCurves);

	Nan::SetPrototypeMethod(tpl, "SetXCoordinateOfPosition", SetXCoordinateOfPosition);
	Nan::SetPrototypeMethod(tpl, "setXCoordinateOfPosition", SetXCoordinateOfPosition);

	Nan::SetPrototypeMethod(tpl, "SwapAxisPositions", SwapAxisPositions);
	Nan::SetPrototypeMethod(tpl, "swapAxisPositions", SwapAxisPositions);

	Nan::SetPrototypeMethod(tpl, "UseCurvesOff", UseCurvesOff);
	Nan::SetPrototypeMethod(tpl, "useCurvesOff", UseCurvesOff);

	Nan::SetPrototypeMethod(tpl, "UseCurvesOn", UseCurvesOn);
	Nan::SetPrototypeMethod(tpl, "useCurvesOn", UseCurvesOn);

#ifdef VTK_NODE_PLUS_VTKPARALLELCOORDINATESREPRESENTATIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPARALLELCOORDINATESREPRESENTATIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkParallelCoordinatesRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkParallelCoordinatesRepresentation> native = vtkSmartPointer<vtkParallelCoordinatesRepresentation>::New();
		VtkParallelCoordinatesRepresentationWrap* obj = new VtkParallelCoordinatesRepresentationWrap(native);
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

void VtkParallelCoordinatesRepresentationWrap::ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewThemeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewThemeWrap *a0 = ObjectWrap::Unwrap<VtkViewThemeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ApplyViewTheme(
			(vtkViewTheme *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::GetAngleBrushThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngleBrushThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesRepresentationWrap::GetAxisColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAxisColor();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkParallelCoordinatesRepresentationWrap::GetAxisLabelColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAxisLabelColor();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkParallelCoordinatesRepresentationWrap::GetCurveResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurveResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesRepresentationWrap::GetFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFontSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesRepresentationWrap::GetFunctionBrushThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFunctionBrushThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesRepresentationWrap::GetHoverText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewWrap *a0 = ObjectWrap::Unwrap<VtkViewWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				char const * r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->GetHoverText(
					(vtkView *) a0->native.GetPointer(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::GetLineColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineColor();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkParallelCoordinatesRepresentationWrap::GetLineOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesRepresentationWrap::GetNumberOfAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfAxes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesRepresentationWrap::GetNumberOfAxisLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfAxisLabels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesRepresentationWrap::GetNumberOfSamples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSamples();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesRepresentationWrap::GetPositionNearXCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPositionNearXCoordinate(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::GetRangeAtPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetRangeAtPosition(
				info[0]->Int32Value(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[2];
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 2; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetRangeAtPosition(
				info[0]->Int32Value(),
				b1
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::GetUseCurves(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseCurves();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelCoordinatesRepresentationWrap::GetXCoordinateOfPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetXCoordinateOfPosition(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::LassoSelect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[2]))
			{
				VtkPointsWrap *a2 = ObjectWrap::Unwrap<VtkPointsWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->LassoSelect(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					(vtkPoints *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	vtkParallelCoordinatesRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkParallelCoordinatesRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParallelCoordinatesRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParallelCoordinatesRepresentationWrap *w = new VtkParallelCoordinatesRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParallelCoordinatesRepresentationWrap::ResetAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetAxes();
}

void VtkParallelCoordinatesRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkParallelCoordinatesRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkParallelCoordinatesRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkParallelCoordinatesRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParallelCoordinatesRepresentationWrap *w = new VtkParallelCoordinatesRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::SetAngleBrushThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAngleBrushThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::SetAxisColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
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
		native->SetAxisColor(
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
		native->SetAxisColor(
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
				native->SetAxisColor(
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

void VtkParallelCoordinatesRepresentationWrap::SetAxisLabelColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
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
		native->SetAxisLabelColor(
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
		native->SetAxisLabelColor(
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
				native->SetAxisLabelColor(
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

void VtkParallelCoordinatesRepresentationWrap::SetAxisTitles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAxisTitles(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStringArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStringArrayWrap *a0 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAxisTitles(
			(vtkStringArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::SetCurveResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCurveResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::SetFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFontSize(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::SetFunctionBrushThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFunctionBrushThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::SetLineColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
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
		native->SetLineColor(
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
		native->SetLineColor(
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
				native->SetLineColor(
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

void VtkParallelCoordinatesRepresentationWrap::SetLineOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLineOpacity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::SetNumberOfAxisLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfAxisLabels(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::SetPlotTitle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlotTitle(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::SetRangeAtPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->SetRangeAtPosition(
				info[0]->Int32Value(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[2];
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 2; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->SetRangeAtPosition(
				info[0]->Int32Value(),
				b1
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::SetUseCurves(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseCurves(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::SetXCoordinateOfPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->SetXCoordinateOfPosition(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::SwapAxisPositions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->SwapAxisPositions(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelCoordinatesRepresentationWrap::UseCurvesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseCurvesOff();
}

void VtkParallelCoordinatesRepresentationWrap::UseCurvesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelCoordinatesRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkParallelCoordinatesRepresentationWrap>(info.Holder());
	vtkParallelCoordinatesRepresentation *native = (vtkParallelCoordinatesRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseCurvesOn();
}

