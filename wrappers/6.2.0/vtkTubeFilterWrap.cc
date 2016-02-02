/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkTubeFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTubeFilterWrap::ptpl;

VtkTubeFilterWrap::VtkTubeFilterWrap()
{ }

VtkTubeFilterWrap::VtkTubeFilterWrap(vtkSmartPointer<vtkTubeFilter> _native)
{ native = _native; }

VtkTubeFilterWrap::~VtkTubeFilterWrap()
{ }

void VtkTubeFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTubeFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TubeFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkTubeFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTubeFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTubeFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CappingOff", CappingOff);
	Nan::SetPrototypeMethod(tpl, "cappingOff", CappingOff);

	Nan::SetPrototypeMethod(tpl, "CappingOn", CappingOn);
	Nan::SetPrototypeMethod(tpl, "cappingOn", CappingOn);

	Nan::SetPrototypeMethod(tpl, "GetCapping", GetCapping);
	Nan::SetPrototypeMethod(tpl, "getCapping", GetCapping);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTCoords", GetGenerateTCoords);
	Nan::SetPrototypeMethod(tpl, "getGenerateTCoords", GetGenerateTCoords);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTCoordsAsString", GetGenerateTCoordsAsString);
	Nan::SetPrototypeMethod(tpl, "getGenerateTCoordsAsString", GetGenerateTCoordsAsString);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTCoordsMaxValue", GetGenerateTCoordsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getGenerateTCoordsMaxValue", GetGenerateTCoordsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTCoordsMinValue", GetGenerateTCoordsMinValue);
	Nan::SetPrototypeMethod(tpl, "getGenerateTCoordsMinValue", GetGenerateTCoordsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSides", GetNumberOfSides);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSides", GetNumberOfSides);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSidesMaxValue", GetNumberOfSidesMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSidesMaxValue", GetNumberOfSidesMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSidesMinValue", GetNumberOfSidesMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSidesMinValue", GetNumberOfSidesMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOffset", GetOffset);
	Nan::SetPrototypeMethod(tpl, "getOffset", GetOffset);

	Nan::SetPrototypeMethod(tpl, "GetOffsetMaxValue", GetOffsetMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOffsetMaxValue", GetOffsetMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOffsetMinValue", GetOffsetMinValue);
	Nan::SetPrototypeMethod(tpl, "getOffsetMinValue", GetOffsetMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOnRatio", GetOnRatio);
	Nan::SetPrototypeMethod(tpl, "getOnRatio", GetOnRatio);

	Nan::SetPrototypeMethod(tpl, "GetOnRatioMaxValue", GetOnRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOnRatioMaxValue", GetOnRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOnRatioMinValue", GetOnRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getOnRatioMinValue", GetOnRatioMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "GetRadiusFactor", GetRadiusFactor);
	Nan::SetPrototypeMethod(tpl, "getRadiusFactor", GetRadiusFactor);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMaxValue", GetRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMaxValue", GetRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMinValue", GetRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMinValue", GetRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSidesShareVertices", GetSidesShareVertices);
	Nan::SetPrototypeMethod(tpl, "getSidesShareVertices", GetSidesShareVertices);

	Nan::SetPrototypeMethod(tpl, "GetTextureLength", GetTextureLength);
	Nan::SetPrototypeMethod(tpl, "getTextureLength", GetTextureLength);

	Nan::SetPrototypeMethod(tpl, "GetTextureLengthMaxValue", GetTextureLengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTextureLengthMaxValue", GetTextureLengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTextureLengthMinValue", GetTextureLengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getTextureLengthMinValue", GetTextureLengthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetUseDefaultNormal", GetUseDefaultNormal);
	Nan::SetPrototypeMethod(tpl, "getUseDefaultNormal", GetUseDefaultNormal);

	Nan::SetPrototypeMethod(tpl, "GetVaryRadius", GetVaryRadius);
	Nan::SetPrototypeMethod(tpl, "getVaryRadius", GetVaryRadius);

	Nan::SetPrototypeMethod(tpl, "GetVaryRadiusAsString", GetVaryRadiusAsString);
	Nan::SetPrototypeMethod(tpl, "getVaryRadiusAsString", GetVaryRadiusAsString);

	Nan::SetPrototypeMethod(tpl, "GetVaryRadiusMaxValue", GetVaryRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getVaryRadiusMaxValue", GetVaryRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetVaryRadiusMinValue", GetVaryRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getVaryRadiusMinValue", GetVaryRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCapping", SetCapping);
	Nan::SetPrototypeMethod(tpl, "setCapping", SetCapping);

	Nan::SetPrototypeMethod(tpl, "SetDefaultNormal", SetDefaultNormal);
	Nan::SetPrototypeMethod(tpl, "setDefaultNormal", SetDefaultNormal);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTCoords", SetGenerateTCoords);
	Nan::SetPrototypeMethod(tpl, "setGenerateTCoords", SetGenerateTCoords);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTCoordsToNormalizedLength", SetGenerateTCoordsToNormalizedLength);
	Nan::SetPrototypeMethod(tpl, "setGenerateTCoordsToNormalizedLength", SetGenerateTCoordsToNormalizedLength);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTCoordsToOff", SetGenerateTCoordsToOff);
	Nan::SetPrototypeMethod(tpl, "setGenerateTCoordsToOff", SetGenerateTCoordsToOff);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTCoordsToUseLength", SetGenerateTCoordsToUseLength);
	Nan::SetPrototypeMethod(tpl, "setGenerateTCoordsToUseLength", SetGenerateTCoordsToUseLength);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTCoordsToUseScalars", SetGenerateTCoordsToUseScalars);
	Nan::SetPrototypeMethod(tpl, "setGenerateTCoordsToUseScalars", SetGenerateTCoordsToUseScalars);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfSides", SetNumberOfSides);
	Nan::SetPrototypeMethod(tpl, "setNumberOfSides", SetNumberOfSides);

	Nan::SetPrototypeMethod(tpl, "SetOffset", SetOffset);
	Nan::SetPrototypeMethod(tpl, "setOffset", SetOffset);

	Nan::SetPrototypeMethod(tpl, "SetOnRatio", SetOnRatio);
	Nan::SetPrototypeMethod(tpl, "setOnRatio", SetOnRatio);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

	Nan::SetPrototypeMethod(tpl, "SetRadiusFactor", SetRadiusFactor);
	Nan::SetPrototypeMethod(tpl, "setRadiusFactor", SetRadiusFactor);

	Nan::SetPrototypeMethod(tpl, "SetSidesShareVertices", SetSidesShareVertices);
	Nan::SetPrototypeMethod(tpl, "setSidesShareVertices", SetSidesShareVertices);

	Nan::SetPrototypeMethod(tpl, "SetTextureLength", SetTextureLength);
	Nan::SetPrototypeMethod(tpl, "setTextureLength", SetTextureLength);

	Nan::SetPrototypeMethod(tpl, "SetUseDefaultNormal", SetUseDefaultNormal);
	Nan::SetPrototypeMethod(tpl, "setUseDefaultNormal", SetUseDefaultNormal);

	Nan::SetPrototypeMethod(tpl, "SetVaryRadius", SetVaryRadius);
	Nan::SetPrototypeMethod(tpl, "setVaryRadius", SetVaryRadius);

	Nan::SetPrototypeMethod(tpl, "SetVaryRadiusToVaryRadiusByAbsoluteScalar", SetVaryRadiusToVaryRadiusByAbsoluteScalar);
	Nan::SetPrototypeMethod(tpl, "setVaryRadiusToVaryRadiusByAbsoluteScalar", SetVaryRadiusToVaryRadiusByAbsoluteScalar);

	Nan::SetPrototypeMethod(tpl, "SetVaryRadiusToVaryRadiusByScalar", SetVaryRadiusToVaryRadiusByScalar);
	Nan::SetPrototypeMethod(tpl, "setVaryRadiusToVaryRadiusByScalar", SetVaryRadiusToVaryRadiusByScalar);

	Nan::SetPrototypeMethod(tpl, "SetVaryRadiusToVaryRadiusByVector", SetVaryRadiusToVaryRadiusByVector);
	Nan::SetPrototypeMethod(tpl, "setVaryRadiusToVaryRadiusByVector", SetVaryRadiusToVaryRadiusByVector);

	Nan::SetPrototypeMethod(tpl, "SetVaryRadiusToVaryRadiusOff", SetVaryRadiusToVaryRadiusOff);
	Nan::SetPrototypeMethod(tpl, "setVaryRadiusToVaryRadiusOff", SetVaryRadiusToVaryRadiusOff);

	Nan::SetPrototypeMethod(tpl, "SidesShareVerticesOff", SidesShareVerticesOff);
	Nan::SetPrototypeMethod(tpl, "sidesShareVerticesOff", SidesShareVerticesOff);

	Nan::SetPrototypeMethod(tpl, "SidesShareVerticesOn", SidesShareVerticesOn);
	Nan::SetPrototypeMethod(tpl, "sidesShareVerticesOn", SidesShareVerticesOn);

	Nan::SetPrototypeMethod(tpl, "UseDefaultNormalOff", UseDefaultNormalOff);
	Nan::SetPrototypeMethod(tpl, "useDefaultNormalOff", UseDefaultNormalOff);

	Nan::SetPrototypeMethod(tpl, "UseDefaultNormalOn", UseDefaultNormalOn);
	Nan::SetPrototypeMethod(tpl, "useDefaultNormalOn", UseDefaultNormalOn);

	ptpl.Reset( tpl );
}

void VtkTubeFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTubeFilter> native = vtkSmartPointer<vtkTubeFilter>::New();
		VtkTubeFilterWrap* obj = new VtkTubeFilterWrap(native);
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

void VtkTubeFilterWrap::CappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOff();
}

