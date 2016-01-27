/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkImageToPolyDataFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkScalarsToColorsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageToPolyDataFilterWrap::ptpl;

VtkImageToPolyDataFilterWrap::VtkImageToPolyDataFilterWrap()
{ }

VtkImageToPolyDataFilterWrap::VtkImageToPolyDataFilterWrap(vtkSmartPointer<vtkImageToPolyDataFilter> _native)
{ native = _native; }

VtkImageToPolyDataFilterWrap::~VtkImageToPolyDataFilterWrap()
{ }

void VtkImageToPolyDataFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageToPolyDataFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageToPolyDataFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkImageToPolyDataFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageToPolyDataFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageToPolyDataFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DecimationOff", DecimationOff);
	Nan::SetPrototypeMethod(tpl, "decimationOff", DecimationOff);

	Nan::SetPrototypeMethod(tpl, "DecimationOn", DecimationOn);
	Nan::SetPrototypeMethod(tpl, "decimationOn", DecimationOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColorMode", GetColorMode);
	Nan::SetPrototypeMethod(tpl, "getColorMode", GetColorMode);

	Nan::SetPrototypeMethod(tpl, "GetColorModeMaxValue", GetColorModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getColorModeMaxValue", GetColorModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetColorModeMinValue", GetColorModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getColorModeMinValue", GetColorModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetDecimation", GetDecimation);
	Nan::SetPrototypeMethod(tpl, "getDecimation", GetDecimation);

	Nan::SetPrototypeMethod(tpl, "GetDecimationError", GetDecimationError);
	Nan::SetPrototypeMethod(tpl, "getDecimationError", GetDecimationError);

	Nan::SetPrototypeMethod(tpl, "GetDecimationErrorMaxValue", GetDecimationErrorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDecimationErrorMaxValue", GetDecimationErrorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDecimationErrorMinValue", GetDecimationErrorMinValue);
	Nan::SetPrototypeMethod(tpl, "getDecimationErrorMinValue", GetDecimationErrorMinValue);

	Nan::SetPrototypeMethod(tpl, "GetError", GetError);
	Nan::SetPrototypeMethod(tpl, "getError", GetError);

	Nan::SetPrototypeMethod(tpl, "GetErrorMaxValue", GetErrorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getErrorMaxValue", GetErrorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetErrorMinValue", GetErrorMinValue);
	Nan::SetPrototypeMethod(tpl, "getErrorMinValue", GetErrorMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLookupTable", GetLookupTable);
	Nan::SetPrototypeMethod(tpl, "getLookupTable", GetLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSmoothingIterations", GetNumberOfSmoothingIterations);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSmoothingIterations", GetNumberOfSmoothingIterations);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSmoothingIterationsMaxValue", GetNumberOfSmoothingIterationsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSmoothingIterationsMaxValue", GetNumberOfSmoothingIterationsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSmoothingIterationsMinValue", GetNumberOfSmoothingIterationsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSmoothingIterationsMinValue", GetNumberOfSmoothingIterationsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputStyle", GetOutputStyle);
	Nan::SetPrototypeMethod(tpl, "getOutputStyle", GetOutputStyle);

	Nan::SetPrototypeMethod(tpl, "GetOutputStyleMaxValue", GetOutputStyleMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOutputStyleMaxValue", GetOutputStyleMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputStyleMinValue", GetOutputStyleMinValue);
	Nan::SetPrototypeMethod(tpl, "getOutputStyleMinValue", GetOutputStyleMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSmoothing", GetSmoothing);
	Nan::SetPrototypeMethod(tpl, "getSmoothing", GetSmoothing);

	Nan::SetPrototypeMethod(tpl, "GetSubImageSize", GetSubImageSize);
	Nan::SetPrototypeMethod(tpl, "getSubImageSize", GetSubImageSize);

	Nan::SetPrototypeMethod(tpl, "GetSubImageSizeMaxValue", GetSubImageSizeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSubImageSizeMaxValue", GetSubImageSizeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSubImageSizeMinValue", GetSubImageSizeMinValue);
	Nan::SetPrototypeMethod(tpl, "getSubImageSizeMinValue", GetSubImageSizeMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColorMode", SetColorMode);
	Nan::SetPrototypeMethod(tpl, "setColorMode", SetColorMode);

	Nan::SetPrototypeMethod(tpl, "SetColorModeToLUT", SetColorModeToLUT);
	Nan::SetPrototypeMethod(tpl, "setColorModeToLUT", SetColorModeToLUT);

	Nan::SetPrototypeMethod(tpl, "SetColorModeToLinear256", SetColorModeToLinear256);
	Nan::SetPrototypeMethod(tpl, "setColorModeToLinear256", SetColorModeToLinear256);

	Nan::SetPrototypeMethod(tpl, "SetDecimation", SetDecimation);
	Nan::SetPrototypeMethod(tpl, "setDecimation", SetDecimation);

	Nan::SetPrototypeMethod(tpl, "SetDecimationError", SetDecimationError);
	Nan::SetPrototypeMethod(tpl, "setDecimationError", SetDecimationError);

	Nan::SetPrototypeMethod(tpl, "SetError", SetError);
	Nan::SetPrototypeMethod(tpl, "setError", SetError);

	Nan::SetPrototypeMethod(tpl, "SetLookupTable", SetLookupTable);
	Nan::SetPrototypeMethod(tpl, "setLookupTable", SetLookupTable);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfSmoothingIterations", SetNumberOfSmoothingIterations);
	Nan::SetPrototypeMethod(tpl, "setNumberOfSmoothingIterations", SetNumberOfSmoothingIterations);

	Nan::SetPrototypeMethod(tpl, "SetOutputStyle", SetOutputStyle);
	Nan::SetPrototypeMethod(tpl, "setOutputStyle", SetOutputStyle);

	Nan::SetPrototypeMethod(tpl, "SetOutputStyleToPixelize", SetOutputStyleToPixelize);
	Nan::SetPrototypeMethod(tpl, "setOutputStyleToPixelize", SetOutputStyleToPixelize);

	Nan::SetPrototypeMethod(tpl, "SetOutputStyleToPolygonalize", SetOutputStyleToPolygonalize);
	Nan::SetPrototypeMethod(tpl, "setOutputStyleToPolygonalize", SetOutputStyleToPolygonalize);

	Nan::SetPrototypeMethod(tpl, "SetOutputStyleToRunLength", SetOutputStyleToRunLength);
	Nan::SetPrototypeMethod(tpl, "setOutputStyleToRunLength", SetOutputStyleToRunLength);

	Nan::SetPrototypeMethod(tpl, "SetSmoothing", SetSmoothing);
	Nan::SetPrototypeMethod(tpl, "setSmoothing", SetSmoothing);

	Nan::SetPrototypeMethod(tpl, "SetSubImageSize", SetSubImageSize);
	Nan::SetPrototypeMethod(tpl, "setSubImageSize", SetSubImageSize);

	Nan::SetPrototypeMethod(tpl, "SmoothingOff", SmoothingOff);
	Nan::SetPrototypeMethod(tpl, "smoothingOff", SmoothingOff);

	Nan::SetPrototypeMethod(tpl, "SmoothingOn", SmoothingOn);
	Nan::SetPrototypeMethod(tpl, "smoothingOn", SmoothingOn);

	ptpl.Reset( tpl );
}

void VtkImageToPolyDataFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageToPolyDataFilter> native = vtkSmartPointer<vtkImageToPolyDataFilter>::New();
		VtkImageToPolyDataFilterWrap* obj = new VtkImageToPolyDataFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageToPolyDataFilterWrap::DecimationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DecimationOff();
}

void VtkImageToPolyDataFilterWrap::DecimationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DecimationOn();
}

void VtkImageToPolyDataFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageToPolyDataFilterWrap::GetColorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetColorModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetColorModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetDecimation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDecimation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetDecimationError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDecimationError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetDecimationErrorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDecimationErrorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetDecimationErrorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDecimationErrorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetErrorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetErrorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetErrorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetErrorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
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
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageToPolyDataFilterWrap::GetNumberOfSmoothingIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSmoothingIterations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetNumberOfSmoothingIterationsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSmoothingIterationsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetNumberOfSmoothingIterationsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSmoothingIterationsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetOutputStyle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputStyle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetOutputStyleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputStyleMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetOutputStyleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputStyleMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSmoothing();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetSubImageSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubImageSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetSubImageSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubImageSizeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::GetSubImageSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubImageSizeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageToPolyDataFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
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

void VtkImageToPolyDataFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	vtkImageToPolyDataFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageToPolyDataFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageToPolyDataFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageToPolyDataFilterWrap *w = new VtkImageToPolyDataFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageToPolyDataFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageToPolyDataFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageToPolyDataFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageToPolyDataFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageToPolyDataFilterWrap *w = new VtkImageToPolyDataFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageToPolyDataFilterWrap::SetColorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
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

void VtkImageToPolyDataFilterWrap::SetColorModeToLUT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetColorModeToLUT();
}

