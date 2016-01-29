/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkHandleRepresentationWrap.h"
#include "vtkAbstractPolygonalHandleRepresentation3DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkAbstractTransformWrap.h"
#include "vtkPropWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"
#include "vtkFollowerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractPolygonalHandleRepresentation3DWrap::ptpl;

VtkAbstractPolygonalHandleRepresentation3DWrap::VtkAbstractPolygonalHandleRepresentation3DWrap()
{ }

VtkAbstractPolygonalHandleRepresentation3DWrap::VtkAbstractPolygonalHandleRepresentation3DWrap(vtkSmartPointer<vtkAbstractPolygonalHandleRepresentation3D> _native)
{ native = _native; }

VtkAbstractPolygonalHandleRepresentation3DWrap::~VtkAbstractPolygonalHandleRepresentation3DWrap()
{ }

void VtkAbstractPolygonalHandleRepresentation3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractPolygonalHandleRepresentation3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractPolygonalHandleRepresentation3D").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHandleRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHandleRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractPolygonalHandleRepresentation3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

	Nan::SetPrototypeMethod(tpl, "GetHandle", GetHandle);
	Nan::SetPrototypeMethod(tpl, "getHandle", GetHandle);

	Nan::SetPrototypeMethod(tpl, "GetHandleVisibility", GetHandleVisibility);
	Nan::SetPrototypeMethod(tpl, "getHandleVisibility", GetHandleVisibility);

	Nan::SetPrototypeMethod(tpl, "GetLabelText", GetLabelText);
	Nan::SetPrototypeMethod(tpl, "getLabelText", GetLabelText);

	Nan::SetPrototypeMethod(tpl, "GetLabelTextActor", GetLabelTextActor);
	Nan::SetPrototypeMethod(tpl, "getLabelTextActor", GetLabelTextActor);

	Nan::SetPrototypeMethod(tpl, "GetLabelVisibility", GetLabelVisibility);
	Nan::SetPrototypeMethod(tpl, "getLabelVisibility", GetLabelVisibility);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedProperty", GetSelectedProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedProperty", GetSelectedProperty);

	Nan::SetPrototypeMethod(tpl, "GetSmoothMotion", GetSmoothMotion);
	Nan::SetPrototypeMethod(tpl, "getSmoothMotion", GetSmoothMotion);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "HandleVisibilityOff", HandleVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "handleVisibilityOff", HandleVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "HandleVisibilityOn", HandleVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "handleVisibilityOn", HandleVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "Highlight", Highlight);
	Nan::SetPrototypeMethod(tpl, "highlight", Highlight);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LabelVisibilityOff", LabelVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "labelVisibilityOff", LabelVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "LabelVisibilityOn", LabelVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "labelVisibilityOn", LabelVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHandle", SetHandle);
	Nan::SetPrototypeMethod(tpl, "setHandle", SetHandle);

	Nan::SetPrototypeMethod(tpl, "SetHandleVisibility", SetHandleVisibility);
	Nan::SetPrototypeMethod(tpl, "setHandleVisibility", SetHandleVisibility);

	Nan::SetPrototypeMethod(tpl, "SetLabelText", SetLabelText);
	Nan::SetPrototypeMethod(tpl, "setLabelText", SetLabelText);

	Nan::SetPrototypeMethod(tpl, "SetLabelTextScale", SetLabelTextScale);
	Nan::SetPrototypeMethod(tpl, "setLabelTextScale", SetLabelTextScale);

	Nan::SetPrototypeMethod(tpl, "SetLabelVisibility", SetLabelVisibility);
	Nan::SetPrototypeMethod(tpl, "setLabelVisibility", SetLabelVisibility);

	Nan::SetPrototypeMethod(tpl, "SetProperty", SetProperty);
	Nan::SetPrototypeMethod(tpl, "setProperty", SetProperty);

	Nan::SetPrototypeMethod(tpl, "SetSelectedProperty", SetSelectedProperty);
	Nan::SetPrototypeMethod(tpl, "setSelectedProperty", SetSelectedProperty);

	Nan::SetPrototypeMethod(tpl, "SetSmoothMotion", SetSmoothMotion);
	Nan::SetPrototypeMethod(tpl, "setSmoothMotion", SetSmoothMotion);

	Nan::SetPrototypeMethod(tpl, "SetUniformScale", SetUniformScale);
	Nan::SetPrototypeMethod(tpl, "setUniformScale", SetUniformScale);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "SmoothMotionOff", SmoothMotionOff);
	Nan::SetPrototypeMethod(tpl, "smoothMotionOff", SmoothMotionOff);

	Nan::SetPrototypeMethod(tpl, "SmoothMotionOn", SmoothMotionOn);
	Nan::SetPrototypeMethod(tpl, "smoothMotionOn", SmoothMotionOn);

	ptpl.Reset( tpl );
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkAbstractPolygonalHandleRepresentation3DWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkAbstractPolygonalHandleRepresentation3DWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkAbstractPolygonalHandleRepresentation3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::GetHandle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandle();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::GetHandleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::GetLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelText();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::GetLabelTextActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	vtkFollower * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelTextActor();
		VtkFollowerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFollowerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFollowerWrap *w = new VtkFollowerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::GetLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::GetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::GetSmoothMotion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSmoothMotion();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransform();
		VtkAbstractTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::HandleVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HandleVisibilityOff();
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::HandleVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HandleVisibilityOn();
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkAbstractPolygonalHandleRepresentation3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkAbstractPolygonalHandleRepresentation3DWrap::LabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LabelVisibilityOff();
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::LabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LabelVisibilityOn();
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	vtkAbstractPolygonalHandleRepresentation3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAbstractPolygonalHandleRepresentation3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractPolygonalHandleRepresentation3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractPolygonalHandleRepresentation3DWrap *w = new VtkAbstractPolygonalHandleRepresentation3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkAbstractPolygonalHandleRepresentation3DWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkAbstractPolygonalHandleRepresentation3DWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkAbstractPolygonalHandleRepresentation3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAbstractPolygonalHandleRepresentation3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAbstractPolygonalHandleRepresentation3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAbstractPolygonalHandleRepresentation3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractPolygonalHandleRepresentation3DWrap *w = new VtkAbstractPolygonalHandleRepresentation3DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::SetHandle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHandle(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::SetHandleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHandleVisibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::SetLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelText(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::SetLabelTextScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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
				native->SetLabelTextScale(
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

void VtkAbstractPolygonalHandleRepresentation3DWrap::SetLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelVisibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkAbstractPolygonalHandleRepresentation3DWrap::SetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkAbstractPolygonalHandleRepresentation3DWrap::SetSmoothMotion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkAbstractPolygonalHandleRepresentation3DWrap::SetUniformScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUniformScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkAbstractPolygonalHandleRepresentation3DWrap::SmoothMotionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SmoothMotionOff();
}

void VtkAbstractPolygonalHandleRepresentation3DWrap::SmoothMotionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkAbstractPolygonalHandleRepresentation3D *native = (vtkAbstractPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SmoothMotionOn();
}

