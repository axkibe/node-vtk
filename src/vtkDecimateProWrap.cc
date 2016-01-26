/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkDecimateProWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDecimateProWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkDecimateProWrap::ptpl;

VtkDecimateProWrap::VtkDecimateProWrap()
{ }

VtkDecimateProWrap::VtkDecimateProWrap(vtkSmartPointer<vtkDecimatePro> _native)
{ native = _native; }

VtkDecimateProWrap::~VtkDecimateProWrap()
{ }

void VtkDecimateProWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDecimatePro").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DecimatePro").ToLocalChecked(), ConstructorGetter);
}

void VtkDecimateProWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDecimateProWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDecimateProWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AccumulateErrorOff", AccumulateErrorOff);
	Nan::SetPrototypeMethod(tpl, "accumulateErrorOff", AccumulateErrorOff);

	Nan::SetPrototypeMethod(tpl, "AccumulateErrorOn", AccumulateErrorOn);
	Nan::SetPrototypeMethod(tpl, "accumulateErrorOn", AccumulateErrorOn);

	Nan::SetPrototypeMethod(tpl, "BoundaryVertexDeletionOff", BoundaryVertexDeletionOff);
	Nan::SetPrototypeMethod(tpl, "boundaryVertexDeletionOff", BoundaryVertexDeletionOff);

	Nan::SetPrototypeMethod(tpl, "BoundaryVertexDeletionOn", BoundaryVertexDeletionOn);
	Nan::SetPrototypeMethod(tpl, "boundaryVertexDeletionOn", BoundaryVertexDeletionOn);

	Nan::SetPrototypeMethod(tpl, "GetAbsoluteError", GetAbsoluteError);
	Nan::SetPrototypeMethod(tpl, "getAbsoluteError", GetAbsoluteError);

	Nan::SetPrototypeMethod(tpl, "GetAbsoluteErrorMaxValue", GetAbsoluteErrorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAbsoluteErrorMaxValue", GetAbsoluteErrorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAbsoluteErrorMinValue", GetAbsoluteErrorMinValue);
	Nan::SetPrototypeMethod(tpl, "getAbsoluteErrorMinValue", GetAbsoluteErrorMinValue);

	Nan::SetPrototypeMethod(tpl, "GetAccumulateError", GetAccumulateError);
	Nan::SetPrototypeMethod(tpl, "getAccumulateError", GetAccumulateError);

	Nan::SetPrototypeMethod(tpl, "GetBoundaryVertexDeletion", GetBoundaryVertexDeletion);
	Nan::SetPrototypeMethod(tpl, "getBoundaryVertexDeletion", GetBoundaryVertexDeletion);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDegree", GetDegree);
	Nan::SetPrototypeMethod(tpl, "getDegree", GetDegree);

	Nan::SetPrototypeMethod(tpl, "GetDegreeMaxValue", GetDegreeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDegreeMaxValue", GetDegreeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDegreeMinValue", GetDegreeMinValue);
	Nan::SetPrototypeMethod(tpl, "getDegreeMinValue", GetDegreeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetErrorIsAbsolute", GetErrorIsAbsolute);
	Nan::SetPrototypeMethod(tpl, "getErrorIsAbsolute", GetErrorIsAbsolute);

	Nan::SetPrototypeMethod(tpl, "GetFeatureAngle", GetFeatureAngle);
	Nan::SetPrototypeMethod(tpl, "getFeatureAngle", GetFeatureAngle);

	Nan::SetPrototypeMethod(tpl, "GetFeatureAngleMaxValue", GetFeatureAngleMaxValue);
	Nan::SetPrototypeMethod(tpl, "getFeatureAngleMaxValue", GetFeatureAngleMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetFeatureAngleMinValue", GetFeatureAngleMinValue);
	Nan::SetPrototypeMethod(tpl, "getFeatureAngleMinValue", GetFeatureAngleMinValue);

	Nan::SetPrototypeMethod(tpl, "GetInflectionPointRatio", GetInflectionPointRatio);
	Nan::SetPrototypeMethod(tpl, "getInflectionPointRatio", GetInflectionPointRatio);

	Nan::SetPrototypeMethod(tpl, "GetInflectionPointRatioMaxValue", GetInflectionPointRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getInflectionPointRatioMaxValue", GetInflectionPointRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetInflectionPointRatioMinValue", GetInflectionPointRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getInflectionPointRatioMinValue", GetInflectionPointRatioMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumError", GetMaximumError);
	Nan::SetPrototypeMethod(tpl, "getMaximumError", GetMaximumError);

	Nan::SetPrototypeMethod(tpl, "GetMaximumErrorMaxValue", GetMaximumErrorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumErrorMaxValue", GetMaximumErrorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumErrorMinValue", GetMaximumErrorMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumErrorMinValue", GetMaximumErrorMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetPreSplitMesh", GetPreSplitMesh);
	Nan::SetPrototypeMethod(tpl, "getPreSplitMesh", GetPreSplitMesh);

	Nan::SetPrototypeMethod(tpl, "GetPreserveTopology", GetPreserveTopology);
	Nan::SetPrototypeMethod(tpl, "getPreserveTopology", GetPreserveTopology);

	Nan::SetPrototypeMethod(tpl, "GetSplitAngle", GetSplitAngle);
	Nan::SetPrototypeMethod(tpl, "getSplitAngle", GetSplitAngle);

	Nan::SetPrototypeMethod(tpl, "GetSplitAngleMaxValue", GetSplitAngleMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSplitAngleMaxValue", GetSplitAngleMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSplitAngleMinValue", GetSplitAngleMinValue);
	Nan::SetPrototypeMethod(tpl, "getSplitAngleMinValue", GetSplitAngleMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSplitting", GetSplitting);
	Nan::SetPrototypeMethod(tpl, "getSplitting", GetSplitting);

	Nan::SetPrototypeMethod(tpl, "GetTargetReduction", GetTargetReduction);
	Nan::SetPrototypeMethod(tpl, "getTargetReduction", GetTargetReduction);

	Nan::SetPrototypeMethod(tpl, "GetTargetReductionMaxValue", GetTargetReductionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTargetReductionMaxValue", GetTargetReductionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTargetReductionMinValue", GetTargetReductionMinValue);
	Nan::SetPrototypeMethod(tpl, "getTargetReductionMinValue", GetTargetReductionMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PreSplitMeshOff", PreSplitMeshOff);
	Nan::SetPrototypeMethod(tpl, "preSplitMeshOff", PreSplitMeshOff);

	Nan::SetPrototypeMethod(tpl, "PreSplitMeshOn", PreSplitMeshOn);
	Nan::SetPrototypeMethod(tpl, "preSplitMeshOn", PreSplitMeshOn);

	Nan::SetPrototypeMethod(tpl, "PreserveTopologyOff", PreserveTopologyOff);
	Nan::SetPrototypeMethod(tpl, "preserveTopologyOff", PreserveTopologyOff);

	Nan::SetPrototypeMethod(tpl, "PreserveTopologyOn", PreserveTopologyOn);
	Nan::SetPrototypeMethod(tpl, "preserveTopologyOn", PreserveTopologyOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAbsoluteError", SetAbsoluteError);
	Nan::SetPrototypeMethod(tpl, "setAbsoluteError", SetAbsoluteError);

	Nan::SetPrototypeMethod(tpl, "SetAccumulateError", SetAccumulateError);
	Nan::SetPrototypeMethod(tpl, "setAccumulateError", SetAccumulateError);

	Nan::SetPrototypeMethod(tpl, "SetBoundaryVertexDeletion", SetBoundaryVertexDeletion);
	Nan::SetPrototypeMethod(tpl, "setBoundaryVertexDeletion", SetBoundaryVertexDeletion);

	Nan::SetPrototypeMethod(tpl, "SetDegree", SetDegree);
	Nan::SetPrototypeMethod(tpl, "setDegree", SetDegree);

	Nan::SetPrototypeMethod(tpl, "SetErrorIsAbsolute", SetErrorIsAbsolute);
	Nan::SetPrototypeMethod(tpl, "setErrorIsAbsolute", SetErrorIsAbsolute);

	Nan::SetPrototypeMethod(tpl, "SetFeatureAngle", SetFeatureAngle);
	Nan::SetPrototypeMethod(tpl, "setFeatureAngle", SetFeatureAngle);

	Nan::SetPrototypeMethod(tpl, "SetInflectionPointRatio", SetInflectionPointRatio);
	Nan::SetPrototypeMethod(tpl, "setInflectionPointRatio", SetInflectionPointRatio);

	Nan::SetPrototypeMethod(tpl, "SetMaximumError", SetMaximumError);
	Nan::SetPrototypeMethod(tpl, "setMaximumError", SetMaximumError);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetPreSplitMesh", SetPreSplitMesh);
	Nan::SetPrototypeMethod(tpl, "setPreSplitMesh", SetPreSplitMesh);

	Nan::SetPrototypeMethod(tpl, "SetPreserveTopology", SetPreserveTopology);
	Nan::SetPrototypeMethod(tpl, "setPreserveTopology", SetPreserveTopology);

	Nan::SetPrototypeMethod(tpl, "SetSplitAngle", SetSplitAngle);
	Nan::SetPrototypeMethod(tpl, "setSplitAngle", SetSplitAngle);

	Nan::SetPrototypeMethod(tpl, "SetSplitting", SetSplitting);
	Nan::SetPrototypeMethod(tpl, "setSplitting", SetSplitting);

	Nan::SetPrototypeMethod(tpl, "SetTargetReduction", SetTargetReduction);
	Nan::SetPrototypeMethod(tpl, "setTargetReduction", SetTargetReduction);

	Nan::SetPrototypeMethod(tpl, "SplittingOff", SplittingOff);
	Nan::SetPrototypeMethod(tpl, "splittingOff", SplittingOff);

	Nan::SetPrototypeMethod(tpl, "SplittingOn", SplittingOn);
	Nan::SetPrototypeMethod(tpl, "splittingOn", SplittingOn);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkDecimateProWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDecimatePro> native = vtkSmartPointer<vtkDecimatePro>::New();
		VtkDecimateProWrap* obj = new VtkDecimateProWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDecimateProWrap::AccumulateErrorOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AccumulateErrorOff();
}

void VtkDecimateProWrap::AccumulateErrorOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AccumulateErrorOn();
}

void VtkDecimateProWrap::BoundaryVertexDeletionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoundaryVertexDeletionOff();
}

void VtkDecimateProWrap::BoundaryVertexDeletionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoundaryVertexDeletionOn();
}

void VtkDecimateProWrap::GetAbsoluteError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAbsoluteError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetAbsoluteErrorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAbsoluteErrorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetAbsoluteErrorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAbsoluteErrorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetAccumulateError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAccumulateError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetBoundaryVertexDeletion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoundaryVertexDeletion();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDecimateProWrap::GetDegree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDegree();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetDegreeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDegreeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetDegreeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDegreeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetErrorIsAbsolute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetErrorIsAbsolute();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetFeatureAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFeatureAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetFeatureAngleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFeatureAngleMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetFeatureAngleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFeatureAngleMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetInflectionPointRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInflectionPointRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetInflectionPointRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInflectionPointRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetInflectionPointRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInflectionPointRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetMaximumError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetMaximumErrorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumErrorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetMaximumErrorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumErrorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetPreSplitMesh(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreSplitMesh();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetPreserveTopology(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreserveTopology();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetSplitAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplitAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetSplitAngleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplitAngleMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetSplitAngleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplitAngleMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetSplitting(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplitting();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetTargetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetReduction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetTargetReductionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetReductionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::GetTargetReductionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetReductionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDecimateProWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
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

void VtkDecimateProWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	vtkDecimatePro * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDecimateProWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDecimateProWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDecimateProWrap *w = new VtkDecimateProWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDecimateProWrap::PreSplitMeshOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreSplitMeshOff();
}

void VtkDecimateProWrap::PreSplitMeshOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreSplitMeshOn();
}

void VtkDecimateProWrap::PreserveTopologyOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreserveTopologyOff();
}

void VtkDecimateProWrap::PreserveTopologyOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreserveTopologyOn();
}

void VtkDecimateProWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDecimatePro * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDecimateProWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkDecimateProWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDecimateProWrap *w = new VtkDecimateProWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetAbsoluteError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAbsoluteError(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetAccumulateError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAccumulateError(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetBoundaryVertexDeletion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBoundaryVertexDeletion(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetDegree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDegree(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetErrorIsAbsolute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetErrorIsAbsolute(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetFeatureAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFeatureAngle(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetInflectionPointRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInflectionPointRatio(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetMaximumError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumError(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetPreSplitMesh(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPreSplitMesh(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetPreserveTopology(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPreserveTopology(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetSplitAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSplitAngle(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetSplitting(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSplitting(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SetTargetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTargetReduction(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDecimateProWrap::SplittingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SplittingOff();
}

void VtkDecimateProWrap::SplittingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDecimateProWrap *wrapper = ObjectWrap::Unwrap<VtkDecimateProWrap>(info.Holder());
	vtkDecimatePro *native = (vtkDecimatePro *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SplittingOn();
}

