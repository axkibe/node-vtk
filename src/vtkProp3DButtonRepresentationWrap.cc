/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkButtonRepresentationWrap.h"
#include "vtkProp3DButtonRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkProp3DWrap.h"
#include "vtkPropWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProp3DButtonRepresentationWrap::ptpl;

VtkProp3DButtonRepresentationWrap::VtkProp3DButtonRepresentationWrap()
{ }

VtkProp3DButtonRepresentationWrap::VtkProp3DButtonRepresentationWrap(vtkSmartPointer<vtkProp3DButtonRepresentation> _native)
{ native = _native; }

VtkProp3DButtonRepresentationWrap::~VtkProp3DButtonRepresentationWrap()
{ }

void VtkProp3DButtonRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProp3DButtonRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Prop3DButtonRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkProp3DButtonRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProp3DButtonRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkButtonRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkButtonRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProp3DButtonRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "FollowCameraOff", FollowCameraOff);
	Nan::SetPrototypeMethod(tpl, "followCameraOff", FollowCameraOff);

	Nan::SetPrototypeMethod(tpl, "FollowCameraOn", FollowCameraOn);
	Nan::SetPrototypeMethod(tpl, "followCameraOn", FollowCameraOn);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetButtonProp", GetButtonProp);
	Nan::SetPrototypeMethod(tpl, "getButtonProp", GetButtonProp);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFollowCamera", GetFollowCamera);
	Nan::SetPrototypeMethod(tpl, "getFollowCamera", GetFollowCamera);

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

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderVolumetricGeometry", RenderVolumetricGeometry);
	Nan::SetPrototypeMethod(tpl, "renderVolumetricGeometry", RenderVolumetricGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetButtonProp", SetButtonProp);
	Nan::SetPrototypeMethod(tpl, "setButtonProp", SetButtonProp);

	Nan::SetPrototypeMethod(tpl, "SetFollowCamera", SetFollowCamera);
	Nan::SetPrototypeMethod(tpl, "setFollowCamera", SetFollowCamera);

	Nan::SetPrototypeMethod(tpl, "SetState", SetState);
	Nan::SetPrototypeMethod(tpl, "setState", SetState);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkProp3DButtonRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProp3DButtonRepresentation> native = vtkSmartPointer<vtkProp3DButtonRepresentation>::New();
		VtkProp3DButtonRepresentationWrap* obj = new VtkProp3DButtonRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkProp3DButtonRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkProp3DButtonRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
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

void VtkProp3DButtonRepresentationWrap::FollowCameraOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FollowCameraOff();
}

void VtkProp3DButtonRepresentationWrap::FollowCameraOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FollowCameraOn();
}

void VtkProp3DButtonRepresentationWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
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

void VtkProp3DButtonRepresentationWrap::GetButtonProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkProp3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetButtonProp(
			info[0]->Int32Value()
		);
			VtkProp3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProp3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProp3DWrap *w = new VtkProp3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DButtonRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProp3DButtonRepresentationWrap::GetFollowCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFollowCamera();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DButtonRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DButtonRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
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

void VtkProp3DButtonRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
	vtkProp3DButtonRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkProp3DButtonRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProp3DButtonRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProp3DButtonRepresentationWrap *w = new VtkProp3DButtonRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProp3DButtonRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
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

void VtkProp3DButtonRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
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

void VtkProp3DButtonRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
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

void VtkProp3DButtonRepresentationWrap::RenderVolumetricGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderVolumetricGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DButtonRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProp3DButtonRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkProp3DButtonRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProp3DButtonRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProp3DButtonRepresentationWrap *w = new VtkProp3DButtonRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DButtonRepresentationWrap::SetButtonProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkProp3DWrap::ptpl))->HasInstance(info[1]))
		{
			VtkProp3DWrap *a1 = ObjectWrap::Unwrap<VtkProp3DWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetButtonProp(
				info[0]->Int32Value(),
				(vtkProp3D *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DButtonRepresentationWrap::SetFollowCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFollowCamera(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DButtonRepresentationWrap::SetState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetState(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DButtonRepresentationWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DButtonRepresentationWrap>(info.Holder());
	vtkProp3DButtonRepresentation *native = (vtkProp3DButtonRepresentation *)wrapper->native.GetPointer();
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

