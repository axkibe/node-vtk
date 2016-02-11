/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStreamTracerWrap.h"
#include "vtkTemporalStreamTracerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAbstractParticleWriterWrap.h"
#include "vtkAlgorithmOutputWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTemporalStreamTracerWrap::ptpl;

VtkTemporalStreamTracerWrap::VtkTemporalStreamTracerWrap()
{ }

VtkTemporalStreamTracerWrap::VtkTemporalStreamTracerWrap(vtkSmartPointer<vtkTemporalStreamTracer> _native)
{ native = _native; }

VtkTemporalStreamTracerWrap::~VtkTemporalStreamTracerWrap()
{ }

void VtkTemporalStreamTracerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTemporalStreamTracer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TemporalStreamTracer").ToLocalChecked(), ConstructorGetter);
}

void VtkTemporalStreamTracerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTemporalStreamTracerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStreamTracerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStreamTracerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTemporalStreamTracerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddSourceConnection", AddSourceConnection);
	Nan::SetPrototypeMethod(tpl, "addSourceConnection", AddSourceConnection);

	Nan::SetPrototypeMethod(tpl, "EnableParticleWritingOff", EnableParticleWritingOff);
	Nan::SetPrototypeMethod(tpl, "enableParticleWritingOff", EnableParticleWritingOff);

	Nan::SetPrototypeMethod(tpl, "EnableParticleWritingOn", EnableParticleWritingOn);
	Nan::SetPrototypeMethod(tpl, "enableParticleWritingOn", EnableParticleWritingOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEnableParticleWriting", GetEnableParticleWriting);
	Nan::SetPrototypeMethod(tpl, "getEnableParticleWriting", GetEnableParticleWriting);

	Nan::SetPrototypeMethod(tpl, "GetForceReinjectionEveryNSteps", GetForceReinjectionEveryNSteps);
	Nan::SetPrototypeMethod(tpl, "getForceReinjectionEveryNSteps", GetForceReinjectionEveryNSteps);

	Nan::SetPrototypeMethod(tpl, "GetIgnorePipelineTime", GetIgnorePipelineTime);
	Nan::SetPrototypeMethod(tpl, "getIgnorePipelineTime", GetIgnorePipelineTime);

	Nan::SetPrototypeMethod(tpl, "GetParticleFileName", GetParticleFileName);
	Nan::SetPrototypeMethod(tpl, "getParticleFileName", GetParticleFileName);

	Nan::SetPrototypeMethod(tpl, "GetParticleWriter", GetParticleWriter);
	Nan::SetPrototypeMethod(tpl, "getParticleWriter", GetParticleWriter);

	Nan::SetPrototypeMethod(tpl, "GetStaticMesh", GetStaticMesh);
	Nan::SetPrototypeMethod(tpl, "getStaticMesh", GetStaticMesh);

	Nan::SetPrototypeMethod(tpl, "GetStaticSeeds", GetStaticSeeds);
	Nan::SetPrototypeMethod(tpl, "getStaticSeeds", GetStaticSeeds);

	Nan::SetPrototypeMethod(tpl, "GetTerminationTime", GetTerminationTime);
	Nan::SetPrototypeMethod(tpl, "getTerminationTime", GetTerminationTime);

	Nan::SetPrototypeMethod(tpl, "GetTerminationTimeUnit", GetTerminationTimeUnit);
	Nan::SetPrototypeMethod(tpl, "getTerminationTimeUnit", GetTerminationTimeUnit);

	Nan::SetPrototypeMethod(tpl, "GetTimeStepResolution", GetTimeStepResolution);
	Nan::SetPrototypeMethod(tpl, "getTimeStepResolution", GetTimeStepResolution);

	Nan::SetPrototypeMethod(tpl, "IgnorePipelineTimeOff", IgnorePipelineTimeOff);
	Nan::SetPrototypeMethod(tpl, "ignorePipelineTimeOff", IgnorePipelineTimeOff);

	Nan::SetPrototypeMethod(tpl, "IgnorePipelineTimeOn", IgnorePipelineTimeOn);
	Nan::SetPrototypeMethod(tpl, "ignorePipelineTimeOn", IgnorePipelineTimeOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllSources", RemoveAllSources);
	Nan::SetPrototypeMethod(tpl, "removeAllSources", RemoveAllSources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnableParticleWriting", SetEnableParticleWriting);
	Nan::SetPrototypeMethod(tpl, "setEnableParticleWriting", SetEnableParticleWriting);

	Nan::SetPrototypeMethod(tpl, "SetForceReinjectionEveryNSteps", SetForceReinjectionEveryNSteps);
	Nan::SetPrototypeMethod(tpl, "setForceReinjectionEveryNSteps", SetForceReinjectionEveryNSteps);

	Nan::SetPrototypeMethod(tpl, "SetIgnorePipelineTime", SetIgnorePipelineTime);
	Nan::SetPrototypeMethod(tpl, "setIgnorePipelineTime", SetIgnorePipelineTime);

	Nan::SetPrototypeMethod(tpl, "SetParticleFileName", SetParticleFileName);
	Nan::SetPrototypeMethod(tpl, "setParticleFileName", SetParticleFileName);

	Nan::SetPrototypeMethod(tpl, "SetParticleWriter", SetParticleWriter);
	Nan::SetPrototypeMethod(tpl, "setParticleWriter", SetParticleWriter);

	Nan::SetPrototypeMethod(tpl, "SetStaticMesh", SetStaticMesh);
	Nan::SetPrototypeMethod(tpl, "setStaticMesh", SetStaticMesh);

	Nan::SetPrototypeMethod(tpl, "SetStaticSeeds", SetStaticSeeds);
	Nan::SetPrototypeMethod(tpl, "setStaticSeeds", SetStaticSeeds);

	Nan::SetPrototypeMethod(tpl, "SetTerminationTime", SetTerminationTime);
	Nan::SetPrototypeMethod(tpl, "setTerminationTime", SetTerminationTime);

	Nan::SetPrototypeMethod(tpl, "SetTerminationTimeUnit", SetTerminationTimeUnit);
	Nan::SetPrototypeMethod(tpl, "setTerminationTimeUnit", SetTerminationTimeUnit);

	Nan::SetPrototypeMethod(tpl, "SetTerminationTimeUnitToStepUnit", SetTerminationTimeUnitToStepUnit);
	Nan::SetPrototypeMethod(tpl, "setTerminationTimeUnitToStepUnit", SetTerminationTimeUnitToStepUnit);

	Nan::SetPrototypeMethod(tpl, "SetTerminationTimeUnitToTimeUnit", SetTerminationTimeUnitToTimeUnit);
	Nan::SetPrototypeMethod(tpl, "setTerminationTimeUnitToTimeUnit", SetTerminationTimeUnitToTimeUnit);

	Nan::SetPrototypeMethod(tpl, "SetTimeStepResolution", SetTimeStepResolution);
	Nan::SetPrototypeMethod(tpl, "setTimeStepResolution", SetTimeStepResolution);

	Nan::SetPrototypeMethod(tpl, "StaticMeshOff", StaticMeshOff);
	Nan::SetPrototypeMethod(tpl, "staticMeshOff", StaticMeshOff);

	Nan::SetPrototypeMethod(tpl, "StaticMeshOn", StaticMeshOn);
	Nan::SetPrototypeMethod(tpl, "staticMeshOn", StaticMeshOn);

	Nan::SetPrototypeMethod(tpl, "StaticSeedsOff", StaticSeedsOff);
	Nan::SetPrototypeMethod(tpl, "staticSeedsOff", StaticSeedsOff);

	Nan::SetPrototypeMethod(tpl, "StaticSeedsOn", StaticSeedsOn);
	Nan::SetPrototypeMethod(tpl, "staticSeedsOn", StaticSeedsOn);

	ptpl.Reset( tpl );
}

void VtkTemporalStreamTracerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTemporalStreamTracer> native = vtkSmartPointer<vtkTemporalStreamTracer>::New();
		VtkTemporalStreamTracerWrap* obj = new VtkTemporalStreamTracerWrap(native);
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

void VtkTemporalStreamTracerWrap::AddSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddSourceConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStreamTracerWrap::EnableParticleWritingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableParticleWritingOff();
}

void VtkTemporalStreamTracerWrap::EnableParticleWritingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableParticleWritingOn();
}

void VtkTemporalStreamTracerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTemporalStreamTracerWrap::GetEnableParticleWriting(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnableParticleWriting();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalStreamTracerWrap::GetForceReinjectionEveryNSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetForceReinjectionEveryNSteps();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalStreamTracerWrap::GetIgnorePipelineTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIgnorePipelineTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalStreamTracerWrap::GetParticleFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParticleFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTemporalStreamTracerWrap::GetParticleWriter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	vtkAbstractParticleWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParticleWriter();
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

void VtkTemporalStreamTracerWrap::GetStaticMesh(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStaticMesh();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalStreamTracerWrap::GetStaticSeeds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStaticSeeds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalStreamTracerWrap::GetTerminationTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTerminationTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalStreamTracerWrap::GetTerminationTimeUnit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTerminationTimeUnit();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalStreamTracerWrap::GetTimeStepResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeStepResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalStreamTracerWrap::IgnorePipelineTimeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IgnorePipelineTimeOff();
}

void VtkTemporalStreamTracerWrap::IgnorePipelineTimeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IgnorePipelineTimeOn();
}

void VtkTemporalStreamTracerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
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

void VtkTemporalStreamTracerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	vtkTemporalStreamTracer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTemporalStreamTracerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTemporalStreamTracerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTemporalStreamTracerWrap *w = new VtkTemporalStreamTracerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTemporalStreamTracerWrap::RemoveAllSources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllSources();
}

void VtkTemporalStreamTracerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTemporalStreamTracer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTemporalStreamTracerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTemporalStreamTracerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTemporalStreamTracerWrap *w = new VtkTemporalStreamTracerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStreamTracerWrap::SetEnableParticleWriting(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnableParticleWriting(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStreamTracerWrap::SetForceReinjectionEveryNSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetForceReinjectionEveryNSteps(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStreamTracerWrap::SetIgnorePipelineTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIgnorePipelineTime(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStreamTracerWrap::SetParticleFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParticleFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStreamTracerWrap::SetParticleWriter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractParticleWriterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractParticleWriterWrap *a0 = ObjectWrap::Unwrap<VtkAbstractParticleWriterWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParticleWriter(
			(vtkAbstractParticleWriter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStreamTracerWrap::SetStaticMesh(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStaticMesh(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStreamTracerWrap::SetStaticSeeds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStaticSeeds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStreamTracerWrap::SetTerminationTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTerminationTime(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStreamTracerWrap::SetTerminationTimeUnit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTerminationTimeUnit(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStreamTracerWrap::SetTerminationTimeUnitToStepUnit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTerminationTimeUnitToStepUnit();
}

void VtkTemporalStreamTracerWrap::SetTerminationTimeUnitToTimeUnit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTerminationTimeUnitToTimeUnit();
}

void VtkTemporalStreamTracerWrap::SetTimeStepResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTimeStepResolution(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalStreamTracerWrap::StaticMeshOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StaticMeshOff();
}

void VtkTemporalStreamTracerWrap::StaticMeshOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StaticMeshOn();
}

void VtkTemporalStreamTracerWrap::StaticSeedsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StaticSeedsOff();
}

void VtkTemporalStreamTracerWrap::StaticSeedsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalStreamTracerWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalStreamTracerWrap>(info.Holder());
	vtkTemporalStreamTracer *native = (vtkTemporalStreamTracer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StaticSeedsOn();
}

