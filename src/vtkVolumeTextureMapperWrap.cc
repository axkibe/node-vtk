/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkVolumeMapperWrap.h"
#include "vtkVolumeTextureMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkEncodedGradientEstimatorWrap.h"
#include "vtkEncodedGradientShaderWrap.h"
#include "vtkRenderWindowWrap.h"
#include "vtkRendererWrap.h"
#include "vtkVolumeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkVolumeTextureMapperWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkVolumeTextureMapperWrap::ptpl;

VtkVolumeTextureMapperWrap::VtkVolumeTextureMapperWrap()
{ }

VtkVolumeTextureMapperWrap::VtkVolumeTextureMapperWrap(vtkSmartPointer<vtkVolumeTextureMapper> _native)
{ native = _native; }

VtkVolumeTextureMapperWrap::~VtkVolumeTextureMapperWrap()
{ }

void VtkVolumeTextureMapperWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkVolumeMapperWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkVolumeMapperWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkVolumeTextureMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkVolumeTextureMapper").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("VolumeTextureMapper").ToLocalChecked(),tpl->GetFunction());
}

void VtkVolumeTextureMapperWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGradientEstimator", GetGradientEstimator);
	Nan::SetPrototypeMethod(tpl, "getGradientEstimator", GetGradientEstimator);

	Nan::SetPrototypeMethod(tpl, "GetGradientShader", GetGradientShader);
	Nan::SetPrototypeMethod(tpl, "getGradientShader", GetGradientShader);

	Nan::SetPrototypeMethod(tpl, "GetRenderWindow", GetRenderWindow);
	Nan::SetPrototypeMethod(tpl, "getRenderWindow", GetRenderWindow);

	Nan::SetPrototypeMethod(tpl, "GetShade", GetShade);
	Nan::SetPrototypeMethod(tpl, "getShade", GetShade);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGradientEstimator", SetGradientEstimator);
	Nan::SetPrototypeMethod(tpl, "setGradientEstimator", SetGradientEstimator);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

}

void VtkVolumeTextureMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkVolumeTextureMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapperWrap>(info.Holder());
	vtkVolumeTextureMapper *native = (vtkVolumeTextureMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeTextureMapperWrap::GetGradientEstimator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapperWrap>(info.Holder());
	vtkVolumeTextureMapper *native = (vtkVolumeTextureMapper *)wrapper->native.GetPointer();
	vtkEncodedGradientEstimator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGradientEstimator();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkEncodedGradientEstimatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEncodedGradientEstimatorWrap *w = new VtkEncodedGradientEstimatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeTextureMapperWrap::GetGradientShader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapperWrap>(info.Holder());
	vtkVolumeTextureMapper *native = (vtkVolumeTextureMapper *)wrapper->native.GetPointer();
	vtkEncodedGradientShader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGradientShader();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkEncodedGradientShaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEncodedGradientShaderWrap *w = new VtkEncodedGradientShaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeTextureMapperWrap::GetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapperWrap>(info.Holder());
	vtkVolumeTextureMapper *native = (vtkVolumeTextureMapper *)wrapper->native.GetPointer();
	vtkRenderWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderWindow();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRenderWindowWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderWindowWrap *w = new VtkRenderWindowWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeTextureMapperWrap::GetShade(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapperWrap>(info.Holder());
	vtkVolumeTextureMapper *native = (vtkVolumeTextureMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShade();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeTextureMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapperWrap>(info.Holder());
	vtkVolumeTextureMapper *native = (vtkVolumeTextureMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkVolumeTextureMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapperWrap>(info.Holder());
	vtkVolumeTextureMapper *native = (vtkVolumeTextureMapper *)wrapper->native.GetPointer();
	vtkVolumeTextureMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkVolumeTextureMapperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumeTextureMapperWrap *w = new VtkVolumeTextureMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeTextureMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapperWrap>(info.Holder());
	vtkVolumeTextureMapper *native = (vtkVolumeTextureMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkVolumeWrap *a1 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkVolume *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeTextureMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapperWrap>(info.Holder());
	vtkVolumeTextureMapper *native = (vtkVolumeTextureMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVolumeTextureMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkVolumeTextureMapperWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVolumeTextureMapperWrap *w = new VtkVolumeTextureMapperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeTextureMapperWrap::SetGradientEstimator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapperWrap>(info.Holder());
	vtkVolumeTextureMapper *native = (vtkVolumeTextureMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkEncodedGradientEstimatorWrap *a0 = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGradientEstimator(
			(vtkEncodedGradientEstimator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeTextureMapperWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapperWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapperWrap>(info.Holder());
	vtkVolumeTextureMapper *native = (vtkVolumeTextureMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Update(
			info[0]->Int32Value()
		);
		return;
	}
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

