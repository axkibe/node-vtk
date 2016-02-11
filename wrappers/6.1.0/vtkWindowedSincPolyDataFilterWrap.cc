/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkWindowedSincPolyDataFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkWindowedSincPolyDataFilterWrap::ptpl;

VtkWindowedSincPolyDataFilterWrap::VtkWindowedSincPolyDataFilterWrap()
{ }

VtkWindowedSincPolyDataFilterWrap::VtkWindowedSincPolyDataFilterWrap(vtkSmartPointer<vtkWindowedSincPolyDataFilter> _native)
{ native = _native; }

VtkWindowedSincPolyDataFilterWrap::~VtkWindowedSincPolyDataFilterWrap()
{ }

void VtkWindowedSincPolyDataFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkWindowedSincPolyDataFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("WindowedSincPolyDataFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkWindowedSincPolyDataFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkWindowedSincPolyDataFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkWindowedSincPolyDataFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BoundarySmoothingOff", BoundarySmoothingOff);
	Nan::SetPrototypeMethod(tpl, "boundarySmoothingOff", BoundarySmoothingOff);

	Nan::SetPrototypeMethod(tpl, "BoundarySmoothingOn", BoundarySmoothingOn);
	Nan::SetPrototypeMethod(tpl, "boundarySmoothingOn", BoundarySmoothingOn);

	Nan::SetPrototypeMethod(tpl, "FeatureEdgeSmoothingOff", FeatureEdgeSmoothingOff);
	Nan::SetPrototypeMethod(tpl, "featureEdgeSmoothingOff", FeatureEdgeSmoothingOff);

	Nan::SetPrototypeMethod(tpl, "FeatureEdgeSmoothingOn", FeatureEdgeSmoothingOn);
	Nan::SetPrototypeMethod(tpl, "featureEdgeSmoothingOn", FeatureEdgeSmoothingOn);

	Nan::SetPrototypeMethod(tpl, "GenerateErrorScalarsOff", GenerateErrorScalarsOff);
	Nan::SetPrototypeMethod(tpl, "generateErrorScalarsOff", GenerateErrorScalarsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateErrorScalarsOn", GenerateErrorScalarsOn);
	Nan::SetPrototypeMethod(tpl, "generateErrorScalarsOn", GenerateErrorScalarsOn);

	Nan::SetPrototypeMethod(tpl, "GenerateErrorVectorsOff", GenerateErrorVectorsOff);
	Nan::SetPrototypeMethod(tpl, "generateErrorVectorsOff", GenerateErrorVectorsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateErrorVectorsOn", GenerateErrorVectorsOn);
	Nan::SetPrototypeMethod(tpl, "generateErrorVectorsOn", GenerateErrorVectorsOn);

	Nan::SetPrototypeMethod(tpl, "GetBoundarySmoothing", GetBoundarySmoothing);
	Nan::SetPrototypeMethod(tpl, "getBoundarySmoothing", GetBoundarySmoothing);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEdgeAngle", GetEdgeAngle);
	Nan::SetPrototypeMethod(tpl, "getEdgeAngle", GetEdgeAngle);

	Nan::SetPrototypeMethod(tpl, "GetEdgeAngleMaxValue", GetEdgeAngleMaxValue);
	Nan::SetPrototypeMethod(tpl, "getEdgeAngleMaxValue", GetEdgeAngleMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetEdgeAngleMinValue", GetEdgeAngleMinValue);
	Nan::SetPrototypeMethod(tpl, "getEdgeAngleMinValue", GetEdgeAngleMinValue);

	Nan::SetPrototypeMethod(tpl, "GetFeatureAngle", GetFeatureAngle);
	Nan::SetPrototypeMethod(tpl, "getFeatureAngle", GetFeatureAngle);

	Nan::SetPrototypeMethod(tpl, "GetFeatureAngleMaxValue", GetFeatureAngleMaxValue);
	Nan::SetPrototypeMethod(tpl, "getFeatureAngleMaxValue", GetFeatureAngleMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetFeatureAngleMinValue", GetFeatureAngleMinValue);
	Nan::SetPrototypeMethod(tpl, "getFeatureAngleMinValue", GetFeatureAngleMinValue);

	Nan::SetPrototypeMethod(tpl, "GetFeatureEdgeSmoothing", GetFeatureEdgeSmoothing);
	Nan::SetPrototypeMethod(tpl, "getFeatureEdgeSmoothing", GetFeatureEdgeSmoothing);

	Nan::SetPrototypeMethod(tpl, "GetGenerateErrorScalars", GetGenerateErrorScalars);
	Nan::SetPrototypeMethod(tpl, "getGenerateErrorScalars", GetGenerateErrorScalars);

	Nan::SetPrototypeMethod(tpl, "GetGenerateErrorVectors", GetGenerateErrorVectors);
	Nan::SetPrototypeMethod(tpl, "getGenerateErrorVectors", GetGenerateErrorVectors);

	Nan::SetPrototypeMethod(tpl, "GetNonManifoldSmoothing", GetNonManifoldSmoothing);
	Nan::SetPrototypeMethod(tpl, "getNonManifoldSmoothing", GetNonManifoldSmoothing);

	Nan::SetPrototypeMethod(tpl, "GetNormalizeCoordinates", GetNormalizeCoordinates);
	Nan::SetPrototypeMethod(tpl, "getNormalizeCoordinates", GetNormalizeCoordinates);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfIterations", GetNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "getNumberOfIterations", GetNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfIterationsMaxValue", GetNumberOfIterationsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfIterationsMaxValue", GetNumberOfIterationsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfIterationsMinValue", GetNumberOfIterationsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfIterationsMinValue", GetNumberOfIterationsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetPassBand", GetPassBand);
	Nan::SetPrototypeMethod(tpl, "getPassBand", GetPassBand);

	Nan::SetPrototypeMethod(tpl, "GetPassBandMaxValue", GetPassBandMaxValue);
	Nan::SetPrototypeMethod(tpl, "getPassBandMaxValue", GetPassBandMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetPassBandMinValue", GetPassBandMinValue);
	Nan::SetPrototypeMethod(tpl, "getPassBandMinValue", GetPassBandMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NonManifoldSmoothingOff", NonManifoldSmoothingOff);
	Nan::SetPrototypeMethod(tpl, "nonManifoldSmoothingOff", NonManifoldSmoothingOff);

	Nan::SetPrototypeMethod(tpl, "NonManifoldSmoothingOn", NonManifoldSmoothingOn);
	Nan::SetPrototypeMethod(tpl, "nonManifoldSmoothingOn", NonManifoldSmoothingOn);

	Nan::SetPrototypeMethod(tpl, "NormalizeCoordinatesOff", NormalizeCoordinatesOff);
	Nan::SetPrototypeMethod(tpl, "normalizeCoordinatesOff", NormalizeCoordinatesOff);

	Nan::SetPrototypeMethod(tpl, "NormalizeCoordinatesOn", NormalizeCoordinatesOn);
	Nan::SetPrototypeMethod(tpl, "normalizeCoordinatesOn", NormalizeCoordinatesOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBoundarySmoothing", SetBoundarySmoothing);
	Nan::SetPrototypeMethod(tpl, "setBoundarySmoothing", SetBoundarySmoothing);

	Nan::SetPrototypeMethod(tpl, "SetEdgeAngle", SetEdgeAngle);
	Nan::SetPrototypeMethod(tpl, "setEdgeAngle", SetEdgeAngle);

	Nan::SetPrototypeMethod(tpl, "SetFeatureAngle", SetFeatureAngle);
	Nan::SetPrototypeMethod(tpl, "setFeatureAngle", SetFeatureAngle);

	Nan::SetPrototypeMethod(tpl, "SetFeatureEdgeSmoothing", SetFeatureEdgeSmoothing);
	Nan::SetPrototypeMethod(tpl, "setFeatureEdgeSmoothing", SetFeatureEdgeSmoothing);

	Nan::SetPrototypeMethod(tpl, "SetGenerateErrorScalars", SetGenerateErrorScalars);
	Nan::SetPrototypeMethod(tpl, "setGenerateErrorScalars", SetGenerateErrorScalars);

	Nan::SetPrototypeMethod(tpl, "SetGenerateErrorVectors", SetGenerateErrorVectors);
	Nan::SetPrototypeMethod(tpl, "setGenerateErrorVectors", SetGenerateErrorVectors);

	Nan::SetPrototypeMethod(tpl, "SetNonManifoldSmoothing", SetNonManifoldSmoothing);
	Nan::SetPrototypeMethod(tpl, "setNonManifoldSmoothing", SetNonManifoldSmoothing);

	Nan::SetPrototypeMethod(tpl, "SetNormalizeCoordinates", SetNormalizeCoordinates);
	Nan::SetPrototypeMethod(tpl, "setNormalizeCoordinates", SetNormalizeCoordinates);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfIterations", SetNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "setNumberOfIterations", SetNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "SetPassBand", SetPassBand);
	Nan::SetPrototypeMethod(tpl, "setPassBand", SetPassBand);

	ptpl.Reset( tpl );
}

void VtkWindowedSincPolyDataFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkWindowedSincPolyDataFilter> native = vtkSmartPointer<vtkWindowedSincPolyDataFilter>::New();
		VtkWindowedSincPolyDataFilterWrap* obj = new VtkWindowedSincPolyDataFilterWrap(native);
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

void VtkWindowedSincPolyDataFilterWrap::BoundarySmoothingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoundarySmoothingOff();
}

void VtkWindowedSincPolyDataFilterWrap::BoundarySmoothingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoundarySmoothingOn();
}

void VtkWindowedSincPolyDataFilterWrap::FeatureEdgeSmoothingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FeatureEdgeSmoothingOff();
}

void VtkWindowedSincPolyDataFilterWrap::FeatureEdgeSmoothingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FeatureEdgeSmoothingOn();
}

void VtkWindowedSincPolyDataFilterWrap::GenerateErrorScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateErrorScalarsOff();
}

