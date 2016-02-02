/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkRibbonFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRibbonFilterWrap::ptpl;

VtkRibbonFilterWrap::VtkRibbonFilterWrap()
{ }

VtkRibbonFilterWrap::VtkRibbonFilterWrap(vtkSmartPointer<vtkRibbonFilter> _native)
{ native = _native; }

VtkRibbonFilterWrap::~VtkRibbonFilterWrap()
{ }

void VtkRibbonFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRibbonFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RibbonFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkRibbonFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRibbonFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRibbonFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAngle", GetAngle);
	Nan::SetPrototypeMethod(tpl, "getAngle", GetAngle);

	Nan::SetPrototypeMethod(tpl, "GetAngleMaxValue", GetAngleMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAngleMaxValue", GetAngleMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAngleMinValue", GetAngleMinValue);
	Nan::SetPrototypeMethod(tpl, "getAngleMinValue", GetAngleMinValue);

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

	Nan::SetPrototypeMethod(tpl, "GetTextureLength", GetTextureLength);
	Nan::SetPrototypeMethod(tpl, "getTextureLength", GetTextureLength);

	Nan::SetPrototypeMethod(tpl, "GetTextureLengthMaxValue", GetTextureLengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTextureLengthMaxValue", GetTextureLengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTextureLengthMinValue", GetTextureLengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getTextureLengthMinValue", GetTextureLengthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetUseDefaultNormal", GetUseDefaultNormal);
	Nan::SetPrototypeMethod(tpl, "getUseDefaultNormal", GetUseDefaultNormal);

	Nan::SetPrototypeMethod(tpl, "GetVaryWidth", GetVaryWidth);
	Nan::SetPrototypeMethod(tpl, "getVaryWidth", GetVaryWidth);

	Nan::SetPrototypeMethod(tpl, "GetWidth", GetWidth);
	Nan::SetPrototypeMethod(tpl, "getWidth", GetWidth);

	Nan::SetPrototypeMethod(tpl, "GetWidthFactor", GetWidthFactor);
	Nan::SetPrototypeMethod(tpl, "getWidthFactor", GetWidthFactor);

	Nan::SetPrototypeMethod(tpl, "GetWidthMaxValue", GetWidthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getWidthMaxValue", GetWidthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetWidthMinValue", GetWidthMinValue);
	Nan::SetPrototypeMethod(tpl, "getWidthMinValue", GetWidthMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAngle", SetAngle);
	Nan::SetPrototypeMethod(tpl, "setAngle", SetAngle);

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

	Nan::SetPrototypeMethod(tpl, "SetTextureLength", SetTextureLength);
	Nan::SetPrototypeMethod(tpl, "setTextureLength", SetTextureLength);

	Nan::SetPrototypeMethod(tpl, "SetUseDefaultNormal", SetUseDefaultNormal);
	Nan::SetPrototypeMethod(tpl, "setUseDefaultNormal", SetUseDefaultNormal);

	Nan::SetPrototypeMethod(tpl, "SetVaryWidth", SetVaryWidth);
	Nan::SetPrototypeMethod(tpl, "setVaryWidth", SetVaryWidth);

	Nan::SetPrototypeMethod(tpl, "SetWidth", SetWidth);
	Nan::SetPrototypeMethod(tpl, "setWidth", SetWidth);

	Nan::SetPrototypeMethod(tpl, "SetWidthFactor", SetWidthFactor);
	Nan::SetPrototypeMethod(tpl, "setWidthFactor", SetWidthFactor);

	Nan::SetPrototypeMethod(tpl, "UseDefaultNormalOff", UseDefaultNormalOff);
	Nan::SetPrototypeMethod(tpl, "useDefaultNormalOff", UseDefaultNormalOff);

	Nan::SetPrototypeMethod(tpl, "UseDefaultNormalOn", UseDefaultNormalOn);
	Nan::SetPrototypeMethod(tpl, "useDefaultNormalOn", UseDefaultNormalOn);

	Nan::SetPrototypeMethod(tpl, "VaryWidthOff", VaryWidthOff);
	Nan::SetPrototypeMethod(tpl, "varyWidthOff", VaryWidthOff);

	Nan::SetPrototypeMethod(tpl, "VaryWidthOn", VaryWidthOn);
	Nan::SetPrototypeMethod(tpl, "varyWidthOn", VaryWidthOn);

	ptpl.Reset( tpl );
}

void VtkRibbonFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRibbonFilter> native = vtkSmartPointer<vtkRibbonFilter>::New();
		VtkRibbonFilterWrap* obj = new VtkRibbonFilterWrap(native);
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

void VtkRibbonFilterWrap::GetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetAngleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngleMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetAngleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngleMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRibbonFilterWrap::GetGenerateTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTCoords();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetGenerateTCoordsAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTCoordsAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRibbonFilterWrap::GetGenerateTCoordsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTCoordsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetGenerateTCoordsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTCoordsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetTextureLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetTextureLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureLengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetTextureLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureLengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetUseDefaultNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseDefaultNormal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetVaryWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVaryWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetWidthFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidthFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::GetWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRibbonFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
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

void VtkRibbonFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	vtkRibbonFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRibbonFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRibbonFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRibbonFilterWrap *w = new VtkRibbonFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRibbonFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRibbonFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRibbonFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRibbonFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRibbonFilterWrap *w = new VtkRibbonFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRibbonFilterWrap::SetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAngle(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRibbonFilterWrap::SetDefaultNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
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

void VtkRibbonFilterWrap::SetGenerateTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
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

void VtkRibbonFilterWrap::SetGenerateTCoordsToNormalizedLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGenerateTCoordsToNormalizedLength();
}

void VtkRibbonFilterWrap::SetGenerateTCoordsToOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGenerateTCoordsToOff();
}

void VtkRibbonFilterWrap::SetGenerateTCoordsToUseLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGenerateTCoordsToUseLength();
}

void VtkRibbonFilterWrap::SetGenerateTCoordsToUseScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGenerateTCoordsToUseScalars();
}

void VtkRibbonFilterWrap::SetTextureLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
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

void VtkRibbonFilterWrap::SetUseDefaultNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
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

void VtkRibbonFilterWrap::SetVaryWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVaryWidth(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRibbonFilterWrap::SetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRibbonFilterWrap::SetWidthFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWidthFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRibbonFilterWrap::UseDefaultNormalOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseDefaultNormalOff();
}

void VtkRibbonFilterWrap::UseDefaultNormalOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseDefaultNormalOn();
}

void VtkRibbonFilterWrap::VaryWidthOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VaryWidthOff();
}

void VtkRibbonFilterWrap::VaryWidthOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRibbonFilterWrap>(info.Holder());
	vtkRibbonFilter *native = (vtkRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VaryWidthOn();
}

