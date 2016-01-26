/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkHandleRepresentationWrap.h"
#include "vtkPointHandleRepresentation3DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkPropWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPointHandleRepresentation3DWrap::ptpl;

VtkPointHandleRepresentation3DWrap::VtkPointHandleRepresentation3DWrap()
{ }

VtkPointHandleRepresentation3DWrap::VtkPointHandleRepresentation3DWrap(vtkSmartPointer<vtkPointHandleRepresentation3D> _native)
{ native = _native; }

VtkPointHandleRepresentation3DWrap::~VtkPointHandleRepresentation3DWrap()
{ }

void VtkPointHandleRepresentation3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPointHandleRepresentation3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PointHandleRepresentation3D").ToLocalChecked(), ConstructorGetter);
}

void VtkPointHandleRepresentation3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPointHandleRepresentation3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHandleRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHandleRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPointHandleRepresentation3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AllOff", AllOff);
	Nan::SetPrototypeMethod(tpl, "allOff", AllOff);

	Nan::SetPrototypeMethod(tpl, "AllOn", AllOn);
	Nan::SetPrototypeMethod(tpl, "allOn", AllOn);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHotSpotSize", GetHotSpotSize);
	Nan::SetPrototypeMethod(tpl, "getHotSpotSize", GetHotSpotSize);

	Nan::SetPrototypeMethod(tpl, "GetHotSpotSizeMaxValue", GetHotSpotSizeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getHotSpotSizeMaxValue", GetHotSpotSizeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetHotSpotSizeMinValue", GetHotSpotSizeMinValue);
	Nan::SetPrototypeMethod(tpl, "getHotSpotSizeMinValue", GetHotSpotSizeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutline", GetOutline);
	Nan::SetPrototypeMethod(tpl, "getOutline", GetOutline);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedProperty", GetSelectedProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedProperty", GetSelectedProperty);

	Nan::SetPrototypeMethod(tpl, "GetSmoothMotion", GetSmoothMotion);
	Nan::SetPrototypeMethod(tpl, "getSmoothMotion", GetSmoothMotion);

	Nan::SetPrototypeMethod(tpl, "GetTranslationMode", GetTranslationMode);
	Nan::SetPrototypeMethod(tpl, "getTranslationMode", GetTranslationMode);

	Nan::SetPrototypeMethod(tpl, "GetXShadows", GetXShadows);
	Nan::SetPrototypeMethod(tpl, "getXShadows", GetXShadows);

	Nan::SetPrototypeMethod(tpl, "GetYShadows", GetYShadows);
	Nan::SetPrototypeMethod(tpl, "getYShadows", GetYShadows);

	Nan::SetPrototypeMethod(tpl, "GetZShadows", GetZShadows);
	Nan::SetPrototypeMethod(tpl, "getZShadows", GetZShadows);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "Highlight", Highlight);
	Nan::SetPrototypeMethod(tpl, "highlight", Highlight);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OutlineOff", OutlineOff);
	Nan::SetPrototypeMethod(tpl, "outlineOff", OutlineOff);

	Nan::SetPrototypeMethod(tpl, "OutlineOn", OutlineOn);
	Nan::SetPrototypeMethod(tpl, "outlineOn", OutlineOn);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHandleSize", SetHandleSize);
	Nan::SetPrototypeMethod(tpl, "setHandleSize", SetHandleSize);

	Nan::SetPrototypeMethod(tpl, "SetHotSpotSize", SetHotSpotSize);
	Nan::SetPrototypeMethod(tpl, "setHotSpotSize", SetHotSpotSize);

	Nan::SetPrototypeMethod(tpl, "SetOutline", SetOutline);
	Nan::SetPrototypeMethod(tpl, "setOutline", SetOutline);

	Nan::SetPrototypeMethod(tpl, "SetProperty", SetProperty);
	Nan::SetPrototypeMethod(tpl, "setProperty", SetProperty);

	Nan::SetPrototypeMethod(tpl, "SetSelectedProperty", SetSelectedProperty);
	Nan::SetPrototypeMethod(tpl, "setSelectedProperty", SetSelectedProperty);

	Nan::SetPrototypeMethod(tpl, "SetSmoothMotion", SetSmoothMotion);
	Nan::SetPrototypeMethod(tpl, "setSmoothMotion", SetSmoothMotion);

	Nan::SetPrototypeMethod(tpl, "SetTranslationMode", SetTranslationMode);
	Nan::SetPrototypeMethod(tpl, "setTranslationMode", SetTranslationMode);

	Nan::SetPrototypeMethod(tpl, "SetXShadows", SetXShadows);
	Nan::SetPrototypeMethod(tpl, "setXShadows", SetXShadows);

	Nan::SetPrototypeMethod(tpl, "SetYShadows", SetYShadows);
	Nan::SetPrototypeMethod(tpl, "setYShadows", SetYShadows);

	Nan::SetPrototypeMethod(tpl, "SetZShadows", SetZShadows);
	Nan::SetPrototypeMethod(tpl, "setZShadows", SetZShadows);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "SmoothMotionOff", SmoothMotionOff);
	Nan::SetPrototypeMethod(tpl, "smoothMotionOff", SmoothMotionOff);

	Nan::SetPrototypeMethod(tpl, "SmoothMotionOn", SmoothMotionOn);
	Nan::SetPrototypeMethod(tpl, "smoothMotionOn", SmoothMotionOn);

	Nan::SetPrototypeMethod(tpl, "TranslationModeOff", TranslationModeOff);
	Nan::SetPrototypeMethod(tpl, "translationModeOff", TranslationModeOff);

	Nan::SetPrototypeMethod(tpl, "TranslationModeOn", TranslationModeOn);
	Nan::SetPrototypeMethod(tpl, "translationModeOn", TranslationModeOn);

	Nan::SetPrototypeMethod(tpl, "XShadowsOff", XShadowsOff);
	Nan::SetPrototypeMethod(tpl, "xShadowsOff", XShadowsOff);

	Nan::SetPrototypeMethod(tpl, "XShadowsOn", XShadowsOn);
	Nan::SetPrototypeMethod(tpl, "xShadowsOn", XShadowsOn);

	Nan::SetPrototypeMethod(tpl, "YShadowsOff", YShadowsOff);
	Nan::SetPrototypeMethod(tpl, "yShadowsOff", YShadowsOff);

	Nan::SetPrototypeMethod(tpl, "YShadowsOn", YShadowsOn);
	Nan::SetPrototypeMethod(tpl, "yShadowsOn", YShadowsOn);

	Nan::SetPrototypeMethod(tpl, "ZShadowsOff", ZShadowsOff);
	Nan::SetPrototypeMethod(tpl, "zShadowsOff", ZShadowsOff);

	Nan::SetPrototypeMethod(tpl, "ZShadowsOn", ZShadowsOn);
	Nan::SetPrototypeMethod(tpl, "zShadowsOn", ZShadowsOn);

	ptpl.Reset( tpl );
}

