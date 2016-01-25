/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkViewportWrap.h"
#include "vtkPropWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkActor2DCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkAssemblyPathWrap.h"

using namespace v8;

Nan::Persistent<v8::Function> VtkViewportWrap::constructor;

VtkViewportWrap::VtkViewportWrap()
{ }

VtkViewportWrap::VtkViewportWrap(vtkSmartPointer<vtkViewport> _native)
{ native = _native; }

VtkViewportWrap::~VtkViewportWrap()
{ }

void VtkViewportWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkViewportWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkViewport").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Viewport").ToLocalChecked(),tpl->GetFunction());
}

void VtkViewportWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddActor2D", AddActor2D);
	Nan::SetPrototypeMethod(tpl, "addActor2D", AddActor2D);

	Nan::SetPrototypeMethod(tpl, "AddViewProp", AddViewProp);
	Nan::SetPrototypeMethod(tpl, "addViewProp", AddViewProp);

	Nan::SetPrototypeMethod(tpl, "ComputeAspect", ComputeAspect);
	Nan::SetPrototypeMethod(tpl, "computeAspect", ComputeAspect);

	Nan::SetPrototypeMethod(tpl, "DisplayToView", DisplayToView);
	Nan::SetPrototypeMethod(tpl, "displayToView", DisplayToView);

	Nan::SetPrototypeMethod(tpl, "DisplayToWorld", DisplayToWorld);
	Nan::SetPrototypeMethod(tpl, "displayToWorld", DisplayToWorld);

	Nan::SetPrototypeMethod(tpl, "GetActors2D", GetActors2D);
	Nan::SetPrototypeMethod(tpl, "getActors2D", GetActors2D);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetIsPicking", GetIsPicking);
	Nan::SetPrototypeMethod(tpl, "getIsPicking", GetIsPicking);

	Nan::SetPrototypeMethod(tpl, "GetPickHeight", GetPickHeight);
	Nan::SetPrototypeMethod(tpl, "getPickHeight", GetPickHeight);

	Nan::SetPrototypeMethod(tpl, "GetPickResultProps", GetPickResultProps);
	Nan::SetPrototypeMethod(tpl, "getPickResultProps", GetPickResultProps);

	Nan::SetPrototypeMethod(tpl, "GetPickWidth", GetPickWidth);
	Nan::SetPrototypeMethod(tpl, "getPickWidth", GetPickWidth);

	Nan::SetPrototypeMethod(tpl, "GetPickX", GetPickX);
	Nan::SetPrototypeMethod(tpl, "getPickX", GetPickX);

	Nan::SetPrototypeMethod(tpl, "GetPickX1", GetPickX1);
	Nan::SetPrototypeMethod(tpl, "getPickX1", GetPickX1);

	Nan::SetPrototypeMethod(tpl, "GetPickX2", GetPickX2);
	Nan::SetPrototypeMethod(tpl, "getPickX2", GetPickX2);

	Nan::SetPrototypeMethod(tpl, "GetPickY", GetPickY);
	Nan::SetPrototypeMethod(tpl, "getPickY", GetPickY);

	Nan::SetPrototypeMethod(tpl, "GetPickY1", GetPickY1);
	Nan::SetPrototypeMethod(tpl, "getPickY1", GetPickY1);

	Nan::SetPrototypeMethod(tpl, "GetPickY2", GetPickY2);
	Nan::SetPrototypeMethod(tpl, "getPickY2", GetPickY2);

	Nan::SetPrototypeMethod(tpl, "GetPickedZ", GetPickedZ);
	Nan::SetPrototypeMethod(tpl, "getPickedZ", GetPickedZ);

	Nan::SetPrototypeMethod(tpl, "GetVTKWindow", GetVTKWindow);
	Nan::SetPrototypeMethod(tpl, "getVTKWindow", GetVTKWindow);

	Nan::SetPrototypeMethod(tpl, "GetViewProps", GetViewProps);
	Nan::SetPrototypeMethod(tpl, "getViewProps", GetViewProps);

	Nan::SetPrototypeMethod(tpl, "GradientBackgroundOff", GradientBackgroundOff);
	Nan::SetPrototypeMethod(tpl, "gradientBackgroundOff", GradientBackgroundOff);

	Nan::SetPrototypeMethod(tpl, "GradientBackgroundOn", GradientBackgroundOn);
	Nan::SetPrototypeMethod(tpl, "gradientBackgroundOn", GradientBackgroundOn);

	Nan::SetPrototypeMethod(tpl, "HasViewProp", HasViewProp);
	Nan::SetPrototypeMethod(tpl, "hasViewProp", HasViewProp);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsInViewport", IsInViewport);
	Nan::SetPrototypeMethod(tpl, "isInViewport", IsInViewport);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PickProp", PickProp);
	Nan::SetPrototypeMethod(tpl, "pickProp", PickProp);

	Nan::SetPrototypeMethod(tpl, "PickPropFrom", PickPropFrom);
	Nan::SetPrototypeMethod(tpl, "pickPropFrom", PickPropFrom);

	Nan::SetPrototypeMethod(tpl, "RemoveActor2D", RemoveActor2D);
	Nan::SetPrototypeMethod(tpl, "removeActor2D", RemoveActor2D);

	Nan::SetPrototypeMethod(tpl, "RemoveAllViewProps", RemoveAllViewProps);
	Nan::SetPrototypeMethod(tpl, "removeAllViewProps", RemoveAllViewProps);

	Nan::SetPrototypeMethod(tpl, "RemoveViewProp", RemoveViewProp);
	Nan::SetPrototypeMethod(tpl, "removeViewProp", RemoveViewProp);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAspect", SetAspect);
	Nan::SetPrototypeMethod(tpl, "setAspect", SetAspect);

	Nan::SetPrototypeMethod(tpl, "SetBackground", SetBackground);
	Nan::SetPrototypeMethod(tpl, "setBackground", SetBackground);

	Nan::SetPrototypeMethod(tpl, "SetBackground2", SetBackground2);
	Nan::SetPrototypeMethod(tpl, "setBackground2", SetBackground2);

	Nan::SetPrototypeMethod(tpl, "SetDisplayPoint", SetDisplayPoint);
	Nan::SetPrototypeMethod(tpl, "setDisplayPoint", SetDisplayPoint);

	Nan::SetPrototypeMethod(tpl, "SetPixelAspect", SetPixelAspect);
	Nan::SetPrototypeMethod(tpl, "setPixelAspect", SetPixelAspect);

	Nan::SetPrototypeMethod(tpl, "SetViewPoint", SetViewPoint);
	Nan::SetPrototypeMethod(tpl, "setViewPoint", SetViewPoint);

	Nan::SetPrototypeMethod(tpl, "SetViewport", SetViewport);
	Nan::SetPrototypeMethod(tpl, "setViewport", SetViewport);

	Nan::SetPrototypeMethod(tpl, "SetWorldPoint", SetWorldPoint);
	Nan::SetPrototypeMethod(tpl, "setWorldPoint", SetWorldPoint);

	Nan::SetPrototypeMethod(tpl, "ViewToDisplay", ViewToDisplay);
	Nan::SetPrototypeMethod(tpl, "viewToDisplay", ViewToDisplay);

	Nan::SetPrototypeMethod(tpl, "ViewToWorld", ViewToWorld);
	Nan::SetPrototypeMethod(tpl, "viewToWorld", ViewToWorld);

	Nan::SetPrototypeMethod(tpl, "WorldToDisplay", WorldToDisplay);
	Nan::SetPrototypeMethod(tpl, "worldToDisplay", WorldToDisplay);

	Nan::SetPrototypeMethod(tpl, "WorldToView", WorldToView);
	Nan::SetPrototypeMethod(tpl, "worldToView", WorldToView);

}

void VtkViewportWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(strcmp(*s, "__nowrap" ))
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkViewportWrap::AddActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddActor2D(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewportWrap::AddViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddViewProp(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewportWrap::ComputeAspect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeAspect();
}

void VtkViewportWrap::DisplayToView(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisplayToView();
}

void VtkViewportWrap::DisplayToWorld(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisplayToWorld();
}

void VtkViewportWrap::GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	vtkActor2DCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActors2D();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkActor2DCollectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkActor2DCollectionWrap *w = new VtkActor2DCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewportWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkViewportWrap::GetIsPicking(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIsPicking();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewportWrap::GetPickHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewportWrap::GetPickResultProps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	vtkPropCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickResultProps();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropCollectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkPropCollectionWrap *w = new VtkPropCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewportWrap::GetPickWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewportWrap::GetPickX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickX();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewportWrap::GetPickX1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickX1();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewportWrap::GetPickX2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickX2();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewportWrap::GetPickY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickY();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewportWrap::GetPickY1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickY1();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewportWrap::GetPickY2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickY2();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewportWrap::GetPickedZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickedZ();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewportWrap::GetVTKWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	vtkWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVTKWindow();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkWindowWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkWindowWrap *w = new VtkWindowWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewportWrap::GetViewProps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	vtkPropCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetViewProps();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropCollectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkPropCollectionWrap *w = new VtkPropCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewportWrap::GradientBackgroundOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GradientBackgroundOff();
}

void VtkViewportWrap::GradientBackgroundOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GradientBackgroundOn();
}

