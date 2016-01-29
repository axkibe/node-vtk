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
Nan::Persistent<v8::FunctionTemplate> VtkAffineRepresentation2DWrap::ptpl;

VtkAffineRepresentation2DWrap::VtkAffineRepresentation2DWrap()
{ }

VtkAffineRepresentation2DWrap::VtkAffineRepresentation2DWrap(vtkSmartPointer<vtkAffineRepresentation2D> _native)
{ native = _native; }

VtkAffineRepresentation2DWrap::~VtkAffineRepresentation2DWrap()
{ }

void VtkAffineRepresentation2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAffineRepresentation2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AffineRepresentation2D").ToLocalChecked(), ConstructorGetter);
}

void VtkAffineRepresentation2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAffineRepresentation2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAffineRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAffineRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAffineRepresentation2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "DisplayTextOff", DisplayTextOff);
	Nan::SetPrototypeMethod(tpl, "displayTextOff", DisplayTextOff);

	Nan::SetPrototypeMethod(tpl, "DisplayTextOn", DisplayTextOn);
	Nan::SetPrototypeMethod(tpl, "displayTextOn", DisplayTextOn);

	Nan::SetPrototypeMethod(tpl, "EndWidgetInteraction", EndWidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "endWidgetInteraction", EndWidgetInteraction);

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

	Nan::SetPrototypeMethod(tpl, "PlaceWidget", PlaceWidget);
	Nan::SetPrototypeMethod(tpl, "placeWidget", PlaceWidget);

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

	Nan::SetPrototypeMethod(tpl, "StartWidgetInteraction", StartWidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "startWidgetInteraction", StartWidgetInteraction);

	Nan::SetPrototypeMethod(tpl, "WidgetInteraction", WidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "widgetInteraction", WidgetInteraction);

	ptpl.Reset( tpl );
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
		VtkAffineRepresentation2DWrap* obj = new VtkAffineRepresentation2DWrap(native);
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

void VtkAffineRepresentation2DWrap::EndWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->EndWidgetInteraction(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAffineRepresentation2DWrap::GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
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
		VtkProperty2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProperty2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native = r;
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
		VtkProperty2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProperty2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native = r;
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
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAffineRepresentation2DWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTransformWrap::ptpl))->HasInstance(info[0]))
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
		VtkAffineRepresentation2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAffineRepresentation2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAffineRepresentation2DWrap *w = new VtkAffineRepresentation2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAffineRepresentation2DWrap::PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->PlaceWidget(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAffineRepresentation2DWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAffineRepresentation2DWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAffineRepresentation2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
			VtkAffineRepresentation2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAffineRepresentation2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAffineRepresentation2DWrap *w = new VtkAffineRepresentation2DWrap();
		w->native = r;
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
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
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

void VtkAffineRepresentation2DWrap::SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkProperty2DWrap::ptpl))->HasInstance(info[0]))
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkProperty2DWrap::ptpl))->HasInstance(info[0]))
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
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

void VtkAffineRepresentation2DWrap::StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->StartWidgetInteraction(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAffineRepresentation2DWrap::WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAffineRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAffineRepresentation2DWrap>(info.Holder());
	vtkAffineRepresentation2D *native = (vtkAffineRepresentation2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->WidgetInteraction(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

