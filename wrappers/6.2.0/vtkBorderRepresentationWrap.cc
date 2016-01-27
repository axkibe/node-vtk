/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWidgetRepresentationWrap.h"
#include "vtkBorderRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCoordinateWrap.h"
#include "vtkProperty2DWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBorderRepresentationWrap::ptpl;

VtkBorderRepresentationWrap::VtkBorderRepresentationWrap()
{ }

VtkBorderRepresentationWrap::VtkBorderRepresentationWrap(vtkSmartPointer<vtkBorderRepresentation> _native)
{ native = _native; }

VtkBorderRepresentationWrap::~VtkBorderRepresentationWrap()
{ }

void VtkBorderRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBorderRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BorderRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkBorderRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBorderRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWidgetRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBorderRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetActors2D", GetActors2D);
	Nan::SetPrototypeMethod(tpl, "getActors2D", GetActors2D);

	Nan::SetPrototypeMethod(tpl, "GetBorderProperty", GetBorderProperty);
	Nan::SetPrototypeMethod(tpl, "getBorderProperty", GetBorderProperty);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMoving", GetMoving);
	Nan::SetPrototypeMethod(tpl, "getMoving", GetMoving);

	Nan::SetPrototypeMethod(tpl, "GetPosition2Coordinate", GetPosition2Coordinate);
	Nan::SetPrototypeMethod(tpl, "getPosition2Coordinate", GetPosition2Coordinate);

	Nan::SetPrototypeMethod(tpl, "GetPositionCoordinate", GetPositionCoordinate);
	Nan::SetPrototypeMethod(tpl, "getPositionCoordinate", GetPositionCoordinate);

	Nan::SetPrototypeMethod(tpl, "GetProportionalResize", GetProportionalResize);
	Nan::SetPrototypeMethod(tpl, "getProportionalResize", GetProportionalResize);

	Nan::SetPrototypeMethod(tpl, "GetShowBorder", GetShowBorder);
	Nan::SetPrototypeMethod(tpl, "getShowBorder", GetShowBorder);

	Nan::SetPrototypeMethod(tpl, "GetShowBorderMaxValue", GetShowBorderMaxValue);
	Nan::SetPrototypeMethod(tpl, "getShowBorderMaxValue", GetShowBorderMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetShowBorderMinValue", GetShowBorderMinValue);
	Nan::SetPrototypeMethod(tpl, "getShowBorderMinValue", GetShowBorderMinValue);

	Nan::SetPrototypeMethod(tpl, "GetShowHorizontalBorder", GetShowHorizontalBorder);
	Nan::SetPrototypeMethod(tpl, "getShowHorizontalBorder", GetShowHorizontalBorder);

	Nan::SetPrototypeMethod(tpl, "GetShowHorizontalBorderMaxValue", GetShowHorizontalBorderMaxValue);
	Nan::SetPrototypeMethod(tpl, "getShowHorizontalBorderMaxValue", GetShowHorizontalBorderMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetShowHorizontalBorderMinValue", GetShowHorizontalBorderMinValue);
	Nan::SetPrototypeMethod(tpl, "getShowHorizontalBorderMinValue", GetShowHorizontalBorderMinValue);

	Nan::SetPrototypeMethod(tpl, "GetShowVerticalBorder", GetShowVerticalBorder);
	Nan::SetPrototypeMethod(tpl, "getShowVerticalBorder", GetShowVerticalBorder);

	Nan::SetPrototypeMethod(tpl, "GetShowVerticalBorderMaxValue", GetShowVerticalBorderMaxValue);
	Nan::SetPrototypeMethod(tpl, "getShowVerticalBorderMaxValue", GetShowVerticalBorderMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetShowVerticalBorderMinValue", GetShowVerticalBorderMinValue);
	Nan::SetPrototypeMethod(tpl, "getShowVerticalBorderMinValue", GetShowVerticalBorderMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MovingOff", MovingOff);
	Nan::SetPrototypeMethod(tpl, "movingOff", MovingOff);

	Nan::SetPrototypeMethod(tpl, "MovingOn", MovingOn);
	Nan::SetPrototypeMethod(tpl, "movingOn", MovingOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ProportionalResizeOff", ProportionalResizeOff);
	Nan::SetPrototypeMethod(tpl, "proportionalResizeOff", ProportionalResizeOff);

	Nan::SetPrototypeMethod(tpl, "ProportionalResizeOn", ProportionalResizeOn);
	Nan::SetPrototypeMethod(tpl, "proportionalResizeOn", ProportionalResizeOn);

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

	Nan::SetPrototypeMethod(tpl, "SetMaximumSize", SetMaximumSize);
	Nan::SetPrototypeMethod(tpl, "setMaximumSize", SetMaximumSize);

	Nan::SetPrototypeMethod(tpl, "SetMinimumSize", SetMinimumSize);
	Nan::SetPrototypeMethod(tpl, "setMinimumSize", SetMinimumSize);

	Nan::SetPrototypeMethod(tpl, "SetMoving", SetMoving);
	Nan::SetPrototypeMethod(tpl, "setMoving", SetMoving);

	Nan::SetPrototypeMethod(tpl, "SetPosition", SetPosition);
	Nan::SetPrototypeMethod(tpl, "setPosition", SetPosition);

	Nan::SetPrototypeMethod(tpl, "SetPosition2", SetPosition2);
	Nan::SetPrototypeMethod(tpl, "setPosition2", SetPosition2);

	Nan::SetPrototypeMethod(tpl, "SetProportionalResize", SetProportionalResize);
	Nan::SetPrototypeMethod(tpl, "setProportionalResize", SetProportionalResize);

	Nan::SetPrototypeMethod(tpl, "SetShowBorder", SetShowBorder);
	Nan::SetPrototypeMethod(tpl, "setShowBorder", SetShowBorder);

	Nan::SetPrototypeMethod(tpl, "SetShowBorderToActive", SetShowBorderToActive);
	Nan::SetPrototypeMethod(tpl, "setShowBorderToActive", SetShowBorderToActive);

	Nan::SetPrototypeMethod(tpl, "SetShowBorderToOff", SetShowBorderToOff);
	Nan::SetPrototypeMethod(tpl, "setShowBorderToOff", SetShowBorderToOff);

	Nan::SetPrototypeMethod(tpl, "SetShowBorderToOn", SetShowBorderToOn);
	Nan::SetPrototypeMethod(tpl, "setShowBorderToOn", SetShowBorderToOn);

	Nan::SetPrototypeMethod(tpl, "SetShowHorizontalBorder", SetShowHorizontalBorder);
	Nan::SetPrototypeMethod(tpl, "setShowHorizontalBorder", SetShowHorizontalBorder);

	Nan::SetPrototypeMethod(tpl, "SetShowVerticalBorder", SetShowVerticalBorder);
	Nan::SetPrototypeMethod(tpl, "setShowVerticalBorder", SetShowVerticalBorder);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	ptpl.Reset( tpl );
}

void VtkBorderRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBorderRepresentation> native = vtkSmartPointer<vtkBorderRepresentation>::New();
		VtkBorderRepresentationWrap* obj = new VtkBorderRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBorderRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkBorderRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
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

void VtkBorderRepresentationWrap::GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
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

void VtkBorderRepresentationWrap::GetBorderProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBorderProperty();
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

void VtkBorderRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBorderRepresentationWrap::GetMoving(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMoving();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::GetPosition2Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	vtkCoordinate * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPosition2Coordinate();
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

void VtkBorderRepresentationWrap::GetPositionCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	vtkCoordinate * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPositionCoordinate();
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

void VtkBorderRepresentationWrap::GetProportionalResize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProportionalResize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::GetShowBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowBorder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::GetShowBorderMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowBorderMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::GetShowBorderMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowBorderMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::GetShowHorizontalBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowHorizontalBorder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::GetShowHorizontalBorderMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowHorizontalBorderMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::GetShowHorizontalBorderMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowHorizontalBorderMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::GetShowVerticalBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowVerticalBorder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::GetShowVerticalBorderMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowVerticalBorderMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::GetShowVerticalBorderMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShowVerticalBorderMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
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

void VtkBorderRepresentationWrap::MovingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MovingOff();
}

void VtkBorderRepresentationWrap::MovingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MovingOn();
}

void VtkBorderRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	vtkBorderRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBorderRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBorderRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBorderRepresentationWrap *w = new VtkBorderRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBorderRepresentationWrap::ProportionalResizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProportionalResizeOff();
}

void VtkBorderRepresentationWrap::ProportionalResizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProportionalResizeOn();
}

void VtkBorderRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
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

void VtkBorderRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
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

void VtkBorderRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
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

void VtkBorderRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
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

void VtkBorderRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBorderRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBorderRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBorderRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBorderRepresentationWrap *w = new VtkBorderRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBorderRepresentationWrap::SetMaximumSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetMaximumSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBorderRepresentationWrap::SetMinimumSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetMinimumSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBorderRepresentationWrap::SetMoving(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMoving(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBorderRepresentationWrap::SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPosition(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBorderRepresentationWrap::SetPosition2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPosition2(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBorderRepresentationWrap::SetProportionalResize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProportionalResize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBorderRepresentationWrap::SetShowBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShowBorder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBorderRepresentationWrap::SetShowBorderToActive(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetShowBorderToActive();
}

void VtkBorderRepresentationWrap::SetShowBorderToOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetShowBorderToOff();
}

void VtkBorderRepresentationWrap::SetShowBorderToOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetShowBorderToOn();
}

void VtkBorderRepresentationWrap::SetShowHorizontalBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShowHorizontalBorder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBorderRepresentationWrap::SetShowVerticalBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShowVerticalBorder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBorderRepresentationWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info.Holder());
	vtkBorderRepresentation *native = (vtkBorderRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

