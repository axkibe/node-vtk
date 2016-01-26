/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageHistogramWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageStencilDataWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkIdTypeArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageHistogramWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageHistogramWrap::ptpl;

VtkImageHistogramWrap::VtkImageHistogramWrap()
{ }

VtkImageHistogramWrap::VtkImageHistogramWrap(vtkSmartPointer<vtkImageHistogram> _native)
{ native = _native; }

VtkImageHistogramWrap::~VtkImageHistogramWrap()
{ }

void VtkImageHistogramWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageHistogram").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageHistogram").ToLocalChecked(), ConstructorGetter);
}

void VtkImageHistogramWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageHistogramWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageHistogramWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AutomaticBinningOff", AutomaticBinningOff);
	Nan::SetPrototypeMethod(tpl, "automaticBinningOff", AutomaticBinningOff);

	Nan::SetPrototypeMethod(tpl, "AutomaticBinningOn", AutomaticBinningOn);
	Nan::SetPrototypeMethod(tpl, "automaticBinningOn", AutomaticBinningOn);

	Nan::SetPrototypeMethod(tpl, "GenerateHistogramImageOff", GenerateHistogramImageOff);
	Nan::SetPrototypeMethod(tpl, "generateHistogramImageOff", GenerateHistogramImageOff);

	Nan::SetPrototypeMethod(tpl, "GenerateHistogramImageOn", GenerateHistogramImageOn);
	Nan::SetPrototypeMethod(tpl, "generateHistogramImageOn", GenerateHistogramImageOn);

	Nan::SetPrototypeMethod(tpl, "GetActiveComponent", GetActiveComponent);
	Nan::SetPrototypeMethod(tpl, "getActiveComponent", GetActiveComponent);

	Nan::SetPrototypeMethod(tpl, "GetAutomaticBinning", GetAutomaticBinning);
	Nan::SetPrototypeMethod(tpl, "getAutomaticBinning", GetAutomaticBinning);

	Nan::SetPrototypeMethod(tpl, "GetBinOrigin", GetBinOrigin);
	Nan::SetPrototypeMethod(tpl, "getBinOrigin", GetBinOrigin);

	Nan::SetPrototypeMethod(tpl, "GetBinSpacing", GetBinSpacing);
	Nan::SetPrototypeMethod(tpl, "getBinSpacing", GetBinSpacing);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGenerateHistogramImage", GetGenerateHistogramImage);
	Nan::SetPrototypeMethod(tpl, "getGenerateHistogramImage", GetGenerateHistogramImage);

	Nan::SetPrototypeMethod(tpl, "GetHistogram", GetHistogram);
	Nan::SetPrototypeMethod(tpl, "getHistogram", GetHistogram);

	Nan::SetPrototypeMethod(tpl, "GetHistogramImageScale", GetHistogramImageScale);
	Nan::SetPrototypeMethod(tpl, "getHistogramImageScale", GetHistogramImageScale);

	Nan::SetPrototypeMethod(tpl, "GetHistogramImageScaleAsString", GetHistogramImageScaleAsString);
	Nan::SetPrototypeMethod(tpl, "getHistogramImageScaleAsString", GetHistogramImageScaleAsString);

	Nan::SetPrototypeMethod(tpl, "GetHistogramImageScaleMaxValue", GetHistogramImageScaleMaxValue);
	Nan::SetPrototypeMethod(tpl, "getHistogramImageScaleMaxValue", GetHistogramImageScaleMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetHistogramImageScaleMinValue", GetHistogramImageScaleMinValue);
	Nan::SetPrototypeMethod(tpl, "getHistogramImageScaleMinValue", GetHistogramImageScaleMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfBins", GetMaximumNumberOfBins);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfBins", GetMaximumNumberOfBins);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfBins", GetNumberOfBins);
	Nan::SetPrototypeMethod(tpl, "getNumberOfBins", GetNumberOfBins);

	Nan::SetPrototypeMethod(tpl, "GetStencil", GetStencil);
	Nan::SetPrototypeMethod(tpl, "getStencil", GetStencil);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetActiveComponent", SetActiveComponent);
	Nan::SetPrototypeMethod(tpl, "setActiveComponent", SetActiveComponent);

	Nan::SetPrototypeMethod(tpl, "SetAutomaticBinning", SetAutomaticBinning);
	Nan::SetPrototypeMethod(tpl, "setAutomaticBinning", SetAutomaticBinning);

	Nan::SetPrototypeMethod(tpl, "SetBinOrigin", SetBinOrigin);
	Nan::SetPrototypeMethod(tpl, "setBinOrigin", SetBinOrigin);

	Nan::SetPrototypeMethod(tpl, "SetBinSpacing", SetBinSpacing);
	Nan::SetPrototypeMethod(tpl, "setBinSpacing", SetBinSpacing);

	Nan::SetPrototypeMethod(tpl, "SetGenerateHistogramImage", SetGenerateHistogramImage);
	Nan::SetPrototypeMethod(tpl, "setGenerateHistogramImage", SetGenerateHistogramImage);

	Nan::SetPrototypeMethod(tpl, "SetHistogramImageScale", SetHistogramImageScale);
	Nan::SetPrototypeMethod(tpl, "setHistogramImageScale", SetHistogramImageScale);

	Nan::SetPrototypeMethod(tpl, "SetHistogramImageScaleToLinear", SetHistogramImageScaleToLinear);
	Nan::SetPrototypeMethod(tpl, "setHistogramImageScaleToLinear", SetHistogramImageScaleToLinear);

	Nan::SetPrototypeMethod(tpl, "SetHistogramImageScaleToLog", SetHistogramImageScaleToLog);
	Nan::SetPrototypeMethod(tpl, "setHistogramImageScaleToLog", SetHistogramImageScaleToLog);

	Nan::SetPrototypeMethod(tpl, "SetHistogramImageScaleToSqrt", SetHistogramImageScaleToSqrt);
	Nan::SetPrototypeMethod(tpl, "setHistogramImageScaleToSqrt", SetHistogramImageScaleToSqrt);

	Nan::SetPrototypeMethod(tpl, "SetHistogramImageSize", SetHistogramImageSize);
	Nan::SetPrototypeMethod(tpl, "setHistogramImageSize", SetHistogramImageSize);

	Nan::SetPrototypeMethod(tpl, "SetMaximumNumberOfBins", SetMaximumNumberOfBins);
	Nan::SetPrototypeMethod(tpl, "setMaximumNumberOfBins", SetMaximumNumberOfBins);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfBins", SetNumberOfBins);
	Nan::SetPrototypeMethod(tpl, "setNumberOfBins", SetNumberOfBins);

	Nan::SetPrototypeMethod(tpl, "SetStencilConnection", SetStencilConnection);
	Nan::SetPrototypeMethod(tpl, "setStencilConnection", SetStencilConnection);

	Nan::SetPrototypeMethod(tpl, "SetStencilData", SetStencilData);
	Nan::SetPrototypeMethod(tpl, "setStencilData", SetStencilData);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkImageHistogramWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageHistogram> native = vtkSmartPointer<vtkImageHistogram>::New();
		VtkImageHistogramWrap* obj = new VtkImageHistogramWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageHistogramWrap::AutomaticBinningOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticBinningOff();
}

