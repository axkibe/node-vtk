/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkResliceCursorRepresentationWrap.h"
#include "vtkResliceCursorLineRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"
#include "vtkResliceCursorActorWrap.h"
#include "vtkResliceCursorWrap.h"
#include "vtkMatrix4x4Wrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkResliceCursorLineRepresentationWrap::ptpl;

VtkResliceCursorLineRepresentationWrap::VtkResliceCursorLineRepresentationWrap()
{ }

VtkResliceCursorLineRepresentationWrap::VtkResliceCursorLineRepresentationWrap(vtkSmartPointer<vtkResliceCursorLineRepresentation> _native)
{ native = _native; }

VtkResliceCursorLineRepresentationWrap::~VtkResliceCursorLineRepresentationWrap()
{ }

void VtkResliceCursorLineRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkResliceCursorLineRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ResliceCursorLineRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkResliceCursorLineRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkResliceCursorLineRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkResliceCursorRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkResliceCursorRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkResliceCursorLineRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetResliceCursor", GetResliceCursor);
	Nan::SetPrototypeMethod(tpl, "getResliceCursor", GetResliceCursor);

	Nan::SetPrototypeMethod(tpl, "GetResliceCursorActor", GetResliceCursorActor);
	Nan::SetPrototypeMethod(tpl, "getResliceCursorActor", GetResliceCursorActor);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "Highlight", Highlight);
	Nan::SetPrototypeMethod(tpl, "highlight", Highlight);

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

	Nan::SetPrototypeMethod(tpl, "SetUserMatrix", SetUserMatrix);
	Nan::SetPrototypeMethod(tpl, "setUserMatrix", SetUserMatrix);

	Nan::SetPrototypeMethod(tpl, "StartWidgetInteraction", StartWidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "startWidgetInteraction", StartWidgetInteraction);

	Nan::SetPrototypeMethod(tpl, "WidgetInteraction", WidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "widgetInteraction", WidgetInteraction);

	ptpl.Reset( tpl );
}

void VtkResliceCursorLineRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkResliceCursorLineRepresentation> native = vtkSmartPointer<vtkResliceCursorLineRepresentation>::New();
		VtkResliceCursorLineRepresentationWrap* obj = new VtkResliceCursorLineRepresentationWrap(native);
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

void VtkResliceCursorLineRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkResliceCursorLineRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorLineRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkResliceCursorLineRepresentationWrap::GetResliceCursor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
	vtkResliceCursor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResliceCursor();
		VtkResliceCursorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkResliceCursorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorWrap *w = new VtkResliceCursorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorLineRepresentationWrap::GetResliceCursorActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
	vtkResliceCursorActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResliceCursorActor();
		VtkResliceCursorActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkResliceCursorActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorActorWrap *w = new VtkResliceCursorActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorLineRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorLineRepresentationWrap::Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorLineRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorLineRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
	vtkResliceCursorLineRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkResliceCursorLineRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkResliceCursorLineRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorLineRepresentationWrap *w = new VtkResliceCursorLineRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorLineRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorLineRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorLineRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorLineRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorLineRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkResliceCursorLineRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkResliceCursorLineRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkResliceCursorLineRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkResliceCursorLineRepresentationWrap *w = new VtkResliceCursorLineRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorLineRepresentationWrap::SetUserMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUserMatrix(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorLineRepresentationWrap::StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorLineRepresentationWrap::WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
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

