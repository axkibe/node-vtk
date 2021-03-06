/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkDensifyPointCloudFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDensifyPointCloudFilterWrap::ptpl;

VtkDensifyPointCloudFilterWrap::VtkDensifyPointCloudFilterWrap()
{ }

VtkDensifyPointCloudFilterWrap::VtkDensifyPointCloudFilterWrap(vtkSmartPointer<vtkDensifyPointCloudFilter> _native)
{ native = _native; }

VtkDensifyPointCloudFilterWrap::~VtkDensifyPointCloudFilterWrap()
{ }

void VtkDensifyPointCloudFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDensifyPointCloudFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DensifyPointCloudFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkDensifyPointCloudFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDensifyPointCloudFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDensifyPointCloudFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetInterpolateAttributeData", GetInterpolateAttributeData);
	Nan::SetPrototypeMethod(tpl, "getInterpolateAttributeData", GetInterpolateAttributeData);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfIterations", GetMaximumNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfIterations", GetMaximumNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfIterationsMaxValue", GetMaximumNumberOfIterationsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfIterationsMaxValue", GetMaximumNumberOfIterationsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfIterationsMinValue", GetMaximumNumberOfIterationsMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfIterationsMinValue", GetMaximumNumberOfIterationsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetNeighborhoodType", GetNeighborhoodType);
	Nan::SetPrototypeMethod(tpl, "getNeighborhoodType", GetNeighborhoodType);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfClosestPoints", GetNumberOfClosestPoints);
	Nan::SetPrototypeMethod(tpl, "getNumberOfClosestPoints", GetNumberOfClosestPoints);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfClosestPointsMaxValue", GetNumberOfClosestPointsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfClosestPointsMaxValue", GetNumberOfClosestPointsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfClosestPointsMinValue", GetNumberOfClosestPointsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfClosestPointsMinValue", GetNumberOfClosestPointsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMaxValue", GetRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMaxValue", GetRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMinValue", GetRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMinValue", GetRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTargetDistance", GetTargetDistance);
	Nan::SetPrototypeMethod(tpl, "getTargetDistance", GetTargetDistance);

	Nan::SetPrototypeMethod(tpl, "GetTargetDistanceMaxValue", GetTargetDistanceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTargetDistanceMaxValue", GetTargetDistanceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTargetDistanceMinValue", GetTargetDistanceMinValue);
	Nan::SetPrototypeMethod(tpl, "getTargetDistanceMinValue", GetTargetDistanceMinValue);

	Nan::SetPrototypeMethod(tpl, "InterpolateAttributeDataOff", InterpolateAttributeDataOff);
	Nan::SetPrototypeMethod(tpl, "interpolateAttributeDataOff", InterpolateAttributeDataOff);

	Nan::SetPrototypeMethod(tpl, "InterpolateAttributeDataOn", InterpolateAttributeDataOn);
	Nan::SetPrototypeMethod(tpl, "interpolateAttributeDataOn", InterpolateAttributeDataOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInterpolateAttributeData", SetInterpolateAttributeData);
	Nan::SetPrototypeMethod(tpl, "setInterpolateAttributeData", SetInterpolateAttributeData);

	Nan::SetPrototypeMethod(tpl, "SetMaximumNumberOfIterations", SetMaximumNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "setMaximumNumberOfIterations", SetMaximumNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "SetNeighborhoodType", SetNeighborhoodType);
	Nan::SetPrototypeMethod(tpl, "setNeighborhoodType", SetNeighborhoodType);

	Nan::SetPrototypeMethod(tpl, "SetNeighborhoodTypeToNClosest", SetNeighborhoodTypeToNClosest);
	Nan::SetPrototypeMethod(tpl, "setNeighborhoodTypeToNClosest", SetNeighborhoodTypeToNClosest);

	Nan::SetPrototypeMethod(tpl, "SetNeighborhoodTypeToRadius", SetNeighborhoodTypeToRadius);
	Nan::SetPrototypeMethod(tpl, "setNeighborhoodTypeToRadius", SetNeighborhoodTypeToRadius);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfClosestPoints", SetNumberOfClosestPoints);
	Nan::SetPrototypeMethod(tpl, "setNumberOfClosestPoints", SetNumberOfClosestPoints);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

	Nan::SetPrototypeMethod(tpl, "SetTargetDistance", SetTargetDistance);
	Nan::SetPrototypeMethod(tpl, "setTargetDistance", SetTargetDistance);

#ifdef VTK_NODE_PLUS_VTKDENSIFYPOINTCLOUDFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDENSIFYPOINTCLOUDFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkDensifyPointCloudFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDensifyPointCloudFilter> native = vtkSmartPointer<vtkDensifyPointCloudFilter>::New();
		VtkDensifyPointCloudFilterWrap* obj = new VtkDensifyPointCloudFilterWrap(native);
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

void VtkDensifyPointCloudFilterWrap::GetInterpolateAttributeData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolateAttributeData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::GetMaximumNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfIterations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::GetMaximumNumberOfIterationsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfIterationsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::GetMaximumNumberOfIterationsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfIterationsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::GetNeighborhoodType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNeighborhoodType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::GetNumberOfClosestPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfClosestPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::GetNumberOfClosestPointsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfClosestPointsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::GetNumberOfClosestPointsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfClosestPointsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::GetTargetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::GetTargetDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetDistanceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::GetTargetDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetDistanceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDensifyPointCloudFilterWrap::InterpolateAttributeDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InterpolateAttributeDataOff();
}

void VtkDensifyPointCloudFilterWrap::InterpolateAttributeDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InterpolateAttributeDataOn();
}

void VtkDensifyPointCloudFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	vtkDensifyPointCloudFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDensifyPointCloudFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDensifyPointCloudFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDensifyPointCloudFilterWrap *w = new VtkDensifyPointCloudFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDensifyPointCloudFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkDensifyPointCloudFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkDensifyPointCloudFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDensifyPointCloudFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDensifyPointCloudFilterWrap *w = new VtkDensifyPointCloudFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDensifyPointCloudFilterWrap::SetInterpolateAttributeData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolateAttributeData(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDensifyPointCloudFilterWrap::SetMaximumNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumNumberOfIterations(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDensifyPointCloudFilterWrap::SetNeighborhoodType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNeighborhoodType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDensifyPointCloudFilterWrap::SetNeighborhoodTypeToNClosest(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetNeighborhoodTypeToNClosest();
}

void VtkDensifyPointCloudFilterWrap::SetNeighborhoodTypeToRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetNeighborhoodTypeToRadius();
}

void VtkDensifyPointCloudFilterWrap::SetNumberOfClosestPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfClosestPoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDensifyPointCloudFilterWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDensifyPointCloudFilterWrap::SetTargetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDensifyPointCloudFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDensifyPointCloudFilterWrap>(info.Holder());
	vtkDensifyPointCloudFilter *native = (vtkDensifyPointCloudFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTargetDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