void VtkImageHistogramWrap::AutomaticBinningOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticBinningOn();
}

void VtkImageHistogramWrap::GenerateHistogramImageOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateHistogramImageOff();
}

void VtkImageHistogramWrap::GenerateHistogramImageOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateHistogramImageOn();
}

void VtkImageHistogramWrap::GetActiveComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageHistogramWrap::GetAutomaticBinning(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutomaticBinning();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageHistogramWrap::GetBinOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBinOrigin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageHistogramWrap::GetBinSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBinSpacing();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageHistogramWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageHistogramWrap::GetGenerateHistogramImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateHistogramImage();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageHistogramWrap::GetHistogram(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHistogram();
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

void VtkImageHistogramWrap::GetHistogramImageScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHistogramImageScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageHistogramWrap::GetHistogramImageScaleAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHistogramImageScaleAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageHistogramWrap::GetHistogramImageScaleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHistogramImageScaleMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageHistogramWrap::GetHistogramImageScaleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHistogramImageScaleMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageHistogramWrap::GetMaximumNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfBins();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageHistogramWrap::GetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfBins();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageHistogramWrap::GetStencil(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	vtkImageStencilData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStencil();
		VtkImageStencilDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageStencilDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageStencilDataWrap *w = new VtkImageStencilDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageHistogramWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
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

void VtkImageHistogramWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	vtkImageHistogram * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageHistogramWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageHistogramWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageHistogramWrap *w = new VtkImageHistogramWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageHistogramWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageHistogram * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageHistogramWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkImageHistogramWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageHistogramWrap *w = new VtkImageHistogramWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageHistogramWrap::SetActiveComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
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

void VtkImageHistogramWrap::SetAutomaticBinning(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutomaticBinning(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageHistogramWrap::SetBinOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBinOrigin(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageHistogramWrap::SetBinSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBinSpacing(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageHistogramWrap::SetGenerateHistogramImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateHistogramImage(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageHistogramWrap::SetHistogramImageScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHistogramImageScale(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageHistogramWrap::SetHistogramImageScaleToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetHistogramImageScaleToLinear();
}

void VtkImageHistogramWrap::SetHistogramImageScaleToLog(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetHistogramImageScaleToLog();
}

void VtkImageHistogramWrap::SetHistogramImageScaleToSqrt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetHistogramImageScaleToSqrt();
}

void VtkImageHistogramWrap::SetHistogramImageSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetHistogramImageSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageHistogramWrap::SetMaximumNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumNumberOfBins(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageHistogramWrap::SetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfBins(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageHistogramWrap::SetStencilConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
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

void VtkImageHistogramWrap::SetStencilData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageHistogramWrap *wrapper = ObjectWrap::Unwrap<VtkImageHistogramWrap>(info.Holder());
	vtkImageHistogram *native = (vtkImageHistogram *)wrapper->native.GetPointer();
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

