/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAngleRepresentationWrap.h"
#include "vtkAngleRepresentation2DWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkLeaderActor2DWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAngleRepresentation2DWrap::ptpl;

VtkAngleRepresentation2DWrap::VtkAngleRepresentation2DWrap()
{ }

VtkAngleRepresentation2DWrap::VtkAngleRepresentation2DWrap(vtkSmartPointer<vtkAngleRepresentation2D> _native)
{ native = _native; }

VtkAngleRepresentation2DWrap::~VtkAngleRepresentation2DWrap()
{ }

void VtkAngleRepresentation2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAngleRepresentation2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AngleRepresentation2D").ToLocalChecked(), ConstructorGetter);
}

void VtkAngleRepresentation2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAngleRepresentation2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAngleRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAngleRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAngleRepresentation2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetAngle", GetAngle);
	Nan::SetPrototypeMethod(tpl, "getAngle", GetAngle);

	Nan::SetPrototypeMethod(tpl, "GetArc", GetArc);
	Nan::SetPrototypeMethod(tpl, "getArc", GetArc);

	Nan::SetPrototypeMethod(tpl, "GetCenterDisplayPosition", GetCenterDisplayPosition);
	Nan::SetPrototypeMethod(tpl, "getCenterDisplayPosition", GetCenterDisplayPosition);

	Nan::SetPrototypeMethod(tpl, "GetCenterWorldPosition", GetCenterWorldPosition);
	Nan::SetPrototypeMethod(tpl, "getCenterWorldPosition", GetCenterWorldPosition);

	Nan::SetPrototypeMethod(tpl, "GetPoint1DisplayPosition", GetPoint1DisplayPosition);
	Nan::SetPrototypeMethod(tpl, "getPoint1DisplayPosition", GetPoint1DisplayPosition);

	Nan::SetPrototypeMethod(tpl, "GetPoint1WorldPosition", GetPoint1WorldPosition);
	Nan::SetPrototypeMethod(tpl, "getPoint1WorldPosition", GetPoint1WorldPosition);

	Nan::SetPrototypeMethod(tpl, "GetPoint2DisplayPosition", GetPoint2DisplayPosition);
	Nan::SetPrototypeMethod(tpl, "getPoint2DisplayPosition", GetPoint2DisplayPosition);

	Nan::SetPrototypeMethod(tpl, "GetPoint2WorldPosition", GetPoint2WorldPosition);
	Nan::SetPrototypeMethod(tpl, "getPoint2WorldPosition", GetPoint2WorldPosition);

	Nan::SetPrototypeMethod(tpl, "GetRay1", GetRay1);
	Nan::SetPrototypeMethod(tpl, "getRay1", GetRay1);

	Nan::SetPrototypeMethod(tpl, "GetRay2", GetRay2);
	Nan::SetPrototypeMethod(tpl, "getRay2", GetRay2);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenterDisplayPosition", SetCenterDisplayPosition);
	Nan::SetPrototypeMethod(tpl, "setCenterDisplayPosition", SetCenterDisplayPosition);

	Nan::SetPrototypeMethod(tpl, "SetPoint1DisplayPosition", SetPoint1DisplayPosition);
	Nan::SetPrototypeMethod(tpl, "setPoint1DisplayPosition", SetPoint1DisplayPosition);

	Nan::SetPrototypeMethod(tpl, "SetPoint2DisplayPosition", SetPoint2DisplayPosition);
	Nan::SetPrototypeMethod(tpl, "setPoint2DisplayPosition", SetPoint2DisplayPosition);

#ifdef VTK_NODE_PLUS_VTKANGLEREPRESENTATION2DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKANGLEREPRESENTATION2DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAngleRepresentation2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAngleRepresentation2D> native = vtkSmartPointer<vtkAngleRepresentation2D>::New();
		VtkAngleRepresentation2DWrap* obj = new VtkAngleRepresentation2DWrap(native);
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

void VtkAngleRepresentation2DWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkAngleRepresentation2DWrap::GetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAngleRepresentation2DWrap::GetArc(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
	vtkLeaderActor2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArc();
	VtkLeaderActor2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLeaderActor2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLeaderActor2DWrap *w = new VtkLeaderActor2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAngleRepresentation2DWrap::GetCenterDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
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
		native->GetCenterDisplayPosition(
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
		native->GetCenterDisplayPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAngleRepresentation2DWrap::GetCenterWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
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
		native->GetCenterWorldPosition(
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
		native->GetCenterWorldPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAngleRepresentation2DWrap::GetPoint1DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAngleRepresentation2DWrap::GetPoint1WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAngleRepresentation2DWrap::GetPoint2DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAngleRepresentation2DWrap::GetPoint2WorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAngleRepresentation2DWrap::GetRay1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
	vtkLeaderActor2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRay1();
	VtkLeaderActor2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLeaderActor2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLeaderActor2DWrap *w = new VtkLeaderActor2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAngleRepresentation2DWrap::GetRay2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
	vtkLeaderActor2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRay2();
	VtkLeaderActor2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLeaderActor2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLeaderActor2DWrap *w = new VtkLeaderActor2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAngleRepresentation2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
	vtkAngleRepresentation2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAngleRepresentation2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAngleRepresentation2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAngleRepresentation2DWrap *w = new VtkAngleRepresentation2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAngleRepresentation2DWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAngleRepresentation2DWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAngleRepresentation2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkAngleRepresentation2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkAngleRepresentation2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAngleRepresentation2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAngleRepresentation2DWrap *w = new VtkAngleRepresentation2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAngleRepresentation2DWrap::SetCenterDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
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
		native->SetCenterDisplayPosition(
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
		native->SetCenterDisplayPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAngleRepresentation2DWrap::SetPoint1DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkAngleRepresentation2DWrap::SetPoint2DisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkAngleRepresentation2DWrap>(info.Holder());
	vtkAngleRepresentation2D *native = (vtkAngleRepresentation2D *)wrapper->native.GetPointer();
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
