/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkProjectedTextureWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProjectedTextureWrap::ptpl;

VtkProjectedTextureWrap::VtkProjectedTextureWrap()
{ }

VtkProjectedTextureWrap::VtkProjectedTextureWrap(vtkSmartPointer<vtkProjectedTexture> _native)
{ native = _native; }

VtkProjectedTextureWrap::~VtkProjectedTextureWrap()
{ }

void VtkProjectedTextureWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProjectedTexture").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProjectedTexture").ToLocalChecked(), ConstructorGetter);
}

void VtkProjectedTextureWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProjectedTextureWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProjectedTextureWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAspectRatio", GetAspectRatio);
	Nan::SetPrototypeMethod(tpl, "getAspectRatio", GetAspectRatio);

	Nan::SetPrototypeMethod(tpl, "GetCameraMode", GetCameraMode);
	Nan::SetPrototypeMethod(tpl, "getCameraMode", GetCameraMode);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFocalPoint", GetFocalPoint);
	Nan::SetPrototypeMethod(tpl, "getFocalPoint", GetFocalPoint);

	Nan::SetPrototypeMethod(tpl, "GetMirrorSeparation", GetMirrorSeparation);
	Nan::SetPrototypeMethod(tpl, "getMirrorSeparation", GetMirrorSeparation);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetPosition", GetPosition);
	Nan::SetPrototypeMethod(tpl, "getPosition", GetPosition);

	Nan::SetPrototypeMethod(tpl, "GetSRange", GetSRange);
	Nan::SetPrototypeMethod(tpl, "getSRange", GetSRange);

	Nan::SetPrototypeMethod(tpl, "GetTRange", GetTRange);
	Nan::SetPrototypeMethod(tpl, "getTRange", GetTRange);

	Nan::SetPrototypeMethod(tpl, "GetUp", GetUp);
	Nan::SetPrototypeMethod(tpl, "getUp", GetUp);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAspectRatio", SetAspectRatio);
	Nan::SetPrototypeMethod(tpl, "setAspectRatio", SetAspectRatio);

	Nan::SetPrototypeMethod(tpl, "SetCameraMode", SetCameraMode);
	Nan::SetPrototypeMethod(tpl, "setCameraMode", SetCameraMode);

	Nan::SetPrototypeMethod(tpl, "SetCameraModeToPinhole", SetCameraModeToPinhole);
	Nan::SetPrototypeMethod(tpl, "setCameraModeToPinhole", SetCameraModeToPinhole);

	Nan::SetPrototypeMethod(tpl, "SetCameraModeToTwoMirror", SetCameraModeToTwoMirror);
	Nan::SetPrototypeMethod(tpl, "setCameraModeToTwoMirror", SetCameraModeToTwoMirror);

	Nan::SetPrototypeMethod(tpl, "SetFocalPoint", SetFocalPoint);
	Nan::SetPrototypeMethod(tpl, "setFocalPoint", SetFocalPoint);

	Nan::SetPrototypeMethod(tpl, "SetMirrorSeparation", SetMirrorSeparation);
	Nan::SetPrototypeMethod(tpl, "setMirrorSeparation", SetMirrorSeparation);

	Nan::SetPrototypeMethod(tpl, "SetPosition", SetPosition);
	Nan::SetPrototypeMethod(tpl, "setPosition", SetPosition);

	Nan::SetPrototypeMethod(tpl, "SetSRange", SetSRange);
	Nan::SetPrototypeMethod(tpl, "setSRange", SetSRange);

	Nan::SetPrototypeMethod(tpl, "SetTRange", SetTRange);
	Nan::SetPrototypeMethod(tpl, "setTRange", SetTRange);

	Nan::SetPrototypeMethod(tpl, "SetUp", SetUp);
	Nan::SetPrototypeMethod(tpl, "setUp", SetUp);

	ptpl.Reset( tpl );
}

void VtkProjectedTextureWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProjectedTexture> native = vtkSmartPointer<vtkProjectedTexture>::New();
		VtkProjectedTextureWrap* obj = new VtkProjectedTextureWrap(native);
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

void VtkProjectedTextureWrap::GetAspectRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAspectRatio();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkProjectedTextureWrap::GetCameraMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCameraMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProjectedTextureWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProjectedTextureWrap::GetFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFocalPoint();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkProjectedTextureWrap::GetMirrorSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMirrorSeparation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProjectedTextureWrap::GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientation();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkProjectedTextureWrap::GetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPosition();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkProjectedTextureWrap::GetSRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkProjectedTextureWrap::GetTRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkProjectedTextureWrap::GetUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUp();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkProjectedTextureWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
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

void VtkProjectedTextureWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	vtkProjectedTexture * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkProjectedTextureWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProjectedTextureWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProjectedTextureWrap *w = new VtkProjectedTextureWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProjectedTextureWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProjectedTexture * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkProjectedTextureWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProjectedTextureWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProjectedTextureWrap *w = new VtkProjectedTextureWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectedTextureWrap::SetAspectRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
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
		native->SetAspectRatio(
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
		native->SetAspectRatio(
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
				native->SetAspectRatio(
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

void VtkProjectedTextureWrap::SetCameraMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCameraMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectedTextureWrap::SetCameraModeToPinhole(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCameraModeToPinhole();
}

void VtkProjectedTextureWrap::SetCameraModeToTwoMirror(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCameraModeToTwoMirror();
}

void VtkProjectedTextureWrap::SetFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
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
		native->SetFocalPoint(
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
		native->SetFocalPoint(
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
				native->SetFocalPoint(
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

void VtkProjectedTextureWrap::SetMirrorSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMirrorSeparation(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectedTextureWrap::SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
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
		native->SetPosition(
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
		native->SetPosition(
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
				native->SetPosition(
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

void VtkProjectedTextureWrap::SetSRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
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
		native->SetSRange(
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
		native->SetSRange(
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
			native->SetSRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectedTextureWrap::SetTRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
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
		native->SetTRange(
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
		native->SetTRange(
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
			native->SetTRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectedTextureWrap::SetUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectedTextureWrap *wrapper = ObjectWrap::Unwrap<VtkProjectedTextureWrap>(info.Holder());
	vtkProjectedTexture *native = (vtkProjectedTexture *)wrapper->native.GetPointer();
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
		native->SetUp(
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
		native->SetUp(
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
				native->SetUp(
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

