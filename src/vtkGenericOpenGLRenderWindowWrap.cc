/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkOpenGLRenderWindowWrap.h"
#include "vtkGenericOpenGLRenderWindowWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGenericOpenGLRenderWindowWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkGenericOpenGLRenderWindowWrap::ptpl;

VtkGenericOpenGLRenderWindowWrap::VtkGenericOpenGLRenderWindowWrap()
{ }

VtkGenericOpenGLRenderWindowWrap::VtkGenericOpenGLRenderWindowWrap(vtkSmartPointer<vtkGenericOpenGLRenderWindow> _native)
{ native = _native; }

VtkGenericOpenGLRenderWindowWrap::~VtkGenericOpenGLRenderWindowWrap()
{ }

void VtkGenericOpenGLRenderWindowWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkOpenGLRenderWindowWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkOpenGLRenderWindowWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkGenericOpenGLRenderWindowWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkGenericOpenGLRenderWindow").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("GenericOpenGLRenderWindow").ToLocalChecked(),tpl->GetFunction());
}

void VtkGenericOpenGLRenderWindowWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CreateAWindow", CreateAWindow);
	Nan::SetPrototypeMethod(tpl, "createAWindow", CreateAWindow);

	Nan::SetPrototypeMethod(tpl, "DestroyWindow", DestroyWindow);
	Nan::SetPrototypeMethod(tpl, "destroyWindow", DestroyWindow);

	Nan::SetPrototypeMethod(tpl, "Finalize", Finalize);
	Nan::SetPrototypeMethod(tpl, "finalize", Finalize);

	Nan::SetPrototypeMethod(tpl, "Frame", Frame);
	Nan::SetPrototypeMethod(tpl, "frame", Frame);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEventPending", GetEventPending);
	Nan::SetPrototypeMethod(tpl, "getEventPending", GetEventPending);

	Nan::SetPrototypeMethod(tpl, "HideCursor", HideCursor);
	Nan::SetPrototypeMethod(tpl, "hideCursor", HideCursor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

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

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFullScreen", SetFullScreen);
	Nan::SetPrototypeMethod(tpl, "setFullScreen", SetFullScreen);

	Nan::SetPrototypeMethod(tpl, "SetIsDirect", SetIsDirect);
	Nan::SetPrototypeMethod(tpl, "setIsDirect", SetIsDirect);

	Nan::SetPrototypeMethod(tpl, "SetNextWindowInfo", SetNextWindowInfo);
	Nan::SetPrototypeMethod(tpl, "setNextWindowInfo", SetNextWindowInfo);

	Nan::SetPrototypeMethod(tpl, "SetParentInfo", SetParentInfo);
	Nan::SetPrototypeMethod(tpl, "setParentInfo", SetParentInfo);

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
		VtkGenericOpenGLRenderWindowWrap* obj = new VtkGenericOpenGLRenderWindowWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
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

void VtkGenericOpenGLRenderWindowWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
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

void VtkGenericOpenGLRenderWindowWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGenericOpenGLRenderWindowWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericOpenGLRenderWindowWrap *w = new VtkGenericOpenGLRenderWindowWrap();
	w->native.TakeReference(r);
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

void VtkGenericOpenGLRenderWindowWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericOpenGLRenderWindow * r;
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
			Nan::New<v8::Function>(VtkGenericOpenGLRenderWindowWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericOpenGLRenderWindowWrap *w = new VtkGenericOpenGLRenderWindowWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
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

void VtkGenericOpenGLRenderWindowWrap::SetNextWindowInfo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkGenericOpenGLRenderWindowWrap>(info.Holder());
	vtkGenericOpenGLRenderWindow *native = (vtkGenericOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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
	if(info.Length() > 0 && info[0]->IsInt32())
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
	if(info.Length() > 0 && info[0]->IsInt32())
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

