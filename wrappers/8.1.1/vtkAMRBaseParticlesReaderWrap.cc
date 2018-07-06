/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkAMRBaseParticlesReaderWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkMultiProcessControllerWrap.h"
#include "vtkDataArraySelectionWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAMRBaseParticlesReaderWrap::ptpl;

VtkAMRBaseParticlesReaderWrap::VtkAMRBaseParticlesReaderWrap()
{ }

VtkAMRBaseParticlesReaderWrap::VtkAMRBaseParticlesReaderWrap(vtkSmartPointer<vtkAMRBaseParticlesReader> _native)
{ native = _native; }

VtkAMRBaseParticlesReaderWrap::~VtkAMRBaseParticlesReaderWrap()
{ }

void VtkAMRBaseParticlesReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAMRBaseParticlesReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AMRBaseParticlesReader").ToLocalChecked(), ConstructorGetter);
}

void VtkAMRBaseParticlesReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAMRBaseParticlesReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAMRBaseParticlesReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FilterLocationOff", FilterLocationOff);
	Nan::SetPrototypeMethod(tpl, "filterLocationOff", FilterLocationOff);

	Nan::SetPrototypeMethod(tpl, "FilterLocationOn", FilterLocationOn);
	Nan::SetPrototypeMethod(tpl, "filterLocationOn", FilterLocationOn);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetFilterLocation", GetFilterLocation);
	Nan::SetPrototypeMethod(tpl, "getFilterLocation", GetFilterLocation);

	Nan::SetPrototypeMethod(tpl, "GetFrequency", GetFrequency);
	Nan::SetPrototypeMethod(tpl, "getFrequency", GetFrequency);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfParticleArrays", GetNumberOfParticleArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfParticleArrays", GetNumberOfParticleArrays);

	Nan::SetPrototypeMethod(tpl, "GetParticleArrayName", GetParticleArrayName);
	Nan::SetPrototypeMethod(tpl, "getParticleArrayName", GetParticleArrayName);

	Nan::SetPrototypeMethod(tpl, "GetParticleArrayStatus", GetParticleArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getParticleArrayStatus", GetParticleArrayStatus);

	Nan::SetPrototypeMethod(tpl, "GetParticleDataArraySelection", GetParticleDataArraySelection);
	Nan::SetPrototypeMethod(tpl, "getParticleDataArraySelection", GetParticleDataArraySelection);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetFilterLocation", SetFilterLocation);
	Nan::SetPrototypeMethod(tpl, "setFilterLocation", SetFilterLocation);

	Nan::SetPrototypeMethod(tpl, "SetFrequency", SetFrequency);
	Nan::SetPrototypeMethod(tpl, "setFrequency", SetFrequency);

	Nan::SetPrototypeMethod(tpl, "SetMaxLocation", SetMaxLocation);
	Nan::SetPrototypeMethod(tpl, "setMaxLocation", SetMaxLocation);

	Nan::SetPrototypeMethod(tpl, "SetMinLocation", SetMinLocation);
	Nan::SetPrototypeMethod(tpl, "setMinLocation", SetMinLocation);

	Nan::SetPrototypeMethod(tpl, "SetParticleArrayStatus", SetParticleArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setParticleArrayStatus", SetParticleArrayStatus);

#ifdef VTK_NODE_PLUS_VTKAMRBASEPARTICLESREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKAMRBASEPARTICLESREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAMRBaseParticlesReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkAMRBaseParticlesReaderWrap::FilterLocationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FilterLocationOff();
}

void VtkAMRBaseParticlesReaderWrap::FilterLocationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FilterLocationOn();
}

void VtkAMRBaseParticlesReaderWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
	VtkMultiProcessControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRBaseParticlesReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAMRBaseParticlesReaderWrap::GetFilterLocation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilterLocation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRBaseParticlesReaderWrap::GetFrequency(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrequency();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRBaseParticlesReaderWrap::GetNumberOfParticleArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfParticleArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRBaseParticlesReaderWrap::GetParticleArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetParticleArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseParticlesReaderWrap::GetParticleArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetParticleArrayStatus(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseParticlesReaderWrap::GetParticleDataArraySelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	vtkDataArraySelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParticleDataArraySelection();
	VtkDataArraySelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArraySelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArraySelectionWrap *w = new VtkDataArraySelectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRBaseParticlesReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	vtkAMRBaseParticlesReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAMRBaseParticlesReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAMRBaseParticlesReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMRBaseParticlesReaderWrap *w = new VtkAMRBaseParticlesReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRBaseParticlesReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkAMRBaseParticlesReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkAMRBaseParticlesReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAMRBaseParticlesReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMRBaseParticlesReaderWrap *w = new VtkAMRBaseParticlesReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseParticlesReaderWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMultiProcessControllerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetController(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseParticlesReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
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

void VtkAMRBaseParticlesReaderWrap::SetFilterLocation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilterLocation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseParticlesReaderWrap::SetFrequency(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFrequency(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseParticlesReaderWrap::SetMaxLocation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetMaxLocation(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseParticlesReaderWrap::SetMinLocation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetMinLocation(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRBaseParticlesReaderWrap::SetParticleArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRBaseParticlesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRBaseParticlesReaderWrap>(info.Holder());
	vtkAMRBaseParticlesReader *native = (vtkAMRBaseParticlesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetParticleArrayStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

