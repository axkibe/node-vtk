/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRenderViewBaseWrap.h"
#include "vtkRenderViewWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRenderWindowInteractorWrap.h"
#include "vtkInteractorObserverWrap.h"
#include "vtkRenderWindowWrap.h"
#include "vtkViewThemeWrap.h"
#include "vtkAbstractTransformWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkTextureWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRenderViewWrap::ptpl;

VtkRenderViewWrap::VtkRenderViewWrap()
{ }

VtkRenderViewWrap::VtkRenderViewWrap(vtkSmartPointer<vtkRenderView> _native)
{ native = _native; }

VtkRenderViewWrap::~VtkRenderViewWrap()
{ }

void VtkRenderViewWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRenderView").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RenderView").ToLocalChecked(), ConstructorGetter);
}

void VtkRenderViewWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRenderViewWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderViewBaseWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderViewBaseWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRenderViewWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddLabels", AddLabels);
	Nan::SetPrototypeMethod(tpl, "addLabels", AddLabels);

	Nan::SetPrototypeMethod(tpl, "ApplyViewTheme", ApplyViewTheme);
	Nan::SetPrototypeMethod(tpl, "applyViewTheme", ApplyViewTheme);

	Nan::SetPrototypeMethod(tpl, "DisplayHoverTextOff", DisplayHoverTextOff);
	Nan::SetPrototypeMethod(tpl, "displayHoverTextOff", DisplayHoverTextOff);

	Nan::SetPrototypeMethod(tpl, "DisplayHoverTextOn", DisplayHoverTextOn);
	Nan::SetPrototypeMethod(tpl, "displayHoverTextOn", DisplayHoverTextOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDisplayHoverText", GetDisplayHoverText);
	Nan::SetPrototypeMethod(tpl, "getDisplayHoverText", GetDisplayHoverText);

	Nan::SetPrototypeMethod(tpl, "GetIconSize", GetIconSize);
	Nan::SetPrototypeMethod(tpl, "getIconSize", GetIconSize);

	Nan::SetPrototypeMethod(tpl, "GetIconTexture", GetIconTexture);
	Nan::SetPrototypeMethod(tpl, "getIconTexture", GetIconTexture);

	Nan::SetPrototypeMethod(tpl, "GetInteractionMode", GetInteractionMode);
	Nan::SetPrototypeMethod(tpl, "getInteractionMode", GetInteractionMode);

	Nan::SetPrototypeMethod(tpl, "GetInteractorStyle", GetInteractorStyle);
	Nan::SetPrototypeMethod(tpl, "getInteractorStyle", GetInteractorStyle);

	Nan::SetPrototypeMethod(tpl, "GetLabelPlacementMode", GetLabelPlacementMode);
	Nan::SetPrototypeMethod(tpl, "getLabelPlacementMode", GetLabelPlacementMode);

	Nan::SetPrototypeMethod(tpl, "GetLabelRenderMode", GetLabelRenderMode);
	Nan::SetPrototypeMethod(tpl, "getLabelRenderMode", GetLabelRenderMode);

	Nan::SetPrototypeMethod(tpl, "GetRenderOnMouseMove", GetRenderOnMouseMove);
	Nan::SetPrototypeMethod(tpl, "getRenderOnMouseMove", GetRenderOnMouseMove);

	Nan::SetPrototypeMethod(tpl, "GetSelectionMode", GetSelectionMode);
	Nan::SetPrototypeMethod(tpl, "getSelectionMode", GetSelectionMode);

	Nan::SetPrototypeMethod(tpl, "GetSelectionModeMaxValue", GetSelectionModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSelectionModeMaxValue", GetSelectionModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSelectionModeMinValue", GetSelectionModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getSelectionModeMinValue", GetSelectionModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveLabels", RemoveLabels);
	Nan::SetPrototypeMethod(tpl, "removeLabels", RemoveLabels);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "RenderOnMouseMoveOff", RenderOnMouseMoveOff);
	Nan::SetPrototypeMethod(tpl, "renderOnMouseMoveOff", RenderOnMouseMoveOff);

	Nan::SetPrototypeMethod(tpl, "RenderOnMouseMoveOn", RenderOnMouseMoveOn);
	Nan::SetPrototypeMethod(tpl, "renderOnMouseMoveOn", RenderOnMouseMoveOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDisplayHoverText", SetDisplayHoverText);
	Nan::SetPrototypeMethod(tpl, "setDisplayHoverText", SetDisplayHoverText);

	Nan::SetPrototypeMethod(tpl, "SetDisplaySize", SetDisplaySize);
	Nan::SetPrototypeMethod(tpl, "setDisplaySize", SetDisplaySize);

	Nan::SetPrototypeMethod(tpl, "SetIconSize", SetIconSize);
	Nan::SetPrototypeMethod(tpl, "setIconSize", SetIconSize);

	Nan::SetPrototypeMethod(tpl, "SetIconTexture", SetIconTexture);
	Nan::SetPrototypeMethod(tpl, "setIconTexture", SetIconTexture);

	Nan::SetPrototypeMethod(tpl, "SetInteractionMode", SetInteractionMode);
	Nan::SetPrototypeMethod(tpl, "setInteractionMode", SetInteractionMode);

	Nan::SetPrototypeMethod(tpl, "SetInteractionModeTo2D", SetInteractionModeTo2D);
	Nan::SetPrototypeMethod(tpl, "setInteractionModeTo2D", SetInteractionModeTo2D);

	Nan::SetPrototypeMethod(tpl, "SetInteractionModeTo3D", SetInteractionModeTo3D);
	Nan::SetPrototypeMethod(tpl, "setInteractionModeTo3D", SetInteractionModeTo3D);

	Nan::SetPrototypeMethod(tpl, "SetInteractor", SetInteractor);
	Nan::SetPrototypeMethod(tpl, "setInteractor", SetInteractor);

	Nan::SetPrototypeMethod(tpl, "SetInteractorStyle", SetInteractorStyle);
	Nan::SetPrototypeMethod(tpl, "setInteractorStyle", SetInteractorStyle);

	Nan::SetPrototypeMethod(tpl, "SetLabelPlacementMode", SetLabelPlacementMode);
	Nan::SetPrototypeMethod(tpl, "setLabelPlacementMode", SetLabelPlacementMode);

	Nan::SetPrototypeMethod(tpl, "SetLabelPlacementModeToAll", SetLabelPlacementModeToAll);
	Nan::SetPrototypeMethod(tpl, "setLabelPlacementModeToAll", SetLabelPlacementModeToAll);

	Nan::SetPrototypeMethod(tpl, "SetLabelPlacementModeToNoOverlap", SetLabelPlacementModeToNoOverlap);
	Nan::SetPrototypeMethod(tpl, "setLabelPlacementModeToNoOverlap", SetLabelPlacementModeToNoOverlap);

	Nan::SetPrototypeMethod(tpl, "SetLabelRenderMode", SetLabelRenderMode);
	Nan::SetPrototypeMethod(tpl, "setLabelRenderMode", SetLabelRenderMode);

	Nan::SetPrototypeMethod(tpl, "SetLabelRenderModeToFreetype", SetLabelRenderModeToFreetype);
	Nan::SetPrototypeMethod(tpl, "setLabelRenderModeToFreetype", SetLabelRenderModeToFreetype);

	Nan::SetPrototypeMethod(tpl, "SetLabelRenderModeToQt", SetLabelRenderModeToQt);
	Nan::SetPrototypeMethod(tpl, "setLabelRenderModeToQt", SetLabelRenderModeToQt);

	Nan::SetPrototypeMethod(tpl, "SetRenderOnMouseMove", SetRenderOnMouseMove);
	Nan::SetPrototypeMethod(tpl, "setRenderOnMouseMove", SetRenderOnMouseMove);

	Nan::SetPrototypeMethod(tpl, "SetRenderWindow", SetRenderWindow);
	Nan::SetPrototypeMethod(tpl, "setRenderWindow", SetRenderWindow);

	Nan::SetPrototypeMethod(tpl, "SetSelectionMode", SetSelectionMode);
	Nan::SetPrototypeMethod(tpl, "setSelectionMode", SetSelectionMode);

	Nan::SetPrototypeMethod(tpl, "SetSelectionModeToFrustum", SetSelectionModeToFrustum);
	Nan::SetPrototypeMethod(tpl, "setSelectionModeToFrustum", SetSelectionModeToFrustum);

	Nan::SetPrototypeMethod(tpl, "SetSelectionModeToSurface", SetSelectionModeToSurface);
	Nan::SetPrototypeMethod(tpl, "setSelectionModeToSurface", SetSelectionModeToSurface);

	Nan::SetPrototypeMethod(tpl, "SetTransform", SetTransform);
	Nan::SetPrototypeMethod(tpl, "setTransform", SetTransform);

	ptpl.Reset( tpl );
}

void VtkRenderViewWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRenderView> native = vtkSmartPointer<vtkRenderView>::New();
		VtkRenderViewWrap* obj = new VtkRenderViewWrap(native);
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

void VtkRenderViewWrap::AddLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddLabels(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewThemeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewThemeWrap *a0 = ObjectWrap::Unwrap<VtkViewThemeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ApplyViewTheme(
			(vtkViewTheme *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::DisplayHoverTextOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisplayHoverTextOff();
}

void VtkRenderViewWrap::DisplayHoverTextOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisplayHoverTextOn();
}

void VtkRenderViewWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRenderViewWrap::GetDisplayHoverText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplayHoverText();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRenderViewWrap::GetIconSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIconSize();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkRenderViewWrap::GetIconTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	vtkTexture * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIconTexture();
	VtkTextureWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextureWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextureWrap *w = new VtkTextureWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderViewWrap::GetInteractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractionMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRenderViewWrap::GetInteractorStyle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	vtkInteractorObserver * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractorStyle();
	VtkInteractorObserverWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorObserverWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorObserverWrap *w = new VtkInteractorObserverWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderViewWrap::GetLabelPlacementMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelPlacementMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRenderViewWrap::GetLabelRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelRenderMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRenderViewWrap::GetRenderOnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderOnMouseMove();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRenderViewWrap::GetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRenderViewWrap::GetSelectionModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRenderViewWrap::GetSelectionModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRenderViewWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransform();
	VtkAbstractTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderViewWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
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

void VtkRenderViewWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	vtkRenderView * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkRenderViewWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderViewWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderViewWrap *w = new VtkRenderViewWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderViewWrap::RemoveLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveLabels(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Render();
}

void VtkRenderViewWrap::RenderOnMouseMoveOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RenderOnMouseMoveOff();
}

