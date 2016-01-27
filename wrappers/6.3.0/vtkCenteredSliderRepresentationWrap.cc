/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkSliderRepresentationWrap.h"
#include "vtkCenteredSliderRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCoordinateWrap.h"
#include "vtkProperty2DWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCenteredSliderRepresentationWrap::ptpl;

VtkCenteredSliderRepresentationWrap::VtkCenteredSliderRepresentationWrap()
{ }

VtkCenteredSliderRepresentationWrap::VtkCenteredSliderRepresentationWrap(vtkSmartPointer<vtkCenteredSliderRepresentation> _native)
{ native = _native; }

VtkCenteredSliderRepresentationWrap::~VtkCenteredSliderRepresentationWrap()
{ }

void VtkCenteredSliderRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCenteredSliderRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CenteredSliderRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkCenteredSliderRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCenteredSliderRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkSliderRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkSliderRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCenteredSliderRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLabelProperty", GetLabelProperty);
	Nan::SetPrototypeMethod(tpl, "getLabelProperty", GetLabelProperty);

	Nan::SetPrototypeMethod(tpl, "GetPoint1Coordinate", GetPoint1Coordinate);
	Nan::SetPrototypeMethod(tpl, "getPoint1Coordinate", GetPoint1Coordinate);

	Nan::SetPrototypeMethod(tpl, "GetPoint2Coordinate", GetPoint2Coordinate);
	Nan::SetPrototypeMethod(tpl, "getPoint2Coordinate", GetPoint2Coordinate);

	Nan::SetPrototypeMethod(tpl, "GetSelectedProperty", GetSelectedProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedProperty", GetSelectedProperty);

	Nan::SetPrototypeMethod(tpl, "GetSliderProperty", GetSliderProperty);
	Nan::SetPrototypeMethod(tpl, "getSliderProperty", GetSliderProperty);

	Nan::SetPrototypeMethod(tpl, "GetTitleText", GetTitleText);
	Nan::SetPrototypeMethod(tpl, "getTitleText", GetTitleText);

	Nan::SetPrototypeMethod(tpl, "GetTubeProperty", GetTubeProperty);
	Nan::SetPrototypeMethod(tpl, "getTubeProperty", GetTubeProperty);

	Nan::SetPrototypeMethod(tpl, "Highlight", Highlight);
	Nan::SetPrototypeMethod(tpl, "highlight", Highlight);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTitleText", SetTitleText);
	Nan::SetPrototypeMethod(tpl, "setTitleText", SetTitleText);

	ptpl.Reset( tpl );
}

void VtkCenteredSliderRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCenteredSliderRepresentation> native = vtkSmartPointer<vtkCenteredSliderRepresentation>::New();
		VtkCenteredSliderRepresentationWrap* obj = new VtkCenteredSliderRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCenteredSliderRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkCenteredSliderRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
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

void VtkCenteredSliderRepresentationWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
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

void VtkCenteredSliderRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCenteredSliderRepresentationWrap::GetLabelProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelProperty();
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCenteredSliderRepresentationWrap::GetPoint1Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
	vtkCoordinate * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoint1Coordinate();
		VtkCoordinateWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCoordinateWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCoordinateWrap *w = new VtkCoordinateWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCenteredSliderRepresentationWrap::GetPoint2Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
	vtkCoordinate * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoint2Coordinate();
		VtkCoordinateWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCoordinateWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCoordinateWrap *w = new VtkCoordinateWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCenteredSliderRepresentationWrap::GetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedProperty();
		VtkProperty2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProperty2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCenteredSliderRepresentationWrap::GetSliderProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliderProperty();
		VtkProperty2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProperty2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCenteredSliderRepresentationWrap::GetTitleText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTitleText();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCenteredSliderRepresentationWrap::GetTubeProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTubeProperty();
		VtkProperty2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProperty2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCenteredSliderRepresentationWrap::Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
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

void VtkCenteredSliderRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
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

void VtkCenteredSliderRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
	vtkCenteredSliderRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCenteredSliderRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCenteredSliderRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCenteredSliderRepresentationWrap *w = new VtkCenteredSliderRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCenteredSliderRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
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

void VtkCenteredSliderRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
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

void VtkCenteredSliderRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
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

void VtkCenteredSliderRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCenteredSliderRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCenteredSliderRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCenteredSliderRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCenteredSliderRepresentationWrap *w = new VtkCenteredSliderRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCenteredSliderRepresentationWrap::SetTitleText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderRepresentationWrap>(info.Holder());
	vtkCenteredSliderRepresentation *native = (vtkCenteredSliderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTitleText(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

