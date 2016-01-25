/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWidgetRepresentationWrap.h"
#include "vtkBalloonRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkProperty2DWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkBalloonRepresentationWrap::constructor;

VtkBalloonRepresentationWrap::VtkBalloonRepresentationWrap()
{ }

VtkBalloonRepresentationWrap::VtkBalloonRepresentationWrap(vtkSmartPointer<vtkBalloonRepresentation> _native)
{ native = _native; }

VtkBalloonRepresentationWrap::~VtkBalloonRepresentationWrap()
{ }

void VtkBalloonRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkBalloonRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkPropWrap::InitTpl(tpl);
	VtkWidgetRepresentationWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkBalloonRepresentation").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("BalloonRepresentation").ToLocalChecked(),tpl->GetFunction());
}

void VtkBalloonRepresentationWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetBalloonImage", GetBalloonImage);
	Nan::SetPrototypeMethod(tpl, "getBalloonImage", GetBalloonImage);

	Nan::SetPrototypeMethod(tpl, "GetBalloonLayout", GetBalloonLayout);
	Nan::SetPrototypeMethod(tpl, "getBalloonLayout", GetBalloonLayout);

	Nan::SetPrototypeMethod(tpl, "GetBalloonText", GetBalloonText);
	Nan::SetPrototypeMethod(tpl, "getBalloonText", GetBalloonText);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFrameProperty", GetFrameProperty);
	Nan::SetPrototypeMethod(tpl, "getFrameProperty", GetFrameProperty);

	Nan::SetPrototypeMethod(tpl, "GetImageProperty", GetImageProperty);
	Nan::SetPrototypeMethod(tpl, "getImageProperty", GetImageProperty);

	Nan::SetPrototypeMethod(tpl, "GetPadding", GetPadding);
	Nan::SetPrototypeMethod(tpl, "getPadding", GetPadding);

	Nan::SetPrototypeMethod(tpl, "GetPaddingMaxValue", GetPaddingMaxValue);
	Nan::SetPrototypeMethod(tpl, "getPaddingMaxValue", GetPaddingMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetPaddingMinValue", GetPaddingMinValue);
	Nan::SetPrototypeMethod(tpl, "getPaddingMinValue", GetPaddingMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTextProperty", GetTextProperty);
	Nan::SetPrototypeMethod(tpl, "getTextProperty", GetTextProperty);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBalloonImage", SetBalloonImage);
	Nan::SetPrototypeMethod(tpl, "setBalloonImage", SetBalloonImage);

	Nan::SetPrototypeMethod(tpl, "SetBalloonLayout", SetBalloonLayout);
	Nan::SetPrototypeMethod(tpl, "setBalloonLayout", SetBalloonLayout);

	Nan::SetPrototypeMethod(tpl, "SetBalloonLayoutToImageBottom", SetBalloonLayoutToImageBottom);
	Nan::SetPrototypeMethod(tpl, "setBalloonLayoutToImageBottom", SetBalloonLayoutToImageBottom);

	Nan::SetPrototypeMethod(tpl, "SetBalloonLayoutToImageLeft", SetBalloonLayoutToImageLeft);
	Nan::SetPrototypeMethod(tpl, "setBalloonLayoutToImageLeft", SetBalloonLayoutToImageLeft);

	Nan::SetPrototypeMethod(tpl, "SetBalloonLayoutToImageRight", SetBalloonLayoutToImageRight);
	Nan::SetPrototypeMethod(tpl, "setBalloonLayoutToImageRight", SetBalloonLayoutToImageRight);

	Nan::SetPrototypeMethod(tpl, "SetBalloonLayoutToImageTop", SetBalloonLayoutToImageTop);
	Nan::SetPrototypeMethod(tpl, "setBalloonLayoutToImageTop", SetBalloonLayoutToImageTop);

	Nan::SetPrototypeMethod(tpl, "SetBalloonLayoutToTextBottom", SetBalloonLayoutToTextBottom);
	Nan::SetPrototypeMethod(tpl, "setBalloonLayoutToTextBottom", SetBalloonLayoutToTextBottom);

	Nan::SetPrototypeMethod(tpl, "SetBalloonLayoutToTextLeft", SetBalloonLayoutToTextLeft);
	Nan::SetPrototypeMethod(tpl, "setBalloonLayoutToTextLeft", SetBalloonLayoutToTextLeft);

	Nan::SetPrototypeMethod(tpl, "SetBalloonLayoutToTextRight", SetBalloonLayoutToTextRight);
	Nan::SetPrototypeMethod(tpl, "setBalloonLayoutToTextRight", SetBalloonLayoutToTextRight);

	Nan::SetPrototypeMethod(tpl, "SetBalloonLayoutToTextTop", SetBalloonLayoutToTextTop);
	Nan::SetPrototypeMethod(tpl, "setBalloonLayoutToTextTop", SetBalloonLayoutToTextTop);

	Nan::SetPrototypeMethod(tpl, "SetBalloonText", SetBalloonText);
	Nan::SetPrototypeMethod(tpl, "setBalloonText", SetBalloonText);

	Nan::SetPrototypeMethod(tpl, "SetFrameProperty", SetFrameProperty);
	Nan::SetPrototypeMethod(tpl, "setFrameProperty", SetFrameProperty);

	Nan::SetPrototypeMethod(tpl, "SetImageProperty", SetImageProperty);
	Nan::SetPrototypeMethod(tpl, "setImageProperty", SetImageProperty);

	Nan::SetPrototypeMethod(tpl, "SetImageSize", SetImageSize);
	Nan::SetPrototypeMethod(tpl, "setImageSize", SetImageSize);

	Nan::SetPrototypeMethod(tpl, "SetOffset", SetOffset);
	Nan::SetPrototypeMethod(tpl, "setOffset", SetOffset);

	Nan::SetPrototypeMethod(tpl, "SetPadding", SetPadding);
	Nan::SetPrototypeMethod(tpl, "setPadding", SetPadding);

	Nan::SetPrototypeMethod(tpl, "SetTextProperty", SetTextProperty);
	Nan::SetPrototypeMethod(tpl, "setTextProperty", SetTextProperty);

}

void VtkBalloonRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBalloonRepresentation> native = vtkSmartPointer<vtkBalloonRepresentation>::New();
		VtkBalloonRepresentationWrap* obj = new VtkBalloonRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBalloonRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkBalloonRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
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

void VtkBalloonRepresentationWrap::GetBalloonImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBalloonImage();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBalloonRepresentationWrap::GetBalloonLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBalloonLayout();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBalloonRepresentationWrap::GetBalloonText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBalloonText();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBalloonRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBalloonRepresentationWrap::GetFrameProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrameProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkProperty2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBalloonRepresentationWrap::GetImageProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkProperty2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBalloonRepresentationWrap::GetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPadding();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBalloonRepresentationWrap::GetPaddingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPaddingMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBalloonRepresentationWrap::GetPaddingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPaddingMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBalloonRepresentationWrap::GetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTextPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBalloonRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
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

void VtkBalloonRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	vtkBalloonRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkBalloonRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBalloonRepresentationWrap *w = new VtkBalloonRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBalloonRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
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

void VtkBalloonRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
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

void VtkBalloonRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBalloonRepresentation * r;
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
			Nan::New<v8::Function>(VtkBalloonRepresentationWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBalloonRepresentationWrap *w = new VtkBalloonRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonRepresentationWrap::SetBalloonImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBalloonImage(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonRepresentationWrap::SetBalloonLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBalloonLayout(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonRepresentationWrap::SetBalloonLayoutToImageBottom(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBalloonLayoutToImageBottom();
}

void VtkBalloonRepresentationWrap::SetBalloonLayoutToImageLeft(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBalloonLayoutToImageLeft();
}

void VtkBalloonRepresentationWrap::SetBalloonLayoutToImageRight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBalloonLayoutToImageRight();
}

void VtkBalloonRepresentationWrap::SetBalloonLayoutToImageTop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBalloonLayoutToImageTop();
}

void VtkBalloonRepresentationWrap::SetBalloonLayoutToTextBottom(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBalloonLayoutToTextBottom();
}

void VtkBalloonRepresentationWrap::SetBalloonLayoutToTextLeft(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBalloonLayoutToTextLeft();
}

void VtkBalloonRepresentationWrap::SetBalloonLayoutToTextRight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBalloonLayoutToTextRight();
}

void VtkBalloonRepresentationWrap::SetBalloonLayoutToTextTop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBalloonLayoutToTextTop();
}

void VtkBalloonRepresentationWrap::SetBalloonText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBalloonText(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonRepresentationWrap::SetFrameProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkProperty2DWrap *a0 = ObjectWrap::Unwrap<VtkProperty2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFrameProperty(
			(vtkProperty2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonRepresentationWrap::SetImageProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkProperty2DWrap *a0 = ObjectWrap::Unwrap<VtkProperty2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImageProperty(
			(vtkProperty2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonRepresentationWrap::SetImageSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetImageSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonRepresentationWrap::SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOffset(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonRepresentationWrap::SetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPadding(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonRepresentationWrap::SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info.Holder());
	vtkBalloonRepresentation *native = (vtkBalloonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextProperty(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

