/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkBorderRepresentationWrap.h"
#include "vtkPlaybackRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkProperty2DWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPlaybackRepresentationWrap::constructor;

VtkPlaybackRepresentationWrap::VtkPlaybackRepresentationWrap()
{ }

VtkPlaybackRepresentationWrap::VtkPlaybackRepresentationWrap(vtkSmartPointer<vtkPlaybackRepresentation> _native)
{ native = _native; }

VtkPlaybackRepresentationWrap::~VtkPlaybackRepresentationWrap()
{ }

void VtkPlaybackRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkPlaybackRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkPropWrap::InitTpl(tpl);
	VtkWidgetRepresentationWrap::InitTpl(tpl);
	VtkBorderRepresentationWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkPlaybackRepresentation").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PlaybackRepresentation").ToLocalChecked(),tpl->GetFunction());
}

void VtkPlaybackRepresentationWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "BackwardOneFrame", BackwardOneFrame);
	Nan::SetPrototypeMethod(tpl, "backwardOneFrame", BackwardOneFrame);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ForwardOneFrame", ForwardOneFrame);
	Nan::SetPrototypeMethod(tpl, "forwardOneFrame", ForwardOneFrame);

	Nan::SetPrototypeMethod(tpl, "GetActors2D", GetActors2D);
	Nan::SetPrototypeMethod(tpl, "getActors2D", GetActors2D);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "JumpToBeginning", JumpToBeginning);
	Nan::SetPrototypeMethod(tpl, "jumpToBeginning", JumpToBeginning);

	Nan::SetPrototypeMethod(tpl, "JumpToEnd", JumpToEnd);
	Nan::SetPrototypeMethod(tpl, "jumpToEnd", JumpToEnd);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Play", Play);
	Nan::SetPrototypeMethod(tpl, "play", Play);

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

	Nan::SetPrototypeMethod(tpl, "Stop", Stop);
	Nan::SetPrototypeMethod(tpl, "stop", Stop);

}

void VtkPlaybackRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlaybackRepresentation> native = vtkSmartPointer<vtkPlaybackRepresentation>::New();
		VtkPlaybackRepresentationWrap* obj = new VtkPlaybackRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPlaybackRepresentationWrap::BackwardOneFrame(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BackwardOneFrame();
}

void VtkPlaybackRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkPlaybackRepresentationWrap::ForwardOneFrame(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForwardOneFrame();
}

void VtkPlaybackRepresentationWrap::GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkPlaybackRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPlaybackRepresentationWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkProperty2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlaybackRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlaybackRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
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

void VtkPlaybackRepresentationWrap::JumpToBeginning(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->JumpToBeginning();
}

void VtkPlaybackRepresentationWrap::JumpToEnd(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->JumpToEnd();
}

void VtkPlaybackRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
	vtkPlaybackRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPlaybackRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaybackRepresentationWrap *w = new VtkPlaybackRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlaybackRepresentationWrap::Play(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Play();
}

void VtkPlaybackRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
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

void VtkPlaybackRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
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

void VtkPlaybackRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
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

void VtkPlaybackRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
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

void VtkPlaybackRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPlaybackRepresentation * r;
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
			Nan::New<v8::Function>(VtkPlaybackRepresentationWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlaybackRepresentationWrap *w = new VtkPlaybackRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaybackRepresentationWrap::Stop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaybackRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkPlaybackRepresentationWrap>(info.Holder());
	vtkPlaybackRepresentation *native = (vtkPlaybackRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Stop();
}

