/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkHandleRepresentationWrap.h"
#include "vtkConstrainedPointHandleRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkPlaneWrap.h"
#include "vtkPlaneCollectionWrap.h"
#include "vtkPlanesWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkRendererWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"
#include "vtkPropWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkConstrainedPointHandleRepresentationWrap::constructor;

VtkConstrainedPointHandleRepresentationWrap::VtkConstrainedPointHandleRepresentationWrap()
{ }

VtkConstrainedPointHandleRepresentationWrap::VtkConstrainedPointHandleRepresentationWrap(vtkSmartPointer<vtkConstrainedPointHandleRepresentation> _native)
{ native = _native; }

VtkConstrainedPointHandleRepresentationWrap::~VtkConstrainedPointHandleRepresentationWrap()
{ }

void VtkConstrainedPointHandleRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkConstrainedPointHandleRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkPropWrap::InitTpl(tpl);
	VtkWidgetRepresentationWrap::InitTpl(tpl);
	VtkHandleRepresentationWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkConstrainedPointHandleRepresentation").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ConstrainedPointHandleRepresentation").ToLocalChecked(),tpl->GetFunction());
}

void VtkConstrainedPointHandleRepresentationWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddBoundingPlane", AddBoundingPlane);
	Nan::SetPrototypeMethod(tpl, "addBoundingPlane", AddBoundingPlane);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetActiveCursorShape", GetActiveCursorShape);
	Nan::SetPrototypeMethod(tpl, "getActiveCursorShape", GetActiveCursorShape);

	Nan::SetPrototypeMethod(tpl, "GetActiveProperty", GetActiveProperty);
	Nan::SetPrototypeMethod(tpl, "getActiveProperty", GetActiveProperty);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetBoundingPlanes", GetBoundingPlanes);
	Nan::SetPrototypeMethod(tpl, "getBoundingPlanes", GetBoundingPlanes);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCursorShape", GetCursorShape);
	Nan::SetPrototypeMethod(tpl, "getCursorShape", GetCursorShape);

	Nan::SetPrototypeMethod(tpl, "GetObliquePlane", GetObliquePlane);
	Nan::SetPrototypeMethod(tpl, "getObliquePlane", GetObliquePlane);

	Nan::SetPrototypeMethod(tpl, "GetProjectionNormal", GetProjectionNormal);
	Nan::SetPrototypeMethod(tpl, "getProjectionNormal", GetProjectionNormal);

	Nan::SetPrototypeMethod(tpl, "GetProjectionNormalMaxValue", GetProjectionNormalMaxValue);
	Nan::SetPrototypeMethod(tpl, "getProjectionNormalMaxValue", GetProjectionNormalMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetProjectionNormalMinValue", GetProjectionNormalMinValue);
	Nan::SetPrototypeMethod(tpl, "getProjectionNormalMinValue", GetProjectionNormalMinValue);

	Nan::SetPrototypeMethod(tpl, "GetProjectionPosition", GetProjectionPosition);
	Nan::SetPrototypeMethod(tpl, "getProjectionPosition", GetProjectionPosition);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedProperty", GetSelectedProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedProperty", GetSelectedProperty);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "Highlight", Highlight);
	Nan::SetPrototypeMethod(tpl, "highlight", Highlight);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RemoveAllBoundingPlanes", RemoveAllBoundingPlanes);
	Nan::SetPrototypeMethod(tpl, "removeAllBoundingPlanes", RemoveAllBoundingPlanes);

	Nan::SetPrototypeMethod(tpl, "RemoveBoundingPlane", RemoveBoundingPlane);
	Nan::SetPrototypeMethod(tpl, "removeBoundingPlane", RemoveBoundingPlane);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetActiveCursorShape", SetActiveCursorShape);
	Nan::SetPrototypeMethod(tpl, "setActiveCursorShape", SetActiveCursorShape);

	Nan::SetPrototypeMethod(tpl, "SetBoundingPlanes", SetBoundingPlanes);
	Nan::SetPrototypeMethod(tpl, "setBoundingPlanes", SetBoundingPlanes);

	Nan::SetPrototypeMethod(tpl, "SetCursorShape", SetCursorShape);
	Nan::SetPrototypeMethod(tpl, "setCursorShape", SetCursorShape);

	Nan::SetPrototypeMethod(tpl, "SetObliquePlane", SetObliquePlane);
	Nan::SetPrototypeMethod(tpl, "setObliquePlane", SetObliquePlane);

	Nan::SetPrototypeMethod(tpl, "SetPosition", SetPosition);
	Nan::SetPrototypeMethod(tpl, "setPosition", SetPosition);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormal", SetProjectionNormal);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormal", SetProjectionNormal);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormalToOblique", SetProjectionNormalToOblique);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormalToOblique", SetProjectionNormalToOblique);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormalToXAxis", SetProjectionNormalToXAxis);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormalToXAxis", SetProjectionNormalToXAxis);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormalToYAxis", SetProjectionNormalToYAxis);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormalToYAxis", SetProjectionNormalToYAxis);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormalToZAxis", SetProjectionNormalToZAxis);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormalToZAxis", SetProjectionNormalToZAxis);

	Nan::SetPrototypeMethod(tpl, "SetProjectionPosition", SetProjectionPosition);
	Nan::SetPrototypeMethod(tpl, "setProjectionPosition", SetProjectionPosition);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

}

void VtkConstrainedPointHandleRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkConstrainedPointHandleRepresentation> native = vtkSmartPointer<vtkConstrainedPointHandleRepresentation>::New();
		VtkConstrainedPointHandleRepresentationWrap* obj = new VtkConstrainedPointHandleRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkConstrainedPointHandleRepresentationWrap::AddBoundingPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPlaneWrap *a0 = ObjectWrap::Unwrap<VtkPlaneWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddBoundingPlane(
			(vtkPlane *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConstrainedPointHandleRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkConstrainedPointHandleRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
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

void VtkConstrainedPointHandleRepresentationWrap::GetActiveCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveCursorShape();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConstrainedPointHandleRepresentationWrap::GetActiveProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConstrainedPointHandleRepresentationWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkConstrainedPointHandleRepresentationWrap::GetBoundingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	vtkPlaneCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoundingPlanes();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPlaneCollectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaneCollectionWrap *w = new VtkPlaneCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConstrainedPointHandleRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkConstrainedPointHandleRepresentationWrap::GetCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCursorShape();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConstrainedPointHandleRepresentationWrap::GetObliquePlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	vtkPlane * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetObliquePlane();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPlaneWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaneWrap *w = new VtkPlaneWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConstrainedPointHandleRepresentationWrap::GetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionNormal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrainedPointHandleRepresentationWrap::GetProjectionNormalMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionNormalMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrainedPointHandleRepresentationWrap::GetProjectionNormalMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionNormalMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrainedPointHandleRepresentationWrap::GetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionPosition();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrainedPointHandleRepresentationWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConstrainedPointHandleRepresentationWrap::GetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConstrainedPointHandleRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConstrainedPointHandleRepresentationWrap::Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
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

void VtkConstrainedPointHandleRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
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

void VtkConstrainedPointHandleRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	vtkConstrainedPointHandleRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkConstrainedPointHandleRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkConstrainedPointHandleRepresentationWrap *w = new VtkConstrainedPointHandleRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConstrainedPointHandleRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkConstrainedPointHandleRepresentationWrap::RemoveAllBoundingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllBoundingPlanes();
}

void VtkConstrainedPointHandleRepresentationWrap::RemoveBoundingPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPlaneWrap *a0 = ObjectWrap::Unwrap<VtkPlaneWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveBoundingPlane(
			(vtkPlane *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConstrainedPointHandleRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkConstrainedPointHandleRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkConstrainedPointHandleRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkConstrainedPointHandleRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkConstrainedPointHandleRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkConstrainedPointHandleRepresentationWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkConstrainedPointHandleRepresentationWrap *w = new VtkConstrainedPointHandleRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConstrainedPointHandleRepresentationWrap::SetActiveCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetActiveCursorShape(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConstrainedPointHandleRepresentationWrap::SetBoundingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPlanesWrap *a0 = ObjectWrap::Unwrap<VtkPlanesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBoundingPlanes(
			(vtkPlanes *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConstrainedPointHandleRepresentationWrap::SetCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCursorShape(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConstrainedPointHandleRepresentationWrap::SetObliquePlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPlaneWrap *a0 = ObjectWrap::Unwrap<VtkPlaneWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetObliquePlane(
			(vtkPlane *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConstrainedPointHandleRepresentationWrap::SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetPosition(
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

void VtkConstrainedPointHandleRepresentationWrap::SetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProjectionNormal(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConstrainedPointHandleRepresentationWrap::SetProjectionNormalToOblique(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToOblique();
}

void VtkConstrainedPointHandleRepresentationWrap::SetProjectionNormalToXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToXAxis();
}

void VtkConstrainedPointHandleRepresentationWrap::SetProjectionNormalToYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToYAxis();
}

void VtkConstrainedPointHandleRepresentationWrap::SetProjectionNormalToZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToZAxis();
}

void VtkConstrainedPointHandleRepresentationWrap::SetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProjectionPosition(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConstrainedPointHandleRepresentationWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkConstrainedPointHandleRepresentationWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConstrainedPointHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkConstrainedPointHandleRepresentationWrap>(info.Holder());
	vtkConstrainedPointHandleRepresentation *native = (vtkConstrainedPointHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