void VtkTubeFilterWrap::CappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOn();
}

void VtkTubeFilterWrap::GetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCapping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTubeFilterWrap::GetGenerateTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTCoords();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetGenerateTCoordsAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTCoordsAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTubeFilterWrap::GetGenerateTCoordsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTCoordsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetGenerateTCoordsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTCoordsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetNumberOfSides(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSides();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetNumberOfSidesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSidesMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetNumberOfSidesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSidesMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffsetMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffsetMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetOnRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetOnRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetOnRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetRadiusFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetSidesShareVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSidesShareVertices();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetTextureLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetTextureLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureLengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetTextureLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureLengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetUseDefaultNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseDefaultNormal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetVaryRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVaryRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetVaryRadiusAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVaryRadiusAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTubeFilterWrap::GetVaryRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVaryRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::GetVaryRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVaryRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTubeFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
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

void VtkTubeFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	vtkTubeFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTubeFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTubeFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTubeFilterWrap *w = new VtkTubeFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTubeFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTubeFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTubeFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTubeFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTubeFilterWrap *w = new VtkTubeFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTubeFilterWrap::SetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCapping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTubeFilterWrap::SetDefaultNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
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
		native->SetDefaultNormal(
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
		native->SetDefaultNormal(
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
				native->SetDefaultNormal(
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

void VtkTubeFilterWrap::SetGenerateTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateTCoords(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTubeFilterWrap::SetGenerateTCoordsToNormalizedLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGenerateTCoordsToNormalizedLength();
}

void VtkTubeFilterWrap::SetGenerateTCoordsToOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGenerateTCoordsToOff();
}

void VtkTubeFilterWrap::SetGenerateTCoordsToUseLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGenerateTCoordsToUseLength();
}

void VtkTubeFilterWrap::SetGenerateTCoordsToUseScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGenerateTCoordsToUseScalars();
}

void VtkTubeFilterWrap::SetNumberOfSides(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfSides(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTubeFilterWrap::SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOffset(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTubeFilterWrap::SetOnRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOnRatio(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTubeFilterWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
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

void VtkTubeFilterWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
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

void VtkTubeFilterWrap::SetRadiusFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadiusFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTubeFilterWrap::SetSidesShareVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSidesShareVertices(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTubeFilterWrap::SetTextureLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextureLength(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTubeFilterWrap::SetUseDefaultNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseDefaultNormal(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTubeFilterWrap::SetVaryRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVaryRadius(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTubeFilterWrap::SetVaryRadiusToVaryRadiusByAbsoluteScalar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVaryRadiusToVaryRadiusByAbsoluteScalar();
}

void VtkTubeFilterWrap::SetVaryRadiusToVaryRadiusByScalar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVaryRadiusToVaryRadiusByScalar();
}

void VtkTubeFilterWrap::SetVaryRadiusToVaryRadiusByVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVaryRadiusToVaryRadiusByVector();
}

void VtkTubeFilterWrap::SetVaryRadiusToVaryRadiusOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVaryRadiusToVaryRadiusOff();
}

void VtkTubeFilterWrap::SidesShareVerticesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SidesShareVerticesOff();
}

void VtkTubeFilterWrap::SidesShareVerticesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SidesShareVerticesOn();
}

void VtkTubeFilterWrap::UseDefaultNormalOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseDefaultNormalOff();
}

void VtkTubeFilterWrap::UseDefaultNormalOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTubeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTubeFilterWrap>(info.Holder());
	vtkTubeFilter *native = (vtkTubeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseDefaultNormalOn();
}

