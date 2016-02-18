/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkFixedPointRayCastImageWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFixedPointRayCastImageWrap::ptpl;

VtkFixedPointRayCastImageWrap::VtkFixedPointRayCastImageWrap()
{ }

VtkFixedPointRayCastImageWrap::VtkFixedPointRayCastImageWrap(vtkSmartPointer<vtkFixedPointRayCastImage> _native)
{ native = _native; }

VtkFixedPointRayCastImageWrap::~VtkFixedPointRayCastImageWrap()
{ }

void VtkFixedPointRayCastImageWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFixedPointRayCastImage").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FixedPointRayCastImage").ToLocalChecked(), ConstructorGetter);
}

void VtkFixedPointRayCastImageWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFixedPointRayCastImageWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFixedPointRayCastImageWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AllocateImage", AllocateImage);
	Nan::SetPrototypeMethod(tpl, "allocateImage", AllocateImage);

	Nan::SetPrototypeMethod(tpl, "AllocateZBuffer", AllocateZBuffer);
	Nan::SetPrototypeMethod(tpl, "allocateZBuffer", AllocateZBuffer);

	Nan::SetPrototypeMethod(tpl, "ClearImage", ClearImage);
	Nan::SetPrototypeMethod(tpl, "clearImage", ClearImage);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetImageInUseSize", GetImageInUseSize);
	Nan::SetPrototypeMethod(tpl, "getImageInUseSize", GetImageInUseSize);

	Nan::SetPrototypeMethod(tpl, "GetImageMemorySize", GetImageMemorySize);
	Nan::SetPrototypeMethod(tpl, "getImageMemorySize", GetImageMemorySize);

	Nan::SetPrototypeMethod(tpl, "GetImageOrigin", GetImageOrigin);
	Nan::SetPrototypeMethod(tpl, "getImageOrigin", GetImageOrigin);

	Nan::SetPrototypeMethod(tpl, "GetImageViewportSize", GetImageViewportSize);
	Nan::SetPrototypeMethod(tpl, "getImageViewportSize", GetImageViewportSize);

	Nan::SetPrototypeMethod(tpl, "GetUseZBuffer", GetUseZBuffer);
	Nan::SetPrototypeMethod(tpl, "getUseZBuffer", GetUseZBuffer);

	Nan::SetPrototypeMethod(tpl, "GetUseZBufferMaxValue", GetUseZBufferMaxValue);
	Nan::SetPrototypeMethod(tpl, "getUseZBufferMaxValue", GetUseZBufferMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetUseZBufferMinValue", GetUseZBufferMinValue);
	Nan::SetPrototypeMethod(tpl, "getUseZBufferMinValue", GetUseZBufferMinValue);

	Nan::SetPrototypeMethod(tpl, "GetZBufferOrigin", GetZBufferOrigin);
	Nan::SetPrototypeMethod(tpl, "getZBufferOrigin", GetZBufferOrigin);

	Nan::SetPrototypeMethod(tpl, "GetZBufferSize", GetZBufferSize);
	Nan::SetPrototypeMethod(tpl, "getZBufferSize", GetZBufferSize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetImageInUseSize", SetImageInUseSize);
	Nan::SetPrototypeMethod(tpl, "setImageInUseSize", SetImageInUseSize);

	Nan::SetPrototypeMethod(tpl, "SetImageMemorySize", SetImageMemorySize);
	Nan::SetPrototypeMethod(tpl, "setImageMemorySize", SetImageMemorySize);

	Nan::SetPrototypeMethod(tpl, "SetImageOrigin", SetImageOrigin);
	Nan::SetPrototypeMethod(tpl, "setImageOrigin", SetImageOrigin);

	Nan::SetPrototypeMethod(tpl, "SetImageViewportSize", SetImageViewportSize);
	Nan::SetPrototypeMethod(tpl, "setImageViewportSize", SetImageViewportSize);

	Nan::SetPrototypeMethod(tpl, "SetUseZBuffer", SetUseZBuffer);
	Nan::SetPrototypeMethod(tpl, "setUseZBuffer", SetUseZBuffer);

	Nan::SetPrototypeMethod(tpl, "SetZBufferOrigin", SetZBufferOrigin);
	Nan::SetPrototypeMethod(tpl, "setZBufferOrigin", SetZBufferOrigin);

	Nan::SetPrototypeMethod(tpl, "SetZBufferSize", SetZBufferSize);
	Nan::SetPrototypeMethod(tpl, "setZBufferSize", SetZBufferSize);

	Nan::SetPrototypeMethod(tpl, "UseZBufferOff", UseZBufferOff);
	Nan::SetPrototypeMethod(tpl, "useZBufferOff", UseZBufferOff);

	Nan::SetPrototypeMethod(tpl, "UseZBufferOn", UseZBufferOn);
	Nan::SetPrototypeMethod(tpl, "useZBufferOn", UseZBufferOn);

#ifdef VTK_NODE_PLUS_VTKFIXEDPOINTRAYCASTIMAGEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKFIXEDPOINTRAYCASTIMAGEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkFixedPointRayCastImageWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFixedPointRayCastImage> native = vtkSmartPointer<vtkFixedPointRayCastImage>::New();
		VtkFixedPointRayCastImageWrap* obj = new VtkFixedPointRayCastImageWrap(native);
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

void VtkFixedPointRayCastImageWrap::AllocateImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AllocateImage();
}

void VtkFixedPointRayCastImageWrap::AllocateZBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AllocateZBuffer();
}

