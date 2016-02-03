/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkTessellatorFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkStreamingTessellatorWrap.h"
#include "vtkDataSetEdgeSubdivisionCriterionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTessellatorFilterWrap::ptpl;

VtkTessellatorFilterWrap::VtkTessellatorFilterWrap()
{ }

VtkTessellatorFilterWrap::VtkTessellatorFilterWrap(vtkSmartPointer<vtkTessellatorFilter> _native)
{ native = _native; }

VtkTessellatorFilterWrap::~VtkTessellatorFilterWrap()
{ }

void VtkTessellatorFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTessellatorFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TessellatorFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkTessellatorFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTessellatorFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTessellatorFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetChordError", GetChordError);
	Nan::SetPrototypeMethod(tpl, "getChordError", GetChordError);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfSubdivisions", GetMaximumNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfSubdivisions", GetMaximumNumberOfSubdivisions);

	Nan::SetPrototypeMethod(tpl, "GetMergePoints", GetMergePoints);
	Nan::SetPrototypeMethod(tpl, "getMergePoints", GetMergePoints);

	Nan::SetPrototypeMethod(tpl, "GetOutputDimension", GetOutputDimension);
	Nan::SetPrototypeMethod(tpl, "getOutputDimension", GetOutputDimension);

	Nan::SetPrototypeMethod(tpl, "GetOutputDimensionMaxValue", GetOutputDimensionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOutputDimensionMaxValue", GetOutputDimensionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputDimensionMinValue", GetOutputDimensionMinValue);
	Nan::SetPrototypeMethod(tpl, "getOutputDimensionMinValue", GetOutputDimensionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSubdivider", GetSubdivider);
	Nan::SetPrototypeMethod(tpl, "getSubdivider", GetSubdivider);

	Nan::SetPrototypeMethod(tpl, "GetTessellator", GetTessellator);
	Nan::SetPrototypeMethod(tpl, "getTessellator", GetTessellator);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MergePointsOff", MergePointsOff);
	Nan::SetPrototypeMethod(tpl, "mergePointsOff", MergePointsOff);

	Nan::SetPrototypeMethod(tpl, "MergePointsOn", MergePointsOn);
	Nan::SetPrototypeMethod(tpl, "mergePointsOn", MergePointsOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ResetFieldCriteria", ResetFieldCriteria);
	Nan::SetPrototypeMethod(tpl, "resetFieldCriteria", ResetFieldCriteria);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetChordError", SetChordError);
	Nan::SetPrototypeMethod(tpl, "setChordError", SetChordError);

	Nan::SetPrototypeMethod(tpl, "SetFieldCriterion", SetFieldCriterion);
	Nan::SetPrototypeMethod(tpl, "setFieldCriterion", SetFieldCriterion);

	Nan::SetPrototypeMethod(tpl, "SetMaximumNumberOfSubdivisions", SetMaximumNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "setMaximumNumberOfSubdivisions", SetMaximumNumberOfSubdivisions);

	Nan::SetPrototypeMethod(tpl, "SetMergePoints", SetMergePoints);
	Nan::SetPrototypeMethod(tpl, "setMergePoints", SetMergePoints);

	Nan::SetPrototypeMethod(tpl, "SetOutputDimension", SetOutputDimension);
	Nan::SetPrototypeMethod(tpl, "setOutputDimension", SetOutputDimension);

	Nan::SetPrototypeMethod(tpl, "SetSubdivider", SetSubdivider);
	Nan::SetPrototypeMethod(tpl, "setSubdivider", SetSubdivider);

	Nan::SetPrototypeMethod(tpl, "SetTessellator", SetTessellator);
	Nan::SetPrototypeMethod(tpl, "setTessellator", SetTessellator);

	ptpl.Reset( tpl );
}

void VtkTessellatorFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTessellatorFilter> native = vtkSmartPointer<vtkTessellatorFilter>::New();
		VtkTessellatorFilterWrap* obj = new VtkTessellatorFilterWrap(native);
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

void VtkTessellatorFilterWrap::GetChordError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetChordError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTessellatorFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTessellatorFilterWrap::GetMaximumNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfSubdivisions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTessellatorFilterWrap::GetMergePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergePoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTessellatorFilterWrap::GetOutputDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTessellatorFilterWrap::GetOutputDimensionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputDimensionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTessellatorFilterWrap::GetOutputDimensionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputDimensionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTessellatorFilterWrap::GetSubdivider(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	vtkDataSetEdgeSubdivisionCriterion * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubdivider();
		VtkDataSetEdgeSubdivisionCriterionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetEdgeSubdivisionCriterionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetEdgeSubdivisionCriterionWrap *w = new VtkDataSetEdgeSubdivisionCriterionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTessellatorFilterWrap::GetTessellator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	vtkStreamingTessellator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTessellator();
		VtkStreamingTessellatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStreamingTessellatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStreamingTessellatorWrap *w = new VtkStreamingTessellatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTessellatorFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
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

void VtkTessellatorFilterWrap::MergePointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergePointsOff();
}

void VtkTessellatorFilterWrap::MergePointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergePointsOn();
}

void VtkTessellatorFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	vtkTessellatorFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTessellatorFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTessellatorFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTessellatorFilterWrap *w = new VtkTessellatorFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTessellatorFilterWrap::ResetFieldCriteria(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetFieldCriteria();
}

void VtkTessellatorFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTessellatorFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTessellatorFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTessellatorFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTessellatorFilterWrap *w = new VtkTessellatorFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTessellatorFilterWrap::SetChordError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetChordError(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTessellatorFilterWrap::SetFieldCriterion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetFieldCriterion(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTessellatorFilterWrap::SetMaximumNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumNumberOfSubdivisions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTessellatorFilterWrap::SetMergePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMergePoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTessellatorFilterWrap::SetOutputDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputDimension(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTessellatorFilterWrap::SetSubdivider(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetEdgeSubdivisionCriterionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetEdgeSubdivisionCriterionWrap *a0 = ObjectWrap::Unwrap<VtkDataSetEdgeSubdivisionCriterionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSubdivider(
			(vtkDataSetEdgeSubdivisionCriterion *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTessellatorFilterWrap::SetTessellator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatorFilterWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatorFilterWrap>(info.Holder());
	vtkTessellatorFilter *native = (vtkTessellatorFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStreamingTessellatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStreamingTessellatorWrap *a0 = ObjectWrap::Unwrap<VtkStreamingTessellatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTessellator(
			(vtkStreamingTessellator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

