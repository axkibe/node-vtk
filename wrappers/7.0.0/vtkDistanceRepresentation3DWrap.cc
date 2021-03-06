/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDistanceRepresentationWrap.h"
#include "vtkDistanceRepresentation3DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkActorWrap.h"
#include "vtkFollowerWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDistanceRepresentation3DWrap::ptpl;

VtkDistanceRepresentation3DWrap::VtkDistanceRepresentation3DWrap()
{ }

VtkDistanceRepresentation3DWrap::VtkDistanceRepresentation3DWrap(vtkSmartPointer<vtkDistanceRepresentation3D> _native)
{ native = _native; }

VtkDistanceRepresentation3DWrap::~VtkDistanceRepresentation3DWrap()
{ }

void VtkDistanceRepresentation3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDistanceRepresentation3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DistanceRepresentation3D").ToLocalChecked(), ConstructorGetter);
}

void VtkDistanceRepresentation3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDistanceRepresentation3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDistanceRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDistanceRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDistanceRepresentation3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDistance", GetDistance);
	Nan::SetPrototypeMethod(tpl, "getDistance", GetDistance);

	Nan::SetPrototypeMethod(tpl, "GetGlyphActor", GetGlyphActor);
	Nan::SetPrototypeMethod(tpl, "getGlyphActor", GetGlyphActor);

	Nan::SetPrototypeMethod(tpl, "GetGlyphScale", GetGlyphScale);
	Nan::SetPrototypeMethod(tpl, "getGlyphScale", GetGlyphScale);

	Nan::SetPrototypeMethod(tpl, "GetLabelActor", GetLabelActor);
	Nan::SetPrototypeMethod(tpl, "getLabelActor", GetLabelActor);

	Nan::SetPrototypeMethod(tpl, "GetLabelPosition", GetLabelPosition);
	Nan::SetPrototypeMethod(tpl, "getLabelPosition", GetLabelPosition);

	Nan::SetPrototypeMethod(tpl, "GetLabelProperty", GetLabelProperty);
	Nan::SetPrototypeMethod(tpl, "getLabelProperty", GetLabelProperty);

	Nan::SetPrototypeMethod(tpl, "GetLineProperty", GetLineProperty);
	Nan::SetPrototypeMethod(tpl, "getLineProperty", GetLineProperty);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfRulerTicks", GetMaximumNumberOfRulerTicks);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfRulerTicks", GetMaximumNumberOfRulerTicks);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfRulerTicksMaxValue", GetMaximumNumberOfRulerTicksMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfRulerTicksMaxValue", GetMaximumNumberOfRulerTicksMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfRulerTicksMinValue", GetMaximumNumberOfRulerTicksMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfRulerTicksMinValue", GetMaximumNumberOfRulerTicksMinValue);

	Nan::SetPrototypeMethod(tpl, "GetPoint1DisplayPosition", GetPoint1DisplayPosition);
	Nan::SetPrototypeMethod(tpl, "getPoint1DisplayPosition", GetPoint1DisplayPosition);

	Nan::SetPrototypeMethod(tpl, "GetPoint1WorldPosition", GetPoint1WorldPosition);
	Nan::SetPrototypeMethod(tpl, "getPoint1WorldPosition", GetPoint1WorldPosition);

	Nan::SetPrototypeMethod(tpl, "GetPoint2DisplayPosition", GetPoint2DisplayPosition);
	Nan::SetPrototypeMethod(tpl, "getPoint2DisplayPosition", GetPoint2DisplayPosition);

	Nan::SetPrototypeMethod(tpl, "GetPoint2WorldPosition", GetPoint2WorldPosition);
	Nan::SetPrototypeMethod(tpl, "getPoint2WorldPosition", GetPoint2WorldPosition);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

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

	Nan::SetPrototypeMethod(tpl, "SetGlyphScale", SetGlyphScale);
	Nan::SetPrototypeMethod(tpl, "setGlyphScale", SetGlyphScale);

	Nan::SetPrototypeMethod(tpl, "SetLabelPosition", SetLabelPosition);
	Nan::SetPrototypeMethod(tpl, "setLabelPosition", SetLabelPosition);

	Nan::SetPrototypeMethod(tpl, "SetLabelScale", SetLabelScale);
	Nan::SetPrototypeMethod(tpl, "setLabelScale", SetLabelScale);

	Nan::SetPrototypeMethod(tpl, "SetMaximumNumberOfRulerTicks", SetMaximumNumberOfRulerTicks);
	Nan::SetPrototypeMethod(tpl, "setMaximumNumberOfRulerTicks", SetMaximumNumberOfRulerTicks);

	Nan::SetPrototypeMethod(tpl, "SetPoint1DisplayPosition", SetPoint1DisplayPosition);
	Nan::SetPrototypeMethod(tpl, "setPoint1DisplayPosition", SetPoint1DisplayPosition);

	Nan::SetPrototypeMethod(tpl, "SetPoint1WorldPosition", SetPoint1WorldPosition);
	Nan::SetPrototypeMethod(tpl, "setPoint1WorldPosition", SetPoint1WorldPosition);

	Nan::SetPrototypeMethod(tpl, "SetPoint2DisplayPosition", SetPoint2DisplayPosition);
	Nan::SetPrototypeMethod(tpl, "setPoint2DisplayPosition", SetPoint2DisplayPosition);

	Nan::SetPrototypeMethod(tpl, "SetPoint2WorldPosition", SetPoint2WorldPosition);
	Nan::SetPrototypeMethod(tpl, "setPoint2WorldPosition", SetPoint2WorldPosition);

