/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkImageViewer2Wrap.h"
#include "vtkImageDataWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkRenderWindowWrap.h"
#include "vtkRendererWrap.h"
#include "vtkImageActorWrap.h"
#include "vtkImageMapToWindowLevelColorsWrap.h"
#include "vtkInteractorStyleImageWrap.h"
#include "vtkRenderWindowInteractorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageViewer2Wrap::ptpl;

VtkImageViewer2Wrap::VtkImageViewer2Wrap()
{ }

VtkImageViewer2Wrap::VtkImageViewer2Wrap(vtkSmartPointer<vtkImageViewer2> _native)
{ native = _native; }

VtkImageViewer2Wrap::~VtkImageViewer2Wrap()
{ }

void VtkImageViewer2Wrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageViewer2").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageViewer2").ToLocalChecked(), ConstructorGetter);
}

void VtkImageViewer2Wrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageViewer2Wrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageViewer2Wrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColorLevel", GetColorLevel);
	Nan::SetPrototypeMethod(tpl, "getColorLevel", GetColorLevel);

	Nan::SetPrototypeMethod(tpl, "GetColorWindow", GetColorWindow);
	Nan::SetPrototypeMethod(tpl, "getColorWindow", GetColorWindow);

	Nan::SetPrototypeMethod(tpl, "GetImageActor", GetImageActor);
	Nan::SetPrototypeMethod(tpl, "getImageActor", GetImageActor);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetInteractorStyle", GetInteractorStyle);
	Nan::SetPrototypeMethod(tpl, "getInteractorStyle", GetInteractorStyle);

	Nan::SetPrototypeMethod(tpl, "GetOffScreenRendering", GetOffScreenRendering);
	Nan::SetPrototypeMethod(tpl, "getOffScreenRendering", GetOffScreenRendering);

	Nan::SetPrototypeMethod(tpl, "GetRenderWindow", GetRenderWindow);
	Nan::SetPrototypeMethod(tpl, "getRenderWindow", GetRenderWindow);

	Nan::SetPrototypeMethod(tpl, "GetRenderer", GetRenderer);
	Nan::SetPrototypeMethod(tpl, "getRenderer", GetRenderer);

	Nan::SetPrototypeMethod(tpl, "GetSlice", GetSlice);
	Nan::SetPrototypeMethod(tpl, "getSlice", GetSlice);

	Nan::SetPrototypeMethod(tpl, "GetSliceMax", GetSliceMax);
	Nan::SetPrototypeMethod(tpl, "getSliceMax", GetSliceMax);

	Nan::SetPrototypeMethod(tpl, "GetSliceMin", GetSliceMin);
	Nan::SetPrototypeMethod(tpl, "getSliceMin", GetSliceMin);

	Nan::SetPrototypeMethod(tpl, "GetSliceOrientation", GetSliceOrientation);
	Nan::SetPrototypeMethod(tpl, "getSliceOrientation", GetSliceOrientation);

	Nan::SetPrototypeMethod(tpl, "GetWindowLevel", GetWindowLevel);
	Nan::SetPrototypeMethod(tpl, "getWindowLevel", GetWindowLevel);

	Nan::SetPrototypeMethod(tpl, "GetWindowName", GetWindowName);
	Nan::SetPrototypeMethod(tpl, "getWindowName", GetWindowName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OffScreenRenderingOff", OffScreenRenderingOff);
	Nan::SetPrototypeMethod(tpl, "offScreenRenderingOff", OffScreenRenderingOff);

	Nan::SetPrototypeMethod(tpl, "OffScreenRenderingOn", OffScreenRenderingOn);
	Nan::SetPrototypeMethod(tpl, "offScreenRenderingOn", OffScreenRenderingOn);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColorLevel", SetColorLevel);
	Nan::SetPrototypeMethod(tpl, "setColorLevel", SetColorLevel);

	Nan::SetPrototypeMethod(tpl, "SetColorWindow", SetColorWindow);
	Nan::SetPrototypeMethod(tpl, "setColorWindow", SetColorWindow);

	Nan::SetPrototypeMethod(tpl, "SetInputConnection", SetInputConnection);
	Nan::SetPrototypeMethod(tpl, "setInputConnection", SetInputConnection);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetOffScreenRendering", SetOffScreenRendering);
	Nan::SetPrototypeMethod(tpl, "setOffScreenRendering", SetOffScreenRendering);

	Nan::SetPrototypeMethod(tpl, "SetPosition", SetPosition);
	Nan::SetPrototypeMethod(tpl, "setPosition", SetPosition);

	Nan::SetPrototypeMethod(tpl, "SetRenderWindow", SetRenderWindow);
	Nan::SetPrototypeMethod(tpl, "setRenderWindow", SetRenderWindow);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	Nan::SetPrototypeMethod(tpl, "SetSize", SetSize);
	Nan::SetPrototypeMethod(tpl, "setSize", SetSize);

	Nan::SetPrototypeMethod(tpl, "SetSlice", SetSlice);
	Nan::SetPrototypeMethod(tpl, "setSlice", SetSlice);

	Nan::SetPrototypeMethod(tpl, "SetSliceOrientation", SetSliceOrientation);
	Nan::SetPrototypeMethod(tpl, "setSliceOrientation", SetSliceOrientation);

	Nan::SetPrototypeMethod(tpl, "SetSliceOrientationToXY", SetSliceOrientationToXY);
	Nan::SetPrototypeMethod(tpl, "setSliceOrientationToXY", SetSliceOrientationToXY);

	Nan::SetPrototypeMethod(tpl, "SetSliceOrientationToXZ", SetSliceOrientationToXZ);
	Nan::SetPrototypeMethod(tpl, "setSliceOrientationToXZ", SetSliceOrientationToXZ);

	Nan::SetPrototypeMethod(tpl, "SetSliceOrientationToYZ", SetSliceOrientationToYZ);
	Nan::SetPrototypeMethod(tpl, "setSliceOrientationToYZ", SetSliceOrientationToYZ);

	Nan::SetPrototypeMethod(tpl, "SetupInteractor", SetupInteractor);
	Nan::SetPrototypeMethod(tpl, "setupInteractor", SetupInteractor);

	Nan::SetPrototypeMethod(tpl, "UpdateDisplayExtent", UpdateDisplayExtent);
	Nan::SetPrototypeMethod(tpl, "updateDisplayExtent", UpdateDisplayExtent);

	ptpl.Reset( tpl );
}

