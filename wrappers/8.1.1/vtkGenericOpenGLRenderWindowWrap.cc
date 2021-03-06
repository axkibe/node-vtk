/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkOpenGLRenderWindowWrap.h"
#include "vtkGenericOpenGLRenderWindowWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGenericOpenGLRenderWindowWrap::ptpl;

VtkGenericOpenGLRenderWindowWrap::VtkGenericOpenGLRenderWindowWrap()
{ }

VtkGenericOpenGLRenderWindowWrap::VtkGenericOpenGLRenderWindowWrap(vtkSmartPointer<vtkGenericOpenGLRenderWindow> _native)
{ native = _native; }

VtkGenericOpenGLRenderWindowWrap::~VtkGenericOpenGLRenderWindowWrap()
{ }

void VtkGenericOpenGLRenderWindowWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGenericOpenGLRenderWindow").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GenericOpenGLRenderWindow").ToLocalChecked(), ConstructorGetter);
}

void VtkGenericOpenGLRenderWindowWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGenericOpenGLRenderWindowWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkOpenGLRenderWindowWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkOpenGLRenderWindowWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGenericOpenGLRenderWindowWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateAWindow", CreateAWindow);
	Nan::SetPrototypeMethod(tpl, "createAWindow", CreateAWindow);

	Nan::SetPrototypeMethod(tpl, "DestroyWindow", DestroyWindow);
	Nan::SetPrototypeMethod(tpl, "destroyWindow", DestroyWindow);

	Nan::SetPrototypeMethod(tpl, "Finalize", Finalize);
	Nan::SetPrototypeMethod(tpl, "finalize", Finalize);

	Nan::SetPrototypeMethod(tpl, "Frame", Frame);
	Nan::SetPrototypeMethod(tpl, "frame", Frame);

	Nan::SetPrototypeMethod(tpl, "GetEventPending", GetEventPending);
	Nan::SetPrototypeMethod(tpl, "getEventPending", GetEventPending);

	Nan::SetPrototypeMethod(tpl, "GetForceMaximumHardwareLineWidth", GetForceMaximumHardwareLineWidth);
	Nan::SetPrototypeMethod(tpl, "getForceMaximumHardwareLineWidth", GetForceMaximumHardwareLineWidth);

	Nan::SetPrototypeMethod(tpl, "GetForceMaximumHardwareLineWidthMaxValue", GetForceMaximumHardwareLineWidthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getForceMaximumHardwareLineWidthMaxValue", GetForceMaximumHardwareLineWidthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetForceMaximumHardwareLineWidthMinValue", GetForceMaximumHardwareLineWidthMinValue);
	Nan::SetPrototypeMethod(tpl, "getForceMaximumHardwareLineWidthMinValue", GetForceMaximumHardwareLineWidthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumHardwareLineWidth", GetMaximumHardwareLineWidth);
	Nan::SetPrototypeMethod(tpl, "getMaximumHardwareLineWidth", GetMaximumHardwareLineWidth);

	Nan::SetPrototypeMethod(tpl, "GetReadyForRendering", GetReadyForRendering);
	Nan::SetPrototypeMethod(tpl, "getReadyForRendering", GetReadyForRendering);

	Nan::SetPrototypeMethod(tpl, "GetScreenSize", GetScreenSize);
	Nan::SetPrototypeMethod(tpl, "getScreenSize", GetScreenSize);

	Nan::SetPrototypeMethod(tpl, "HideCursor", HideCursor);
	Nan::SetPrototypeMethod(tpl, "hideCursor", HideCursor);

	Nan::SetPrototypeMethod(tpl, "IsCurrent", IsCurrent);
	Nan::SetPrototypeMethod(tpl, "isCurrent", IsCurrent);

	Nan::SetPrototypeMethod(tpl, "IsDirect", IsDirect);
	Nan::SetPrototypeMethod(tpl, "isDirect", IsDirect);

	Nan::SetPrototypeMethod(tpl, "MakeCurrent", MakeCurrent);
	Nan::SetPrototypeMethod(tpl, "makeCurrent", MakeCurrent);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PopState", PopState);
	Nan::SetPrototypeMethod(tpl, "popState", PopState);

	Nan::SetPrototypeMethod(tpl, "PushState", PushState);
	Nan::SetPrototypeMethod(tpl, "pushState", PushState);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBackBuffer", SetBackBuffer);
	Nan::SetPrototypeMethod(tpl, "setBackBuffer", SetBackBuffer);

	Nan::SetPrototypeMethod(tpl, "SetBackLeftBuffer", SetBackLeftBuffer);
	Nan::SetPrototypeMethod(tpl, "setBackLeftBuffer", SetBackLeftBuffer);

	Nan::SetPrototypeMethod(tpl, "SetBackRightBuffer", SetBackRightBuffer);
	Nan::SetPrototypeMethod(tpl, "setBackRightBuffer", SetBackRightBuffer);

	Nan::SetPrototypeMethod(tpl, "SetForceMaximumHardwareLineWidth", SetForceMaximumHardwareLineWidth);
	Nan::SetPrototypeMethod(tpl, "setForceMaximumHardwareLineWidth", SetForceMaximumHardwareLineWidth);

	Nan::SetPrototypeMethod(tpl, "SetFrontBuffer", SetFrontBuffer);
	Nan::SetPrototypeMethod(tpl, "setFrontBuffer", SetFrontBuffer);

	Nan::SetPrototypeMethod(tpl, "SetFrontLeftBuffer", SetFrontLeftBuffer);
	Nan::SetPrototypeMethod(tpl, "setFrontLeftBuffer", SetFrontLeftBuffer);

	Nan::SetPrototypeMethod(tpl, "SetFrontRightBuffer", SetFrontRightBuffer);
	Nan::SetPrototypeMethod(tpl, "setFrontRightBuffer", SetFrontRightBuffer);

	Nan::SetPrototypeMethod(tpl, "SetFullScreen", SetFullScreen);
	Nan::SetPrototypeMethod(tpl, "setFullScreen", SetFullScreen);

	Nan::SetPrototypeMethod(tpl, "SetIsCurrent", SetIsCurrent);
	Nan::SetPrototypeMethod(tpl, "setIsCurrent", SetIsCurrent);

	Nan::SetPrototypeMethod(tpl, "SetIsDirect", SetIsDirect);
	Nan::SetPrototypeMethod(tpl, "setIsDirect", SetIsDirect);

	Nan::SetPrototypeMethod(tpl, "SetIsPicking", SetIsPicking);
	Nan::SetPrototypeMethod(tpl, "setIsPicking", SetIsPicking);

	Nan::SetPrototypeMethod(tpl, "SetNextWindowInfo", SetNextWindowInfo);
	Nan::SetPrototypeMethod(tpl, "setNextWindowInfo", SetNextWindowInfo);

	Nan::SetPrototypeMethod(tpl, "SetParentInfo", SetParentInfo);
	Nan::SetPrototypeMethod(tpl, "setParentInfo", SetParentInfo);

	Nan::SetPrototypeMethod(tpl, "SetReadyForRendering", SetReadyForRendering);
	Nan::SetPrototypeMethod(tpl, "setReadyForRendering", SetReadyForRendering);

	Nan::SetPrototypeMethod(tpl, "SetScreenSize", SetScreenSize);
	Nan::SetPrototypeMethod(tpl, "setScreenSize", SetScreenSize);

	Nan::SetPrototypeMethod(tpl, "SetSupportsOpenGL", SetSupportsOpenGL);
	Nan::SetPrototypeMethod(tpl, "setSupportsOpenGL", SetSupportsOpenGL);

	Nan::SetPrototypeMethod(tpl, "SetWindowInfo", SetWindowInfo);
	Nan::SetPrototypeMethod(tpl, "setWindowInfo", SetWindowInfo);

	Nan::SetPrototypeMethod(tpl, "ShowCursor", ShowCursor);
	Nan::SetPrototypeMethod(tpl, "showCursor", ShowCursor);

	Nan::SetPrototypeMethod(tpl, "Start", Start);
	Nan::SetPrototypeMethod(tpl, "start", Start);

	Nan::SetPrototypeMethod(tpl, "SupportsOpenGL", SupportsOpenGL);
	Nan::SetPrototypeMethod(tpl, "supportsOpenGL", SupportsOpenGL);

	Nan::SetPrototypeMethod(tpl, "WindowRemap", WindowRemap);
	Nan::SetPrototypeMethod(tpl, "windowRemap", WindowRemap);

#ifdef VTK_NODE_PLUS_VTKGENERICOPENGLRENDERWINDOWWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGENERICOPENGLRENDERWINDOWWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGenericOpenGLRenderWindowWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGenericOpenGLRenderWindow> native = vtkSmartPointer<vtkGenericOpenGLRenderWindow>::New();
		VtkGenericOpenGLRenderWindowWrap* obj = new VtkGenericOpenGLRenderWindowWrap(native);
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

void VtkGenericOpenGLRenderWindowWrap::CreateAWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateAWindow();
}

