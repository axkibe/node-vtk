/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWidgetRepresentationWrap.h"
#include "vtkCheckerboardRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageCheckerboardWrap.h"
#include "vtkImageActorWrap.h"
#include "vtkSliderRepresentation3DWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCheckerboardRepresentationWrap::ptpl;

VtkCheckerboardRepresentationWrap::VtkCheckerboardRepresentationWrap()
{ }

VtkCheckerboardRepresentationWrap::VtkCheckerboardRepresentationWrap(vtkSmartPointer<vtkCheckerboardRepresentation> _native)
{ native = _native; }

VtkCheckerboardRepresentationWrap::~VtkCheckerboardRepresentationWrap()
{ }

void VtkCheckerboardRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCheckerboardRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CheckerboardRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkCheckerboardRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCheckerboardRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWidgetRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCheckerboardRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetBottomRepresentation", GetBottomRepresentation);
	Nan::SetPrototypeMethod(tpl, "getBottomRepresentation", GetBottomRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetCheckerboard", GetCheckerboard);
	Nan::SetPrototypeMethod(tpl, "getCheckerboard", GetCheckerboard);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCornerOffset", GetCornerOffset);
	Nan::SetPrototypeMethod(tpl, "getCornerOffset", GetCornerOffset);

	Nan::SetPrototypeMethod(tpl, "GetCornerOffsetMaxValue", GetCornerOffsetMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCornerOffsetMaxValue", GetCornerOffsetMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCornerOffsetMinValue", GetCornerOffsetMinValue);
	Nan::SetPrototypeMethod(tpl, "getCornerOffsetMinValue", GetCornerOffsetMinValue);

	Nan::SetPrototypeMethod(tpl, "GetImageActor", GetImageActor);
	Nan::SetPrototypeMethod(tpl, "getImageActor", GetImageActor);

	Nan::SetPrototypeMethod(tpl, "GetLeftRepresentation", GetLeftRepresentation);
	Nan::SetPrototypeMethod(tpl, "getLeftRepresentation", GetLeftRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetRightRepresentation", GetRightRepresentation);
	Nan::SetPrototypeMethod(tpl, "getRightRepresentation", GetRightRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetTopRepresentation", GetTopRepresentation);
	Nan::SetPrototypeMethod(tpl, "getTopRepresentation", GetTopRepresentation);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

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

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBottomRepresentation", SetBottomRepresentation);
	Nan::SetPrototypeMethod(tpl, "setBottomRepresentation", SetBottomRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetCheckerboard", SetCheckerboard);
	Nan::SetPrototypeMethod(tpl, "setCheckerboard", SetCheckerboard);

	Nan::SetPrototypeMethod(tpl, "SetCornerOffset", SetCornerOffset);
	Nan::SetPrototypeMethod(tpl, "setCornerOffset", SetCornerOffset);

	Nan::SetPrototypeMethod(tpl, "SetImageActor", SetImageActor);
	Nan::SetPrototypeMethod(tpl, "setImageActor", SetImageActor);

	Nan::SetPrototypeMethod(tpl, "SetLeftRepresentation", SetLeftRepresentation);
	Nan::SetPrototypeMethod(tpl, "setLeftRepresentation", SetLeftRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetRightRepresentation", SetRightRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRightRepresentation", SetRightRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetTopRepresentation", SetTopRepresentation);
	Nan::SetPrototypeMethod(tpl, "setTopRepresentation", SetTopRepresentation);

	Nan::SetPrototypeMethod(tpl, "SliderValueChanged", SliderValueChanged);
	Nan::SetPrototypeMethod(tpl, "sliderValueChanged", SliderValueChanged);

	ptpl.Reset( tpl );
}

void VtkCheckerboardRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCheckerboardRepresentation> native = vtkSmartPointer<vtkCheckerboardRepresentation>::New();
		VtkCheckerboardRepresentationWrap* obj = new VtkCheckerboardRepresentationWrap(native);
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

void VtkCheckerboardRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkCheckerboardRepresentationWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
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

void VtkCheckerboardRepresentationWrap::GetBottomRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	vtkSliderRepresentation3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBottomRepresentation();
	VtkSliderRepresentation3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSliderRepresentation3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSliderRepresentation3DWrap *w = new VtkSliderRepresentation3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCheckerboardRepresentationWrap::GetCheckerboard(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	vtkImageCheckerboard * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCheckerboard();
	VtkImageCheckerboardWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageCheckerboardWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageCheckerboardWrap *w = new VtkImageCheckerboardWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCheckerboardRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCheckerboardRepresentationWrap::GetCornerOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCornerOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCheckerboardRepresentationWrap::GetCornerOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCornerOffsetMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCheckerboardRepresentationWrap::GetCornerOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCornerOffsetMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCheckerboardRepresentationWrap::GetImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	vtkImageActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageActor();
	VtkImageActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageActorWrap *w = new VtkImageActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCheckerboardRepresentationWrap::GetLeftRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	vtkSliderRepresentation3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeftRepresentation();
	VtkSliderRepresentation3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSliderRepresentation3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSliderRepresentation3DWrap *w = new VtkSliderRepresentation3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCheckerboardRepresentationWrap::GetRightRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	vtkSliderRepresentation3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRightRepresentation();
	VtkSliderRepresentation3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSliderRepresentation3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSliderRepresentation3DWrap *w = new VtkSliderRepresentation3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCheckerboardRepresentationWrap::GetTopRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	vtkSliderRepresentation3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTopRepresentation();
	VtkSliderRepresentation3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSliderRepresentation3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSliderRepresentation3DWrap *w = new VtkSliderRepresentation3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCheckerboardRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCheckerboardRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
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

void VtkCheckerboardRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	vtkCheckerboardRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCheckerboardRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCheckerboardRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCheckerboardRepresentationWrap *w = new VtkCheckerboardRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCheckerboardRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
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

void VtkCheckerboardRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
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

void VtkCheckerboardRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
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

void VtkCheckerboardRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
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

void VtkCheckerboardRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCheckerboardRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkCheckerboardRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCheckerboardRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCheckerboardRepresentationWrap *w = new VtkCheckerboardRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCheckerboardRepresentationWrap::SetBottomRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSliderRepresentation3DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSliderRepresentation3DWrap *a0 = ObjectWrap::Unwrap<VtkSliderRepresentation3DWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBottomRepresentation(
			(vtkSliderRepresentation3D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCheckerboardRepresentationWrap::SetCheckerboard(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageCheckerboardWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageCheckerboardWrap *a0 = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCheckerboard(
			(vtkImageCheckerboard *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCheckerboardRepresentationWrap::SetCornerOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCornerOffset(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCheckerboardRepresentationWrap::SetImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageActorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageActorWrap *a0 = ObjectWrap::Unwrap<VtkImageActorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImageActor(
			(vtkImageActor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCheckerboardRepresentationWrap::SetLeftRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSliderRepresentation3DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSliderRepresentation3DWrap *a0 = ObjectWrap::Unwrap<VtkSliderRepresentation3DWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLeftRepresentation(
			(vtkSliderRepresentation3D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCheckerboardRepresentationWrap::SetRightRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSliderRepresentation3DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSliderRepresentation3DWrap *a0 = ObjectWrap::Unwrap<VtkSliderRepresentation3DWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRightRepresentation(
			(vtkSliderRepresentation3D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCheckerboardRepresentationWrap::SetTopRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSliderRepresentation3DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSliderRepresentation3DWrap *a0 = ObjectWrap::Unwrap<VtkSliderRepresentation3DWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTopRepresentation(
			(vtkSliderRepresentation3D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCheckerboardRepresentationWrap::SliderValueChanged(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SliderValueChanged(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