void VtkImageToPolyDataFilterWrap::SetColorModeToLinear256(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetColorModeToLinear256();
}

void VtkImageToPolyDataFilterWrap::SetDecimation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDecimation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageToPolyDataFilterWrap::SetDecimationError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDecimationError(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageToPolyDataFilterWrap::SetError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetError(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageToPolyDataFilterWrap::SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
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

void VtkImageToPolyDataFilterWrap::SetNumberOfSmoothingIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfSmoothingIterations(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageToPolyDataFilterWrap::SetOutputStyle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputStyle(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageToPolyDataFilterWrap::SetOutputStyleToPixelize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputStyleToPixelize();
}

void VtkImageToPolyDataFilterWrap::SetOutputStyleToPolygonalize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputStyleToPolygonalize();
}

void VtkImageToPolyDataFilterWrap::SetOutputStyleToRunLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputStyleToRunLength();
}

void VtkImageToPolyDataFilterWrap::SetSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSmoothing(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageToPolyDataFilterWrap::SetSubImageSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSubImageSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageToPolyDataFilterWrap::SmoothingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SmoothingOff();
}

void VtkImageToPolyDataFilterWrap::SmoothingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageToPolyDataFilterWrap>(info.Holder());
	vtkImageToPolyDataFilter *native = (vtkImageToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SmoothingOn();
}

