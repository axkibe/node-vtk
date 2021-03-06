/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkContinuousValueWidgetRepresentationWrap.h"
#include "vtkCompassRepresentationWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkCoordinateWrap.h"
#include "vtkProperty2DWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"
#include "vtkRendererWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompassRepresentationWrap::ptpl;

VtkCompassRepresentationWrap::VtkCompassRepresentationWrap()
{ }

VtkCompassRepresentationWrap::VtkCompassRepresentationWrap(vtkSmartPointer<vtkCompassRepresentation> _native)
{ native = _native; }

VtkCompassRepresentationWrap::~VtkCompassRepresentationWrap()
{ }

void VtkCompassRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompassRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompassRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkCompassRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompassRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContinuousValueWidgetRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContinuousValueWidgetRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompassRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "DistanceWidgetInteraction", DistanceWidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "distanceWidgetInteraction", DistanceWidgetInteraction);

	Nan::SetPrototypeMethod(tpl, "EndDistance", EndDistance);
	Nan::SetPrototypeMethod(tpl, "endDistance", EndDistance);

	Nan::SetPrototypeMethod(tpl, "EndTilt", EndTilt);
	Nan::SetPrototypeMethod(tpl, "endTilt", EndTilt);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetDistance", GetDistance);
	Nan::SetPrototypeMethod(tpl, "getDistance", GetDistance);

	Nan::SetPrototypeMethod(tpl, "GetHeading", GetHeading);
	Nan::SetPrototypeMethod(tpl, "getHeading", GetHeading);

	Nan::SetPrototypeMethod(tpl, "GetLabelProperty", GetLabelProperty);
	Nan::SetPrototypeMethod(tpl, "getLabelProperty", GetLabelProperty);

	Nan::SetPrototypeMethod(tpl, "GetPoint1Coordinate", GetPoint1Coordinate);
	Nan::SetPrototypeMethod(tpl, "getPoint1Coordinate", GetPoint1Coordinate);

	Nan::SetPrototypeMethod(tpl, "GetPoint2Coordinate", GetPoint2Coordinate);
	Nan::SetPrototypeMethod(tpl, "getPoint2Coordinate", GetPoint2Coordinate);

	Nan::SetPrototypeMethod(tpl, "GetRingProperty", GetRingProperty);
	Nan::SetPrototypeMethod(tpl, "getRingProperty", GetRingProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedProperty", GetSelectedProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedProperty", GetSelectedProperty);

	Nan::SetPrototypeMethod(tpl, "GetTilt", GetTilt);
	Nan::SetPrototypeMethod(tpl, "getTilt", GetTilt);

	Nan::SetPrototypeMethod(tpl, "Highlight", Highlight);
	Nan::SetPrototypeMethod(tpl, "highlight", Highlight);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PlaceWidget", PlaceWidget);
	Nan::SetPrototypeMethod(tpl, "placeWidget", PlaceWidget);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDistance", SetDistance);
	Nan::SetPrototypeMethod(tpl, "setDistance", SetDistance);

	Nan::SetPrototypeMethod(tpl, "SetHeading", SetHeading);
	Nan::SetPrototypeMethod(tpl, "setHeading", SetHeading);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	Nan::SetPrototypeMethod(tpl, "SetTilt", SetTilt);
	Nan::SetPrototypeMethod(tpl, "setTilt", SetTilt);

	Nan::SetPrototypeMethod(tpl, "StartWidgetInteraction", StartWidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "startWidgetInteraction", StartWidgetInteraction);

	Nan::SetPrototypeMethod(tpl, "TiltWidgetInteraction", TiltWidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "tiltWidgetInteraction", TiltWidgetInteraction);

	Nan::SetPrototypeMethod(tpl, "UpdateDistance", UpdateDistance);
	Nan::SetPrototypeMethod(tpl, "updateDistance", UpdateDistance);

	Nan::SetPrototypeMethod(tpl, "UpdateTilt", UpdateTilt);
	Nan::SetPrototypeMethod(tpl, "updateTilt", UpdateTilt);

	Nan::SetPrototypeMethod(tpl, "WidgetInteraction", WidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "widgetInteraction", WidgetInteraction);

#ifdef VTK_NODE_PLUS_VTKCOMPASSREPRESENTATIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCOMPASSREPRESENTATIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCompassRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCompassRepresentation> native = vtkSmartPointer<vtkCompassRepresentation>::New();
		VtkCompassRepresentationWrap* obj = new VtkCompassRepresentationWrap(native);
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

void VtkCompassRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkCompassRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
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

void VtkCompassRepresentationWrap::DistanceWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DistanceWidgetInteraction(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->DistanceWidgetInteraction(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompassRepresentationWrap::EndDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndDistance();
}

void VtkCompassRepresentationWrap::EndTilt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndTilt();
}

void VtkCompassRepresentationWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
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

void VtkCompassRepresentationWrap::GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompassRepresentationWrap::GetHeading(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeading();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompassRepresentationWrap::GetLabelProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompassRepresentationWrap::GetPoint1Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompassRepresentationWrap::GetPoint2Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompassRepresentationWrap::GetRingProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRingProperty();
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

void VtkCompassRepresentationWrap::GetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
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

void VtkCompassRepresentationWrap::GetTilt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTilt();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompassRepresentationWrap::Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
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

void VtkCompassRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	vtkCompassRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCompassRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompassRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompassRepresentationWrap *w = new VtkCompassRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompassRepresentationWrap::PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PlaceWidget(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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

void VtkCompassRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
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

void VtkCompassRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
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

void VtkCompassRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
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

void VtkCompassRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkCompassRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkCompassRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompassRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompassRepresentationWrap *w = new VtkCompassRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompassRepresentationWrap::SetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompassRepresentationWrap::SetHeading(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeading(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompassRepresentationWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
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

void VtkCompassRepresentationWrap::SetTilt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTilt(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompassRepresentationWrap::StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->StartWidgetInteraction(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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

void VtkCompassRepresentationWrap::TiltWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->TiltWidgetInteraction(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->TiltWidgetInteraction(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompassRepresentationWrap::UpdateDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->UpdateDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompassRepresentationWrap::UpdateTilt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->UpdateTilt(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompassRepresentationWrap::WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info.Holder());
	vtkCompassRepresentation *native = (vtkCompassRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->WidgetInteraction(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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