void VtkViewportWrap::HasViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->HasViewProp(
			(vtkProp *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewportWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
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

void VtkViewportWrap::IsInViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->IsInViewport(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewportWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	vtkViewport * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkViewportWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkViewportWrap *w = new VtkViewportWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewportWrap::PickProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			vtkAssemblyPath * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->PickProp(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			const int argc = 1;
			v8::Local<v8::Value> argv[argc] =
				{ Nan::New("__nowrap").ToLocalChecked() };
			v8::Local<v8::Function> cons =
				Nan::New<v8::Function>(VtkAssemblyPathWrap::constructor);
			v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
			VtkAssemblyPathWrap *w = new VtkAssemblyPathWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewportWrap::PickPropFrom(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsObject())
			{
				VtkPropCollectionWrap *a2 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[2]->ToObject());
				vtkAssemblyPath * r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->PickPropFrom(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					(vtkPropCollection *) a2->native.GetPointer()
				);
				const int argc = 1;
				v8::Local<v8::Value> argv[argc] =
					{ Nan::New("__nowrap").ToLocalChecked() };
				v8::Local<v8::Function> cons =
					Nan::New<v8::Function>(VtkAssemblyPathWrap::constructor);
				v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
				VtkAssemblyPathWrap *w = new VtkAssemblyPathWrap();
				w->native.TakeReference(r);
				w->Wrap(wo);
				info.GetReturnValue().Set(wo);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewportWrap::RemoveActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveActor2D(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewportWrap::RemoveAllViewProps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllViewProps();
}

void VtkViewportWrap::RemoveViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveViewProp(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewportWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkViewport * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		const int argc = 1;
		v8::Local<v8::Value> argv[argc] =
			{ Nan::New("__nowrap").ToLocalChecked() };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkViewportWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
		VtkViewportWrap *w = new VtkViewportWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewportWrap::SetAspect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAspect(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewportWrap::SetBackground(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetBackground(
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

void VtkViewportWrap::SetBackground2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetBackground2(
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

void VtkViewportWrap::SetDisplayPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetDisplayPoint(
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

void VtkViewportWrap::SetPixelAspect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPixelAspect(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewportWrap::SetViewPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetViewPoint(
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

void VtkViewportWrap::SetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetViewport(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewportWrap::SetWorldPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetWorldPoint(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewportWrap::ViewToDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ViewToDisplay();
}

void VtkViewportWrap::ViewToWorld(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ViewToWorld();
}

void VtkViewportWrap::WorldToDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WorldToDisplay();
}

void VtkViewportWrap::WorldToView(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewportWrap *wrapper = ObjectWrap::Unwrap<VtkViewportWrap>(info.Holder());
	vtkViewport *native = (vtkViewport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WorldToView();
}

