/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkGradientFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGradientFilterWrap::ptpl;

VtkGradientFilterWrap::VtkGradientFilterWrap()
{ }

VtkGradientFilterWrap::VtkGradientFilterWrap(vtkSmartPointer<vtkGradientFilter> _native)
{ native = _native; }

VtkGradientFilterWrap::~VtkGradientFilterWrap()
{ }

void VtkGradientFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGradientFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GradientFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkGradientFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGradientFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGradientFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeQCriterionOff", ComputeQCriterionOff);
	Nan::SetPrototypeMethod(tpl, "computeQCriterionOff", ComputeQCriterionOff);

	Nan::SetPrototypeMethod(tpl, "ComputeQCriterionOn", ComputeQCriterionOn);
	Nan::SetPrototypeMethod(tpl, "computeQCriterionOn", ComputeQCriterionOn);

	Nan::SetPrototypeMethod(tpl, "ComputeVorticityOff", ComputeVorticityOff);
	Nan::SetPrototypeMethod(tpl, "computeVorticityOff", ComputeVorticityOff);

	Nan::SetPrototypeMethod(tpl, "ComputeVorticityOn", ComputeVorticityOn);
	Nan::SetPrototypeMethod(tpl, "computeVorticityOn", ComputeVorticityOn);

	Nan::SetPrototypeMethod(tpl, "FasterApproximationOff", FasterApproximationOff);
	Nan::SetPrototypeMethod(tpl, "fasterApproximationOff", FasterApproximationOff);

	Nan::SetPrototypeMethod(tpl, "FasterApproximationOn", FasterApproximationOn);
	Nan::SetPrototypeMethod(tpl, "fasterApproximationOn", FasterApproximationOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComputeQCriterion", GetComputeQCriterion);
	Nan::SetPrototypeMethod(tpl, "getComputeQCriterion", GetComputeQCriterion);

	Nan::SetPrototypeMethod(tpl, "GetComputeVorticity", GetComputeVorticity);
	Nan::SetPrototypeMethod(tpl, "getComputeVorticity", GetComputeVorticity);

	Nan::SetPrototypeMethod(tpl, "GetFasterApproximation", GetFasterApproximation);
	Nan::SetPrototypeMethod(tpl, "getFasterApproximation", GetFasterApproximation);

	Nan::SetPrototypeMethod(tpl, "GetQCriterionArrayName", GetQCriterionArrayName);
	Nan::SetPrototypeMethod(tpl, "getQCriterionArrayName", GetQCriterionArrayName);

	Nan::SetPrototypeMethod(tpl, "GetResultArrayName", GetResultArrayName);
	Nan::SetPrototypeMethod(tpl, "getResultArrayName", GetResultArrayName);

	Nan::SetPrototypeMethod(tpl, "GetVorticityArrayName", GetVorticityArrayName);
	Nan::SetPrototypeMethod(tpl, "getVorticityArrayName", GetVorticityArrayName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetComputeQCriterion", SetComputeQCriterion);
	Nan::SetPrototypeMethod(tpl, "setComputeQCriterion", SetComputeQCriterion);

	Nan::SetPrototypeMethod(tpl, "SetComputeVorticity", SetComputeVorticity);
	Nan::SetPrototypeMethod(tpl, "setComputeVorticity", SetComputeVorticity);

	Nan::SetPrototypeMethod(tpl, "SetFasterApproximation", SetFasterApproximation);
	Nan::SetPrototypeMethod(tpl, "setFasterApproximation", SetFasterApproximation);

	Nan::SetPrototypeMethod(tpl, "SetInputScalars", SetInputScalars);
	Nan::SetPrototypeMethod(tpl, "setInputScalars", SetInputScalars);

	Nan::SetPrototypeMethod(tpl, "SetQCriterionArrayName", SetQCriterionArrayName);
	Nan::SetPrototypeMethod(tpl, "setQCriterionArrayName", SetQCriterionArrayName);

	Nan::SetPrototypeMethod(tpl, "SetResultArrayName", SetResultArrayName);
	Nan::SetPrototypeMethod(tpl, "setResultArrayName", SetResultArrayName);

	Nan::SetPrototypeMethod(tpl, "SetVorticityArrayName", SetVorticityArrayName);
	Nan::SetPrototypeMethod(tpl, "setVorticityArrayName", SetVorticityArrayName);

	ptpl.Reset( tpl );
}

void VtkGradientFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGradientFilter> native = vtkSmartPointer<vtkGradientFilter>::New();
		VtkGradientFilterWrap* obj = new VtkGradientFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGradientFilterWrap::ComputeQCriterionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeQCriterionOff();
}

void VtkGradientFilterWrap::ComputeQCriterionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeQCriterionOn();
}

void VtkGradientFilterWrap::ComputeVorticityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeVorticityOff();
}

void VtkGradientFilterWrap::ComputeVorticityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeVorticityOn();
}

void VtkGradientFilterWrap::FasterApproximationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FasterApproximationOff();
}

void VtkGradientFilterWrap::FasterApproximationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FasterApproximationOn();
}

void VtkGradientFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGradientFilterWrap::GetComputeQCriterion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeQCriterion();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGradientFilterWrap::GetComputeVorticity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeVorticity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGradientFilterWrap::GetFasterApproximation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFasterApproximation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGradientFilterWrap::GetQCriterionArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQCriterionArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGradientFilterWrap::GetResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResultArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGradientFilterWrap::GetVorticityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVorticityArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGradientFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
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

void VtkGradientFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	vtkGradientFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGradientFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGradientFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGradientFilterWrap *w = new VtkGradientFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGradientFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGradientFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGradientFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGradientFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGradientFilterWrap *w = new VtkGradientFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGradientFilterWrap::SetComputeQCriterion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeQCriterion(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGradientFilterWrap::SetComputeVorticity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeVorticity(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGradientFilterWrap::SetFasterApproximation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFasterApproximation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGradientFilterWrap::SetInputScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInputScalars(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInputScalars(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGradientFilterWrap::SetQCriterionArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetQCriterionArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGradientFilterWrap::SetResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResultArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGradientFilterWrap::SetVorticityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGradientFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGradientFilterWrap>(info.Holder());
	vtkGradientFilter *native = (vtkGradientFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVorticityArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

