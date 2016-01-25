/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridVolumeRayIntegratorWrap.h"
#include "vtkUnstructuredGridLinearRayIntegratorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkUnstructuredGridLinearRayIntegratorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkUnstructuredGridLinearRayIntegratorWrap::ptpl;

VtkUnstructuredGridLinearRayIntegratorWrap::VtkUnstructuredGridLinearRayIntegratorWrap()
{ }

VtkUnstructuredGridLinearRayIntegratorWrap::VtkUnstructuredGridLinearRayIntegratorWrap(vtkSmartPointer<vtkUnstructuredGridLinearRayIntegrator> _native)
{ native = _native; }

VtkUnstructuredGridLinearRayIntegratorWrap::~VtkUnstructuredGridLinearRayIntegratorWrap()
{ }

void VtkUnstructuredGridLinearRayIntegratorWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridVolumeRayIntegratorWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridVolumeRayIntegratorWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkUnstructuredGridLinearRayIntegratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkUnstructuredGridLinearRayIntegrator").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("UnstructuredGridLinearRayIntegrator").ToLocalChecked(),tpl->GetFunction());
}

void VtkUnstructuredGridLinearRayIntegratorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkUnstructuredGridLinearRayIntegratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkUnstructuredGridLinearRayIntegrator> native = vtkSmartPointer<vtkUnstructuredGridLinearRayIntegrator>::New();
		VtkUnstructuredGridLinearRayIntegratorWrap* obj = new VtkUnstructuredGridLinearRayIntegratorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkUnstructuredGridLinearRayIntegratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridLinearRayIntegratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridLinearRayIntegratorWrap>(info.Holder());
	vtkUnstructuredGridLinearRayIntegrator *native = (vtkUnstructuredGridLinearRayIntegrator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUnstructuredGridLinearRayIntegratorWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridLinearRayIntegratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridLinearRayIntegratorWrap>(info.Holder());
	vtkUnstructuredGridLinearRayIntegrator *native = (vtkUnstructuredGridLinearRayIntegrator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkVolumeWrap *a0 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Initialize(
				(vtkVolume *) a0->native.GetPointer(),
				(vtkDataArray *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridLinearRayIntegratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridLinearRayIntegratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridLinearRayIntegratorWrap>(info.Holder());
	vtkUnstructuredGridLinearRayIntegrator *native = (vtkUnstructuredGridLinearRayIntegrator *)wrapper->native.GetPointer();
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

void VtkUnstructuredGridLinearRayIntegratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridLinearRayIntegratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridLinearRayIntegratorWrap>(info.Holder());
	vtkUnstructuredGridLinearRayIntegrator *native = (vtkUnstructuredGridLinearRayIntegrator *)wrapper->native.GetPointer();
	vtkUnstructuredGridLinearRayIntegrator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkUnstructuredGridLinearRayIntegratorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridLinearRayIntegratorWrap *w = new VtkUnstructuredGridLinearRayIntegratorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridLinearRayIntegratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridLinearRayIntegratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridLinearRayIntegratorWrap>(info.Holder());
	vtkUnstructuredGridLinearRayIntegrator *native = (vtkUnstructuredGridLinearRayIntegrator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkUnstructuredGridLinearRayIntegrator * r;
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
			Nan::New<v8::Function>(VtkUnstructuredGridLinearRayIntegratorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnstructuredGridLinearRayIntegratorWrap *w = new VtkUnstructuredGridLinearRayIntegratorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

