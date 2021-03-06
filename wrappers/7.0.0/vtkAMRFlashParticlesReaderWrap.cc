/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAMRBaseParticlesReaderWrap.h"
#include "vtkAMRFlashParticlesReaderWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAMRFlashParticlesReaderWrap::ptpl;

VtkAMRFlashParticlesReaderWrap::VtkAMRFlashParticlesReaderWrap()
{ }

VtkAMRFlashParticlesReaderWrap::VtkAMRFlashParticlesReaderWrap(vtkSmartPointer<vtkAMRFlashParticlesReader> _native)
{ native = _native; }

VtkAMRFlashParticlesReaderWrap::~VtkAMRFlashParticlesReaderWrap()
{ }

void VtkAMRFlashParticlesReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAMRFlashParticlesReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AMRFlashParticlesReader").ToLocalChecked(), ConstructorGetter);
}

void VtkAMRFlashParticlesReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAMRFlashParticlesReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAMRBaseParticlesReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAMRBaseParticlesReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAMRFlashParticlesReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetTotalNumberOfParticles", GetTotalNumberOfParticles);
	Nan::SetPrototypeMethod(tpl, "getTotalNumberOfParticles", GetTotalNumberOfParticles);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKAMRFLASHPARTICLESREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKAMRFLASHPARTICLESREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAMRFlashParticlesReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAMRFlashParticlesReader> native = vtkSmartPointer<vtkAMRFlashParticlesReader>::New();
		VtkAMRFlashParticlesReaderWrap* obj = new VtkAMRFlashParticlesReaderWrap(native);
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

void VtkAMRFlashParticlesReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashParticlesReaderWrap>(info.Holder());
	vtkAMRFlashParticlesReader *native = (vtkAMRFlashParticlesReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAMRFlashParticlesReaderWrap::GetTotalNumberOfParticles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashParticlesReaderWrap>(info.Holder());
	vtkAMRFlashParticlesReader *native = (vtkAMRFlashParticlesReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTotalNumberOfParticles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRFlashParticlesReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashParticlesReaderWrap>(info.Holder());
	vtkAMRFlashParticlesReader *native = (vtkAMRFlashParticlesReader *)wrapper->native.GetPointer();
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

void VtkAMRFlashParticlesReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashParticlesReaderWrap>(info.Holder());
	vtkAMRFlashParticlesReader *native = (vtkAMRFlashParticlesReader *)wrapper->native.GetPointer();
	vtkAMRFlashParticlesReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAMRFlashParticlesReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAMRFlashParticlesReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMRFlashParticlesReaderWrap *w = new VtkAMRFlashParticlesReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRFlashParticlesReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashParticlesReaderWrap>(info.Holder());
	vtkAMRFlashParticlesReader *native = (vtkAMRFlashParticlesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAMRFlashParticlesReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkAMRFlashParticlesReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAMRFlashParticlesReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMRFlashParticlesReaderWrap *w = new VtkAMRFlashParticlesReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

