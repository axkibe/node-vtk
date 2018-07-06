/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkButtonSourceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkButtonSourceWrap::ptpl;

VtkButtonSourceWrap::VtkButtonSourceWrap()
{ }

VtkButtonSourceWrap::VtkButtonSourceWrap(vtkSmartPointer<vtkButtonSource> _native)
{ native = _native; }

VtkButtonSourceWrap::~VtkButtonSourceWrap()
{ }

void VtkButtonSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkButtonSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ButtonSource").ToLocalChecked(), ConstructorGetter);
}

void VtkButtonSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkButtonSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkButtonSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCenter", GetCenter);
	Nan::SetPrototypeMethod(tpl, "getCenter", GetCenter);

	Nan::SetPrototypeMethod(tpl, "GetShoulderTextureCoordinate", GetShoulderTextureCoordinate);
	Nan::SetPrototypeMethod(tpl, "getShoulderTextureCoordinate", GetShoulderTextureCoordinate);

	Nan::SetPrototypeMethod(tpl, "GetTextureDimensions", GetTextureDimensions);
	Nan::SetPrototypeMethod(tpl, "getTextureDimensions", GetTextureDimensions);

	Nan::SetPrototypeMethod(tpl, "GetTextureStyle", GetTextureStyle);
	Nan::SetPrototypeMethod(tpl, "getTextureStyle", GetTextureStyle);

	Nan::SetPrototypeMethod(tpl, "GetTextureStyleMaxValue", GetTextureStyleMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTextureStyleMaxValue", GetTextureStyleMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTextureStyleMinValue", GetTextureStyleMinValue);
	Nan::SetPrototypeMethod(tpl, "getTextureStyleMinValue", GetTextureStyleMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTwoSided", GetTwoSided);
	Nan::SetPrototypeMethod(tpl, "getTwoSided", GetTwoSided);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetShoulderTextureCoordinate", SetShoulderTextureCoordinate);
	Nan::SetPrototypeMethod(tpl, "setShoulderTextureCoordinate", SetShoulderTextureCoordinate);

	Nan::SetPrototypeMethod(tpl, "SetTextureDimensions", SetTextureDimensions);
	Nan::SetPrototypeMethod(tpl, "setTextureDimensions", SetTextureDimensions);

	Nan::SetPrototypeMethod(tpl, "SetTextureStyle", SetTextureStyle);
	Nan::SetPrototypeMethod(tpl, "setTextureStyle", SetTextureStyle);

	Nan::SetPrototypeMethod(tpl, "SetTextureStyleToFitImage", SetTextureStyleToFitImage);
	Nan::SetPrototypeMethod(tpl, "setTextureStyleToFitImage", SetTextureStyleToFitImage);

	Nan::SetPrototypeMethod(tpl, "SetTextureStyleToProportional", SetTextureStyleToProportional);
	Nan::SetPrototypeMethod(tpl, "setTextureStyleToProportional", SetTextureStyleToProportional);

	Nan::SetPrototypeMethod(tpl, "SetTwoSided", SetTwoSided);
	Nan::SetPrototypeMethod(tpl, "setTwoSided", SetTwoSided);

	Nan::SetPrototypeMethod(tpl, "TwoSidedOff", TwoSidedOff);
	Nan::SetPrototypeMethod(tpl, "twoSidedOff", TwoSidedOff);

	Nan::SetPrototypeMethod(tpl, "TwoSidedOn", TwoSidedOn);
	Nan::SetPrototypeMethod(tpl, "twoSidedOn", TwoSidedOn);

#ifdef VTK_NODE_PLUS_VTKBUTTONSOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKBUTTONSOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkButtonSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkButtonSourceWrap::GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
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

void VtkButtonSourceWrap::GetShoulderTextureCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShoulderTextureCoordinate();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkButtonSourceWrap::GetTextureDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureDimensions();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkButtonSourceWrap::GetTextureStyle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureStyle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkButtonSourceWrap::GetTextureStyleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureStyleMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkButtonSourceWrap::GetTextureStyleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureStyleMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkButtonSourceWrap::GetTwoSided(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTwoSided();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkButtonSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
	vtkButtonSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkButtonSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkButtonSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkButtonSourceWrap *w = new VtkButtonSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkButtonSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkButtonSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkButtonSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkButtonSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkButtonSourceWrap *w = new VtkButtonSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkButtonSourceWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
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

void VtkButtonSourceWrap::SetShoulderTextureCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShoulderTextureCoordinate(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetShoulderTextureCoordinate(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetShoulderTextureCoordinate(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkButtonSourceWrap::SetTextureDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextureDimensions(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextureDimensions(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetTextureDimensions(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkButtonSourceWrap::SetTextureStyle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextureStyle(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkButtonSourceWrap::SetTextureStyleToFitImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTextureStyleToFitImage();
}

void VtkButtonSourceWrap::SetTextureStyleToProportional(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTextureStyleToProportional();
}

void VtkButtonSourceWrap::SetTwoSided(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTwoSided(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkButtonSourceWrap::TwoSidedOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TwoSidedOff();
}

void VtkButtonSourceWrap::TwoSidedOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkButtonSourceWrap>(info.Holder());
	vtkButtonSource *native = (vtkButtonSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TwoSidedOn();
}