void VtkImageViewer2Wrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageViewer2> native = vtkSmartPointer<vtkImageViewer2>::New();
		VtkImageViewer2Wrap* obj = new VtkImageViewer2Wrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageViewer2Wrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageViewer2Wrap::GetColorLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageViewer2Wrap::GetColorWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorWindow();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageViewer2Wrap::GetImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	vtkImageActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageActor();
		VtkImageActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageActorWrap *w = new VtkImageActorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageViewer2Wrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageViewer2Wrap::GetInteractorStyle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	vtkInteractorStyleImage * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractorStyle();
		VtkInteractorStyleImageWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorStyleImageWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleImageWrap *w = new VtkInteractorStyleImageWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageViewer2Wrap::GetOffScreenRendering(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffScreenRendering();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageViewer2Wrap::GetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	vtkRenderWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderWindow();
		VtkRenderWindowWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderWindowWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderWindowWrap *w = new VtkRenderWindowWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageViewer2Wrap::GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderer();
		VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageViewer2Wrap::GetSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSlice();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageViewer2Wrap::GetSliceMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceMax();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageViewer2Wrap::GetSliceMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceMin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageViewer2Wrap::GetSliceOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageViewer2Wrap::GetWindowLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	vtkImageMapToWindowLevelColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWindowLevel();
		VtkImageMapToWindowLevelColorsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageMapToWindowLevelColorsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageMapToWindowLevelColorsWrap *w = new VtkImageMapToWindowLevelColorsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageViewer2Wrap::GetWindowName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWindowName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageViewer2Wrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
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

void VtkImageViewer2Wrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	vtkImageViewer2 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageViewer2Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageViewer2Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageViewer2Wrap *w = new VtkImageViewer2Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageViewer2Wrap::OffScreenRenderingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OffScreenRenderingOff();
}

void VtkImageViewer2Wrap::OffScreenRenderingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OffScreenRenderingOn();
}

void VtkImageViewer2Wrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Render();
}

void VtkImageViewer2Wrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageViewer2 * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageViewer2Wrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageViewer2Wrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageViewer2Wrap *w = new VtkImageViewer2Wrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewer2Wrap::SetColorLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorLevel(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewer2Wrap::SetColorWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorWindow(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewer2Wrap::SetInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewer2Wrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewer2Wrap::SetOffScreenRendering(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOffScreenRendering(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewer2Wrap::SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPosition(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewer2Wrap::SetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
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

void VtkImageViewer2Wrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewer2Wrap::SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewer2Wrap::SetSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSlice(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewer2Wrap::SetSliceOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSliceOrientation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewer2Wrap::SetSliceOrientationToXY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSliceOrientationToXY();
}

void VtkImageViewer2Wrap::SetSliceOrientationToXZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSliceOrientationToXZ();
}

void VtkImageViewer2Wrap::SetSliceOrientationToYZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSliceOrientationToYZ();
}

void VtkImageViewer2Wrap::SetupInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowInteractorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowInteractorWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowInteractorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetupInteractor(
			(vtkRenderWindowInteractor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewer2Wrap::UpdateDisplayExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewer2Wrap *wrapper = ObjectWrap::Unwrap<VtkImageViewer2Wrap>(info.Holder());
	vtkImageViewer2 *native = (vtkImageViewer2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UpdateDisplayExtent();
}

