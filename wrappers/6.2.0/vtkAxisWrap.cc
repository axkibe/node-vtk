/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkContextItemWrap.h"
#include "vtkAxisWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkPenWrap.h"
#include "vtkDoubleArrayWrap.h"
#include "vtkFloatArrayWrap.h"
#include "vtkStringArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAxisWrap::ptpl;

VtkAxisWrap::VtkAxisWrap()
{ }

VtkAxisWrap::VtkAxisWrap(vtkSmartPointer<vtkAxis> _native)
{ native = _native; }

VtkAxisWrap::~VtkAxisWrap()
{ }

void VtkAxisWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAxis").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Axis").ToLocalChecked(), ConstructorGetter);
}

void VtkAxisWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAxisWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAxisWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AutoScale", AutoScale);
	Nan::SetPrototypeMethod(tpl, "autoScale", AutoScale);

	Nan::SetPrototypeMethod(tpl, "GetBehavior", GetBehavior);
	Nan::SetPrototypeMethod(tpl, "getBehavior", GetBehavior);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGridPen", GetGridPen);
	Nan::SetPrototypeMethod(tpl, "getGridPen", GetGridPen);

	Nan::SetPrototypeMethod(tpl, "GetLabelProperties", GetLabelProperties);
	Nan::SetPrototypeMethod(tpl, "getLabelProperties", GetLabelProperties);

	Nan::SetPrototypeMethod(tpl, "GetMaximum", GetMaximum);
	Nan::SetPrototypeMethod(tpl, "getMaximum", GetMaximum);

	Nan::SetPrototypeMethod(tpl, "GetMaximumLimit", GetMaximumLimit);
	Nan::SetPrototypeMethod(tpl, "getMaximumLimit", GetMaximumLimit);

	Nan::SetPrototypeMethod(tpl, "GetMinimum", GetMinimum);
	Nan::SetPrototypeMethod(tpl, "getMinimum", GetMinimum);

	Nan::SetPrototypeMethod(tpl, "GetMinimumLimit", GetMinimumLimit);
	Nan::SetPrototypeMethod(tpl, "getMinimumLimit", GetMinimumLimit);

	Nan::SetPrototypeMethod(tpl, "GetNotation", GetNotation);
	Nan::SetPrototypeMethod(tpl, "getNotation", GetNotation);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTicks", GetNumberOfTicks);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTicks", GetNumberOfTicks);

	Nan::SetPrototypeMethod(tpl, "GetPen", GetPen);
	Nan::SetPrototypeMethod(tpl, "getPen", GetPen);

	Nan::SetPrototypeMethod(tpl, "GetPosition", GetPosition);
	Nan::SetPrototypeMethod(tpl, "getPosition", GetPosition);

	Nan::SetPrototypeMethod(tpl, "GetPrecision", GetPrecision);
	Nan::SetPrototypeMethod(tpl, "getPrecision", GetPrecision);

	Nan::SetPrototypeMethod(tpl, "GetScalingFactor", GetScalingFactor);
	Nan::SetPrototypeMethod(tpl, "getScalingFactor", GetScalingFactor);

	Nan::SetPrototypeMethod(tpl, "GetShift", GetShift);
	Nan::SetPrototypeMethod(tpl, "getShift", GetShift);

	Nan::SetPrototypeMethod(tpl, "GetTickLabelAlgorithm", GetTickLabelAlgorithm);
	Nan::SetPrototypeMethod(tpl, "getTickLabelAlgorithm", GetTickLabelAlgorithm);

	Nan::SetPrototypeMethod(tpl, "GetTickLabels", GetTickLabels);
	Nan::SetPrototypeMethod(tpl, "getTickLabels", GetTickLabels);

	Nan::SetPrototypeMethod(tpl, "GetTickPositions", GetTickPositions);
	Nan::SetPrototypeMethod(tpl, "getTickPositions", GetTickPositions);

	Nan::SetPrototypeMethod(tpl, "GetTickScenePositions", GetTickScenePositions);
	Nan::SetPrototypeMethod(tpl, "getTickScenePositions", GetTickScenePositions);

	Nan::SetPrototypeMethod(tpl, "GetTitleProperties", GetTitleProperties);
	Nan::SetPrototypeMethod(tpl, "getTitleProperties", GetTitleProperties);

	Nan::SetPrototypeMethod(tpl, "GetUnscaledMaximum", GetUnscaledMaximum);
	Nan::SetPrototypeMethod(tpl, "getUnscaledMaximum", GetUnscaledMaximum);

	Nan::SetPrototypeMethod(tpl, "GetUnscaledMaximumLimit", GetUnscaledMaximumLimit);
	Nan::SetPrototypeMethod(tpl, "getUnscaledMaximumLimit", GetUnscaledMaximumLimit);

	Nan::SetPrototypeMethod(tpl, "GetUnscaledMinimum", GetUnscaledMinimum);
	Nan::SetPrototypeMethod(tpl, "getUnscaledMinimum", GetUnscaledMinimum);

	Nan::SetPrototypeMethod(tpl, "GetUnscaledMinimumLimit", GetUnscaledMinimumLimit);
	Nan::SetPrototypeMethod(tpl, "getUnscaledMinimumLimit", GetUnscaledMinimumLimit);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LogScaleOff", LogScaleOff);
	Nan::SetPrototypeMethod(tpl, "logScaleOff", LogScaleOff);

	Nan::SetPrototypeMethod(tpl, "LogScaleOn", LogScaleOn);
	Nan::SetPrototypeMethod(tpl, "logScaleOn", LogScaleOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RecalculateTickSpacing", RecalculateTickSpacing);
	Nan::SetPrototypeMethod(tpl, "recalculateTickSpacing", RecalculateTickSpacing);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBehavior", SetBehavior);
	Nan::SetPrototypeMethod(tpl, "setBehavior", SetBehavior);

	Nan::SetPrototypeMethod(tpl, "SetMargins", SetMargins);
	Nan::SetPrototypeMethod(tpl, "setMargins", SetMargins);

	Nan::SetPrototypeMethod(tpl, "SetMaximum", SetMaximum);
	Nan::SetPrototypeMethod(tpl, "setMaximum", SetMaximum);

	Nan::SetPrototypeMethod(tpl, "SetMaximumLimit", SetMaximumLimit);
	Nan::SetPrototypeMethod(tpl, "setMaximumLimit", SetMaximumLimit);

	Nan::SetPrototypeMethod(tpl, "SetMinimum", SetMinimum);
	Nan::SetPrototypeMethod(tpl, "setMinimum", SetMinimum);

	Nan::SetPrototypeMethod(tpl, "SetMinimumLimit", SetMinimumLimit);
	Nan::SetPrototypeMethod(tpl, "setMinimumLimit", SetMinimumLimit);

	Nan::SetPrototypeMethod(tpl, "SetNotation", SetNotation);
	Nan::SetPrototypeMethod(tpl, "setNotation", SetNotation);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfTicks", SetNumberOfTicks);
	Nan::SetPrototypeMethod(tpl, "setNumberOfTicks", SetNumberOfTicks);

	Nan::SetPrototypeMethod(tpl, "SetPosition", SetPosition);
	Nan::SetPrototypeMethod(tpl, "setPosition", SetPosition);

	Nan::SetPrototypeMethod(tpl, "SetPrecision", SetPrecision);
	Nan::SetPrototypeMethod(tpl, "setPrecision", SetPrecision);

	Nan::SetPrototypeMethod(tpl, "SetRange", SetRange);
	Nan::SetPrototypeMethod(tpl, "setRange", SetRange);

	Nan::SetPrototypeMethod(tpl, "SetScalingFactor", SetScalingFactor);
	Nan::SetPrototypeMethod(tpl, "setScalingFactor", SetScalingFactor);

	Nan::SetPrototypeMethod(tpl, "SetShift", SetShift);
	Nan::SetPrototypeMethod(tpl, "setShift", SetShift);

	Nan::SetPrototypeMethod(tpl, "SetTickLabelAlgorithm", SetTickLabelAlgorithm);
	Nan::SetPrototypeMethod(tpl, "setTickLabelAlgorithm", SetTickLabelAlgorithm);

	Nan::SetPrototypeMethod(tpl, "SetTickLabels", SetTickLabels);
	Nan::SetPrototypeMethod(tpl, "setTickLabels", SetTickLabels);

	Nan::SetPrototypeMethod(tpl, "SetTickPositions", SetTickPositions);
	Nan::SetPrototypeMethod(tpl, "setTickPositions", SetTickPositions);

	Nan::SetPrototypeMethod(tpl, "SetUnscaledMaximum", SetUnscaledMaximum);
	Nan::SetPrototypeMethod(tpl, "setUnscaledMaximum", SetUnscaledMaximum);

	Nan::SetPrototypeMethod(tpl, "SetUnscaledMaximumLimit", SetUnscaledMaximumLimit);
	Nan::SetPrototypeMethod(tpl, "setUnscaledMaximumLimit", SetUnscaledMaximumLimit);

	Nan::SetPrototypeMethod(tpl, "SetUnscaledMinimum", SetUnscaledMinimum);
	Nan::SetPrototypeMethod(tpl, "setUnscaledMinimum", SetUnscaledMinimum);

	Nan::SetPrototypeMethod(tpl, "SetUnscaledMinimumLimit", SetUnscaledMinimumLimit);
	Nan::SetPrototypeMethod(tpl, "setUnscaledMinimumLimit", SetUnscaledMinimumLimit);

	Nan::SetPrototypeMethod(tpl, "SetUnscaledRange", SetUnscaledRange);
	Nan::SetPrototypeMethod(tpl, "setUnscaledRange", SetUnscaledRange);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkAxisWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAxis> native = vtkSmartPointer<vtkAxis>::New();
		VtkAxisWrap* obj = new VtkAxisWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAxisWrap::AutoScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoScale();
}

