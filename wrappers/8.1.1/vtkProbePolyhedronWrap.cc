/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "vtkProbePolyhedronWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProbePolyhedronWrap::ptpl;

VtkProbePolyhedronWrap::VtkProbePolyhedronWrap()
{ }

VtkProbePolyhedronWrap::VtkProbePolyhedronWrap(vtkSmartPointer<vtkProbePolyhedron> _native)
{ native = _native; }

VtkProbePolyhedronWrap::~VtkProbePolyhedronWrap()
{ }

void VtkProbePolyhedronWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProbePolyhedron").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProbePolyhedron").ToLocalChecked(), ConstructorGetter);
}

void VtkProbePolyhedronWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProbePolyhedronWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProbePolyhedronWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetProbeCellData", GetProbeCellData);
	Nan::SetPrototypeMethod(tpl, "getProbeCellData", GetProbeCellData);

	Nan::SetPrototypeMethod(tpl, "GetProbePointData", GetProbePointData);
	Nan::SetPrototypeMethod(tpl, "getProbePointData", GetProbePointData);

	Nan::SetPrototypeMethod(tpl, "GetSource", GetSource);
	Nan::SetPrototypeMethod(tpl, "getSource", GetSource);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ProbeCellDataOff", ProbeCellDataOff);
	Nan::SetPrototypeMethod(tpl, "probeCellDataOff", ProbeCellDataOff);

	Nan::SetPrototypeMethod(tpl, "ProbeCellDataOn", ProbeCellDataOn);
	Nan::SetPrototypeMethod(tpl, "probeCellDataOn", ProbeCellDataOn);

	Nan::SetPrototypeMethod(tpl, "ProbePointDataOff", ProbePointDataOff);
	Nan::SetPrototypeMethod(tpl, "probePointDataOff", ProbePointDataOff);

	Nan::SetPrototypeMethod(tpl, "ProbePointDataOn", ProbePointDataOn);
	Nan::SetPrototypeMethod(tpl, "probePointDataOn", ProbePointDataOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetProbeCellData", SetProbeCellData);
	Nan::SetPrototypeMethod(tpl, "setProbeCellData", SetProbeCellData);

	Nan::SetPrototypeMethod(tpl, "SetProbePointData", SetProbePointData);
	Nan::SetPrototypeMethod(tpl, "setProbePointData", SetProbePointData);

	Nan::SetPrototypeMethod(tpl, "SetSourceConnection", SetSourceConnection);
	Nan::SetPrototypeMethod(tpl, "setSourceConnection", SetSourceConnection);

	Nan::SetPrototypeMethod(tpl, "SetSourceData", SetSourceData);
	Nan::SetPrototypeMethod(tpl, "setSourceData", SetSourceData);

#ifdef VTK_NODE_PLUS_VTKPROBEPOLYHEDRONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPROBEPOLYHEDRONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkProbePolyhedronWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProbePolyhedron> native = vtkSmartPointer<vtkProbePolyhedron>::New();
		VtkProbePolyhedronWrap* obj = new VtkProbePolyhedronWrap(native);
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

void VtkProbePolyhedronWrap::GetProbeCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProbeCellData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProbePolyhedronWrap::GetProbePointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProbePointData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProbePolyhedronWrap::GetSource(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSource();
	VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProbePolyhedronWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
	vtkProbePolyhedron * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkProbePolyhedronWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProbePolyhedronWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProbePolyhedronWrap *w = new VtkProbePolyhedronWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProbePolyhedronWrap::ProbeCellDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProbeCellDataOff();
}

void VtkProbePolyhedronWrap::ProbeCellDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProbeCellDataOn();
}

void VtkProbePolyhedronWrap::ProbePointDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProbePointDataOff();
}

void VtkProbePolyhedronWrap::ProbePointDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProbePointDataOn();
}

void VtkProbePolyhedronWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkProbePolyhedron * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkProbePolyhedronWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProbePolyhedronWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProbePolyhedronWrap *w = new VtkProbePolyhedronWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProbePolyhedronWrap::SetProbeCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProbeCellData(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProbePolyhedronWrap::SetProbePointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProbePointData(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProbePolyhedronWrap::SetSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProbePolyhedronWrap::SetSourceData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