void VtkFixedPointRayCastImageWrap::ClearImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearImage();
}

void VtkFixedPointRayCastImageWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFixedPointRayCastImageWrap::GetImageInUseSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageInUseSize();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkFixedPointRayCastImageWrap::GetImageMemorySize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageMemorySize();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkFixedPointRayCastImageWrap::GetImageOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageOrigin();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkFixedPointRayCastImageWrap::GetImageViewportSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageViewportSize();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkFixedPointRayCastImageWrap::GetUseZBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseZBuffer();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFixedPointRayCastImageWrap::GetUseZBufferMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseZBufferMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFixedPointRayCastImageWrap::GetUseZBufferMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseZBufferMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFixedPointRayCastImageWrap::GetZBufferOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZBufferOrigin();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkFixedPointRayCastImageWrap::GetZBufferSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZBufferSize();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkFixedPointRayCastImageWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
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

void VtkFixedPointRayCastImageWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
	vtkFixedPointRayCastImage * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkFixedPointRayCastImageWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFixedPointRayCastImageWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFixedPointRayCastImageWrap *w = new VtkFixedPointRayCastImageWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFixedPointRayCastImageWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkFixedPointRayCastImage * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkFixedPointRayCastImageWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFixedPointRayCastImageWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFixedPointRayCastImageWrap *w = new VtkFixedPointRayCastImageWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFixedPointRayCastImageWrap::SetImageInUseSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
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
		native->SetImageInUseSize(
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
		native->SetImageInUseSize(
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
			native->SetImageInUseSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFixedPointRayCastImageWrap::SetImageMemorySize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
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
		native->SetImageMemorySize(
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
		native->SetImageMemorySize(
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
			native->SetImageMemorySize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFixedPointRayCastImageWrap::SetImageOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
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
		native->SetImageOrigin(
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
		native->SetImageOrigin(
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
			native->SetImageOrigin(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFixedPointRayCastImageWrap::SetImageViewportSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
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
		native->SetImageViewportSize(
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
		native->SetImageViewportSize(
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
			native->SetImageViewportSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFixedPointRayCastImageWrap::SetUseZBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseZBuffer(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFixedPointRayCastImageWrap::SetZBufferOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
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
		native->SetZBufferOrigin(
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
		native->SetZBufferOrigin(
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
			native->SetZBufferOrigin(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFixedPointRayCastImageWrap::SetZBufferSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
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
		native->SetZBufferSize(
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
		native->SetZBufferSize(
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
			native->SetZBufferSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFixedPointRayCastImageWrap::UseZBufferOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseZBufferOff();
}

void VtkFixedPointRayCastImageWrap::UseZBufferOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointRayCastImageWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointRayCastImageWrap>(info.Holder());
	vtkFixedPointRayCastImage *native = (vtkFixedPointRayCastImage *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseZBufferOn();
}