void VtkAxisWrap::GetBehavior(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBehavior();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAxisWrap::GetGridPen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	vtkPen * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGridPen();
		VtkPenWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPenWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPenWrap *w = new VtkPenWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxisWrap::GetLabelProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelProperties();
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxisWrap::GetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetMaximumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumLimit();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinimum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetMinimumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinimumLimit();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetNotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNotation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetNumberOfTicks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTicks();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetPen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	vtkPen * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPen();
		VtkPenWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPenWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPenWrap *w = new VtkPenWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxisWrap::GetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPosition();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetScalingFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalingFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShift();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetTickLabelAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTickLabelAlgorithm();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetTickLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTickLabels();
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

void VtkAxisWrap::GetTickPositions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	vtkDoubleArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTickPositions();
		VtkDoubleArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDoubleArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDoubleArrayWrap *w = new VtkDoubleArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxisWrap::GetTickScenePositions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	vtkFloatArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTickScenePositions();
		VtkFloatArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFloatArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFloatArrayWrap *w = new VtkFloatArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxisWrap::GetTitleProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTitleProperties();
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxisWrap::GetUnscaledMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUnscaledMaximum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetUnscaledMaximumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUnscaledMaximumLimit();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetUnscaledMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUnscaledMinimum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::GetUnscaledMinimumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUnscaledMinimumLimit();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
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

void VtkAxisWrap::LogScaleOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LogScaleOff();
}

