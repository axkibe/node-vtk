/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPropWrap.h"
#include "vtkWidgetRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkWidgetRepresentationWrap::ptpl;

VtkWidgetRepresentationWrap::VtkWidgetRepresentationWrap()
{ }

VtkWidgetRepresentationWrap::VtkWidgetRepresentationWrap(vtkSmartPointer<vtkWidgetRepresentation> _native)
{ native = _native; }

VtkWidgetRepresentationWrap::~VtkWidgetRepresentationWrap()
{ }

void VtkWidgetRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkWidgetRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("WidgetRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkWidgetRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkWidgetRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPropWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPropWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkWidgetRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetActors2D", GetActors2D);
	Nan::SetPrototypeMethod(tpl, "getActors2D", GetActors2D);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHandleSize", GetHandleSize);
	Nan::SetPrototypeMethod(tpl, "getHandleSize", GetHandleSize);

	Nan::SetPrototypeMethod(tpl, "GetHandleSizeMaxValue", GetHandleSizeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getHandleSizeMaxValue", GetHandleSizeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetHandleSizeMinValue", GetHandleSizeMinValue);
	Nan::SetPrototypeMethod(tpl, "getHandleSizeMinValue", GetHandleSizeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetInteractionState", GetInteractionState);
	Nan::SetPrototypeMethod(tpl, "getInteractionState", GetInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetNeedToRender", GetNeedToRender);
	Nan::SetPrototypeMethod(tpl, "getNeedToRender", GetNeedToRender);

	Nan::SetPrototypeMethod(tpl, "GetNeedToRenderMaxValue", GetNeedToRenderMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNeedToRenderMaxValue", GetNeedToRenderMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNeedToRenderMinValue", GetNeedToRenderMinValue);
	Nan::SetPrototypeMethod(tpl, "getNeedToRenderMinValue", GetNeedToRenderMinValue);

	Nan::SetPrototypeMethod(tpl, "GetPlaceFactor", GetPlaceFactor);
	Nan::SetPrototypeMethod(tpl, "getPlaceFactor", GetPlaceFactor);

	Nan::SetPrototypeMethod(tpl, "GetPlaceFactorMaxValue", GetPlaceFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getPlaceFactorMaxValue", GetPlaceFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetPlaceFactorMinValue", GetPlaceFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getPlaceFactorMinValue", GetPlaceFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRenderer", GetRenderer);
	Nan::SetPrototypeMethod(tpl, "getRenderer", GetRenderer);

	Nan::SetPrototypeMethod(tpl, "GetVolumes", GetVolumes);
	Nan::SetPrototypeMethod(tpl, "getVolumes", GetVolumes);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "Highlight", Highlight);
	Nan::SetPrototypeMethod(tpl, "highlight", Highlight);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NeedToRenderOff", NeedToRenderOff);
	Nan::SetPrototypeMethod(tpl, "needToRenderOff", NeedToRenderOff);

	Nan::SetPrototypeMethod(tpl, "NeedToRenderOn", NeedToRenderOn);
	Nan::SetPrototypeMethod(tpl, "needToRenderOn", NeedToRenderOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PickingManagedOff", PickingManagedOff);
	Nan::SetPrototypeMethod(tpl, "pickingManagedOff", PickingManagedOff);

	Nan::SetPrototypeMethod(tpl, "PickingManagedOn", PickingManagedOn);
	Nan::SetPrototypeMethod(tpl, "pickingManagedOn", PickingManagedOn);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderVolumetricGeometry", RenderVolumetricGeometry);
	Nan::SetPrototypeMethod(tpl, "renderVolumetricGeometry", RenderVolumetricGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHandleSize", SetHandleSize);
	Nan::SetPrototypeMethod(tpl, "setHandleSize", SetHandleSize);

	Nan::SetPrototypeMethod(tpl, "SetNeedToRender", SetNeedToRender);
	Nan::SetPrototypeMethod(tpl, "setNeedToRender", SetNeedToRender);

	Nan::SetPrototypeMethod(tpl, "SetPlaceFactor", SetPlaceFactor);
	Nan::SetPrototypeMethod(tpl, "setPlaceFactor", SetPlaceFactor);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkWidgetRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkWidgetRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkWidgetRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
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

void VtkWidgetRepresentationWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
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

void VtkWidgetRepresentationWrap::GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetActors2D(
			(vtkPropCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWidgetRepresentationWrap::GetHandleSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWidgetRepresentationWrap::GetHandleSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleSizeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWidgetRepresentationWrap::GetHandleSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleSizeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWidgetRepresentationWrap::GetInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractionState();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWidgetRepresentationWrap::GetNeedToRender(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNeedToRender();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWidgetRepresentationWrap::GetNeedToRenderMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNeedToRenderMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWidgetRepresentationWrap::GetNeedToRenderMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNeedToRenderMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWidgetRepresentationWrap::GetPlaceFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlaceFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWidgetRepresentationWrap::GetPlaceFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlaceFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWidgetRepresentationWrap::GetPlaceFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlaceFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWidgetRepresentationWrap::GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderer();
		VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWidgetRepresentationWrap::GetVolumes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetVolumes(
			(vtkPropCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWidgetRepresentationWrap::Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
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

void VtkWidgetRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
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

void VtkWidgetRepresentationWrap::NeedToRenderOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NeedToRenderOff();
}

void VtkWidgetRepresentationWrap::NeedToRenderOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NeedToRenderOn();
}

void VtkWidgetRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	vtkWidgetRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkWidgetRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWidgetRepresentationWrap *w = new VtkWidgetRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWidgetRepresentationWrap::PickingManagedOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickingManagedOff();
}

void VtkWidgetRepresentationWrap::PickingManagedOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickingManagedOn();
}

void VtkWidgetRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
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

void VtkWidgetRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
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

void VtkWidgetRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderOverlay(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
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

void VtkWidgetRepresentationWrap::RenderVolumetricGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderVolumetricGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkWidgetRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkWidgetRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkWidgetRepresentationWrap *w = new VtkWidgetRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetRepresentationWrap::SetHandleSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
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

void VtkWidgetRepresentationWrap::SetNeedToRender(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNeedToRender(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetRepresentationWrap::SetPlaceFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlaceFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetRepresentationWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetRepresentationWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetRepresentationWrap>(info.Holder());
	vtkWidgetRepresentation *native = (vtkWidgetRepresentation *)wrapper->native.GetPointer();
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

