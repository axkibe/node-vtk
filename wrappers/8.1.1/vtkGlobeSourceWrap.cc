/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkGlobeSourceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGlobeSourceWrap::ptpl;

VtkGlobeSourceWrap::VtkGlobeSourceWrap()
{ }

VtkGlobeSourceWrap::VtkGlobeSourceWrap(vtkSmartPointer<vtkGlobeSource> _native)
{ native = _native; }

VtkGlobeSourceWrap::~VtkGlobeSourceWrap()
{ }

void VtkGlobeSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGlobeSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GlobeSource").ToLocalChecked(), ConstructorGetter);
}

void VtkGlobeSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGlobeSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGlobeSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AutoCalculateCurtainHeightOff", AutoCalculateCurtainHeightOff);
	Nan::SetPrototypeMethod(tpl, "autoCalculateCurtainHeightOff", AutoCalculateCurtainHeightOff);

	Nan::SetPrototypeMethod(tpl, "AutoCalculateCurtainHeightOn", AutoCalculateCurtainHeightOn);
	Nan::SetPrototypeMethod(tpl, "autoCalculateCurtainHeightOn", AutoCalculateCurtainHeightOn);

	Nan::SetPrototypeMethod(tpl, "GetAutoCalculateCurtainHeight", GetAutoCalculateCurtainHeight);
	Nan::SetPrototypeMethod(tpl, "getAutoCalculateCurtainHeight", GetAutoCalculateCurtainHeight);

	Nan::SetPrototypeMethod(tpl, "GetCurtainHeight", GetCurtainHeight);
	Nan::SetPrototypeMethod(tpl, "getCurtainHeight", GetCurtainHeight);

	Nan::SetPrototypeMethod(tpl, "GetCurtainHeightMaxValue", GetCurtainHeightMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCurtainHeightMaxValue", GetCurtainHeightMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCurtainHeightMinValue", GetCurtainHeightMinValue);
	Nan::SetPrototypeMethod(tpl, "getCurtainHeightMinValue", GetCurtainHeightMinValue);

	Nan::SetPrototypeMethod(tpl, "GetEndLatitudeMaxValue", GetEndLatitudeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getEndLatitudeMaxValue", GetEndLatitudeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetEndLatitudeMinValue", GetEndLatitudeMinValue);
	Nan::SetPrototypeMethod(tpl, "getEndLatitudeMinValue", GetEndLatitudeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetEndLongitudeMaxValue", GetEndLongitudeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getEndLongitudeMaxValue", GetEndLongitudeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetEndLongitudeMinValue", GetEndLongitudeMinValue);
	Nan::SetPrototypeMethod(tpl, "getEndLongitudeMinValue", GetEndLongitudeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLatitudeResolution", GetLatitudeResolution);
	Nan::SetPrototypeMethod(tpl, "getLatitudeResolution", GetLatitudeResolution);

	Nan::SetPrototypeMethod(tpl, "GetLatitudeResolutionMaxValue", GetLatitudeResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getLatitudeResolutionMaxValue", GetLatitudeResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetLatitudeResolutionMinValue", GetLatitudeResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getLatitudeResolutionMinValue", GetLatitudeResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLongitudeResolution", GetLongitudeResolution);
	Nan::SetPrototypeMethod(tpl, "getLongitudeResolution", GetLongitudeResolution);

	Nan::SetPrototypeMethod(tpl, "GetLongitudeResolutionMaxValue", GetLongitudeResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getLongitudeResolutionMaxValue", GetLongitudeResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetLongitudeResolutionMinValue", GetLongitudeResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getLongitudeResolutionMinValue", GetLongitudeResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetQuadrilateralTessellation", GetQuadrilateralTessellation);
	Nan::SetPrototypeMethod(tpl, "getQuadrilateralTessellation", GetQuadrilateralTessellation);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMaxValue", GetRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMaxValue", GetRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMinValue", GetRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMinValue", GetRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetStartLatitudeMaxValue", GetStartLatitudeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getStartLatitudeMaxValue", GetStartLatitudeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetStartLatitudeMinValue", GetStartLatitudeMinValue);
	Nan::SetPrototypeMethod(tpl, "getStartLatitudeMinValue", GetStartLatitudeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetStartLongitudeMaxValue", GetStartLongitudeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getStartLongitudeMaxValue", GetStartLongitudeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetStartLongitudeMinValue", GetStartLongitudeMinValue);
	Nan::SetPrototypeMethod(tpl, "getStartLongitudeMinValue", GetStartLongitudeMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "QuadrilateralTessellationOff", QuadrilateralTessellationOff);
	Nan::SetPrototypeMethod(tpl, "quadrilateralTessellationOff", QuadrilateralTessellationOff);

	Nan::SetPrototypeMethod(tpl, "QuadrilateralTessellationOn", QuadrilateralTessellationOn);
	Nan::SetPrototypeMethod(tpl, "quadrilateralTessellationOn", QuadrilateralTessellationOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAutoCalculateCurtainHeight", SetAutoCalculateCurtainHeight);
	Nan::SetPrototypeMethod(tpl, "setAutoCalculateCurtainHeight", SetAutoCalculateCurtainHeight);

	Nan::SetPrototypeMethod(tpl, "SetCurtainHeight", SetCurtainHeight);
	Nan::SetPrototypeMethod(tpl, "setCurtainHeight", SetCurtainHeight);

	Nan::SetPrototypeMethod(tpl, "SetEndLatitude", SetEndLatitude);
	Nan::SetPrototypeMethod(tpl, "setEndLatitude", SetEndLatitude);

	Nan::SetPrototypeMethod(tpl, "SetEndLongitude", SetEndLongitude);
	Nan::SetPrototypeMethod(tpl, "setEndLongitude", SetEndLongitude);

	Nan::SetPrototypeMethod(tpl, "SetLatitudeResolution", SetLatitudeResolution);
	Nan::SetPrototypeMethod(tpl, "setLatitudeResolution", SetLatitudeResolution);

	Nan::SetPrototypeMethod(tpl, "SetLongitudeResolution", SetLongitudeResolution);
	Nan::SetPrototypeMethod(tpl, "setLongitudeResolution", SetLongitudeResolution);

	Nan::SetPrototypeMethod(tpl, "SetOrigin", SetOrigin);
	Nan::SetPrototypeMethod(tpl, "setOrigin", SetOrigin);

	Nan::SetPrototypeMethod(tpl, "SetQuadrilateralTessellation", SetQuadrilateralTessellation);
	Nan::SetPrototypeMethod(tpl, "setQuadrilateralTessellation", SetQuadrilateralTessellation);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

	Nan::SetPrototypeMethod(tpl, "SetStartLatitude", SetStartLatitude);
	Nan::SetPrototypeMethod(tpl, "setStartLatitude", SetStartLatitude);

	Nan::SetPrototypeMethod(tpl, "SetStartLongitude", SetStartLongitude);
	Nan::SetPrototypeMethod(tpl, "setStartLongitude", SetStartLongitude);

#ifdef VTK_NODE_PLUS_VTKGLOBESOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGLOBESOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGlobeSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGlobeSource> native = vtkSmartPointer<vtkGlobeSource>::New();
		VtkGlobeSourceWrap* obj = new VtkGlobeSourceWrap(native);
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

void VtkGlobeSourceWrap::AutoCalculateCurtainHeightOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoCalculateCurtainHeightOff();
}

void VtkGlobeSourceWrap::AutoCalculateCurtainHeightOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoCalculateCurtainHeightOn();
}

void VtkGlobeSourceWrap::GetAutoCalculateCurtainHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutoCalculateCurtainHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetCurtainHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurtainHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetCurtainHeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurtainHeightMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetCurtainHeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurtainHeightMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetEndLatitudeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndLatitudeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetEndLatitudeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndLatitudeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetEndLongitudeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndLongitudeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetEndLongitudeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndLongitudeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetLatitudeResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLatitudeResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetLatitudeResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLatitudeResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetLatitudeResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLatitudeResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetLongitudeResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLongitudeResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetLongitudeResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLongitudeResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetLongitudeResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLongitudeResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetQuadrilateralTessellation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQuadrilateralTessellation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetStartLatitudeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartLatitudeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetStartLatitudeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartLatitudeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetStartLongitudeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartLongitudeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::GetStartLongitudeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartLongitudeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobeSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	vtkGlobeSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGlobeSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGlobeSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGlobeSourceWrap *w = new VtkGlobeSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGlobeSourceWrap::QuadrilateralTessellationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->QuadrilateralTessellationOff();
}

void VtkGlobeSourceWrap::QuadrilateralTessellationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->QuadrilateralTessellationOn();
}

void VtkGlobeSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkGlobeSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkGlobeSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGlobeSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGlobeSourceWrap *w = new VtkGlobeSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlobeSourceWrap::SetAutoCalculateCurtainHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutoCalculateCurtainHeight(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlobeSourceWrap::SetCurtainHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCurtainHeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlobeSourceWrap::SetEndLatitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEndLatitude(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlobeSourceWrap::SetEndLongitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEndLongitude(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlobeSourceWrap::SetLatitudeResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLatitudeResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlobeSourceWrap::SetLongitudeResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLongitudeResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlobeSourceWrap::SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
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
		native->SetOrigin(
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
		native->SetOrigin(
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
				native->SetOrigin(
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

void VtkGlobeSourceWrap::SetQuadrilateralTessellation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetQuadrilateralTessellation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlobeSourceWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
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

void VtkGlobeSourceWrap::SetStartLatitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStartLatitude(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlobeSourceWrap::SetStartLongitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGlobeSourceWrap>(info.Holder());
	vtkGlobeSource *native = (vtkGlobeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStartLongitude(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

