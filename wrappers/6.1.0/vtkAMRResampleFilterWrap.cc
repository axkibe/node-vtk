/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkAMRResampleFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAMRResampleFilterWrap::ptpl;

VtkAMRResampleFilterWrap::VtkAMRResampleFilterWrap()
{ }

VtkAMRResampleFilterWrap::VtkAMRResampleFilterWrap(vtkSmartPointer<vtkAMRResampleFilter> _native)
{ native = _native; }

VtkAMRResampleFilterWrap::~VtkAMRResampleFilterWrap()
{ }

void VtkAMRResampleFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAMRResampleFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AMRResampleFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkAMRResampleFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAMRResampleFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAMRResampleFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FillInputPortInformation", FillInputPortInformation);
	Nan::SetPrototypeMethod(tpl, "fillInputPortInformation", FillInputPortInformation);

	Nan::SetPrototypeMethod(tpl, "FillOutputPortInformation", FillOutputPortInformation);
	Nan::SetPrototypeMethod(tpl, "fillOutputPortInformation", FillOutputPortInformation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "GetDemandDrivenMode", GetDemandDrivenMode);
	Nan::SetPrototypeMethod(tpl, "getDemandDrivenMode", GetDemandDrivenMode);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPartitions", GetNumberOfPartitions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPartitions", GetNumberOfPartitions);

	Nan::SetPrototypeMethod(tpl, "GetTransferToNodes", GetTransferToNodes);
	Nan::SetPrototypeMethod(tpl, "getTransferToNodes", GetTransferToNodes);

	Nan::SetPrototypeMethod(tpl, "GetUseBiasVector", GetUseBiasVector);
	Nan::SetPrototypeMethod(tpl, "getUseBiasVector", GetUseBiasVector);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBiasVector", SetBiasVector);
	Nan::SetPrototypeMethod(tpl, "setBiasVector", SetBiasVector);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

	Nan::SetPrototypeMethod(tpl, "SetDemandDrivenMode", SetDemandDrivenMode);
	Nan::SetPrototypeMethod(tpl, "setDemandDrivenMode", SetDemandDrivenMode);

	Nan::SetPrototypeMethod(tpl, "SetMax", SetMax);
	Nan::SetPrototypeMethod(tpl, "setMax", SetMax);

	Nan::SetPrototypeMethod(tpl, "SetMin", SetMin);
	Nan::SetPrototypeMethod(tpl, "setMin", SetMin);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfPartitions", SetNumberOfPartitions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfPartitions", SetNumberOfPartitions);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfSamples", SetNumberOfSamples);
	Nan::SetPrototypeMethod(tpl, "setNumberOfSamples", SetNumberOfSamples);

	Nan::SetPrototypeMethod(tpl, "SetTransferToNodes", SetTransferToNodes);
	Nan::SetPrototypeMethod(tpl, "setTransferToNodes", SetTransferToNodes);

	Nan::SetPrototypeMethod(tpl, "SetUseBiasVector", SetUseBiasVector);
	Nan::SetPrototypeMethod(tpl, "setUseBiasVector", SetUseBiasVector);

	ptpl.Reset( tpl );
}

void VtkAMRResampleFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAMRResampleFilter> native = vtkSmartPointer<vtkAMRResampleFilter>::New();
		VtkAMRResampleFilterWrap* obj = new VtkAMRResampleFilterWrap(native);
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

void VtkAMRResampleFilterWrap::FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FillInputPortInformation(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRResampleFilterWrap::FillOutputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FillOutputPortInformation(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRResampleFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAMRResampleFilterWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
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

void VtkAMRResampleFilterWrap::GetDemandDrivenMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDemandDrivenMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRResampleFilterWrap::GetNumberOfPartitions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPartitions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRResampleFilterWrap::GetTransferToNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransferToNodes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRResampleFilterWrap::GetUseBiasVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseBiasVector();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRResampleFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
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

void VtkAMRResampleFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	vtkAMRResampleFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAMRResampleFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAMRResampleFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMRResampleFilterWrap *w = new VtkAMRResampleFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRResampleFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAMRResampleFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAMRResampleFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAMRResampleFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMRResampleFilterWrap *w = new VtkAMRResampleFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRResampleFilterWrap::SetBiasVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBiasVector(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBiasVector(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetBiasVector(
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

void VtkAMRResampleFilterWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
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

void VtkAMRResampleFilterWrap::SetDemandDrivenMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDemandDrivenMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRResampleFilterWrap::SetMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMax(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMax(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetMax(
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

void VtkAMRResampleFilterWrap::SetMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMin(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMin(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetMin(
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

void VtkAMRResampleFilterWrap::SetNumberOfPartitions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfPartitions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRResampleFilterWrap::SetNumberOfSamples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfSamples(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfSamples(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetNumberOfSamples(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRResampleFilterWrap::SetTransferToNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransferToNodes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRResampleFilterWrap::SetUseBiasVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAMRResampleFilterWrap>(info.Holder());
	vtkAMRResampleFilter *native = (vtkAMRResampleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseBiasVector(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

