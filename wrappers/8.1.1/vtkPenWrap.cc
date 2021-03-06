/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkPenWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPenWrap::ptpl;

VtkPenWrap::VtkPenWrap()
{ }

VtkPenWrap::VtkPenWrap(vtkSmartPointer<vtkPen> _native)
{ native = _native; }

VtkPenWrap::~VtkPenWrap()
{ }

void VtkPenWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPen").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Pen").ToLocalChecked(), ConstructorGetter);
}

void VtkPenWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPenWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPenWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetColor", GetColor);
	Nan::SetPrototypeMethod(tpl, "getColor", GetColor);

	Nan::SetPrototypeMethod(tpl, "GetColorF", GetColorF);
	Nan::SetPrototypeMethod(tpl, "getColorF", GetColorF);

	Nan::SetPrototypeMethod(tpl, "GetLineType", GetLineType);
	Nan::SetPrototypeMethod(tpl, "getLineType", GetLineType);

	Nan::SetPrototypeMethod(tpl, "GetOpacity", GetOpacity);
	Nan::SetPrototypeMethod(tpl, "getOpacity", GetOpacity);

	Nan::SetPrototypeMethod(tpl, "GetWidth", GetWidth);
	Nan::SetPrototypeMethod(tpl, "getWidth", GetWidth);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColor", SetColor);
	Nan::SetPrototypeMethod(tpl, "setColor", SetColor);

	Nan::SetPrototypeMethod(tpl, "SetColorF", SetColorF);
	Nan::SetPrototypeMethod(tpl, "setColorF", SetColorF);

	Nan::SetPrototypeMethod(tpl, "SetLineType", SetLineType);
	Nan::SetPrototypeMethod(tpl, "setLineType", SetLineType);

	Nan::SetPrototypeMethod(tpl, "SetOpacity", SetOpacity);
	Nan::SetPrototypeMethod(tpl, "setOpacity", SetOpacity);

	Nan::SetPrototypeMethod(tpl, "SetOpacityF", SetOpacityF);
	Nan::SetPrototypeMethod(tpl, "setOpacityF", SetOpacityF);

	Nan::SetPrototypeMethod(tpl, "SetWidth", SetWidth);
	Nan::SetPrototypeMethod(tpl, "setWidth", SetWidth);

#ifdef VTK_NODE_PLUS_VTKPENWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPENWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPenWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPen> native = vtkSmartPointer<vtkPen>::New();
		VtkPenWrap* obj = new VtkPenWrap(native);
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

void VtkPenWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPenWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPenWrap *a0 = ObjectWrap::Unwrap<VtkPenWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkPen *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPenWrap::GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
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
		native->GetColor(
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
		native->GetColor(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPenWrap::GetColorF(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
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
		native->GetColorF(
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
		native->GetColorF(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPenWrap::GetLineType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPenWrap::GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
	unsigned char r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPenWrap::GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPenWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
	vtkPen * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
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

void VtkPenWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPen * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
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
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPenWrap::SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
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

void VtkPenWrap::SetColorF(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
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

void VtkPenWrap::SetLineType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLineType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPenWrap::SetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
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

void VtkPenWrap::SetOpacityF(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
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

void VtkPenWrap::SetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPenWrap *wrapper = ObjectWrap::Unwrap<VtkPenWrap>(info.Holder());
	vtkPen *native = (vtkPen *)wrapper->native.GetPointer();
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

