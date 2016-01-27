/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkButtonRepresentationWrap.h"
#include "vtkTexturedButtonRepresentation2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkProperty2DWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkBalloonRepresentationWrap.h"
#include "vtkPropWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTexturedButtonRepresentation2DWrap::ptpl;

VtkTexturedButtonRepresentation2DWrap::VtkTexturedButtonRepresentation2DWrap()
{ }

VtkTexturedButtonRepresentation2DWrap::VtkTexturedButtonRepresentation2DWrap(vtkSmartPointer<vtkTexturedButtonRepresentation2D> _native)
{ native = _native; }

VtkTexturedButtonRepresentation2DWrap::~VtkTexturedButtonRepresentation2DWrap()
{ }

void VtkTexturedButtonRepresentation2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTexturedButtonRepresentation2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TexturedButtonRepresentation2D").ToLocalChecked(), ConstructorGetter);
}

void VtkTexturedButtonRepresentation2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTexturedButtonRepresentation2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkButtonRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkButtonRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTexturedButtonRepresentation2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetBalloon", GetBalloon);
	Nan::SetPrototypeMethod(tpl, "getBalloon", GetBalloon);

	Nan::SetPrototypeMethod(tpl, "GetButtonTexture", GetButtonTexture);
	Nan::SetPrototypeMethod(tpl, "getButtonTexture", GetButtonTexture);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHoveringProperty", GetHoveringProperty);
	Nan::SetPrototypeMethod(tpl, "getHoveringProperty", GetHoveringProperty);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectingProperty", GetSelectingProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectingProperty", GetSelectingProperty);

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

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetButtonTexture", SetButtonTexture);
	Nan::SetPrototypeMethod(tpl, "setButtonTexture", SetButtonTexture);

	Nan::SetPrototypeMethod(tpl, "SetHoveringProperty", SetHoveringProperty);
	Nan::SetPrototypeMethod(tpl, "setHoveringProperty", SetHoveringProperty);

	Nan::SetPrototypeMethod(tpl, "SetProperty", SetProperty);
	Nan::SetPrototypeMethod(tpl, "setProperty", SetProperty);

	Nan::SetPrototypeMethod(tpl, "SetSelectingProperty", SetSelectingProperty);
	Nan::SetPrototypeMethod(tpl, "setSelectingProperty", SetSelectingProperty);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkTexturedButtonRepresentation2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTexturedButtonRepresentation2D> native = vtkSmartPointer<vtkTexturedButtonRepresentation2D>::New();
		VtkTexturedButtonRepresentation2DWrap* obj = new VtkTexturedButtonRepresentation2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTexturedButtonRepresentation2DWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkTexturedButtonRepresentation2DWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
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

void VtkTexturedButtonRepresentation2DWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
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

void VtkTexturedButtonRepresentation2DWrap::GetBalloon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
	vtkBalloonRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBalloon();
		VtkBalloonRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBalloonRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBalloonRepresentationWrap *w = new VtkBalloonRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTexturedButtonRepresentation2DWrap::GetButtonTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkImageData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetButtonTexture(
			info[0]->Int32Value()
		);
			VtkImageDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageDataWrap *w = new VtkImageDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentation2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTexturedButtonRepresentation2DWrap::GetHoveringProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHoveringProperty();
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

void VtkTexturedButtonRepresentation2DWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
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

void VtkTexturedButtonRepresentation2DWrap::GetSelectingProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectingProperty();
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

void VtkTexturedButtonRepresentation2DWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTexturedButtonRepresentation2DWrap::Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
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

void VtkTexturedButtonRepresentation2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
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

void VtkTexturedButtonRepresentation2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
	vtkTexturedButtonRepresentation2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTexturedButtonRepresentation2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTexturedButtonRepresentation2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTexturedButtonRepresentation2DWrap *w = new VtkTexturedButtonRepresentation2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTexturedButtonRepresentation2DWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
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

void VtkTexturedButtonRepresentation2DWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
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

void VtkTexturedButtonRepresentation2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTexturedButtonRepresentation2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTexturedButtonRepresentation2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTexturedButtonRepresentation2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTexturedButtonRepresentation2DWrap *w = new VtkTexturedButtonRepresentation2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentation2DWrap::SetButtonTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkImageDataWrap *a1 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetButtonTexture(
				info[0]->Int32Value(),
				(vtkImageData *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentation2DWrap::SetHoveringProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkProperty2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkProperty2DWrap *a0 = ObjectWrap::Unwrap<VtkProperty2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHoveringProperty(
			(vtkProperty2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentation2DWrap::SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
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

void VtkTexturedButtonRepresentation2DWrap::SetSelectingProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkProperty2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkProperty2DWrap *a0 = ObjectWrap::Unwrap<VtkProperty2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectingProperty(
			(vtkProperty2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentation2DWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentation2DWrap>(info.Holder());
	vtkTexturedButtonRepresentation2D *native = (vtkTexturedButtonRepresentation2D *)wrapper->native.GetPointer();
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

