/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageMapper3DWrap.h"
#include "vtkImageResliceMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPlaneWrap.h"
#include "vtkAbstractImageInterpolatorWrap.h"
#include "vtkRendererWrap.h"
#include "vtkImageSliceWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageResliceMapperWrap::ptpl;

VtkImageResliceMapperWrap::VtkImageResliceMapperWrap()
{ }

VtkImageResliceMapperWrap::VtkImageResliceMapperWrap(vtkSmartPointer<vtkImageResliceMapper> _native)
{ native = _native; }

VtkImageResliceMapperWrap::~VtkImageResliceMapperWrap()
{ }

void VtkImageResliceMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageResliceMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageResliceMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkImageResliceMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageResliceMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageMapper3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageMapper3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageResliceMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AutoAdjustImageQualityOff", AutoAdjustImageQualityOff);
	Nan::SetPrototypeMethod(tpl, "autoAdjustImageQualityOff", AutoAdjustImageQualityOff);

	Nan::SetPrototypeMethod(tpl, "AutoAdjustImageQualityOn", AutoAdjustImageQualityOn);
	Nan::SetPrototypeMethod(tpl, "autoAdjustImageQualityOn", AutoAdjustImageQualityOn);

	Nan::SetPrototypeMethod(tpl, "GetAutoAdjustImageQuality", GetAutoAdjustImageQuality);
	Nan::SetPrototypeMethod(tpl, "getAutoAdjustImageQuality", GetAutoAdjustImageQuality);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetImageSampleFactor", GetImageSampleFactor);
	Nan::SetPrototypeMethod(tpl, "getImageSampleFactor", GetImageSampleFactor);

	Nan::SetPrototypeMethod(tpl, "GetImageSampleFactorMaxValue", GetImageSampleFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getImageSampleFactorMaxValue", GetImageSampleFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetImageSampleFactorMinValue", GetImageSampleFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getImageSampleFactorMinValue", GetImageSampleFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "GetInterpolator", GetInterpolator);
	Nan::SetPrototypeMethod(tpl, "getInterpolator", GetInterpolator);

	Nan::SetPrototypeMethod(tpl, "GetJumpToNearestSlice", GetJumpToNearestSlice);
	Nan::SetPrototypeMethod(tpl, "getJumpToNearestSlice", GetJumpToNearestSlice);

	Nan::SetPrototypeMethod(tpl, "GetResampleToScreenPixels", GetResampleToScreenPixels);
	Nan::SetPrototypeMethod(tpl, "getResampleToScreenPixels", GetResampleToScreenPixels);

	Nan::SetPrototypeMethod(tpl, "GetSeparateWindowLevelOperation", GetSeparateWindowLevelOperation);
	Nan::SetPrototypeMethod(tpl, "getSeparateWindowLevelOperation", GetSeparateWindowLevelOperation);

	Nan::SetPrototypeMethod(tpl, "GetSlabSampleFactor", GetSlabSampleFactor);
	Nan::SetPrototypeMethod(tpl, "getSlabSampleFactor", GetSlabSampleFactor);

	Nan::SetPrototypeMethod(tpl, "GetSlabSampleFactorMaxValue", GetSlabSampleFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSlabSampleFactorMaxValue", GetSlabSampleFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSlabSampleFactorMinValue", GetSlabSampleFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getSlabSampleFactorMinValue", GetSlabSampleFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSlabThickness", GetSlabThickness);
	Nan::SetPrototypeMethod(tpl, "getSlabThickness", GetSlabThickness);

	Nan::SetPrototypeMethod(tpl, "GetSlabType", GetSlabType);
	Nan::SetPrototypeMethod(tpl, "getSlabType", GetSlabType);

	Nan::SetPrototypeMethod(tpl, "GetSlabTypeAsString", GetSlabTypeAsString);
	Nan::SetPrototypeMethod(tpl, "getSlabTypeAsString", GetSlabTypeAsString);

	Nan::SetPrototypeMethod(tpl, "GetSlabTypeMaxValue", GetSlabTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSlabTypeMaxValue", GetSlabTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSlabTypeMinValue", GetSlabTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getSlabTypeMinValue", GetSlabTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "JumpToNearestSliceOff", JumpToNearestSliceOff);
	Nan::SetPrototypeMethod(tpl, "jumpToNearestSliceOff", JumpToNearestSliceOff);

	Nan::SetPrototypeMethod(tpl, "JumpToNearestSliceOn", JumpToNearestSliceOn);
	Nan::SetPrototypeMethod(tpl, "jumpToNearestSliceOn", JumpToNearestSliceOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "ResampleToScreenPixelsOff", ResampleToScreenPixelsOff);
	Nan::SetPrototypeMethod(tpl, "resampleToScreenPixelsOff", ResampleToScreenPixelsOff);

	Nan::SetPrototypeMethod(tpl, "ResampleToScreenPixelsOn", ResampleToScreenPixelsOn);
	Nan::SetPrototypeMethod(tpl, "resampleToScreenPixelsOn", ResampleToScreenPixelsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SeparateWindowLevelOperationOff", SeparateWindowLevelOperationOff);
	Nan::SetPrototypeMethod(tpl, "separateWindowLevelOperationOff", SeparateWindowLevelOperationOff);

	Nan::SetPrototypeMethod(tpl, "SeparateWindowLevelOperationOn", SeparateWindowLevelOperationOn);
	Nan::SetPrototypeMethod(tpl, "separateWindowLevelOperationOn", SeparateWindowLevelOperationOn);

	Nan::SetPrototypeMethod(tpl, "SetAutoAdjustImageQuality", SetAutoAdjustImageQuality);
	Nan::SetPrototypeMethod(tpl, "setAutoAdjustImageQuality", SetAutoAdjustImageQuality);

	Nan::SetPrototypeMethod(tpl, "SetImageSampleFactor", SetImageSampleFactor);
	Nan::SetPrototypeMethod(tpl, "setImageSampleFactor", SetImageSampleFactor);

	Nan::SetPrototypeMethod(tpl, "SetInterpolator", SetInterpolator);
	Nan::SetPrototypeMethod(tpl, "setInterpolator", SetInterpolator);

	Nan::SetPrototypeMethod(tpl, "SetJumpToNearestSlice", SetJumpToNearestSlice);
	Nan::SetPrototypeMethod(tpl, "setJumpToNearestSlice", SetJumpToNearestSlice);

	Nan::SetPrototypeMethod(tpl, "SetResampleToScreenPixels", SetResampleToScreenPixels);
	Nan::SetPrototypeMethod(tpl, "setResampleToScreenPixels", SetResampleToScreenPixels);

	Nan::SetPrototypeMethod(tpl, "SetSeparateWindowLevelOperation", SetSeparateWindowLevelOperation);
	Nan::SetPrototypeMethod(tpl, "setSeparateWindowLevelOperation", SetSeparateWindowLevelOperation);

	Nan::SetPrototypeMethod(tpl, "SetSlabSampleFactor", SetSlabSampleFactor);
	Nan::SetPrototypeMethod(tpl, "setSlabSampleFactor", SetSlabSampleFactor);

	Nan::SetPrototypeMethod(tpl, "SetSlabThickness", SetSlabThickness);
	Nan::SetPrototypeMethod(tpl, "setSlabThickness", SetSlabThickness);

	Nan::SetPrototypeMethod(tpl, "SetSlabType", SetSlabType);
	Nan::SetPrototypeMethod(tpl, "setSlabType", SetSlabType);

	Nan::SetPrototypeMethod(tpl, "SetSlabTypeToMax", SetSlabTypeToMax);
	Nan::SetPrototypeMethod(tpl, "setSlabTypeToMax", SetSlabTypeToMax);

	Nan::SetPrototypeMethod(tpl, "SetSlabTypeToMean", SetSlabTypeToMean);
	Nan::SetPrototypeMethod(tpl, "setSlabTypeToMean", SetSlabTypeToMean);

	Nan::SetPrototypeMethod(tpl, "SetSlabTypeToMin", SetSlabTypeToMin);
	Nan::SetPrototypeMethod(tpl, "setSlabTypeToMin", SetSlabTypeToMin);

	Nan::SetPrototypeMethod(tpl, "SetSlicePlane", SetSlicePlane);
	Nan::SetPrototypeMethod(tpl, "setSlicePlane", SetSlicePlane);

	ptpl.Reset( tpl );
}

void VtkImageResliceMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageResliceMapper> native = vtkSmartPointer<vtkImageResliceMapper>::New();
		VtkImageResliceMapperWrap* obj = new VtkImageResliceMapperWrap(native);
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

void VtkImageResliceMapperWrap::AutoAdjustImageQualityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoAdjustImageQualityOff();
}

void VtkImageResliceMapperWrap::AutoAdjustImageQualityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoAdjustImageQualityOn();
}

