/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageAlgorithmWrap.h"
#include "vtkBooleanTextureWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBooleanTextureWrap::ptpl;

VtkBooleanTextureWrap::VtkBooleanTextureWrap()
{ }

VtkBooleanTextureWrap::VtkBooleanTextureWrap(vtkSmartPointer<vtkBooleanTexture> _native)
{ native = _native; }

VtkBooleanTextureWrap::~VtkBooleanTextureWrap()
{ }

void VtkBooleanTextureWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBooleanTexture").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BooleanTexture").ToLocalChecked(), ConstructorGetter);
}

void VtkBooleanTextureWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBooleanTextureWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBooleanTextureWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetInIn", GetInIn);
	Nan::SetPrototypeMethod(tpl, "getInIn", GetInIn);

	Nan::SetPrototypeMethod(tpl, "GetInOn", GetInOn);
	Nan::SetPrototypeMethod(tpl, "getInOn", GetInOn);

	Nan::SetPrototypeMethod(tpl, "GetInOut", GetInOut);
	Nan::SetPrototypeMethod(tpl, "getInOut", GetInOut);

	Nan::SetPrototypeMethod(tpl, "GetOnIn", GetOnIn);
	Nan::SetPrototypeMethod(tpl, "getOnIn", GetOnIn);

	Nan::SetPrototypeMethod(tpl, "GetOnOn", GetOnOn);
	Nan::SetPrototypeMethod(tpl, "getOnOn", GetOnOn);

	Nan::SetPrototypeMethod(tpl, "GetOnOut", GetOnOut);
	Nan::SetPrototypeMethod(tpl, "getOnOut", GetOnOut);

	Nan::SetPrototypeMethod(tpl, "GetOutIn", GetOutIn);
	Nan::SetPrototypeMethod(tpl, "getOutIn", GetOutIn);

	Nan::SetPrototypeMethod(tpl, "GetOutOn", GetOutOn);
	Nan::SetPrototypeMethod(tpl, "getOutOn", GetOutOn);

	Nan::SetPrototypeMethod(tpl, "GetOutOut", GetOutOut);
	Nan::SetPrototypeMethod(tpl, "getOutOut", GetOutOut);

	Nan::SetPrototypeMethod(tpl, "GetThickness", GetThickness);
	Nan::SetPrototypeMethod(tpl, "getThickness", GetThickness);

	Nan::SetPrototypeMethod(tpl, "GetXSize", GetXSize);
	Nan::SetPrototypeMethod(tpl, "getXSize", GetXSize);

	Nan::SetPrototypeMethod(tpl, "GetYSize", GetYSize);
	Nan::SetPrototypeMethod(tpl, "getYSize", GetYSize);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInIn", SetInIn);
	Nan::SetPrototypeMethod(tpl, "setInIn", SetInIn);

	Nan::SetPrototypeMethod(tpl, "SetInOn", SetInOn);
	Nan::SetPrototypeMethod(tpl, "setInOn", SetInOn);

	Nan::SetPrototypeMethod(tpl, "SetInOut", SetInOut);
	Nan::SetPrototypeMethod(tpl, "setInOut", SetInOut);

	Nan::SetPrototypeMethod(tpl, "SetOnIn", SetOnIn);
	Nan::SetPrototypeMethod(tpl, "setOnIn", SetOnIn);

	Nan::SetPrototypeMethod(tpl, "SetOnOn", SetOnOn);
	Nan::SetPrototypeMethod(tpl, "setOnOn", SetOnOn);

	Nan::SetPrototypeMethod(tpl, "SetOnOut", SetOnOut);
	Nan::SetPrototypeMethod(tpl, "setOnOut", SetOnOut);

	Nan::SetPrototypeMethod(tpl, "SetOutIn", SetOutIn);
	Nan::SetPrototypeMethod(tpl, "setOutIn", SetOutIn);

	Nan::SetPrototypeMethod(tpl, "SetOutOn", SetOutOn);
	Nan::SetPrototypeMethod(tpl, "setOutOn", SetOutOn);

	Nan::SetPrototypeMethod(tpl, "SetOutOut", SetOutOut);
	Nan::SetPrototypeMethod(tpl, "setOutOut", SetOutOut);

	Nan::SetPrototypeMethod(tpl, "SetThickness", SetThickness);
	Nan::SetPrototypeMethod(tpl, "setThickness", SetThickness);

	Nan::SetPrototypeMethod(tpl, "SetXSize", SetXSize);
	Nan::SetPrototypeMethod(tpl, "setXSize", SetXSize);

	Nan::SetPrototypeMethod(tpl, "SetYSize", SetYSize);
	Nan::SetPrototypeMethod(tpl, "setYSize", SetYSize);

#ifdef VTK_NODE_PLUS_VTKBOOLEANTEXTUREWRAP_INITPTPL
	VTK_NODE_PLUS_VTKBOOLEANTEXTUREWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkBooleanTextureWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBooleanTexture> native = vtkSmartPointer<vtkBooleanTexture>::New();
		VtkBooleanTextureWrap* obj = new VtkBooleanTextureWrap(native);
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

void VtkBooleanTextureWrap::GetInIn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	unsigned char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInIn();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(unsigned char));
	Local<v8::Uint8Array> at = v8::Uint8Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(unsigned char));
	info.GetReturnValue().Set(at);
}

void VtkBooleanTextureWrap::GetInOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	unsigned char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInOn();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(unsigned char));
	Local<v8::Uint8Array> at = v8::Uint8Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(unsigned char));
	info.GetReturnValue().Set(at);
}

