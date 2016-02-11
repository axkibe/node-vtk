/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkParametricFunctionSourceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkParametricFunctionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkParametricFunctionSourceWrap::ptpl;

VtkParametricFunctionSourceWrap::VtkParametricFunctionSourceWrap()
{ }

VtkParametricFunctionSourceWrap::VtkParametricFunctionSourceWrap(vtkSmartPointer<vtkParametricFunctionSource> _native)
{ native = _native; }

VtkParametricFunctionSourceWrap::~VtkParametricFunctionSourceWrap()
{ }

void VtkParametricFunctionSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkParametricFunctionSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ParametricFunctionSource").ToLocalChecked(), ConstructorGetter);
}

void VtkParametricFunctionSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkParametricFunctionSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkParametricFunctionSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GenerateNormalsOff", GenerateNormalsOff);
	Nan::SetPrototypeMethod(tpl, "generateNormalsOff", GenerateNormalsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateNormalsOn", GenerateNormalsOn);
	Nan::SetPrototypeMethod(tpl, "generateNormalsOn", GenerateNormalsOn);

	Nan::SetPrototypeMethod(tpl, "GenerateTextureCoordinatesOff", GenerateTextureCoordinatesOff);
	Nan::SetPrototypeMethod(tpl, "generateTextureCoordinatesOff", GenerateTextureCoordinatesOff);

	Nan::SetPrototypeMethod(tpl, "GenerateTextureCoordinatesOn", GenerateTextureCoordinatesOn);
	Nan::SetPrototypeMethod(tpl, "generateTextureCoordinatesOn", GenerateTextureCoordinatesOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGenerateNormals", GetGenerateNormals);
	Nan::SetPrototypeMethod(tpl, "getGenerateNormals", GetGenerateNormals);

	Nan::SetPrototypeMethod(tpl, "GetGenerateNormalsMaxValue", GetGenerateNormalsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getGenerateNormalsMaxValue", GetGenerateNormalsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetGenerateNormalsMinValue", GetGenerateNormalsMinValue);
	Nan::SetPrototypeMethod(tpl, "getGenerateNormalsMinValue", GetGenerateNormalsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTextureCoordinates", GetGenerateTextureCoordinates);
	Nan::SetPrototypeMethod(tpl, "getGenerateTextureCoordinates", GetGenerateTextureCoordinates);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTextureCoordinatesMaxValue", GetGenerateTextureCoordinatesMaxValue);
	Nan::SetPrototypeMethod(tpl, "getGenerateTextureCoordinatesMaxValue", GetGenerateTextureCoordinatesMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTextureCoordinatesMinValue", GetGenerateTextureCoordinatesMinValue);
	Nan::SetPrototypeMethod(tpl, "getGenerateTextureCoordinatesMinValue", GetGenerateTextureCoordinatesMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetParametricFunction", GetParametricFunction);
	Nan::SetPrototypeMethod(tpl, "getParametricFunction", GetParametricFunction);

	Nan::SetPrototypeMethod(tpl, "GetScalarMode", GetScalarMode);
	Nan::SetPrototypeMethod(tpl, "getScalarMode", GetScalarMode);

	Nan::SetPrototypeMethod(tpl, "GetScalarModeMaxValue", GetScalarModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getScalarModeMaxValue", GetScalarModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetScalarModeMinValue", GetScalarModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getScalarModeMinValue", GetScalarModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetUResolution", GetUResolution);
	Nan::SetPrototypeMethod(tpl, "getUResolution", GetUResolution);

	Nan::SetPrototypeMethod(tpl, "GetUResolutionMaxValue", GetUResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getUResolutionMaxValue", GetUResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetUResolutionMinValue", GetUResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getUResolutionMinValue", GetUResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetVResolution", GetVResolution);
	Nan::SetPrototypeMethod(tpl, "getVResolution", GetVResolution);

	Nan::SetPrototypeMethod(tpl, "GetVResolutionMaxValue", GetVResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getVResolutionMaxValue", GetVResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetVResolutionMinValue", GetVResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getVResolutionMinValue", GetVResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetWResolution", GetWResolution);
	Nan::SetPrototypeMethod(tpl, "getWResolution", GetWResolution);

	Nan::SetPrototypeMethod(tpl, "GetWResolutionMaxValue", GetWResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getWResolutionMaxValue", GetWResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetWResolutionMinValue", GetWResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getWResolutionMinValue", GetWResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGenerateNormals", SetGenerateNormals);
	Nan::SetPrototypeMethod(tpl, "setGenerateNormals", SetGenerateNormals);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTextureCoordinates", SetGenerateTextureCoordinates);
	Nan::SetPrototypeMethod(tpl, "setGenerateTextureCoordinates", SetGenerateTextureCoordinates);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetParametricFunction", SetParametricFunction);
	Nan::SetPrototypeMethod(tpl, "setParametricFunction", SetParametricFunction);

	Nan::SetPrototypeMethod(tpl, "SetScalarMode", SetScalarMode);
	Nan::SetPrototypeMethod(tpl, "setScalarMode", SetScalarMode);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToDistance", SetScalarModeToDistance);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToDistance", SetScalarModeToDistance);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToFunctionDefined", SetScalarModeToFunctionDefined);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToFunctionDefined", SetScalarModeToFunctionDefined);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToModulus", SetScalarModeToModulus);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToModulus", SetScalarModeToModulus);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToNone", SetScalarModeToNone);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToNone", SetScalarModeToNone);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToPhase", SetScalarModeToPhase);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToPhase", SetScalarModeToPhase);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToQuadrant", SetScalarModeToQuadrant);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToQuadrant", SetScalarModeToQuadrant);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToU", SetScalarModeToU);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToU", SetScalarModeToU);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToU0", SetScalarModeToU0);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToU0", SetScalarModeToU0);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToU0V0", SetScalarModeToU0V0);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToU0V0", SetScalarModeToU0V0);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToV", SetScalarModeToV);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToV", SetScalarModeToV);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToV0", SetScalarModeToV0);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToV0", SetScalarModeToV0);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToX", SetScalarModeToX);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToX", SetScalarModeToX);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToY", SetScalarModeToY);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToY", SetScalarModeToY);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToZ", SetScalarModeToZ);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToZ", SetScalarModeToZ);

	Nan::SetPrototypeMethod(tpl, "SetUResolution", SetUResolution);
	Nan::SetPrototypeMethod(tpl, "setUResolution", SetUResolution);

	Nan::SetPrototypeMethod(tpl, "SetVResolution", SetVResolution);
	Nan::SetPrototypeMethod(tpl, "setVResolution", SetVResolution);

	Nan::SetPrototypeMethod(tpl, "SetWResolution", SetWResolution);
	Nan::SetPrototypeMethod(tpl, "setWResolution", SetWResolution);

	ptpl.Reset( tpl );
}

void VtkParametricFunctionSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkParametricFunctionSource> native = vtkSmartPointer<vtkParametricFunctionSource>::New();
		VtkParametricFunctionSourceWrap* obj = new VtkParametricFunctionSourceWrap(native);
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

void VtkParametricFunctionSourceWrap::GenerateNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateNormalsOff();
}

void VtkParametricFunctionSourceWrap::GenerateNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateNormalsOn();
}

void VtkParametricFunctionSourceWrap::GenerateTextureCoordinatesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTextureCoordinatesOff();
}

void VtkParametricFunctionSourceWrap::GenerateTextureCoordinatesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTextureCoordinatesOn();
}

void VtkParametricFunctionSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkParametricFunctionSourceWrap::GetGenerateNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetGenerateNormalsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateNormalsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetGenerateNormalsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateNormalsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetGenerateTextureCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTextureCoordinates();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetGenerateTextureCoordinatesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTextureCoordinatesMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetGenerateTextureCoordinatesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTextureCoordinatesMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetParametricFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	vtkParametricFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParametricFunction();
	VtkParametricFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParametricFunctionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParametricFunctionWrap *w = new VtkParametricFunctionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParametricFunctionSourceWrap::GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetScalarModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetScalarModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetUResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetUResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetUResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetVResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetVResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetVResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetWResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetWResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::GetWResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricFunctionSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
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

void VtkParametricFunctionSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	vtkParametricFunctionSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkParametricFunctionSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParametricFunctionSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParametricFunctionSourceWrap *w = new VtkParametricFunctionSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParametricFunctionSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkParametricFunctionSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkParametricFunctionSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkParametricFunctionSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParametricFunctionSourceWrap *w = new VtkParametricFunctionSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricFunctionSourceWrap::SetGenerateNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateNormals(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricFunctionSourceWrap::SetGenerateTextureCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateTextureCoordinates(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricFunctionSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
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

void VtkParametricFunctionSourceWrap::SetParametricFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkParametricFunctionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkParametricFunctionWrap *a0 = ObjectWrap::Unwrap<VtkParametricFunctionWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParametricFunction(
			(vtkParametricFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricFunctionSourceWrap::SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
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

void VtkParametricFunctionSourceWrap::SetScalarModeToDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToDistance();
}

void VtkParametricFunctionSourceWrap::SetScalarModeToFunctionDefined(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToFunctionDefined();
}

void VtkParametricFunctionSourceWrap::SetScalarModeToModulus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToModulus();
}

void VtkParametricFunctionSourceWrap::SetScalarModeToNone(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToNone();
}

void VtkParametricFunctionSourceWrap::SetScalarModeToPhase(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToPhase();
}

void VtkParametricFunctionSourceWrap::SetScalarModeToQuadrant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToQuadrant();
}

void VtkParametricFunctionSourceWrap::SetScalarModeToU(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToU();
}

void VtkParametricFunctionSourceWrap::SetScalarModeToU0(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToU0();
}

void VtkParametricFunctionSourceWrap::SetScalarModeToU0V0(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToU0V0();
}

void VtkParametricFunctionSourceWrap::SetScalarModeToV(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToV();
}

void VtkParametricFunctionSourceWrap::SetScalarModeToV0(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToV0();
}

void VtkParametricFunctionSourceWrap::SetScalarModeToX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToX();
}

void VtkParametricFunctionSourceWrap::SetScalarModeToY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToY();
}

void VtkParametricFunctionSourceWrap::SetScalarModeToZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToZ();
}

void VtkParametricFunctionSourceWrap::SetUResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricFunctionSourceWrap::SetVResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricFunctionSourceWrap::SetWResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricFunctionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkParametricFunctionSourceWrap>(info.Holder());
	vtkParametricFunctionSource *native = (vtkParametricFunctionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

