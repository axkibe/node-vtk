/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridVolumeRayIntegratorWrap.h"
#include "vtkUnstructuredGridPartialPreIntegrationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkUnstructuredGridPartialPreIntegrationWrap::ptpl;

VtkUnstructuredGridPartialPreIntegrationWrap::VtkUnstructuredGridPartialPreIntegrationWrap()
{ }

VtkUnstructuredGridPartialPreIntegrationWrap::VtkUnstructuredGridPartialPreIntegrationWrap(vtkSmartPointer<vtkUnstructuredGridPartialPreIntegration> _native)
{ native = _native; }

VtkUnstructuredGridPartialPreIntegrationWrap::~VtkUnstructuredGridPartialPreIntegrationWrap()
{ }

void VtkUnstructuredGridPartialPreIntegrationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkUnstructuredGridPartialPreIntegration").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("UnstructuredGridPartialPreIntegration").ToLocalChecked(), ConstructorGetter);
}

void VtkUnstructuredGridPartialPreIntegrationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkUnstructuredGridPartialPreIntegrationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridVolumeRayIntegratorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridVolumeRayIntegratorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkUnstructuredGridPartialPreIntegrationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildPsiTable", BuildPsiTable);
	Nan::SetPrototypeMethod(tpl, "buildPsiTable", BuildPsiTable);

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

	ptpl.Reset( tpl );
}

void VtkUnstructuredGridPartialPreIntegrationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkUnstructuredGridPartialPreIntegration> native = vtkSmartPointer<vtkUnstructuredGridPartialPreIntegration>::New();
		VtkUnstructuredGridPartialPreIntegrationWrap* obj = new VtkUnstructuredGridPartialPreIntegrationWrap(native);
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

void VtkUnstructuredGridPartialPreIntegrationWrap::BuildPsiTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridPartialPreIntegrationWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridPartialPreIntegrationWrap>(info.Holder());
	vtkUnstructuredGridPartialPreIntegration *native = (vtkUnstructuredGridPartialPreIntegration *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildPsiTable();
}

void VtkUnstructuredGridPartialPreIntegrationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridPartialPreIntegrationWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridPartialPreIntegrationWrap>(info.Holder());
	vtkUnstructuredGridPartialPreIntegration *native = (vtkUnstructuredGridPartialPreIntegration *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUnstructuredGridPartialPreIntegrationWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridPartialPreIntegrationWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridPartialPreIntegrationWrap>(info.Holder());
	vtkUnstructuredGridPartialPreIntegration *native = (vtkUnstructuredGridPartialPreIntegration *)wrapper->native.GetPointer();
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

void VtkUnstructuredGridPartialPreIntegrationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridPartialPreIntegrationWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridPartialPreIntegrationWrap>(info.Holder());
	vtkUnstructuredGridPartialPreIntegration *native = (vtkUnstructuredGridPartialPreIntegration *)wrapper->native.GetPointer();
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

void VtkUnstructuredGridPartialPreIntegrationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridPartialPreIntegrationWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridPartialPreIntegrationWrap>(info.Holder());
	vtkUnstructuredGridPartialPreIntegration *native = (vtkUnstructuredGridPartialPreIntegration *)wrapper->native.GetPointer();
	vtkUnstructuredGridPartialPreIntegration * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkUnstructuredGridPartialPreIntegrationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridPartialPreIntegrationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridPartialPreIntegrationWrap *w = new VtkUnstructuredGridPartialPreIntegrationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridPartialPreIntegrationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridPartialPreIntegrationWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridPartialPreIntegrationWrap>(info.Holder());
	vtkUnstructuredGridPartialPreIntegration *native = (vtkUnstructuredGridPartialPreIntegration *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkUnstructuredGridPartialPreIntegration * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkUnstructuredGridPartialPreIntegrationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridPartialPreIntegrationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnstructuredGridPartialPreIntegrationWrap *w = new VtkUnstructuredGridPartialPreIntegrationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

