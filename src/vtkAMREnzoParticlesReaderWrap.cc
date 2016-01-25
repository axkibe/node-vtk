/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAMRBaseParticlesReaderWrap.h"
#include "vtkAMREnzoParticlesReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAMREnzoParticlesReaderWrap::constructor;

VtkAMREnzoParticlesReaderWrap::VtkAMREnzoParticlesReaderWrap()
{ }

VtkAMREnzoParticlesReaderWrap::VtkAMREnzoParticlesReaderWrap(vtkSmartPointer<vtkAMREnzoParticlesReader> _native)
{ native = _native; }

VtkAMREnzoParticlesReaderWrap::~VtkAMREnzoParticlesReaderWrap()
{ }

void VtkAMREnzoParticlesReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkAMREnzoParticlesReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkMultiBlockDataSetAlgorithmWrap::InitTpl(tpl);
	VtkAMRBaseParticlesReaderWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkAMREnzoParticlesReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AMREnzoParticlesReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkAMREnzoParticlesReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetParticleType", GetParticleType);
	Nan::SetPrototypeMethod(tpl, "getParticleType", GetParticleType);

	Nan::SetPrototypeMethod(tpl, "GetTotalNumberOfParticles", GetTotalNumberOfParticles);
	Nan::SetPrototypeMethod(tpl, "getTotalNumberOfParticles", GetTotalNumberOfParticles);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetParticleType", SetParticleType);
	Nan::SetPrototypeMethod(tpl, "setParticleType", SetParticleType);

}

void VtkAMREnzoParticlesReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAMREnzoParticlesReader> native = vtkSmartPointer<vtkAMREnzoParticlesReader>::New();
		VtkAMREnzoParticlesReaderWrap* obj = new VtkAMREnzoParticlesReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAMREnzoParticlesReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoParticlesReaderWrap>(info.Holder());
	vtkAMREnzoParticlesReader *native = (vtkAMREnzoParticlesReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAMREnzoParticlesReaderWrap::GetParticleType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoParticlesReaderWrap>(info.Holder());
	vtkAMREnzoParticlesReader *native = (vtkAMREnzoParticlesReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParticleType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMREnzoParticlesReaderWrap::GetTotalNumberOfParticles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoParticlesReaderWrap>(info.Holder());
	vtkAMREnzoParticlesReader *native = (vtkAMREnzoParticlesReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTotalNumberOfParticles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMREnzoParticlesReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoParticlesReaderWrap>(info.Holder());
	vtkAMREnzoParticlesReader *native = (vtkAMREnzoParticlesReader *)wrapper->native.GetPointer();
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

void VtkAMREnzoParticlesReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoParticlesReaderWrap>(info.Holder());
	vtkAMREnzoParticlesReader *native = (vtkAMREnzoParticlesReader *)wrapper->native.GetPointer();
	vtkAMREnzoParticlesReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAMREnzoParticlesReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMREnzoParticlesReaderWrap *w = new VtkAMREnzoParticlesReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMREnzoParticlesReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoParticlesReaderWrap>(info.Holder());
	vtkAMREnzoParticlesReader *native = (vtkAMREnzoParticlesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAMREnzoParticlesReader * r;
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
			Nan::New<v8::Function>(VtkAMREnzoParticlesReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMREnzoParticlesReaderWrap *w = new VtkAMREnzoParticlesReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMREnzoParticlesReaderWrap::SetParticleType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoParticlesReaderWrap>(info.Holder());
	vtkAMREnzoParticlesReader *native = (vtkAMREnzoParticlesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParticleType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