void VtkImageResliceMapperWrap::GetAutoAdjustImageQuality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutoAdjustImageQuality();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResliceMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageResliceMapperWrap::GetImageSampleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageSampleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::GetImageSampleFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageSampleFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::GetImageSampleFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageSampleFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::GetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	vtkAbstractImageInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolator();
		VtkAbstractImageInterpolatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractImageInterpolatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractImageInterpolatorWrap *w = new VtkAbstractImageInterpolatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageResliceMapperWrap::GetJumpToNearestSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetJumpToNearestSlice();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::GetResampleToScreenPixels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResampleToScreenPixels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::GetSeparateWindowLevelOperation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSeparateWindowLevelOperation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::GetSlabSampleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSlabSampleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::GetSlabSampleFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSlabSampleFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::GetSlabSampleFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSlabSampleFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::GetSlabThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSlabThickness();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::GetSlabType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSlabType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::GetSlabTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSlabTypeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageResliceMapperWrap::GetSlabTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSlabTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::GetSlabTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSlabTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResliceMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
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

void VtkImageResliceMapperWrap::JumpToNearestSliceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->JumpToNearestSliceOff();
}

void VtkImageResliceMapperWrap::JumpToNearestSliceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->JumpToNearestSliceOn();
}

void VtkImageResliceMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	vtkImageResliceMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageResliceMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageResliceMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageResliceMapperWrap *w = new VtkImageResliceMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageResliceMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResliceMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkImageSliceWrap::ptpl))->HasInstance(info[1]))
		{
			VtkImageSliceWrap *a1 = ObjectWrap::Unwrap<VtkImageSliceWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkImageSlice *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResliceMapperWrap::ResampleToScreenPixelsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResampleToScreenPixelsOff();
}

