/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkSphereSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSphereSourceWrap::ptpl;

VtkSphereSourceWrap::VtkSphereSourceWrap()
{ }

VtkSphereSourceWrap::VtkSphereSourceWrap(vtkSmartPointer<vtkSphereSource> _native)
{ native = _native; }

VtkSphereSourceWrap::~VtkSphereSourceWrap()
{ }

void VtkSphereSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSphereSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SphereSource").ToLocalChecked(), ConstructorGetter);
}

void VtkSphereSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSphereSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSphereSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCenter", GetCenter);
	Nan::SetPrototypeMethod(tpl, "getCenter", GetCenter);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEndPhi", GetEndPhi);
	Nan::SetPrototypeMethod(tpl, "getEndPhi", GetEndPhi);

	Nan::SetPrototypeMethod(tpl, "GetEndPhiMaxValue", GetEndPhiMaxValue);
	Nan::SetPrototypeMethod(tpl, "getEndPhiMaxValue", GetEndPhiMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetEndPhiMinValue", GetEndPhiMinValue);
	Nan::SetPrototypeMethod(tpl, "getEndPhiMinValue", GetEndPhiMinValue);

	Nan::SetPrototypeMethod(tpl, "GetEndTheta", GetEndTheta);
	Nan::SetPrototypeMethod(tpl, "getEndTheta", GetEndTheta);

	Nan::SetPrototypeMethod(tpl, "GetEndThetaMaxValue", GetEndThetaMaxValue);
	Nan::SetPrototypeMethod(tpl, "getEndThetaMaxValue", GetEndThetaMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetEndThetaMinValue", GetEndThetaMinValue);
	Nan::SetPrototypeMethod(tpl, "getEndThetaMinValue", GetEndThetaMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLatLongTessellation", GetLatLongTessellation);
	Nan::SetPrototypeMethod(tpl, "getLatLongTessellation", GetLatLongTessellation);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetPhiResolution", GetPhiResolution);
	Nan::SetPrototypeMethod(tpl, "getPhiResolution", GetPhiResolution);

	Nan::SetPrototypeMethod(tpl, "GetPhiResolutionMaxValue", GetPhiResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getPhiResolutionMaxValue", GetPhiResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetPhiResolutionMinValue", GetPhiResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getPhiResolutionMinValue", GetPhiResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMaxValue", GetRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMaxValue", GetRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMinValue", GetRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMinValue", GetRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetStartPhi", GetStartPhi);
	Nan::SetPrototypeMethod(tpl, "getStartPhi", GetStartPhi);

	Nan::SetPrototypeMethod(tpl, "GetStartPhiMaxValue", GetStartPhiMaxValue);
	Nan::SetPrototypeMethod(tpl, "getStartPhiMaxValue", GetStartPhiMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetStartPhiMinValue", GetStartPhiMinValue);
	Nan::SetPrototypeMethod(tpl, "getStartPhiMinValue", GetStartPhiMinValue);

	Nan::SetPrototypeMethod(tpl, "GetStartTheta", GetStartTheta);
	Nan::SetPrototypeMethod(tpl, "getStartTheta", GetStartTheta);

	Nan::SetPrototypeMethod(tpl, "GetStartThetaMaxValue", GetStartThetaMaxValue);
	Nan::SetPrototypeMethod(tpl, "getStartThetaMaxValue", GetStartThetaMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetStartThetaMinValue", GetStartThetaMinValue);
	Nan::SetPrototypeMethod(tpl, "getStartThetaMinValue", GetStartThetaMinValue);

	Nan::SetPrototypeMethod(tpl, "GetThetaResolution", GetThetaResolution);
	Nan::SetPrototypeMethod(tpl, "getThetaResolution", GetThetaResolution);

	Nan::SetPrototypeMethod(tpl, "GetThetaResolutionMaxValue", GetThetaResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getThetaResolutionMaxValue", GetThetaResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetThetaResolutionMinValue", GetThetaResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getThetaResolutionMinValue", GetThetaResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LatLongTessellationOff", LatLongTessellationOff);
	Nan::SetPrototypeMethod(tpl, "latLongTessellationOff", LatLongTessellationOff);

	Nan::SetPrototypeMethod(tpl, "LatLongTessellationOn", LatLongTessellationOn);
	Nan::SetPrototypeMethod(tpl, "latLongTessellationOn", LatLongTessellationOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetEndPhi", SetEndPhi);
	Nan::SetPrototypeMethod(tpl, "setEndPhi", SetEndPhi);

	Nan::SetPrototypeMethod(tpl, "SetEndTheta", SetEndTheta);
	Nan::SetPrototypeMethod(tpl, "setEndTheta", SetEndTheta);

	Nan::SetPrototypeMethod(tpl, "SetLatLongTessellation", SetLatLongTessellation);
	Nan::SetPrototypeMethod(tpl, "setLatLongTessellation", SetLatLongTessellation);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetPhiResolution", SetPhiResolution);
	Nan::SetPrototypeMethod(tpl, "setPhiResolution", SetPhiResolution);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

	Nan::SetPrototypeMethod(tpl, "SetStartPhi", SetStartPhi);
	Nan::SetPrototypeMethod(tpl, "setStartPhi", SetStartPhi);

	Nan::SetPrototypeMethod(tpl, "SetStartTheta", SetStartTheta);
	Nan::SetPrototypeMethod(tpl, "setStartTheta", SetStartTheta);

	Nan::SetPrototypeMethod(tpl, "SetThetaResolution", SetThetaResolution);
	Nan::SetPrototypeMethod(tpl, "setThetaResolution", SetThetaResolution);

	ptpl.Reset( tpl );
}

void VtkSphereSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSphereSource> native = vtkSmartPointer<vtkSphereSource>::New();
		VtkSphereSourceWrap* obj = new VtkSphereSourceWrap(native);
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

void VtkSphereSourceWrap::GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCenter();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkSphereSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSphereSourceWrap::GetEndPhi(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndPhi();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetEndPhiMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndPhiMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetEndPhiMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndPhiMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetEndTheta(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndTheta();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetEndThetaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndThetaMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetEndThetaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndThetaMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetLatLongTessellation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLatLongTessellation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetPhiResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPhiResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetPhiResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPhiResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetPhiResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPhiResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetStartPhi(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartPhi();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetStartPhiMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartPhiMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetStartPhiMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartPhiMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetStartTheta(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartTheta();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetStartThetaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartThetaMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetStartThetaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartThetaMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetThetaResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThetaResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetThetaResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThetaResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::GetThetaResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThetaResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
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

void VtkSphereSourceWrap::LatLongTessellationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LatLongTessellationOff();
}

void VtkSphereSourceWrap::LatLongTessellationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LatLongTessellationOn();
}

void VtkSphereSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	vtkSphereSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSphereSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSphereSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSphereSourceWrap *w = new VtkSphereSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSphereSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSphereSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSphereSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSphereSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSphereSourceWrap *w = new VtkSphereSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereSourceWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
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
		native->SetCenter(
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
		native->SetCenter(
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
				native->SetCenter(
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

void VtkSphereSourceWrap::SetEndPhi(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEndPhi(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereSourceWrap::SetEndTheta(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEndTheta(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereSourceWrap::SetLatLongTessellation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLatLongTessellation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
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

void VtkSphereSourceWrap::SetPhiResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPhiResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereSourceWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereSourceWrap::SetStartPhi(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStartPhi(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereSourceWrap::SetStartTheta(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStartTheta(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereSourceWrap::SetThetaResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSphereSourceWrap>(info.Holder());
	vtkSphereSource *native = (vtkSphereSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThetaResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

