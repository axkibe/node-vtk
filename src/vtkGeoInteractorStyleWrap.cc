/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleTrackballCameraWrap.h"
#include "vtkGeoInteractorStyleWrap.h"
#include "vtkObjectWrap.h"
#include "vtkGeoCameraWrap.h"
#include "vtkRenderWindowInteractorWrap.h"
#include "vtkRendererWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGeoInteractorStyleWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkGeoInteractorStyleWrap::ptpl;

VtkGeoInteractorStyleWrap::VtkGeoInteractorStyleWrap()
{ }

VtkGeoInteractorStyleWrap::VtkGeoInteractorStyleWrap(vtkSmartPointer<vtkGeoInteractorStyle> _native)
{ native = _native; }

VtkGeoInteractorStyleWrap::~VtkGeoInteractorStyleWrap()
{ }

void VtkGeoInteractorStyleWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoInteractorStyle").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoInteractorStyle").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoInteractorStyleWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoInteractorStyleWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleTrackballCameraWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleTrackballCameraWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoInteractorStyleWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Dolly", Dolly);
	Nan::SetPrototypeMethod(tpl, "dolly", Dolly);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGeoCamera", GetGeoCamera);
	Nan::SetPrototypeMethod(tpl, "getGeoCamera", GetGeoCamera);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LockHeadingOff", LockHeadingOff);
	Nan::SetPrototypeMethod(tpl, "lockHeadingOff", LockHeadingOff);

	Nan::SetPrototypeMethod(tpl, "LockHeadingOn", LockHeadingOn);
	Nan::SetPrototypeMethod(tpl, "lockHeadingOn", LockHeadingOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnChar", OnChar);
	Nan::SetPrototypeMethod(tpl, "onChar", OnChar);

	Nan::SetPrototypeMethod(tpl, "OnEnter", OnEnter);
	Nan::SetPrototypeMethod(tpl, "onEnter", OnEnter);

	Nan::SetPrototypeMethod(tpl, "OnLeave", OnLeave);
	Nan::SetPrototypeMethod(tpl, "onLeave", OnLeave);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonDown", OnLeftButtonDown);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonDown", OnLeftButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonUp", OnLeftButtonUp);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonUp", OnLeftButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnMiddleButtonDown", OnMiddleButtonDown);
	Nan::SetPrototypeMethod(tpl, "onMiddleButtonDown", OnMiddleButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnMiddleButtonUp", OnMiddleButtonUp);
	Nan::SetPrototypeMethod(tpl, "onMiddleButtonUp", OnMiddleButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnMouseMove", OnMouseMove);
	Nan::SetPrototypeMethod(tpl, "onMouseMove", OnMouseMove);

	Nan::SetPrototypeMethod(tpl, "OnRightButtonDown", OnRightButtonDown);
	Nan::SetPrototypeMethod(tpl, "onRightButtonDown", OnRightButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnRightButtonUp", OnRightButtonUp);
	Nan::SetPrototypeMethod(tpl, "onRightButtonUp", OnRightButtonUp);

	Nan::SetPrototypeMethod(tpl, "Pan", Pan);
	Nan::SetPrototypeMethod(tpl, "pan", Pan);

	Nan::SetPrototypeMethod(tpl, "RedrawRectangle", RedrawRectangle);
	Nan::SetPrototypeMethod(tpl, "redrawRectangle", RedrawRectangle);

	Nan::SetPrototypeMethod(tpl, "ResetCamera", ResetCamera);
	Nan::SetPrototypeMethod(tpl, "resetCamera", ResetCamera);

	Nan::SetPrototypeMethod(tpl, "ResetCameraClippingRange", ResetCameraClippingRange);
	Nan::SetPrototypeMethod(tpl, "resetCameraClippingRange", ResetCameraClippingRange);

	Nan::SetPrototypeMethod(tpl, "RubberBandZoom", RubberBandZoom);
	Nan::SetPrototypeMethod(tpl, "rubberBandZoom", RubberBandZoom);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCurrentRenderer", SetCurrentRenderer);
	Nan::SetPrototypeMethod(tpl, "setCurrentRenderer", SetCurrentRenderer);

	Nan::SetPrototypeMethod(tpl, "SetInteractor", SetInteractor);
	Nan::SetPrototypeMethod(tpl, "setInteractor", SetInteractor);

	Nan::SetPrototypeMethod(tpl, "StartState", StartState);
	Nan::SetPrototypeMethod(tpl, "startState", StartState);

	Nan::SetPrototypeMethod(tpl, "WidgetInteraction", WidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "widgetInteraction", WidgetInteraction);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkGeoInteractorStyleWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoInteractorStyle> native = vtkSmartPointer<vtkGeoInteractorStyle>::New();
		VtkGeoInteractorStyleWrap* obj = new VtkGeoInteractorStyleWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGeoInteractorStyleWrap::Dolly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Dolly();
}

void VtkGeoInteractorStyleWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoInteractorStyleWrap::GetGeoCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	vtkGeoCamera * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGeoCamera();
		VtkGeoCameraWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGeoCameraWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoCameraWrap *w = new VtkGeoCameraWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoInteractorStyleWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
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

void VtkGeoInteractorStyleWrap::LockHeadingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LockHeadingOff();
}

void VtkGeoInteractorStyleWrap::LockHeadingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LockHeadingOn();
}

void VtkGeoInteractorStyleWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	vtkGeoInteractorStyle * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGeoInteractorStyleWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGeoInteractorStyleWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoInteractorStyleWrap *w = new VtkGeoInteractorStyleWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoInteractorStyleWrap::OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnChar();
}

void VtkGeoInteractorStyleWrap::OnEnter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnEnter();
}

void VtkGeoInteractorStyleWrap::OnLeave(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeave();
}

void VtkGeoInteractorStyleWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkGeoInteractorStyleWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkGeoInteractorStyleWrap::OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonDown();
}

void VtkGeoInteractorStyleWrap::OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonUp();
}

void VtkGeoInteractorStyleWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkGeoInteractorStyleWrap::OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonDown();
}

void VtkGeoInteractorStyleWrap::OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonUp();
}

void VtkGeoInteractorStyleWrap::Pan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Pan();
}

void VtkGeoInteractorStyleWrap::RedrawRectangle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RedrawRectangle();
}

void VtkGeoInteractorStyleWrap::ResetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetCamera();
}

void VtkGeoInteractorStyleWrap::ResetCameraClippingRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetCameraClippingRange();
}

void VtkGeoInteractorStyleWrap::RubberBandZoom(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RubberBandZoom();
}

void VtkGeoInteractorStyleWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoInteractorStyle * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGeoInteractorStyleWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkGeoInteractorStyleWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoInteractorStyleWrap *w = new VtkGeoInteractorStyleWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoInteractorStyleWrap::SetCurrentRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCurrentRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoInteractorStyleWrap::SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowInteractorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowInteractorWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowInteractorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractor(
			(vtkRenderWindowInteractor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoInteractorStyleWrap::StartState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->StartState(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoInteractorStyleWrap::WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info.Holder());
	vtkGeoInteractorStyle *native = (vtkGeoInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->WidgetInteraction(
			(vtkObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

