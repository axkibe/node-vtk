/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkResampleWithDataSetWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkResampleWithDataSetWrap::ptpl;

VtkResampleWithDataSetWrap::VtkResampleWithDataSetWrap()
{ }

VtkResampleWithDataSetWrap::VtkResampleWithDataSetWrap(vtkSmartPointer<vtkResampleWithDataSet> _native)
{ native = _native; }

VtkResampleWithDataSetWrap::~VtkResampleWithDataSetWrap()
{ }

void VtkResampleWithDataSetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkResampleWithDataSet").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ResampleWithDataSet").ToLocalChecked(), ConstructorGetter);
}

void VtkResampleWithDataSetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkResampleWithDataSetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPassInputTypeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkResampleWithDataSetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeToleranceOff", ComputeToleranceOff);
	Nan::SetPrototypeMethod(tpl, "computeToleranceOff", ComputeToleranceOff);

	Nan::SetPrototypeMethod(tpl, "ComputeToleranceOn", ComputeToleranceOn);
	Nan::SetPrototypeMethod(tpl, "computeToleranceOn", ComputeToleranceOn);

	Nan::SetPrototypeMethod(tpl, "GetCategoricalData", GetCategoricalData);
	Nan::SetPrototypeMethod(tpl, "getCategoricalData", GetCategoricalData);

	Nan::SetPrototypeMethod(tpl, "GetComputeTolerance", GetComputeTolerance);
	Nan::SetPrototypeMethod(tpl, "getComputeTolerance", GetComputeTolerance);

	Nan::SetPrototypeMethod(tpl, "GetMarkBlankPointsAndCells", GetMarkBlankPointsAndCells);
	Nan::SetPrototypeMethod(tpl, "getMarkBlankPointsAndCells", GetMarkBlankPointsAndCells);

	Nan::SetPrototypeMethod(tpl, "GetPassCellArrays", GetPassCellArrays);
	Nan::SetPrototypeMethod(tpl, "getPassCellArrays", GetPassCellArrays);

	Nan::SetPrototypeMethod(tpl, "GetPassFieldArrays", GetPassFieldArrays);
	Nan::SetPrototypeMethod(tpl, "getPassFieldArrays", GetPassFieldArrays);

	Nan::SetPrototypeMethod(tpl, "GetPassPointArrays", GetPassPointArrays);
	Nan::SetPrototypeMethod(tpl, "getPassPointArrays", GetPassPointArrays);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "MarkBlankPointsAndCellsOff", MarkBlankPointsAndCellsOff);
	Nan::SetPrototypeMethod(tpl, "markBlankPointsAndCellsOff", MarkBlankPointsAndCellsOff);

	Nan::SetPrototypeMethod(tpl, "MarkBlankPointsAndCellsOn", MarkBlankPointsAndCellsOn);
	Nan::SetPrototypeMethod(tpl, "markBlankPointsAndCellsOn", MarkBlankPointsAndCellsOn);

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

	Nan::SetPrototypeMethod(tpl, "SetCategoricalData", SetCategoricalData);
	Nan::SetPrototypeMethod(tpl, "setCategoricalData", SetCategoricalData);

	Nan::SetPrototypeMethod(tpl, "SetComputeTolerance", SetComputeTolerance);
	Nan::SetPrototypeMethod(tpl, "setComputeTolerance", SetComputeTolerance);

	Nan::SetPrototypeMethod(tpl, "SetMarkBlankPointsAndCells", SetMarkBlankPointsAndCells);
	Nan::SetPrototypeMethod(tpl, "setMarkBlankPointsAndCells", SetMarkBlankPointsAndCells);

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

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

#ifdef VTK_NODE_PLUS_VTKRESAMPLEWITHDATASETWRAP_INITPTPL
	VTK_NODE_PLUS_VTKRESAMPLEWITHDATASETWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkResampleWithDataSetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkResampleWithDataSet> native = vtkSmartPointer<vtkResampleWithDataSet>::New();
		VtkResampleWithDataSetWrap* obj = new VtkResampleWithDataSetWrap(native);
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

void VtkResampleWithDataSetWrap::ComputeToleranceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeToleranceOff();
}

void VtkResampleWithDataSetWrap::ComputeToleranceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeToleranceOn();
}

void VtkResampleWithDataSetWrap::GetCategoricalData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCategoricalData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResampleWithDataSetWrap::GetComputeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResampleWithDataSetWrap::GetMarkBlankPointsAndCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMarkBlankPointsAndCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResampleWithDataSetWrap::GetPassCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassCellArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResampleWithDataSetWrap::GetPassFieldArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassFieldArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResampleWithDataSetWrap::GetPassPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassPointArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResampleWithDataSetWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResampleWithDataSetWrap::MarkBlankPointsAndCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MarkBlankPointsAndCellsOff();
}

void VtkResampleWithDataSetWrap::MarkBlankPointsAndCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MarkBlankPointsAndCellsOn();
}

void VtkResampleWithDataSetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	vtkResampleWithDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkResampleWithDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkResampleWithDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResampleWithDataSetWrap *w = new VtkResampleWithDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResampleWithDataSetWrap::PassCellArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassCellArraysOff();
}

void VtkResampleWithDataSetWrap::PassCellArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassCellArraysOn();
}

void VtkResampleWithDataSetWrap::PassFieldArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassFieldArraysOff();
}

void VtkResampleWithDataSetWrap::PassFieldArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassFieldArraysOn();
}

void VtkResampleWithDataSetWrap::PassPointArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassPointArraysOff();
}

void VtkResampleWithDataSetWrap::PassPointArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassPointArraysOn();
}

void VtkResampleWithDataSetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkResampleWithDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkResampleWithDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkResampleWithDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkResampleWithDataSetWrap *w = new VtkResampleWithDataSetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResampleWithDataSetWrap::SetCategoricalData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCategoricalData(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResampleWithDataSetWrap::SetComputeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeTolerance(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResampleWithDataSetWrap::SetMarkBlankPointsAndCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMarkBlankPointsAndCells(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResampleWithDataSetWrap::SetPassCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassCellArrays(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResampleWithDataSetWrap::SetPassFieldArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassFieldArrays(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResampleWithDataSetWrap::SetPassPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassPointArrays(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResampleWithDataSetWrap::SetSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
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

void VtkResampleWithDataSetWrap::SetSourceData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
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

void VtkResampleWithDataSetWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResampleWithDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkResampleWithDataSetWrap>(info.Holder());
	vtkResampleWithDataSet *native = (vtkResampleWithDataSet *)wrapper->native.GetPointer();
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