#ifdef VTK_NODE_PLUS_VTKDISTANCEREPRESENTATION3DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDISTANCEREPRESENTATION3DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkDistanceRepresentation3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDistanceRepresentation3D> native = vtkSmartPointer<vtkDistanceRepresentation3D>::New();
		VtkDistanceRepresentation3DWrap* obj = new VtkDistanceRepresentation3DWrap(native);
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

void VtkDistanceRepresentation3DWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkDistanceRepresentation3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDistanceRepresentation3DWrap::GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentation3DWrap::GetGlyphActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	vtkActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlyphActor();
	VtkActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkActorWrap *w = new VtkActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDistanceRepresentation3DWrap::GetGlyphScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlyphScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentation3DWrap::GetLabelActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	vtkFollower * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelActor();
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

void VtkDistanceRepresentation3DWrap::GetLabelPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelPosition();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentation3DWrap::GetLabelProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelProperty();
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

void VtkDistanceRepresentation3DWrap::GetLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineProperty();
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

void VtkDistanceRepresentation3DWrap::GetMaximumNumberOfRulerTicks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfRulerTicks();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentation3DWrap::GetMaximumNumberOfRulerTicksMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfRulerTicksMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentation3DWrap::GetMaximumNumberOfRulerTicksMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfRulerTicksMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceRepresentation3DWrap::GetPoint1DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetPoint1DisplayPosition(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->GetPoint1DisplayPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentation3DWrap::GetPoint1WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetPoint1WorldPosition(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->GetPoint1WorldPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentation3DWrap::GetPoint2DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetPoint2DisplayPosition(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->GetPoint2DisplayPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentation3DWrap::GetPoint2WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetPoint2WorldPosition(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->GetPoint2WorldPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentation3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
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

void VtkDistanceRepresentation3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	vtkDistanceRepresentation3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDistanceRepresentation3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDistanceRepresentation3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDistanceRepresentation3DWrap *w = new VtkDistanceRepresentation3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDistanceRepresentation3DWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
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

void VtkDistanceRepresentation3DWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
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

void VtkDistanceRepresentation3DWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
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

void VtkDistanceRepresentation3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDistanceRepresentation3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkDistanceRepresentation3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDistanceRepresentation3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDistanceRepresentation3DWrap *w = new VtkDistanceRepresentation3DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentation3DWrap::SetGlyphScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGlyphScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentation3DWrap::SetLabelPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelPosition(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentation3DWrap::SetLabelScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelScale(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->SetLabelScale(
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
				native->SetLabelScale(
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

void VtkDistanceRepresentation3DWrap::SetMaximumNumberOfRulerTicks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumNumberOfRulerTicks(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentation3DWrap::SetPoint1DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoint1DisplayPosition(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->SetPoint1DisplayPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentation3DWrap::SetPoint1WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoint1WorldPosition(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->SetPoint1WorldPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentation3DWrap::SetPoint2DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoint2DisplayPosition(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->SetPoint2DisplayPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceRepresentation3DWrap::SetPoint2WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceRepresentation3DWrap>(info.Holder());
	vtkDistanceRepresentation3D *native = (vtkDistanceRepresentation3D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoint2WorldPosition(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->SetPoint2WorldPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

