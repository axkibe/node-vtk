/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridVolumeRayIntegratorWrap.h"
#include "vtkUnstructuredGridHomogeneousRayIntegratorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkUnstructuredGridHomogeneousRayIntegratorWrap::ptpl;

VtkUnstructuredGridHomogeneousRayIntegratorWrap::VtkUnstructuredGridHomogeneousRayIntegratorWrap()
{ }

VtkUnstructuredGridHomogeneousRayIntegratorWrap::VtkUnstructuredGridHomogeneousRayIntegratorWrap(vtkSmartPointer<vtkUnstructuredGridHomogeneousRayIntegrator> _native)
{ native = _native; }

VtkUnstructuredGridHomogeneousRayIntegratorWrap::~VtkUnstructuredGridHomogeneousRayIntegratorWrap()
{ }

void VtkUnstructuredGridHomogeneousRayIntegratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkUnstructuredGridHomogeneousRayIntegrator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("UnstructuredGridHomogeneousRayIntegrator").ToLocalChecked(), ConstructorGetter);
}

void VtkUnstructuredGridHomogeneousRayIntegratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkUnstructuredGridHomogeneousRayIntegratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridVolumeRayIntegratorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridVolumeRayIntegratorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkUnstructuredGridHomogeneousRayIntegratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetTransferFunctionTableSize", GetTransferFunctionTableSize);
	Nan::SetPrototypeMethod(tpl, "getTransferFunctionTableSize", GetTransferFunctionTableSize);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTransferFunctionTableSize", SetTransferFunctionTableSize);
	Nan::SetPrototypeMethod(tpl, "setTransferFunctionTableSize", SetTransferFunctionTableSize);

	ptpl.Reset( tpl );
}

void VtkUnstructuredGridHomogeneousRayIntegratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkUnstructuredGridHomogeneousRayIntegrator> native = vtkSmartPointer<vtkUnstructuredGridHomogeneousRayIntegrator>::New();
		VtkUnstructuredGridHomogeneousRayIntegratorWrap* obj = new VtkUnstructuredGridHomogeneousRayIntegratorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkUnstructuredGridHomogeneousRayIntegratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridHomogeneousRayIntegratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridHomogeneousRayIntegratorWrap>(info.Holder());
	vtkUnstructuredGridHomogeneousRayIntegrator *native = (vtkUnstructuredGridHomogeneousRayIntegrator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUnstructuredGridHomogeneousRayIntegratorWrap::GetTransferFunctionTableSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridHomogeneousRayIntegratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridHomogeneousRayIntegratorWrap>(info.Holder());
	vtkUnstructuredGridHomogeneousRayIntegrator *native = (vtkUnstructuredGridHomogeneousRayIntegrator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransferFunctionTableSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridHomogeneousRayIntegratorWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridHomogeneousRayIntegratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridHomogeneousRayIntegratorWrap>(info.Holder());
	vtkUnstructuredGridHomogeneousRayIntegrator *native = (vtkUnstructuredGridHomogeneousRayIntegrator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkVolumeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkVolumeWrap *a0 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
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

void VtkUnstructuredGridHomogeneousRayIntegratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridHomogeneousRayIntegratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridHomogeneousRayIntegratorWrap>(info.Holder());
	vtkUnstructuredGridHomogeneousRayIntegrator *native = (vtkUnstructuredGridHomogeneousRayIntegrator *)wrapper->native.GetPointer();
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

void VtkUnstructuredGridHomogeneousRayIntegratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridHomogeneousRayIntegratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridHomogeneousRayIntegratorWrap>(info.Holder());
	vtkUnstructuredGridHomogeneousRayIntegrator *native = (vtkUnstructuredGridHomogeneousRayIntegrator *)wrapper->native.GetPointer();
	vtkUnstructuredGridHomogeneousRayIntegrator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkUnstructuredGridHomogeneousRayIntegratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridHomogeneousRayIntegratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridHomogeneousRayIntegratorWrap *w = new VtkUnstructuredGridHomogeneousRayIntegratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridHomogeneousRayIntegratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridHomogeneousRayIntegratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridHomogeneousRayIntegratorWrap>(info.Holder());
	vtkUnstructuredGridHomogeneousRayIntegrator *native = (vtkUnstructuredGridHomogeneousRayIntegrator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkUnstructuredGridHomogeneousRayIntegrator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkUnstructuredGridHomogeneousRayIntegratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridHomogeneousRayIntegratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnstructuredGridHomogeneousRayIntegratorWrap *w = new VtkUnstructuredGridHomogeneousRayIntegratorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridHomogeneousRayIntegratorWrap::SetTransferFunctionTableSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridHomogeneousRayIntegratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridHomogeneousRayIntegratorWrap>(info.Holder());
	vtkUnstructuredGridHomogeneousRayIntegrator *native = (vtkUnstructuredGridHomogeneousRayIntegrator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransferFunctionTableSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

