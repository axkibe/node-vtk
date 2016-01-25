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
Nan::Persistent<v8::Function> VtkCheckerboardRepresentationWrap::constructor;

VtkCheckerboardRepresentationWrap::VtkCheckerboardRepresentationWrap()
{ }

VtkCheckerboardRepresentationWrap::VtkCheckerboardRepresentationWrap(vtkSmartPointer<vtkCheckerboardRepresentation> _native)
{ native = _native; }

VtkCheckerboardRepresentationWrap::~VtkCheckerboardRepresentationWrap()
{ }

void VtkCheckerboardRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkCheckerboardRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkPropWrap::InitTpl(tpl);
	VtkWidgetRepresentationWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkCheckerboardRepresentation").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CheckerboardRepresentation").ToLocalChecked(),tpl->GetFunction());
}

void VtkCheckerboardRepresentationWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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
		VtkCheckerboardRepresentationWrap* obj = new VtkCheckerboardRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSliderRepresentation3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSliderRepresentation3DWrap *w = new VtkSliderRepresentation3DWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageCheckerboardWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageCheckerboardWrap *w = new VtkImageCheckerboardWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageActorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageActorWrap *w = new VtkImageActorWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSliderRepresentation3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSliderRepresentation3DWrap *w = new VtkSliderRepresentation3DWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSliderRepresentation3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSliderRepresentation3DWrap *w = new VtkSliderRepresentation3DWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSliderRepresentation3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSliderRepresentation3DWrap *w = new VtkSliderRepresentation3DWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCheckerboardRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCheckerboardRepresentationWrap *w = new VtkCheckerboardRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCheckerboardRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
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

void VtkCheckerboardRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
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

void VtkCheckerboardRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
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

void VtkCheckerboardRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
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

void VtkCheckerboardRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info.Holder());
	vtkCheckerboardRepresentation *native = (vtkCheckerboardRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkCheckerboardRepresentationWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCheckerboardRepresentationWrap *w = new VtkCheckerboardRepresentationWrap();
		w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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

