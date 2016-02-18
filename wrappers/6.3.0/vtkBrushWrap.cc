/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkBrushWrap.h"
#include "vtkImageDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBrushWrap::ptpl;

VtkBrushWrap::VtkBrushWrap()
{ }

VtkBrushWrap::VtkBrushWrap(vtkSmartPointer<vtkBrush> _native)
{ native = _native; }

VtkBrushWrap::~VtkBrushWrap()
{ }

void VtkBrushWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBrush").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Brush").ToLocalChecked(), ConstructorGetter);
}

void VtkBrushWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBrushWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBrushWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColor", GetColor);
	Nan::SetPrototypeMethod(tpl, "getColor", GetColor);

	Nan::SetPrototypeMethod(tpl, "GetColorF", GetColorF);
	Nan::SetPrototypeMethod(tpl, "getColorF", GetColorF);

	Nan::SetPrototypeMethod(tpl, "GetOpacity", GetOpacity);
	Nan::SetPrototypeMethod(tpl, "getOpacity", GetOpacity);

	Nan::SetPrototypeMethod(tpl, "GetOpacityF", GetOpacityF);
	Nan::SetPrototypeMethod(tpl, "getOpacityF", GetOpacityF);

	Nan::SetPrototypeMethod(tpl, "GetTexture", GetTexture);
	Nan::SetPrototypeMethod(tpl, "getTexture", GetTexture);

	Nan::SetPrototypeMethod(tpl, "GetTextureProperties", GetTextureProperties);
	Nan::SetPrototypeMethod(tpl, "getTextureProperties", GetTextureProperties);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColor", SetColor);
	Nan::SetPrototypeMethod(tpl, "setColor", SetColor);

	Nan::SetPrototypeMethod(tpl, "SetColorF", SetColorF);
	Nan::SetPrototypeMethod(tpl, "setColorF", SetColorF);

	Nan::SetPrototypeMethod(tpl, "SetOpacity", SetOpacity);
	Nan::SetPrototypeMethod(tpl, "setOpacity", SetOpacity);

	Nan::SetPrototypeMethod(tpl, "SetOpacityF", SetOpacityF);
	Nan::SetPrototypeMethod(tpl, "setOpacityF", SetOpacityF);

	Nan::SetPrototypeMethod(tpl, "SetTexture", SetTexture);
	Nan::SetPrototypeMethod(tpl, "setTexture", SetTexture);

	Nan::SetPrototypeMethod(tpl, "SetTextureProperties", SetTextureProperties);
	Nan::SetPrototypeMethod(tpl, "setTextureProperties", SetTextureProperties);

#ifdef VTK_NODE_PLUS_VTKBRUSHWRAP_INITPTPL
	VTK_NODE_PLUS_VTKBRUSHWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkBrushWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBrush> native = vtkSmartPointer<vtkBrush>::New();
		VtkBrushWrap* obj = new VtkBrushWrap(native);
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

void VtkBrushWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkBrushWrap::ptpl))->HasInstance(info[0]))
	{
		VtkBrushWrap *a0 = ObjectWrap::Unwrap<VtkBrushWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkBrush *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrushWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBrushWrap::GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint8Array())
	{
		v8::Local<v8::Uint8Array>a0(v8::Local<v8::Uint8Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetColor(
			(unsigned char *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned char b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsUint32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Uint32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetColor(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrushWrap::GetColorF(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetColorF(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
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
		native->GetColorF(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrushWrap::GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	unsigned char r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrushWrap::GetOpacityF(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpacityF();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrushWrap::GetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTexture();
	VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBrushWrap::GetTextureProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureProperties();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrushWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
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

void VtkBrushWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	vtkBrush * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkBrushWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBrushWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBrushWrap *w = new VtkBrushWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBrushWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBrush * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkBrushWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBrushWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBrushWrap *w = new VtkBrushWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrushWrap::SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint8Array())
	{
		v8::Local<v8::Uint8Array>a0(v8::Local<v8::Uint8Array>::Cast(info[0]->ToObject()));
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
		native->SetColor(
			(unsigned char *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned char b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsUint32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Uint32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColor(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
			if(info.Length() > 2 && info[2]->IsUint32())
			{
				if(info.Length() > 3 && info[3]->IsUint32())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetColor(
						info[0]->Uint32Value(),
						info[1]->Uint32Value(),
						info[2]->Uint32Value(),
						info[3]->Uint32Value()
					);
					return;
				}
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetColor(
					info[0]->Uint32Value(),
					info[1]->Uint32Value(),
					info[2]->Uint32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrushWrap::SetColorF(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
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
		native->SetColorF(
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
		native->SetColorF(
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
				if(info.Length() > 3 && info[3]->IsNumber())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetColorF(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetColorF(
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

void VtkBrushWrap::SetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOpacity(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrushWrap::SetOpacityF(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOpacityF(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrushWrap::SetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTexture(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrushWrap::SetTextureProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrushWrap *wrapper = ObjectWrap::Unwrap<VtkBrushWrap>(info.Holder());
	vtkBrush *native = (vtkBrush *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextureProperties(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

