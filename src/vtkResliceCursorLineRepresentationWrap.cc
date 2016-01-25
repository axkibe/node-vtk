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
Nan::Persistent<v8::Function> VtkResliceCursorLineRepresentationWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkResliceCursorLineRepresentationWrap::ptpl;

VtkResliceCursorLineRepresentationWrap::VtkResliceCursorLineRepresentationWrap()
{ }

VtkResliceCursorLineRepresentationWrap::VtkResliceCursorLineRepresentationWrap(vtkSmartPointer<vtkResliceCursorLineRepresentation> _native)
{ native = _native; }

VtkResliceCursorLineRepresentationWrap::~VtkResliceCursorLineRepresentationWrap()
{ }

void VtkResliceCursorLineRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkResliceCursorRepresentationWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkResliceCursorRepresentationWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkResliceCursorLineRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkResliceCursorLineRepresentation").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ResliceCursorLineRepresentation").ToLocalChecked(),tpl->GetFunction());
}

void VtkResliceCursorLineRepresentationWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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
		VtkResliceCursorLineRepresentationWrap* obj = new VtkResliceCursorLineRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkResliceCursorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorWrap *w = new VtkResliceCursorWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkResliceCursorActorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorActorWrap *w = new VtkResliceCursorActorWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkResliceCursorLineRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorLineRepresentationWrap *w = new VtkResliceCursorLineRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorLineRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorLineRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorLineRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorLineRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
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

void VtkResliceCursorLineRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorLineRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorLineRepresentationWrap>(info.Holder());
	vtkResliceCursorLineRepresentation *native = (vtkResliceCursorLineRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkResliceCursorLineRepresentationWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkResliceCursorLineRepresentationWrap *w = new VtkResliceCursorLineRepresentationWrap();
		w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsObject())
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