void VtkWindowedSincPolyDataFilterWrap::GenerateErrorScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateErrorScalarsOn();
}

void VtkWindowedSincPolyDataFilterWrap::GenerateErrorVectorsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateErrorVectorsOff();
}

void VtkWindowedSincPolyDataFilterWrap::GenerateErrorVectorsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateErrorVectorsOn();
}

void VtkWindowedSincPolyDataFilterWrap::GetBoundarySmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoundarySmoothing();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWindowedSincPolyDataFilterWrap::GetEdgeAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetEdgeAngleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeAngleMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetEdgeAngleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeAngleMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetFeatureAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFeatureAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetFeatureAngleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFeatureAngleMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetFeatureAngleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFeatureAngleMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetFeatureEdgeSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFeatureEdgeSmoothing();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetGenerateErrorScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateErrorScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetGenerateErrorVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateErrorVectors();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetNonManifoldSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNonManifoldSmoothing();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetNormalizeCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalizeCoordinates();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfIterations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetNumberOfIterationsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfIterationsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetNumberOfIterationsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfIterationsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetPassBand(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassBand();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetPassBandMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassBandMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::GetPassBandMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassBandMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowedSincPolyDataFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
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

void VtkWindowedSincPolyDataFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	vtkWindowedSincPolyDataFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkWindowedSincPolyDataFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkWindowedSincPolyDataFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWindowedSincPolyDataFilterWrap *w = new VtkWindowedSincPolyDataFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWindowedSincPolyDataFilterWrap::NonManifoldSmoothingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NonManifoldSmoothingOff();
}