void VtkImageResliceMapperWrap::ResampleToScreenPixelsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResampleToScreenPixelsOn();
}

void VtkImageResliceMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageResliceMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageResliceMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageResliceMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageResliceMapperWrap *w = new VtkImageResliceMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResliceMapperWrap::SeparateWindowLevelOperationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SeparateWindowLevelOperationOff();
}

void VtkImageResliceMapperWrap::SeparateWindowLevelOperationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SeparateWindowLevelOperationOn();
}

void VtkImageResliceMapperWrap::SetAutoAdjustImageQuality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutoAdjustImageQuality(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResliceMapperWrap::SetImageSampleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImageSampleFactor(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResliceMapperWrap::SetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractImageInterpolatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractImageInterpolatorWrap *a0 = ObjectWrap::Unwrap<VtkAbstractImageInterpolatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolator(
			(vtkAbstractImageInterpolator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResliceMapperWrap::SetJumpToNearestSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetJumpToNearestSlice(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResliceMapperWrap::SetResampleToScreenPixels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResampleToScreenPixels(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResliceMapperWrap::SetSeparateWindowLevelOperation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSeparateWindowLevelOperation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResliceMapperWrap::SetSlabSampleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSlabSampleFactor(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResliceMapperWrap::SetSlabThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSlabThickness(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResliceMapperWrap::SetSlabType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSlabType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResliceMapperWrap::SetSlabTypeToMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSlabTypeToMax();
}

void VtkImageResliceMapperWrap::SetSlabTypeToMean(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSlabTypeToMean();
}

void VtkImageResliceMapperWrap::SetSlabTypeToMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSlabTypeToMin();
}

void VtkImageResliceMapperWrap::SetSlicePlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageResliceMapperWrap>(info.Holder());
	vtkImageResliceMapper *native = (vtkImageResliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlaneWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlaneWrap *a0 = ObjectWrap::Unwrap<VtkPlaneWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSlicePlane(
			(vtkPlane *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

