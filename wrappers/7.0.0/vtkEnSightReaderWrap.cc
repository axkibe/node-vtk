/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGenericEnSightReaderWrap.h"
#include "vtkEnSightReaderWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkEnSightReaderWrap::ptpl;

VtkEnSightReaderWrap::VtkEnSightReaderWrap()
{ }

VtkEnSightReaderWrap::VtkEnSightReaderWrap(vtkSmartPointer<vtkEnSightReader> _native)
{ native = _native; }

VtkEnSightReaderWrap::~VtkEnSightReaderWrap()
{ }

void VtkEnSightReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkEnSightReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("EnSightReader").ToLocalChecked(), ConstructorGetter);
}

void VtkEnSightReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkEnSightReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGenericEnSightReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGenericEnSightReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkEnSightReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMatchFileName", GetMatchFileName);
	Nan::SetPrototypeMethod(tpl, "getMatchFileName", GetMatchFileName);

	Nan::SetPrototypeMethod(tpl, "GetMeasuredFileName", GetMeasuredFileName);
	Nan::SetPrototypeMethod(tpl, "getMeasuredFileName", GetMeasuredFileName);

	Nan::SetPrototypeMethod(tpl, "GetParticleCoordinatesByIndex", GetParticleCoordinatesByIndex);
	Nan::SetPrototypeMethod(tpl, "getParticleCoordinatesByIndex", GetParticleCoordinatesByIndex);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ParticleCoordinatesByIndexOff", ParticleCoordinatesByIndexOff);
	Nan::SetPrototypeMethod(tpl, "particleCoordinatesByIndexOff", ParticleCoordinatesByIndexOff);

	Nan::SetPrototypeMethod(tpl, "ParticleCoordinatesByIndexOn", ParticleCoordinatesByIndexOn);
	Nan::SetPrototypeMethod(tpl, "particleCoordinatesByIndexOn", ParticleCoordinatesByIndexOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetParticleCoordinatesByIndex", SetParticleCoordinatesByIndex);
	Nan::SetPrototypeMethod(tpl, "setParticleCoordinatesByIndex", SetParticleCoordinatesByIndex);

#ifdef VTK_NODE_PLUS_VTKENSIGHTREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKENSIGHTREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkEnSightReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkEnSightReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightReaderWrap>(info.Holder());
	vtkEnSightReader *native = (vtkEnSightReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEnSightReaderWrap::GetMatchFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightReaderWrap>(info.Holder());
	vtkEnSightReader *native = (vtkEnSightReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMatchFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEnSightReaderWrap::GetMeasuredFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightReaderWrap>(info.Holder());
	vtkEnSightReader *native = (vtkEnSightReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMeasuredFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEnSightReaderWrap::GetParticleCoordinatesByIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightReaderWrap>(info.Holder());
	vtkEnSightReader *native = (vtkEnSightReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParticleCoordinatesByIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEnSightReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightReaderWrap>(info.Holder());
	vtkEnSightReader *native = (vtkEnSightReader *)wrapper->native.GetPointer();
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

void VtkEnSightReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightReaderWrap>(info.Holder());
	vtkEnSightReader *native = (vtkEnSightReader *)wrapper->native.GetPointer();
	vtkEnSightReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkEnSightReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkEnSightReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEnSightReaderWrap *w = new VtkEnSightReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEnSightReaderWrap::ParticleCoordinatesByIndexOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightReaderWrap>(info.Holder());
	vtkEnSightReader *native = (vtkEnSightReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ParticleCoordinatesByIndexOff();
}

void VtkEnSightReaderWrap::ParticleCoordinatesByIndexOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightReaderWrap>(info.Holder());
	vtkEnSightReader *native = (vtkEnSightReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ParticleCoordinatesByIndexOn();
}

void VtkEnSightReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightReaderWrap>(info.Holder());
	vtkEnSightReader *native = (vtkEnSightReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkEnSightReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkEnSightReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkEnSightReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEnSightReaderWrap *w = new VtkEnSightReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEnSightReaderWrap::SetParticleCoordinatesByIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightReaderWrap>(info.Holder());
	vtkEnSightReader *native = (vtkEnSightReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParticleCoordinatesByIndex(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