void VtkWindowedSincPolyDataFilterWrap::NonManifoldSmoothingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NonManifoldSmoothingOn();
}

void VtkWindowedSincPolyDataFilterWrap::NormalizeCoordinatesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalizeCoordinatesOff();
}

void VtkWindowedSincPolyDataFilterWrap::NormalizeCoordinatesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalizeCoordinatesOn();
}

void VtkWindowedSincPolyDataFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkWindowedSincPolyDataFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkWindowedSincPolyDataFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkWindowedSincPolyDataFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkWindowedSincPolyDataFilterWrap *w = new VtkWindowedSincPolyDataFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowedSincPolyDataFilterWrap::SetBoundarySmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBoundarySmoothing(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowedSincPolyDataFilterWrap::SetEdgeAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdgeAngle(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowedSincPolyDataFilterWrap::SetFeatureAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
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

void VtkWindowedSincPolyDataFilterWrap::SetFeatureEdgeSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFeatureEdgeSmoothing(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowedSincPolyDataFilterWrap::SetGenerateErrorScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateErrorScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowedSincPolyDataFilterWrap::SetGenerateErrorVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateErrorVectors(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowedSincPolyDataFilterWrap::SetNonManifoldSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNonManifoldSmoothing(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowedSincPolyDataFilterWrap::SetNormalizeCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalizeCoordinates(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowedSincPolyDataFilterWrap::SetNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfIterations(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowedSincPolyDataFilterWrap::SetPassBand(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowedSincPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowedSincPolyDataFilterWrap>(info.Holder());
	vtkWindowedSincPolyDataFilter *native = (vtkWindowedSincPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassBand(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