void VtkPointHandleRepresentation3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPointHandleRepresentation3D> native = vtkSmartPointer<vtkPointHandleRepresentation3D>::New();
		VtkPointHandleRepresentation3DWrap* obj = new VtkPointHandleRepresentation3DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPointHandleRepresentation3DWrap::AllOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AllOff();
}

void VtkPointHandleRepresentation3DWrap::AllOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AllOn();
}

void VtkPointHandleRepresentation3DWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkPointHandleRepresentation3DWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->ComputeInteractionState(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetActors(
			(vtkPropCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPointHandleRepresentation3DWrap::GetHotSpotSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHotSpotSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointHandleRepresentation3DWrap::GetHotSpotSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHotSpotSizeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointHandleRepresentation3DWrap::GetHotSpotSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHotSpotSizeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointHandleRepresentation3DWrap::GetOutline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutline();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointHandleRepresentation3DWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProperty();
		VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointHandleRepresentation3DWrap::GetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedProperty();
		VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointHandleRepresentation3DWrap::GetSmoothMotion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSmoothMotion();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointHandleRepresentation3DWrap::GetTranslationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslationMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointHandleRepresentation3DWrap::GetXShadows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXShadows();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointHandleRepresentation3DWrap::GetYShadows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYShadows();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointHandleRepresentation3DWrap::GetZShadows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZShadows();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointHandleRepresentation3DWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointHandleRepresentation3DWrap::Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Highlight(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkPointHandleRepresentation3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	vtkPointHandleRepresentation3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPointHandleRepresentation3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointHandleRepresentation3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointHandleRepresentation3DWrap *w = new VtkPointHandleRepresentation3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointHandleRepresentation3DWrap::OutlineOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineOff();
}

void VtkPointHandleRepresentation3DWrap::OutlineOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineOn();
}

void VtkPointHandleRepresentation3DWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkPointHandleRepresentation3DWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderOpaqueGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderTranslucentPolygonalGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPointHandleRepresentation3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPointHandleRepresentation3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPointHandleRepresentation3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointHandleRepresentation3DWrap *w = new VtkPointHandleRepresentation3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::SetHandleSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHandleSize(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::SetHotSpotSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHotSpotSize(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::SetOutline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutline(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::SetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::SetSmoothMotion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSmoothMotion(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::SetTranslationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTranslationMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::SetXShadows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXShadows(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::SetYShadows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYShadows(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::SetZShadows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZShadows(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation3DWrap::SmoothMotionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SmoothMotionOff();
}

void VtkPointHandleRepresentation3DWrap::SmoothMotionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SmoothMotionOn();
}

void VtkPointHandleRepresentation3DWrap::TranslationModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationModeOff();
}

void VtkPointHandleRepresentation3DWrap::TranslationModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationModeOn();
}

void VtkPointHandleRepresentation3DWrap::XShadowsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->XShadowsOff();
}

void VtkPointHandleRepresentation3DWrap::XShadowsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->XShadowsOn();
}

void VtkPointHandleRepresentation3DWrap::YShadowsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->YShadowsOff();
}

void VtkPointHandleRepresentation3DWrap::YShadowsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->YShadowsOn();
}

void VtkPointHandleRepresentation3DWrap::ZShadowsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ZShadowsOff();
}

void VtkPointHandleRepresentation3DWrap::ZShadowsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation3DWrap>(info.Holder());
	vtkPointHandleRepresentation3D *native = (vtkPointHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ZShadowsOn();
}

