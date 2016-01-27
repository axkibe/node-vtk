/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkOpenGLRenderWindowWrap.h"
#include "vtkXOpenGLRenderWindowWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXOpenGLRenderWindowWrap::ptpl;

VtkXOpenGLRenderWindowWrap::VtkXOpenGLRenderWindowWrap()
{ }

VtkXOpenGLRenderWindowWrap::VtkXOpenGLRenderWindowWrap(vtkSmartPointer<vtkXOpenGLRenderWindow> _native)
{ native = _native; }

VtkXOpenGLRenderWindowWrap::~VtkXOpenGLRenderWindowWrap()
{ }

void VtkXOpenGLRenderWindowWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXOpenGLRenderWindow").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XOpenGLRenderWindow").ToLocalChecked(), ConstructorGetter);
}

void VtkXOpenGLRenderWindowWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXOpenGLRenderWindowWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkOpenGLRenderWindowWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkOpenGLRenderWindowWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXOpenGLRenderWindowWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Finalize", Finalize);
	Nan::SetPrototypeMethod(tpl, "finalize", Finalize);

	Nan::SetPrototypeMethod(tpl, "Frame", Frame);
	Nan::SetPrototypeMethod(tpl, "frame", Frame);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDesiredDepth", GetDesiredDepth);
	Nan::SetPrototypeMethod(tpl, "getDesiredDepth", GetDesiredDepth);

	Nan::SetPrototypeMethod(tpl, "GetEventPending", GetEventPending);
	Nan::SetPrototypeMethod(tpl, "getEventPending", GetEventPending);

	Nan::SetPrototypeMethod(tpl, "HideCursor", HideCursor);
	Nan::SetPrototypeMethod(tpl, "hideCursor", HideCursor);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsDirect", IsDirect);
	Nan::SetPrototypeMethod(tpl, "isDirect", IsDirect);

	Nan::SetPrototypeMethod(tpl, "MakeCurrent", MakeCurrent);
	Nan::SetPrototypeMethod(tpl, "makeCurrent", MakeCurrent);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PrefFullScreen", PrefFullScreen);
	Nan::SetPrototypeMethod(tpl, "prefFullScreen", PrefFullScreen);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "ReportCapabilities", ReportCapabilities);
	Nan::SetPrototypeMethod(tpl, "reportCapabilities", ReportCapabilities);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCurrentCursor", SetCurrentCursor);
	Nan::SetPrototypeMethod(tpl, "setCurrentCursor", SetCurrentCursor);

	Nan::SetPrototypeMethod(tpl, "SetForceMakeCurrent", SetForceMakeCurrent);
	Nan::SetPrototypeMethod(tpl, "setForceMakeCurrent", SetForceMakeCurrent);

	Nan::SetPrototypeMethod(tpl, "SetFullScreen", SetFullScreen);
	Nan::SetPrototypeMethod(tpl, "setFullScreen", SetFullScreen);

	Nan::SetPrototypeMethod(tpl, "SetNextWindowInfo", SetNextWindowInfo);
	Nan::SetPrototypeMethod(tpl, "setNextWindowInfo", SetNextWindowInfo);

	Nan::SetPrototypeMethod(tpl, "SetOffScreenRendering", SetOffScreenRendering);
	Nan::SetPrototypeMethod(tpl, "setOffScreenRendering", SetOffScreenRendering);

	Nan::SetPrototypeMethod(tpl, "SetParentInfo", SetParentInfo);
	Nan::SetPrototypeMethod(tpl, "setParentInfo", SetParentInfo);

	Nan::SetPrototypeMethod(tpl, "SetPosition", SetPosition);
	Nan::SetPrototypeMethod(tpl, "setPosition", SetPosition);

	Nan::SetPrototypeMethod(tpl, "SetSize", SetSize);
	Nan::SetPrototypeMethod(tpl, "setSize", SetSize);

	Nan::SetPrototypeMethod(tpl, "SetStereoCapableWindow", SetStereoCapableWindow);
	Nan::SetPrototypeMethod(tpl, "setStereoCapableWindow", SetStereoCapableWindow);

	Nan::SetPrototypeMethod(tpl, "SetWindowInfo", SetWindowInfo);
	Nan::SetPrototypeMethod(tpl, "setWindowInfo", SetWindowInfo);

	Nan::SetPrototypeMethod(tpl, "SetWindowName", SetWindowName);
	Nan::SetPrototypeMethod(tpl, "setWindowName", SetWindowName);

	Nan::SetPrototypeMethod(tpl, "ShowCursor", ShowCursor);
	Nan::SetPrototypeMethod(tpl, "showCursor", ShowCursor);

	Nan::SetPrototypeMethod(tpl, "Start", Start);
	Nan::SetPrototypeMethod(tpl, "start", Start);

	Nan::SetPrototypeMethod(tpl, "SupportsOpenGL", SupportsOpenGL);
	Nan::SetPrototypeMethod(tpl, "supportsOpenGL", SupportsOpenGL);

	Nan::SetPrototypeMethod(tpl, "WindowInitialize", WindowInitialize);
	Nan::SetPrototypeMethod(tpl, "windowInitialize", WindowInitialize);

	Nan::SetPrototypeMethod(tpl, "WindowRemap", WindowRemap);
	Nan::SetPrototypeMethod(tpl, "windowRemap", WindowRemap);

	ptpl.Reset( tpl );
}

void VtkXOpenGLRenderWindowWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXOpenGLRenderWindow> native = vtkSmartPointer<vtkXOpenGLRenderWindow>::New();
		VtkXOpenGLRenderWindowWrap* obj = new VtkXOpenGLRenderWindowWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXOpenGLRenderWindowWrap::Finalize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Finalize();
}

void VtkXOpenGLRenderWindowWrap::Frame(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Frame();
}

void VtkXOpenGLRenderWindowWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXOpenGLRenderWindowWrap::GetDesiredDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDesiredDepth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXOpenGLRenderWindowWrap::GetEventPending(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEventPending();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXOpenGLRenderWindowWrap::HideCursor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HideCursor();
}

void VtkXOpenGLRenderWindowWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkXOpenGLRenderWindowWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
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

void VtkXOpenGLRenderWindowWrap::IsDirect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsDirect();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXOpenGLRenderWindowWrap::MakeCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MakeCurrent();
}

void VtkXOpenGLRenderWindowWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	vtkXOpenGLRenderWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkXOpenGLRenderWindowWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXOpenGLRenderWindowWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXOpenGLRenderWindowWrap *w = new VtkXOpenGLRenderWindowWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXOpenGLRenderWindowWrap::PrefFullScreen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PrefFullScreen();
}

void VtkXOpenGLRenderWindowWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Render();
}

void VtkXOpenGLRenderWindowWrap::ReportCapabilities(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ReportCapabilities();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXOpenGLRenderWindowWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXOpenGLRenderWindow * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkXOpenGLRenderWindowWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXOpenGLRenderWindowWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXOpenGLRenderWindowWrap *w = new VtkXOpenGLRenderWindowWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXOpenGLRenderWindowWrap::SetCurrentCursor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCurrentCursor(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXOpenGLRenderWindowWrap::SetForceMakeCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetForceMakeCurrent();
}

void VtkXOpenGLRenderWindowWrap::SetFullScreen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
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

void VtkXOpenGLRenderWindowWrap::SetNextWindowInfo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
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

void VtkXOpenGLRenderWindowWrap::SetOffScreenRendering(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
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

void VtkXOpenGLRenderWindowWrap::SetParentInfo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
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

void VtkXOpenGLRenderWindowWrap::SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
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

void VtkXOpenGLRenderWindowWrap::SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
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

void VtkXOpenGLRenderWindowWrap::SetStereoCapableWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStereoCapableWindow(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXOpenGLRenderWindowWrap::SetWindowInfo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
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

void VtkXOpenGLRenderWindowWrap::SetWindowName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWindowName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXOpenGLRenderWindowWrap::ShowCursor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShowCursor();
}

void VtkXOpenGLRenderWindowWrap::Start(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Start();
}

void VtkXOpenGLRenderWindowWrap::SupportsOpenGL(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->SupportsOpenGL();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXOpenGLRenderWindowWrap::WindowInitialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WindowInitialize();
}

void VtkXOpenGLRenderWindowWrap::WindowRemap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXOpenGLRenderWindowWrap *wrapper = ObjectWrap::Unwrap<VtkXOpenGLRenderWindowWrap>(info.Holder());
	vtkXOpenGLRenderWindow *native = (vtkXOpenGLRenderWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WindowRemap();
}

