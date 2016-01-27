/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkProbeFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkIdTypeArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProbeFilterWrap::ptpl;

VtkProbeFilterWrap::VtkProbeFilterWrap()
{ }

VtkProbeFilterWrap::VtkProbeFilterWrap(vtkSmartPointer<vtkProbeFilter> _native)
{ native = _native; }

VtkProbeFilterWrap::~VtkProbeFilterWrap()
{ }

void VtkProbeFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProbeFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProbeFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkProbeFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProbeFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProbeFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeToleranceOff", ComputeToleranceOff);
	Nan::SetPrototypeMethod(tpl, "computeToleranceOff", ComputeToleranceOff);

	Nan::SetPrototypeMethod(tpl, "ComputeToleranceOn", ComputeToleranceOn);
	Nan::SetPrototypeMethod(tpl, "computeToleranceOn", ComputeToleranceOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPassCellArrays", GetPassCellArrays);
	Nan::SetPrototypeMethod(tpl, "getPassCellArrays", GetPassCellArrays);

	Nan::SetPrototypeMethod(tpl, "GetPassFieldArrays", GetPassFieldArrays);
	Nan::SetPrototypeMethod(tpl, "getPassFieldArrays", GetPassFieldArrays);

	Nan::SetPrototypeMethod(tpl, "GetPassPointArrays", GetPassPointArrays);
	Nan::SetPrototypeMethod(tpl, "getPassPointArrays", GetPassPointArrays);

	Nan::SetPrototypeMethod(tpl, "GetSource", GetSource);
	Nan::SetPrototypeMethod(tpl, "getSource", GetSource);

	Nan::SetPrototypeMethod(tpl, "GetSpatialMatch", GetSpatialMatch);
	Nan::SetPrototypeMethod(tpl, "getSpatialMatch", GetSpatialMatch);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetValidPointMaskArrayName", GetValidPointMaskArrayName);
	Nan::SetPrototypeMethod(tpl, "getValidPointMaskArrayName", GetValidPointMaskArrayName);

	Nan::SetPrototypeMethod(tpl, "GetValidPoints", GetValidPoints);
	Nan::SetPrototypeMethod(tpl, "getValidPoints", GetValidPoints);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassCellArraysOff", PassCellArraysOff);
	Nan::SetPrototypeMethod(tpl, "passCellArraysOff", PassCellArraysOff);

	Nan::SetPrototypeMethod(tpl, "PassCellArraysOn", PassCellArraysOn);
	Nan::SetPrototypeMethod(tpl, "passCellArraysOn", PassCellArraysOn);

	Nan::SetPrototypeMethod(tpl, "PassFieldArraysOff", PassFieldArraysOff);
	Nan::SetPrototypeMethod(tpl, "passFieldArraysOff", PassFieldArraysOff);

	Nan::SetPrototypeMethod(tpl, "PassFieldArraysOn", PassFieldArraysOn);
	Nan::SetPrototypeMethod(tpl, "passFieldArraysOn", PassFieldArraysOn);

	Nan::SetPrototypeMethod(tpl, "PassPointArraysOff", PassPointArraysOff);
	Nan::SetPrototypeMethod(tpl, "passPointArraysOff", PassPointArraysOff);

	Nan::SetPrototypeMethod(tpl, "PassPointArraysOn", PassPointArraysOn);
	Nan::SetPrototypeMethod(tpl, "passPointArraysOn", PassPointArraysOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPassCellArrays", SetPassCellArrays);
	Nan::SetPrototypeMethod(tpl, "setPassCellArrays", SetPassCellArrays);

	Nan::SetPrototypeMethod(tpl, "SetPassFieldArrays", SetPassFieldArrays);
	Nan::SetPrototypeMethod(tpl, "setPassFieldArrays", SetPassFieldArrays);

	Nan::SetPrototypeMethod(tpl, "SetPassPointArrays", SetPassPointArrays);
	Nan::SetPrototypeMethod(tpl, "setPassPointArrays", SetPassPointArrays);

	Nan::SetPrototypeMethod(tpl, "SetSourceConnection", SetSourceConnection);
	Nan::SetPrototypeMethod(tpl, "setSourceConnection", SetSourceConnection);

	Nan::SetPrototypeMethod(tpl, "SetSourceData", SetSourceData);
	Nan::SetPrototypeMethod(tpl, "setSourceData", SetSourceData);

	Nan::SetPrototypeMethod(tpl, "SetSpatialMatch", SetSpatialMatch);
	Nan::SetPrototypeMethod(tpl, "setSpatialMatch", SetSpatialMatch);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	Nan::SetPrototypeMethod(tpl, "SetValidPointMaskArrayName", SetValidPointMaskArrayName);
	Nan::SetPrototypeMethod(tpl, "setValidPointMaskArrayName", SetValidPointMaskArrayName);

	Nan::SetPrototypeMethod(tpl, "SpatialMatchOff", SpatialMatchOff);
	Nan::SetPrototypeMethod(tpl, "spatialMatchOff", SpatialMatchOff);

	Nan::SetPrototypeMethod(tpl, "SpatialMatchOn", SpatialMatchOn);
	Nan::SetPrototypeMethod(tpl, "spatialMatchOn", SpatialMatchOn);

	ptpl.Reset( tpl );
}

void VtkProbeFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProbeFilter> native = vtkSmartPointer<vtkProbeFilter>::New();
		VtkProbeFilterWrap* obj = new VtkProbeFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkProbeFilterWrap::ComputeToleranceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeToleranceOff();
}

void VtkProbeFilterWrap::ComputeToleranceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeToleranceOn();
}

void VtkProbeFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProbeFilterWrap::GetPassCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassCellArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProbeFilterWrap::GetPassFieldArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassFieldArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProbeFilterWrap::GetPassPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassPointArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProbeFilterWrap::GetSource(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSource();
		VtkDataObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProbeFilterWrap::GetSpatialMatch(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSpatialMatch();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProbeFilterWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProbeFilterWrap::GetValidPointMaskArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValidPointMaskArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProbeFilterWrap::GetValidPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValidPoints();
		VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProbeFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
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

void VtkProbeFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	vtkProbeFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkProbeFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProbeFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProbeFilterWrap *w = new VtkProbeFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProbeFilterWrap::PassCellArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassCellArraysOff();
}

void VtkProbeFilterWrap::PassCellArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassCellArraysOn();
}

void VtkProbeFilterWrap::PassFieldArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassFieldArraysOff();
}

void VtkProbeFilterWrap::PassFieldArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassFieldArraysOn();
}

void VtkProbeFilterWrap::PassPointArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassPointArraysOff();
}

void VtkProbeFilterWrap::PassPointArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassPointArraysOn();
}

void VtkProbeFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProbeFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkProbeFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProbeFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProbeFilterWrap *w = new VtkProbeFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProbeFilterWrap::SetPassCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassCellArrays(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProbeFilterWrap::SetPassFieldArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassFieldArrays(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProbeFilterWrap::SetPassPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassPointArrays(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProbeFilterWrap::SetSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
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

void VtkProbeFilterWrap::SetSourceData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceData(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProbeFilterWrap::SetSpatialMatch(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSpatialMatch(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProbeFilterWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProbeFilterWrap::SetValidPointMaskArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetValidPointMaskArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProbeFilterWrap::SpatialMatchOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SpatialMatchOff();
}

void VtkProbeFilterWrap::SpatialMatchOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProbeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProbeFilterWrap>(info.Holder());
	vtkProbeFilter *native = (vtkProbeFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SpatialMatchOn();
}

