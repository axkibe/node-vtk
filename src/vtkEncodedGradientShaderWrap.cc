/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkEncodedGradientShaderWrap.h"
#include "vtkRendererWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkEncodedGradientEstimatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkEncodedGradientShaderWrap::constructor;

VtkEncodedGradientShaderWrap::VtkEncodedGradientShaderWrap()
{ }

VtkEncodedGradientShaderWrap::VtkEncodedGradientShaderWrap(vtkSmartPointer<vtkEncodedGradientShader> _native)
{ native = _native; }

VtkEncodedGradientShaderWrap::~VtkEncodedGradientShaderWrap()
{ }

void VtkEncodedGradientShaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkEncodedGradientShaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkEncodedGradientShader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("EncodedGradientShader").ToLocalChecked(),tpl->GetFunction());
}

void VtkEncodedGradientShaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetActiveComponent", GetActiveComponent);
	Nan::SetPrototypeMethod(tpl, "getActiveComponent", GetActiveComponent);

	Nan::SetPrototypeMethod(tpl, "GetActiveComponentMaxValue", GetActiveComponentMaxValue);
	Nan::SetPrototypeMethod(tpl, "getActiveComponentMaxValue", GetActiveComponentMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetActiveComponentMinValue", GetActiveComponentMinValue);
	Nan::SetPrototypeMethod(tpl, "getActiveComponentMinValue", GetActiveComponentMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetActiveComponent", SetActiveComponent);
	Nan::SetPrototypeMethod(tpl, "setActiveComponent", SetActiveComponent);

	Nan::SetPrototypeMethod(tpl, "UpdateShadingTable", UpdateShadingTable);
	Nan::SetPrototypeMethod(tpl, "updateShadingTable", UpdateShadingTable);

}

void VtkEncodedGradientShaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkEncodedGradientShader> native = vtkSmartPointer<vtkEncodedGradientShader>::New();
		VtkEncodedGradientShaderWrap* obj = new VtkEncodedGradientShaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkEncodedGradientShaderWrap::GetActiveComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientShaderWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientShaderWrap>(info.Holder());
	vtkEncodedGradientShader *native = (vtkEncodedGradientShader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientShaderWrap::GetActiveComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientShaderWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientShaderWrap>(info.Holder());
	vtkEncodedGradientShader *native = (vtkEncodedGradientShader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveComponentMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientShaderWrap::GetActiveComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientShaderWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientShaderWrap>(info.Holder());
	vtkEncodedGradientShader *native = (vtkEncodedGradientShader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveComponentMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEncodedGradientShaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientShaderWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientShaderWrap>(info.Holder());
	vtkEncodedGradientShader *native = (vtkEncodedGradientShader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEncodedGradientShaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientShaderWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientShaderWrap>(info.Holder());
	vtkEncodedGradientShader *native = (vtkEncodedGradientShader *)wrapper->native.GetPointer();
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

void VtkEncodedGradientShaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientShaderWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientShaderWrap>(info.Holder());
	vtkEncodedGradientShader *native = (vtkEncodedGradientShader *)wrapper->native.GetPointer();
	vtkEncodedGradientShader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
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

void VtkEncodedGradientShaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientShaderWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientShaderWrap>(info.Holder());
	vtkEncodedGradientShader *native = (vtkEncodedGradientShader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkEncodedGradientShader * r;
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
			Nan::New<v8::Function>(VtkEncodedGradientShaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEncodedGradientShaderWrap *w = new VtkEncodedGradientShaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientShaderWrap::SetActiveComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientShaderWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientShaderWrap>(info.Holder());
	vtkEncodedGradientShader *native = (vtkEncodedGradientShader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetActiveComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEncodedGradientShaderWrap::UpdateShadingTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEncodedGradientShaderWrap *wrapper = ObjectWrap::Unwrap<VtkEncodedGradientShaderWrap>(info.Holder());
	vtkEncodedGradientShader *native = (vtkEncodedGradientShader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkVolumeWrap *a1 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject())
			{
				VtkEncodedGradientEstimatorWrap *a2 = ObjectWrap::Unwrap<VtkEncodedGradientEstimatorWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->UpdateShadingTable(
					(vtkRenderer *) a0->native.GetPointer(),
					(vtkVolume *) a1->native.GetPointer(),
					(vtkEncodedGradientEstimator *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

