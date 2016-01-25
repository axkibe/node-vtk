/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkProbePolyhedronWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkAlgorithmOutputWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkProbePolyhedronWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkProbePolyhedronWrap::ptpl;

VtkProbePolyhedronWrap::VtkProbePolyhedronWrap()
{ }

VtkProbePolyhedronWrap::VtkProbePolyhedronWrap(vtkSmartPointer<vtkProbePolyhedron> _native)
{ native = _native; }

VtkProbePolyhedronWrap::~VtkProbePolyhedronWrap()
{ }

void VtkProbePolyhedronWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkProbePolyhedronWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkProbePolyhedron").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ProbePolyhedron").ToLocalChecked(),tpl->GetFunction());
}

void VtkProbePolyhedronWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetProbeCellData", GetProbeCellData);
	Nan::SetPrototypeMethod(tpl, "getProbeCellData", GetProbeCellData);

	Nan::SetPrototypeMethod(tpl, "GetProbePointData", GetProbePointData);
	Nan::SetPrototypeMethod(tpl, "getProbePointData", GetProbePointData);

	Nan::SetPrototypeMethod(tpl, "GetSource", GetSource);
	Nan::SetPrototypeMethod(tpl, "getSource", GetSource);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

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
		VtkProbePolyhedronWrap* obj = new VtkProbePolyhedronWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkProbePolyhedronWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProbePolyhedronWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbePolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkProbePolyhedronWrap>(info.Holder());
	vtkProbePolyhedron *native = (vtkProbePolyhedron *)wrapper->native.GetPointer();
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkProbePolyhedronWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProbePolyhedronWrap *w = new VtkProbePolyhedronWrap();
	w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProbePolyhedron * r;
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
			Nan::New<v8::Function>(VtkProbePolyhedronWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProbePolyhedronWrap *w = new VtkProbePolyhedronWrap();
		w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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

