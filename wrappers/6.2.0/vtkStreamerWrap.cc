/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkStreamerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkInitialValueProblemSolverWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStreamerWrap::ptpl;

VtkStreamerWrap::VtkStreamerWrap()
{ }

VtkStreamerWrap::VtkStreamerWrap(vtkSmartPointer<vtkStreamer> _native)
{ native = _native; }

VtkStreamerWrap::~VtkStreamerWrap()
{ }

void VtkStreamerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStreamer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Streamer").ToLocalChecked(), ConstructorGetter);
}

void VtkStreamerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStreamerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStreamerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEpsilon", GetEpsilon);
	Nan::SetPrototypeMethod(tpl, "getEpsilon", GetEpsilon);

	Nan::SetPrototypeMethod(tpl, "GetIntegrationDirection", GetIntegrationDirection);
	Nan::SetPrototypeMethod(tpl, "getIntegrationDirection", GetIntegrationDirection);

	Nan::SetPrototypeMethod(tpl, "GetIntegrationDirectionAsString", GetIntegrationDirectionAsString);
	Nan::SetPrototypeMethod(tpl, "getIntegrationDirectionAsString", GetIntegrationDirectionAsString);

	Nan::SetPrototypeMethod(tpl, "GetIntegrationDirectionMaxValue", GetIntegrationDirectionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getIntegrationDirectionMaxValue", GetIntegrationDirectionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetIntegrationDirectionMinValue", GetIntegrationDirectionMinValue);
	Nan::SetPrototypeMethod(tpl, "getIntegrationDirectionMinValue", GetIntegrationDirectionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetIntegrationStepLength", GetIntegrationStepLength);
	Nan::SetPrototypeMethod(tpl, "getIntegrationStepLength", GetIntegrationStepLength);

	Nan::SetPrototypeMethod(tpl, "GetIntegrationStepLengthMaxValue", GetIntegrationStepLengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getIntegrationStepLengthMaxValue", GetIntegrationStepLengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetIntegrationStepLengthMinValue", GetIntegrationStepLengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getIntegrationStepLengthMinValue", GetIntegrationStepLengthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetIntegrator", GetIntegrator);
	Nan::SetPrototypeMethod(tpl, "getIntegrator", GetIntegrator);

	Nan::SetPrototypeMethod(tpl, "GetMaximumPropagationTime", GetMaximumPropagationTime);
	Nan::SetPrototypeMethod(tpl, "getMaximumPropagationTime", GetMaximumPropagationTime);

	Nan::SetPrototypeMethod(tpl, "GetMaximumPropagationTimeMaxValue", GetMaximumPropagationTimeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumPropagationTimeMaxValue", GetMaximumPropagationTimeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumPropagationTimeMinValue", GetMaximumPropagationTimeMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumPropagationTimeMinValue", GetMaximumPropagationTimeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfThreads", GetNumberOfThreads);
	Nan::SetPrototypeMethod(tpl, "getNumberOfThreads", GetNumberOfThreads);

	Nan::SetPrototypeMethod(tpl, "GetOrientationScalars", GetOrientationScalars);
	Nan::SetPrototypeMethod(tpl, "getOrientationScalars", GetOrientationScalars);

	Nan::SetPrototypeMethod(tpl, "GetSavePointInterval", GetSavePointInterval);
	Nan::SetPrototypeMethod(tpl, "getSavePointInterval", GetSavePointInterval);

	Nan::SetPrototypeMethod(tpl, "GetSource", GetSource);
	Nan::SetPrototypeMethod(tpl, "getSource", GetSource);

	Nan::SetPrototypeMethod(tpl, "GetSpeedScalars", GetSpeedScalars);
	Nan::SetPrototypeMethod(tpl, "getSpeedScalars", GetSpeedScalars);

	Nan::SetPrototypeMethod(tpl, "GetStartPosition", GetStartPosition);
	Nan::SetPrototypeMethod(tpl, "getStartPosition", GetStartPosition);

	Nan::SetPrototypeMethod(tpl, "GetTerminalSpeed", GetTerminalSpeed);
	Nan::SetPrototypeMethod(tpl, "getTerminalSpeed", GetTerminalSpeed);

	Nan::SetPrototypeMethod(tpl, "GetTerminalSpeedMaxValue", GetTerminalSpeedMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTerminalSpeedMaxValue", GetTerminalSpeedMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTerminalSpeedMinValue", GetTerminalSpeedMinValue);
	Nan::SetPrototypeMethod(tpl, "getTerminalSpeedMinValue", GetTerminalSpeedMinValue);

	Nan::SetPrototypeMethod(tpl, "GetVorticity", GetVorticity);
	Nan::SetPrototypeMethod(tpl, "getVorticity", GetVorticity);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OrientationScalarsOff", OrientationScalarsOff);
	Nan::SetPrototypeMethod(tpl, "orientationScalarsOff", OrientationScalarsOff);

	Nan::SetPrototypeMethod(tpl, "OrientationScalarsOn", OrientationScalarsOn);
	Nan::SetPrototypeMethod(tpl, "orientationScalarsOn", OrientationScalarsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEpsilon", SetEpsilon);
	Nan::SetPrototypeMethod(tpl, "setEpsilon", SetEpsilon);

	Nan::SetPrototypeMethod(tpl, "SetIntegrationDirection", SetIntegrationDirection);
	Nan::SetPrototypeMethod(tpl, "setIntegrationDirection", SetIntegrationDirection);

	Nan::SetPrototypeMethod(tpl, "SetIntegrationDirectionToBackward", SetIntegrationDirectionToBackward);
	Nan::SetPrototypeMethod(tpl, "setIntegrationDirectionToBackward", SetIntegrationDirectionToBackward);

	Nan::SetPrototypeMethod(tpl, "SetIntegrationDirectionToForward", SetIntegrationDirectionToForward);
	Nan::SetPrototypeMethod(tpl, "setIntegrationDirectionToForward", SetIntegrationDirectionToForward);

	Nan::SetPrototypeMethod(tpl, "SetIntegrationDirectionToIntegrateBothDirections", SetIntegrationDirectionToIntegrateBothDirections);
	Nan::SetPrototypeMethod(tpl, "setIntegrationDirectionToIntegrateBothDirections", SetIntegrationDirectionToIntegrateBothDirections);

	Nan::SetPrototypeMethod(tpl, "SetIntegrationStepLength", SetIntegrationStepLength);
	Nan::SetPrototypeMethod(tpl, "setIntegrationStepLength", SetIntegrationStepLength);

	Nan::SetPrototypeMethod(tpl, "SetIntegrator", SetIntegrator);
	Nan::SetPrototypeMethod(tpl, "setIntegrator", SetIntegrator);

	Nan::SetPrototypeMethod(tpl, "SetMaximumPropagationTime", SetMaximumPropagationTime);
	Nan::SetPrototypeMethod(tpl, "setMaximumPropagationTime", SetMaximumPropagationTime);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfThreads", SetNumberOfThreads);
	Nan::SetPrototypeMethod(tpl, "setNumberOfThreads", SetNumberOfThreads);

	Nan::SetPrototypeMethod(tpl, "SetOrientationScalars", SetOrientationScalars);
	Nan::SetPrototypeMethod(tpl, "setOrientationScalars", SetOrientationScalars);

	Nan::SetPrototypeMethod(tpl, "SetSavePointInterval", SetSavePointInterval);
	Nan::SetPrototypeMethod(tpl, "setSavePointInterval", SetSavePointInterval);

	Nan::SetPrototypeMethod(tpl, "SetSourceConnection", SetSourceConnection);
	Nan::SetPrototypeMethod(tpl, "setSourceConnection", SetSourceConnection);

	Nan::SetPrototypeMethod(tpl, "SetSourceData", SetSourceData);
	Nan::SetPrototypeMethod(tpl, "setSourceData", SetSourceData);

	Nan::SetPrototypeMethod(tpl, "SetSpeedScalars", SetSpeedScalars);
	Nan::SetPrototypeMethod(tpl, "setSpeedScalars", SetSpeedScalars);

	Nan::SetPrototypeMethod(tpl, "SetStartPosition", SetStartPosition);
	Nan::SetPrototypeMethod(tpl, "setStartPosition", SetStartPosition);

	Nan::SetPrototypeMethod(tpl, "SetTerminalSpeed", SetTerminalSpeed);
	Nan::SetPrototypeMethod(tpl, "setTerminalSpeed", SetTerminalSpeed);

	Nan::SetPrototypeMethod(tpl, "SetVorticity", SetVorticity);
	Nan::SetPrototypeMethod(tpl, "setVorticity", SetVorticity);

	Nan::SetPrototypeMethod(tpl, "SpeedScalarsOff", SpeedScalarsOff);
	Nan::SetPrototypeMethod(tpl, "speedScalarsOff", SpeedScalarsOff);

	Nan::SetPrototypeMethod(tpl, "SpeedScalarsOn", SpeedScalarsOn);
	Nan::SetPrototypeMethod(tpl, "speedScalarsOn", SpeedScalarsOn);

	Nan::SetPrototypeMethod(tpl, "VorticityOff", VorticityOff);
	Nan::SetPrototypeMethod(tpl, "vorticityOff", VorticityOff);

	Nan::SetPrototypeMethod(tpl, "VorticityOn", VorticityOn);
	Nan::SetPrototypeMethod(tpl, "vorticityOn", VorticityOn);

	ptpl.Reset( tpl );
}

void VtkStreamerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkStreamerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStreamerWrap::GetEpsilon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEpsilon();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetIntegrationDirection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntegrationDirection();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetIntegrationDirectionAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntegrationDirectionAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStreamerWrap::GetIntegrationDirectionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntegrationDirectionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetIntegrationDirectionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntegrationDirectionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetIntegrationStepLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntegrationStepLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetIntegrationStepLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntegrationStepLengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetIntegrationStepLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntegrationStepLengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	vtkInitialValueProblemSolver * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntegrator();
	VtkInitialValueProblemSolverWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInitialValueProblemSolverWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInitialValueProblemSolverWrap *w = new VtkInitialValueProblemSolverWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStreamerWrap::GetMaximumPropagationTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumPropagationTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetMaximumPropagationTimeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumPropagationTimeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetMaximumPropagationTimeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumPropagationTimeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfThreads();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetOrientationScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientationScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetSavePointInterval(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSavePointInterval();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetSource(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSource();
	VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStreamerWrap::GetSpeedScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSpeedScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetStartPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartPosition();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkStreamerWrap::GetTerminalSpeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTerminalSpeed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetTerminalSpeedMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTerminalSpeedMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetTerminalSpeedMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTerminalSpeedMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::GetVorticity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVorticity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStreamerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
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

void VtkStreamerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	vtkStreamer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkStreamerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStreamerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStreamerWrap *w = new VtkStreamerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStreamerWrap::OrientationScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OrientationScalarsOff();
}

void VtkStreamerWrap::OrientationScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OrientationScalarsOn();
}

void VtkStreamerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStreamer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkStreamerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStreamerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStreamerWrap *w = new VtkStreamerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SetEpsilon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEpsilon(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SetIntegrationDirection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIntegrationDirection(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SetIntegrationDirectionToBackward(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIntegrationDirectionToBackward();
}

void VtkStreamerWrap::SetIntegrationDirectionToForward(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIntegrationDirectionToForward();
}

void VtkStreamerWrap::SetIntegrationDirectionToIntegrateBothDirections(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIntegrationDirectionToIntegrateBothDirections();
}

void VtkStreamerWrap::SetIntegrationStepLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIntegrationStepLength(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SetIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInitialValueProblemSolverWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInitialValueProblemSolverWrap *a0 = ObjectWrap::Unwrap<VtkInitialValueProblemSolverWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIntegrator(
			(vtkInitialValueProblemSolver *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SetMaximumPropagationTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumPropagationTime(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfThreads(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SetOrientationScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientationScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SetSavePointInterval(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSavePointInterval(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SetSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SetSourceData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceData(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SetSpeedScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSpeedScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SetStartPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
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
		native->SetStartPosition(
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
		native->SetStartPosition(
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
				native->SetStartPosition(
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

void VtkStreamerWrap::SetTerminalSpeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTerminalSpeed(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SetVorticity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVorticity(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamerWrap::SpeedScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SpeedScalarsOff();
}

void VtkStreamerWrap::SpeedScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SpeedScalarsOn();
}

void VtkStreamerWrap::VorticityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VorticityOff();
}

void VtkStreamerWrap::VorticityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkStreamerWrap>(info.Holder());
	vtkStreamer *native = (vtkStreamer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VorticityOn();
}

