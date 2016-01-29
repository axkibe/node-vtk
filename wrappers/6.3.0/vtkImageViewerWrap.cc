/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkImageViewerWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkRenderWindowWrap.h"
#include "vtkRendererWrap.h"
#include "vtkImageMapperWrap.h"
#include "vtkActor2DWrap.h"
#include "vtkRenderWindowInteractorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageViewerWrap::ptpl;

VtkImageViewerWrap::VtkImageViewerWrap()
{ }

VtkImageViewerWrap::VtkImageViewerWrap(vtkSmartPointer<vtkImageViewer> _native)
{ native = _native; }

VtkImageViewerWrap::~VtkImageViewerWrap()
{ }

void VtkImageViewerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageViewer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageViewer").ToLocalChecked(), ConstructorGetter);
}

void VtkImageViewerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageViewerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageViewerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetActor2D", GetActor2D);
	Nan::SetPrototypeMethod(tpl, "getActor2D", GetActor2D);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColorLevel", GetColorLevel);
	Nan::SetPrototypeMethod(tpl, "getColorLevel", GetColorLevel);

	Nan::SetPrototypeMethod(tpl, "GetColorWindow", GetColorWindow);
	Nan::SetPrototypeMethod(tpl, "getColorWindow", GetColorWindow);

	Nan::SetPrototypeMethod(tpl, "GetImageMapper", GetImageMapper);
	Nan::SetPrototypeMethod(tpl, "getImageMapper", GetImageMapper);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetOffScreenRendering", GetOffScreenRendering);
	Nan::SetPrototypeMethod(tpl, "getOffScreenRendering", GetOffScreenRendering);

	Nan::SetPrototypeMethod(tpl, "GetRenderWindow", GetRenderWindow);
	Nan::SetPrototypeMethod(tpl, "getRenderWindow", GetRenderWindow);

	Nan::SetPrototypeMethod(tpl, "GetRenderer", GetRenderer);
	Nan::SetPrototypeMethod(tpl, "getRenderer", GetRenderer);

	Nan::SetPrototypeMethod(tpl, "GetWholeZMax", GetWholeZMax);
	Nan::SetPrototypeMethod(tpl, "getWholeZMax", GetWholeZMax);

	Nan::SetPrototypeMethod(tpl, "GetWholeZMin", GetWholeZMin);
	Nan::SetPrototypeMethod(tpl, "getWholeZMin", GetWholeZMin);

	Nan::SetPrototypeMethod(tpl, "GetWindowName", GetWindowName);
	Nan::SetPrototypeMethod(tpl, "getWindowName", GetWindowName);

	Nan::SetPrototypeMethod(tpl, "GetZSlice", GetZSlice);
	Nan::SetPrototypeMethod(tpl, "getZSlice", GetZSlice);

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

	Nan::SetPrototypeMethod(tpl, "SetSize", SetSize);
	Nan::SetPrototypeMethod(tpl, "setSize", SetSize);

	Nan::SetPrototypeMethod(tpl, "SetZSlice", SetZSlice);
	Nan::SetPrototypeMethod(tpl, "setZSlice", SetZSlice);

	Nan::SetPrototypeMethod(tpl, "SetupInteractor", SetupInteractor);
	Nan::SetPrototypeMethod(tpl, "setupInteractor", SetupInteractor);

	ptpl.Reset( tpl );
}

void VtkImageViewerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageViewer> native = vtkSmartPointer<vtkImageViewer>::New();
		VtkImageViewerWrap* obj = new VtkImageViewerWrap(native);
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

void VtkImageViewerWrap::GetActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	vtkActor2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActor2D();
		VtkActor2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkActor2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkActor2DWrap *w = new VtkActor2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageViewerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageViewerWrap::GetColorLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageViewerWrap::GetColorWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorWindow();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageViewerWrap::GetImageMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	vtkImageMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageMapper();
		VtkImageMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageMapperWrap *w = new VtkImageMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageViewerWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageViewerWrap::GetOffScreenRendering(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffScreenRendering();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageViewerWrap::GetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageViewerWrap::GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageViewerWrap::GetWholeZMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWholeZMax();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageViewerWrap::GetWholeZMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWholeZMin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageViewerWrap::GetWindowName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWindowName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageViewerWrap::GetZSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZSlice();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageViewerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
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

void VtkImageViewerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	vtkImageViewer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageViewerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageViewerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageViewerWrap *w = new VtkImageViewerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageViewerWrap::OffScreenRenderingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OffScreenRenderingOff();
}

void VtkImageViewerWrap::OffScreenRenderingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OffScreenRenderingOn();
}

void VtkImageViewerWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Render();
}

void VtkImageViewerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageViewer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageViewerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageViewerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageViewerWrap *w = new VtkImageViewerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewerWrap::SetColorLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
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

void VtkImageViewerWrap::SetColorWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
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

void VtkImageViewerWrap::SetInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
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

void VtkImageViewerWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
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

void VtkImageViewerWrap::SetOffScreenRendering(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
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

void VtkImageViewerWrap::SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
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

void VtkImageViewerWrap::SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
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

void VtkImageViewerWrap::SetZSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZSlice(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageViewerWrap::SetupInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageViewerWrap *wrapper = ObjectWrap::Unwrap<VtkImageViewerWrap>(info.Holder());
	vtkImageViewer *native = (vtkImageViewer *)wrapper->native.GetPointer();
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