void VtkRenderViewWrap::RenderOnMouseMoveOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RenderOnMouseMoveOn();
}

void VtkRenderViewWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRenderView * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkRenderViewWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRenderViewWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRenderViewWrap *w = new VtkRenderViewWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::SetDisplayHoverText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplayHoverText(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::SetDisplaySize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
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
		native->SetDisplaySize(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplaySize(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetDisplaySize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::SetIconSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
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
		native->SetIconSize(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIconSize(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetIconSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::SetIconTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextureWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextureWrap *a0 = ObjectWrap::Unwrap<VtkTextureWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIconTexture(
			(vtkTexture *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::SetInteractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractionMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::SetInteractionModeTo2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInteractionModeTo2D();
}

void VtkRenderViewWrap::SetInteractionModeTo3D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInteractionModeTo3D();
}

void VtkRenderViewWrap::SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
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

void VtkRenderViewWrap::SetInteractorStyle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInteractorObserverWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInteractorObserverWrap *a0 = ObjectWrap::Unwrap<VtkInteractorObserverWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractorStyle(
			(vtkInteractorObserver *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::SetLabelPlacementMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelPlacementMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::SetLabelPlacementModeToAll(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelPlacementModeToAll();
}

void VtkRenderViewWrap::SetLabelPlacementModeToNoOverlap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelPlacementModeToNoOverlap();
}

void VtkRenderViewWrap::SetLabelRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelRenderMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::SetLabelRenderModeToFreetype(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelRenderModeToFreetype();
}

void VtkRenderViewWrap::SetLabelRenderModeToQt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelRenderModeToQt();
}

void VtkRenderViewWrap::SetRenderOnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderOnMouseMove(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::SetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderWindow(
			(vtkRenderWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::SetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderViewWrap::SetSelectionModeToFrustum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSelectionModeToFrustum();
}

void VtkRenderViewWrap::SetSelectionModeToSurface(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSelectionModeToSurface();
}

void VtkRenderViewWrap::SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderViewWrap *wrapper = ObjectWrap::Unwrap<VtkRenderViewWrap>(info.Holder());
	vtkRenderView *native = (vtkRenderView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractTransformWrap *a0 = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransform(
			(vtkAbstractTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

