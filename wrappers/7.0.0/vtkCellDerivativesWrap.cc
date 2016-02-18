/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "vtkCellDerivativesWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCellDerivativesWrap::ptpl;

VtkCellDerivativesWrap::VtkCellDerivativesWrap()
{ }

VtkCellDerivativesWrap::VtkCellDerivativesWrap(vtkSmartPointer<vtkCellDerivatives> _native)
{ native = _native; }

VtkCellDerivativesWrap::~VtkCellDerivativesWrap()
{ }

void VtkCellDerivativesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCellDerivatives").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CellDerivatives").ToLocalChecked(), ConstructorGetter);
}

void VtkCellDerivativesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCellDerivativesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCellDerivativesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetTensorMode", GetTensorMode);
	Nan::SetPrototypeMethod(tpl, "getTensorMode", GetTensorMode);

	Nan::SetPrototypeMethod(tpl, "GetTensorModeAsString", GetTensorModeAsString);
	Nan::SetPrototypeMethod(tpl, "getTensorModeAsString", GetTensorModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetVectorMode", GetVectorMode);
	Nan::SetPrototypeMethod(tpl, "getVectorMode", GetVectorMode);

	Nan::SetPrototypeMethod(tpl, "GetVectorModeAsString", GetVectorModeAsString);
	Nan::SetPrototypeMethod(tpl, "getVectorModeAsString", GetVectorModeAsString);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTensorMode", SetTensorMode);
	Nan::SetPrototypeMethod(tpl, "setTensorMode", SetTensorMode);

	Nan::SetPrototypeMethod(tpl, "SetTensorModeToComputeGradient", SetTensorModeToComputeGradient);
	Nan::SetPrototypeMethod(tpl, "setTensorModeToComputeGradient", SetTensorModeToComputeGradient);

	Nan::SetPrototypeMethod(tpl, "SetTensorModeToComputeStrain", SetTensorModeToComputeStrain);
	Nan::SetPrototypeMethod(tpl, "setTensorModeToComputeStrain", SetTensorModeToComputeStrain);

	Nan::SetPrototypeMethod(tpl, "SetTensorModeToPassTensors", SetTensorModeToPassTensors);
	Nan::SetPrototypeMethod(tpl, "setTensorModeToPassTensors", SetTensorModeToPassTensors);

	Nan::SetPrototypeMethod(tpl, "SetVectorMode", SetVectorMode);
	Nan::SetPrototypeMethod(tpl, "setVectorMode", SetVectorMode);

	Nan::SetPrototypeMethod(tpl, "SetVectorModeToComputeGradient", SetVectorModeToComputeGradient);
	Nan::SetPrototypeMethod(tpl, "setVectorModeToComputeGradient", SetVectorModeToComputeGradient);

	Nan::SetPrototypeMethod(tpl, "SetVectorModeToComputeVorticity", SetVectorModeToComputeVorticity);
	Nan::SetPrototypeMethod(tpl, "setVectorModeToComputeVorticity", SetVectorModeToComputeVorticity);

	Nan::SetPrototypeMethod(tpl, "SetVectorModeToPassVectors", SetVectorModeToPassVectors);
	Nan::SetPrototypeMethod(tpl, "setVectorModeToPassVectors", SetVectorModeToPassVectors);

#ifdef VTK_NODE_PLUS_VTKCELLDERIVATIVESWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCELLDERIVATIVESWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCellDerivativesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellDerivatives> native = vtkSmartPointer<vtkCellDerivatives>::New();
		VtkCellDerivativesWrap* obj = new VtkCellDerivativesWrap(native);
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

void VtkCellDerivativesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCellDerivativesWrap::GetTensorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTensorMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellDerivativesWrap::GetTensorModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTensorModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCellDerivativesWrap::GetVectorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellDerivativesWrap::GetVectorModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCellDerivativesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
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

void VtkCellDerivativesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
	vtkCellDerivatives * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCellDerivativesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellDerivativesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellDerivativesWrap *w = new VtkCellDerivativesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellDerivativesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCellDerivatives * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkCellDerivativesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellDerivativesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellDerivativesWrap *w = new VtkCellDerivativesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellDerivativesWrap::SetTensorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTensorMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellDerivativesWrap::SetTensorModeToComputeGradient(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTensorModeToComputeGradient();
}

void VtkCellDerivativesWrap::SetTensorModeToComputeStrain(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTensorModeToComputeStrain();
}

void VtkCellDerivativesWrap::SetTensorModeToPassTensors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTensorModeToPassTensors();
}

void VtkCellDerivativesWrap::SetVectorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVectorMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellDerivativesWrap::SetVectorModeToComputeGradient(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVectorModeToComputeGradient();
}

void VtkCellDerivativesWrap::SetVectorModeToComputeVorticity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVectorModeToComputeVorticity();
}

void VtkCellDerivativesWrap::SetVectorModeToPassVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDerivativesWrap *wrapper = ObjectWrap::Unwrap<VtkCellDerivativesWrap>(info.Holder());
	vtkCellDerivatives *native = (vtkCellDerivatives *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVectorModeToPassVectors();
}