void VtkAxisWrap::LogScaleOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LogScaleOn();
}

void VtkAxisWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	vtkAxis * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAxisWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAxisWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAxisWrap *w = new VtkAxisWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxisWrap::RecalculateTickSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RecalculateTickSpacing();
}

void VtkAxisWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAxis * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAxisWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAxisWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAxisWrap *w = new VtkAxisWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetBehavior(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBehavior(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetMargins(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetMargins(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximum(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetMaximumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumLimit(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinimum(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetMinimumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinimumLimit(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetNotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNotation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetNumberOfTicks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfTicks(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPosition(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetScalingFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalingFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShift(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetTickLabelAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTickLabelAlgorithm(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetTickLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStringArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStringArrayWrap *a0 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTickLabels(
			(vtkStringArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetTickPositions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDoubleArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDoubleArrayWrap *a0 = ObjectWrap::Unwrap<VtkDoubleArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTickPositions(
			(vtkDoubleArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetUnscaledMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUnscaledMaximum(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetUnscaledMaximumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUnscaledMaximumLimit(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetUnscaledMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUnscaledMinimum(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetUnscaledMinimumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUnscaledMinimumLimit(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::SetUnscaledRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetUnscaledRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisWrap *wrapper = ObjectWrap::Unwrap<VtkAxisWrap>(info.Holder());
	vtkAxis *native = (vtkAxis *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