void VtkGenericOpenGLRenderWindowWrap::DestroyWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DestroyWindow();
}

void VtkGenericOpenGLRenderWindowWrap::Finalize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Finalize();
}

void VtkGenericOpenGLRenderWindowWrap::Frame(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Frame();
}

void VtkGenericOpenGLRenderWindowWrap::GetEventPending(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEventPending();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericOpenGLRenderWindowWrap::GetForceMaximumHardwareLineWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetForceMaximumHardwareLineWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericOpenGLRenderWindowWrap::GetForceMaximumHardwareLineWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetForceMaximumHardwareLineWidthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericOpenGLRenderWindowWrap::GetForceMaximumHardwareLineWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetForceMaximumHardwareLineWidthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericOpenGLRenderWindowWrap::GetMaximumHardwareLineWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumHardwareLineWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericOpenGLRenderWindowWrap::GetReadyForRendering(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReadyForRendering();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericOpenGLRenderWindowWrap::GetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScreenSize();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkGenericOpenGLRenderWindowWrap::HideCursor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HideCursor();
}

void VtkGenericOpenGLRenderWindowWrap::IsCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsCurrent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericOpenGLRenderWindowWrap::IsDirect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsDirect();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericOpenGLRenderWindowWrap::MakeCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MakeCurrent();
}

void VtkGenericOpenGLRenderWindowWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	vtkGenericOpenGLRenderWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGenericOpenGLRenderWindowWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericOpenGLRenderWindowWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericOpenGLRenderWindowWrap *w = new VtkGenericOpenGLRenderWindowWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericOpenGLRenderWindowWrap::PopState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PopState();
}

void VtkGenericOpenGLRenderWindowWrap::PushState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PushState();
}

void VtkGenericOpenGLRenderWindowWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Render();
}

void VtkGenericOpenGLRenderWindowWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkGenericOpenGLRenderWindow * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkGenericOpenGLRenderWindowWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericOpenGLRenderWindowWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericOpenGLRenderWindowWrap *w = new VtkGenericOpenGLRenderWindowWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetBackBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBackBuffer(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetBackLeftBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBackLeftBuffer(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetBackRightBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBackRightBuffer(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetForceMaximumHardwareLineWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetForceMaximumHardwareLineWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetFrontBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFrontBuffer(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetFrontLeftBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFrontLeftBuffer(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetFrontRightBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFrontRightBuffer(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetFullScreen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFullScreen(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetIsCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIsCurrent(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetIsDirect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIsDirect(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetIsPicking(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIsPicking(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetNextWindowInfo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNextWindowInfo(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetParentInfo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParentInfo(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetReadyForRendering(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReadyForRendering(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
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
		native->SetScreenSize(
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
		native->SetScreenSize(
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
			native->SetScreenSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetSupportsOpenGL(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSupportsOpenGL(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::SetWindowInfo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWindowInfo(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericOpenGLRenderWindowWrap::ShowCursor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShowCursor();
}

void VtkGenericOpenGLRenderWindowWrap::Start(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Start();
}

void VtkGenericOpenGLRenderWindowWrap::SupportsOpenGL(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->SupportsOpenGL();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericOpenGLRenderWindowWrap::WindowRemap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WindowRemap();
}

