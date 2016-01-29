/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWriterWrap.h"
#include "vtkAbstractParticleWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractParticleWriterWrap::ptpl;

VtkAbstractParticleWriterWrap::VtkAbstractParticleWriterWrap()
{ }

VtkAbstractParticleWriterWrap::VtkAbstractParticleWriterWrap(vtkSmartPointer<vtkAbstractParticleWriter> _native)
{ native = _native; }

VtkAbstractParticleWriterWrap::~VtkAbstractParticleWriterWrap()
{ }

void VtkAbstractParticleWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractParticleWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractParticleWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractParticleWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractParticleWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractParticleWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCollectiveIO", GetCollectiveIO);
	Nan::SetPrototypeMethod(tpl, "getCollectiveIO", GetCollectiveIO);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetTimeStep", GetTimeStep);
	Nan::SetPrototypeMethod(tpl, "getTimeStep", GetTimeStep);

	Nan::SetPrototypeMethod(tpl, "GetTimeValue", GetTimeValue);
	Nan::SetPrototypeMethod(tpl, "getTimeValue", GetTimeValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCollectiveIO", SetCollectiveIO);
	Nan::SetPrototypeMethod(tpl, "setCollectiveIO", SetCollectiveIO);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetTimeStep", SetTimeStep);
	Nan::SetPrototypeMethod(tpl, "setTimeStep", SetTimeStep);

	Nan::SetPrototypeMethod(tpl, "SetTimeValue", SetTimeValue);
	Nan::SetPrototypeMethod(tpl, "setTimeValue", SetTimeValue);

	Nan::SetPrototypeMethod(tpl, "SetWriteModeToCollective", SetWriteModeToCollective);
	Nan::SetPrototypeMethod(tpl, "setWriteModeToCollective", SetWriteModeToCollective);

	Nan::SetPrototypeMethod(tpl, "SetWriteModeToIndependent", SetWriteModeToIndependent);
	Nan::SetPrototypeMethod(tpl, "setWriteModeToIndependent", SetWriteModeToIndependent);

	ptpl.Reset( tpl );
}

void VtkAbstractParticleWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkAbstractParticleWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractParticleWriterWrap::GetCollectiveIO(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCollectiveIO();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractParticleWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractParticleWriterWrap::GetTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeStep();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractParticleWriterWrap::GetTimeValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractParticleWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
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

void VtkAbstractParticleWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
	vtkAbstractParticleWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAbstractParticleWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractParticleWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractParticleWriterWrap *w = new VtkAbstractParticleWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractParticleWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAbstractParticleWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAbstractParticleWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAbstractParticleWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractParticleWriterWrap *w = new VtkAbstractParticleWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractParticleWriterWrap::SetCollectiveIO(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCollectiveIO(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractParticleWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractParticleWriterWrap::SetTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTimeStep(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractParticleWriterWrap::SetTimeValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTimeValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractParticleWriterWrap::SetWriteModeToCollective(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWriteModeToCollective();
}

void VtkAbstractParticleWriterWrap::SetWriteModeToIndependent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractParticleWriterWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info.Holder());
	vtkAbstractParticleWriter *native = (vtkAbstractParticleWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWriteModeToIndependent();
}