void VtkBooleanTextureWrap::GetInOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	unsigned char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInOut();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(unsigned char));
	Local<v8::Uint8Array> at = v8::Uint8Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(unsigned char));
	info.GetReturnValue().Set(at);
}

void VtkBooleanTextureWrap::GetOnIn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	unsigned char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnIn();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(unsigned char));
	Local<v8::Uint8Array> at = v8::Uint8Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(unsigned char));
	info.GetReturnValue().Set(at);
}

void VtkBooleanTextureWrap::GetOnOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	unsigned char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnOn();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(unsigned char));
	Local<v8::Uint8Array> at = v8::Uint8Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(unsigned char));
	info.GetReturnValue().Set(at);
}

void VtkBooleanTextureWrap::GetOnOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	unsigned char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnOut();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(unsigned char));
	Local<v8::Uint8Array> at = v8::Uint8Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(unsigned char));
	info.GetReturnValue().Set(at);
}

void VtkBooleanTextureWrap::GetOutIn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	unsigned char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutIn();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(unsigned char));
	Local<v8::Uint8Array> at = v8::Uint8Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(unsigned char));
	info.GetReturnValue().Set(at);
}

void VtkBooleanTextureWrap::GetOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	unsigned char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutOn();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(unsigned char));
	Local<v8::Uint8Array> at = v8::Uint8Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(unsigned char));
	info.GetReturnValue().Set(at);
}

void VtkBooleanTextureWrap::GetOutOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	unsigned char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutOut();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(unsigned char));
	Local<v8::Uint8Array> at = v8::Uint8Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(unsigned char));
	info.GetReturnValue().Set(at);
}

void VtkBooleanTextureWrap::GetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThickness();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBooleanTextureWrap::GetXSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBooleanTextureWrap::GetYSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBooleanTextureWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	vtkBooleanTexture * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkBooleanTextureWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBooleanTextureWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBooleanTextureWrap *w = new VtkBooleanTextureWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBooleanTextureWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkBooleanTexture * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkBooleanTextureWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBooleanTextureWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBooleanTextureWrap *w = new VtkBooleanTextureWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanTextureWrap::SetInIn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint8Array())
	{
		v8::Local<v8::Uint8Array>a0(v8::Local<v8::Uint8Array>::Cast(info[0]->ToObject()));
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
		native->SetInIn(
			(unsigned char *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned char b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetInIn(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInIn(
				info[0]->Uint32Value(),
				info[1]->Uint32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanTextureWrap::SetInOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint8Array())
	{
		v8::Local<v8::Uint8Array>a0(v8::Local<v8::Uint8Array>::Cast(info[0]->ToObject()));
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
		native->SetInOn(
			(unsigned char *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned char b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetInOn(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInOn(
				info[0]->Uint32Value(),
				info[1]->Uint32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanTextureWrap::SetInOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint8Array())
	{
		v8::Local<v8::Uint8Array>a0(v8::Local<v8::Uint8Array>::Cast(info[0]->ToObject()));
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
		native->SetInOut(
			(unsigned char *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned char b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetInOut(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInOut(
				info[0]->Uint32Value(),
				info[1]->Uint32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanTextureWrap::SetOnIn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint8Array())
	{
		v8::Local<v8::Uint8Array>a0(v8::Local<v8::Uint8Array>::Cast(info[0]->ToObject()));
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
		native->SetOnIn(
			(unsigned char *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned char b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetOnIn(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOnIn(
				info[0]->Uint32Value(),
				info[1]->Uint32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanTextureWrap::SetOnOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint8Array())
	{
		v8::Local<v8::Uint8Array>a0(v8::Local<v8::Uint8Array>::Cast(info[0]->ToObject()));
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
		native->SetOnOn(
			(unsigned char *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned char b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetOnOn(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOnOn(
				info[0]->Uint32Value(),
				info[1]->Uint32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanTextureWrap::SetOnOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint8Array())
	{
		v8::Local<v8::Uint8Array>a0(v8::Local<v8::Uint8Array>::Cast(info[0]->ToObject()));
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
		native->SetOnOut(
			(unsigned char *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned char b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetOnOut(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOnOut(
				info[0]->Uint32Value(),
				info[1]->Uint32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanTextureWrap::SetOutIn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint8Array())
	{
		v8::Local<v8::Uint8Array>a0(v8::Local<v8::Uint8Array>::Cast(info[0]->ToObject()));
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
		native->SetOutIn(
			(unsigned char *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned char b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetOutIn(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOutIn(
				info[0]->Uint32Value(),
				info[1]->Uint32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanTextureWrap::SetOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint8Array())
	{
		v8::Local<v8::Uint8Array>a0(v8::Local<v8::Uint8Array>::Cast(info[0]->ToObject()));
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
		native->SetOutOn(
			(unsigned char *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned char b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetOutOn(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOutOn(
				info[0]->Uint32Value(),
				info[1]->Uint32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanTextureWrap::SetOutOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint8Array())
	{
		v8::Local<v8::Uint8Array>a0(v8::Local<v8::Uint8Array>::Cast(info[0]->ToObject()));
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
		native->SetOutOut(
			(unsigned char *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned char b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetOutOut(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOutOut(
				info[0]->Uint32Value(),
				info[1]->Uint32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanTextureWrap::SetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThickness(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanTextureWrap::SetXSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBooleanTextureWrap::SetYSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBooleanTextureWrap *wrapper = ObjectWrap::Unwrap<VtkBooleanTextureWrap>(info.Holder());
	vtkBooleanTexture *native = (vtkBooleanTexture *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
