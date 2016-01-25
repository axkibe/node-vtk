/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAffineRepresentationWrap.h"
#include "vtkAffineRepresentation2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTransformWrap.h"
#include "vtkProperty2DWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkPropWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAffineRepresentation2DWrap::constructor;

VtkAffineRepresentation2DWrap::VtkAffineRepresentation2DWrap()
{ }

VtkAffineRepresentation2DWrap::VtkAffineRepresentation2DWrap(vtkSmartPointer<vtkAffineRepresentation2D> _native)
{ native = _native; }

VtkAffineRepresentation2DWrap::~VtkAffineRepresentation2DWrap()
{ }

void VtkAffineRepresentation2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkAffineRepresentation2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkPropWrap::InitTpl(tpl);
	VtkWidgetRepresentationWrap::InitTpl(tpl);
	VtkAffineRepresentationWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkAffineRepresentation2D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AffineRepresentation2D").ToLocalChecked(),tpl->GetFunction());
}

void VtkAffineRepresentation2DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "DisplayTextOff", DisplayTextOff);
	Nan::SetPrototypeMethod(tpl, "displayTextOff", DisplayTextOff);

	Nan::SetPrototypeMethod(tpl, "DisplayTextOn", DisplayTextOn);
	Nan::SetPrototypeMethod(tpl, "displayTextOn", DisplayTextOn);

	Nan::SetPrototypeMethod(tpl, "GetActors2D", GetActors2D);
	Nan::SetPrototypeMethod(tpl, "getActors2D", GetActors2D);

	Nan::SetPrototypeMethod(tpl, "GetAxesWidth", GetAxesWidth);
	Nan::SetPrototypeMethod(tpl, "getAxesWidth", GetAxesWidth);

	Nan::SetPrototypeMethod(tpl, "GetAxesWidthMaxValue", GetAxesWidthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAxesWidthMaxValue", GetAxesWidthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAxesWidthMinValue", GetAxesWidthMinValue);
	Nan::SetPrototypeMethod(tpl, "getAxesWidthMinValue", GetAxesWidthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetBoxWidth", GetBoxWidth);
	Nan::SetPrototypeMethod(tpl, "getBoxWidth", GetBoxWidth);

	Nan::SetPrototypeMethod(tpl, "GetBoxWidthMaxValue", GetBoxWidthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getBoxWidthMaxValue", GetBoxWidthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetBoxWidthMinValue", GetBoxWidthMinValue);
	Nan::SetPrototypeMethod(tpl, "getBoxWidthMinValue", GetBoxWidthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetCircleWidth", GetCircleWidth);
	Nan::SetPrototypeMethod(tpl, "getCircleWidth", GetCircleWidth);

	Nan::SetPrototypeMethod(tpl, "GetCircleWidthMaxValue", GetCircleWidthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCircleWidthMaxValue", GetCircleWidthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCircleWidthMinValue", GetCircleWidthMinValue);
	Nan::SetPrototypeMethod(tpl, "getCircleWidthMinValue", GetCircleWidthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDisplayText", GetDisplayText);
	Nan::SetPrototypeMethod(tpl, "getDisplayText", GetDisplayText);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedProperty", GetSelectedProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedProperty", GetSelectedProperty);

	Nan::SetPrototypeMethod(tpl, "GetTextProperty", GetTextProperty);
	Nan::SetPrototypeMethod(tpl, "getTextProperty", GetTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

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

	Nan::SetPrototypeMethod(tpl, "SetAxesWidth", SetAxesWidth);
	Nan::SetPrototypeMethod(tpl, "setAxesWidth", SetAxesWidth);

	Nan::SetPrototypeMethod(tpl, "SetBoxWidth", SetBoxWidth);
	Nan::SetPrototypeMethod(tpl, "setBoxWidth", SetBoxWidth);

	Nan::SetPrototypeMethod(tpl, "SetCircleWidth", SetCircleWidth);
	Nan::SetPrototypeMethod(tpl, "setCircleWidth", SetCircleWidth);

	Nan::SetPrototypeMethod(tpl, "SetDisplayText", SetDisplayText);
	Nan::SetPrototypeMethod(tpl, "setDisplayText", SetDisplayText);

	Nan::SetPrototypeMethod(tpl, "SetOrigin", SetOrigin);
	Nan::SetPrototypeMethod(tpl, "setOrigin", SetOrigin);

	Nan::SetPrototypeMethod(tpl, "SetProperty", SetProperty);
	Nan::SetPrototypeMethod(tpl, "setProperty", SetProperty);

	Nan::SetPrototypeMethod(tpl, "SetSelectedProperty", SetSelectedProperty);
	Nan::SetPrototypeMethod(tpl, "setSelectedProperty", SetSelectedProperty);

	Nan::SetPrototypeMethod(tpl, "SetTextProperty", SetTextProperty);
	Nan::SetPrototypeMethod(tpl, "setTextProperty", SetTextProperty);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

}

void VtkAffineRepresentation2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAffineRepresentation2D> native = vtkSmartPointer<vtkAffineRepresentation2D>::New();
		VtkAffineRepresentation2DWrap* obj = new VtkAffineRepresentation2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAffineRepresentation2DWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkAffineRepresentation2DWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAffineRepresentation2DWrap::DisplayTextOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisplayTextOff();
}

void VtkAffineRepresentation2DWrap::DisplayTextOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisplayTextOn();
}

void VtkAffineRepresentation2DWrap::GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkAffineRepresentation2DWrap::GetAxesWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAxesWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAffineRepresentation2DWrap::GetAxesWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAxesWidthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAffineRepresentation2DWrap::GetAxesWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAxesWidthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAffineRepresentation2DWrap::GetBoxWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoxWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAffineRepresentation2DWrap::GetBoxWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoxWidthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAffineRepresentation2DWrap::GetBoxWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoxWidthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAffineRepresentation2DWrap::GetCircleWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCircleWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAffineRepresentation2DWrap::GetCircleWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCircleWidthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAffineRepresentation2DWrap::GetCircleWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCircleWidthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAffineRepresentation2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAffineRepresentation2DWrap::GetDisplayText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplayText();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAffineRepresentation2DWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProperty();
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

void VtkAffineRepresentation2DWrap::GetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedProperty();
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

void VtkAffineRepresentation2DWrap::GetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAffineRepresentation2DWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTransformWrap *a0 = ObjectWrap::Unwrap<VtkTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetTransform(
			(vtkTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAffineRepresentation2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAffineRepresentation2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	vtkAffineRepresentation2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAffineRepresentation2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAffineRepresentation2DWrap *w = new VtkAffineRepresentation2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAffineRepresentation2DWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAffineRepresentation2DWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAffineRepresentation2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAffineRepresentation2D * r;
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
			Nan::New<v8::Function>(VtkAffineRepresentation2DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAffineRepresentation2DWrap *w = new VtkAffineRepresentation2DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAffineRepresentation2DWrap::SetAxesWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAxesWidth(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAffineRepresentation2DWrap::SetBoxWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBoxWidth(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAffineRepresentation2DWrap::SetCircleWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCircleWidth(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAffineRepresentation2DWrap::SetDisplayText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplayText(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAffineRepresentation2DWrap::SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAffineRepresentation2DWrap::SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkProperty2DWrap *a0 = ObjectWrap::Unwrap<VtkProperty2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProperty(
			(vtkProperty2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAffineRepresentation2DWrap::SetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkProperty2DWrap *a0 = ObjectWrap::Unwrap<VtkProperty2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedProperty(
			(vtkProperty2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAffineRepresentation2DWrap::SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAffineRepresentation2DWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
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

