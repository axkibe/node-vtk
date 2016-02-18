/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkBorderRepresentationWrap.h"
#include "vtkScalarBarRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkScalarBarActorWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkScalarBarRepresentationWrap::ptpl;

VtkScalarBarRepresentationWrap::VtkScalarBarRepresentationWrap()
{ }

VtkScalarBarRepresentationWrap::VtkScalarBarRepresentationWrap(vtkSmartPointer<vtkScalarBarRepresentation> _native)
{ native = _native; }

VtkScalarBarRepresentationWrap::~VtkScalarBarRepresentationWrap()
{ }

void VtkScalarBarRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkScalarBarRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ScalarBarRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkScalarBarRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkScalarBarRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkBorderRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkBorderRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkScalarBarRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetActors2D", GetActors2D);
	Nan::SetPrototypeMethod(tpl, "getActors2D", GetActors2D);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetScalarBarActor", GetScalarBarActor);
	Nan::SetPrototypeMethod(tpl, "getScalarBarActor", GetScalarBarActor);

	Nan::SetPrototypeMethod(tpl, "GetSize", GetSize);
	Nan::SetPrototypeMethod(tpl, "getSize", GetSize);

	Nan::SetPrototypeMethod(tpl, "GetVisibility", GetVisibility);
	Nan::SetPrototypeMethod(tpl, "getVisibility", GetVisibility);

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

	Nan::SetPrototypeMethod(tpl, "SetOrientation", SetOrientation);
	Nan::SetPrototypeMethod(tpl, "setOrientation", SetOrientation);

	Nan::SetPrototypeMethod(tpl, "SetScalarBarActor", SetScalarBarActor);
	Nan::SetPrototypeMethod(tpl, "setScalarBarActor", SetScalarBarActor);

	Nan::SetPrototypeMethod(tpl, "SetVisibility", SetVisibility);
	Nan::SetPrototypeMethod(tpl, "setVisibility", SetVisibility);

	Nan::SetPrototypeMethod(tpl, "WidgetInteraction", WidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "widgetInteraction", WidgetInteraction);

#ifdef VTK_NODE_PLUS_VTKSCALARBARREPRESENTATIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSCALARBARREPRESENTATIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkScalarBarRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkScalarBarRepresentation> native = vtkSmartPointer<vtkScalarBarRepresentation>::New();
		VtkScalarBarRepresentationWrap* obj = new VtkScalarBarRepresentationWrap(native);
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

void VtkScalarBarRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkScalarBarRepresentationWrap::GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
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

void VtkScalarBarRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkScalarBarRepresentationWrap::GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScalarBarRepresentationWrap::GetScalarBarActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
	vtkScalarBarActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarBarActor();
	VtkScalarBarActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarBarActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarBarActorWrap *w = new VtkScalarBarActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarBarRepresentationWrap::GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
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
		native->GetSize(
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
		native->GetSize(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarBarRepresentationWrap::GetVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScalarBarRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScalarBarRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
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

void VtkScalarBarRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
	vtkScalarBarRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkScalarBarRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarBarRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarBarRepresentationWrap *w = new VtkScalarBarRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarBarRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
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

void VtkScalarBarRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
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

void VtkScalarBarRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
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

void VtkScalarBarRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
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

void VtkScalarBarRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkScalarBarRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkScalarBarRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkScalarBarRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkScalarBarRepresentationWrap *w = new VtkScalarBarRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarBarRepresentationWrap::SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarBarRepresentationWrap::SetScalarBarActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarBarActorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarBarActorWrap *a0 = ObjectWrap::Unwrap<VtkScalarBarActorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarBarActor(
			(vtkScalarBarActor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarBarRepresentationWrap::SetVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVisibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarBarRepresentationWrap::WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info.Holder());
	vtkScalarBarRepresentation *native = (vtkScalarBarRepresentation *)wrapper->native.GetPointer();
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

