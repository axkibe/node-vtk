/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkRenderWindowInteractorWrap.h"
#include "vtkXRenderWindowInteractorWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXRenderWindowInteractorWrap::ptpl;

VtkXRenderWindowInteractorWrap::VtkXRenderWindowInteractorWrap()
{ }

VtkXRenderWindowInteractorWrap::VtkXRenderWindowInteractorWrap(vtkSmartPointer<vtkXRenderWindowInteractor> _native)
{ native = _native; }

VtkXRenderWindowInteractorWrap::~VtkXRenderWindowInteractorWrap()
{ }

void VtkXRenderWindowInteractorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXRenderWindowInteractor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XRenderWindowInteractor").ToLocalChecked(), ConstructorGetter);
}

void VtkXRenderWindowInteractorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXRenderWindowInteractorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderWindowInteractorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderWindowInteractorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXRenderWindowInteractorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BreakLoopFlagOff", BreakLoopFlagOff);
	Nan::SetPrototypeMethod(tpl, "breakLoopFlagOff", BreakLoopFlagOff);

	Nan::SetPrototypeMethod(tpl, "BreakLoopFlagOn", BreakLoopFlagOn);
	Nan::SetPrototypeMethod(tpl, "breakLoopFlagOn", BreakLoopFlagOn);

	Nan::SetPrototypeMethod(tpl, "Disable", Disable);
	Nan::SetPrototypeMethod(tpl, "disable", Disable);

	Nan::SetPrototypeMethod(tpl, "Enable", Enable);
	Nan::SetPrototypeMethod(tpl, "enable", Enable);

	Nan::SetPrototypeMethod(tpl, "GetBreakLoopFlag", GetBreakLoopFlag);
	Nan::SetPrototypeMethod(tpl, "getBreakLoopFlag", GetBreakLoopFlag);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBreakLoopFlag", SetBreakLoopFlag);
	Nan::SetPrototypeMethod(tpl, "setBreakLoopFlag", SetBreakLoopFlag);

	Nan::SetPrototypeMethod(tpl, "Start", Start);
	Nan::SetPrototypeMethod(tpl, "start", Start);

	Nan::SetPrototypeMethod(tpl, "TerminateApp", TerminateApp);
	Nan::SetPrototypeMethod(tpl, "terminateApp", TerminateApp);

	Nan::SetPrototypeMethod(tpl, "UpdateSize", UpdateSize);
	Nan::SetPrototypeMethod(tpl, "updateSize", UpdateSize);

#ifdef VTK_NODE_PLUS_VTKXRENDERWINDOWINTERACTORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKXRENDERWINDOWINTERACTORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkXRenderWindowInteractorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXRenderWindowInteractor> native = vtkSmartPointer<vtkXRenderWindowInteractor>::New();
		VtkXRenderWindowInteractorWrap* obj = new VtkXRenderWindowInteractorWrap(native);
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

void VtkXRenderWindowInteractorWrap::BreakLoopFlagOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BreakLoopFlagOff();
}

void VtkXRenderWindowInteractorWrap::BreakLoopFlagOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BreakLoopFlagOn();
}

void VtkXRenderWindowInteractorWrap::Disable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Disable();
}

void VtkXRenderWindowInteractorWrap::Enable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Enable();
}

void VtkXRenderWindowInteractorWrap::GetBreakLoopFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBreakLoopFlag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXRenderWindowInteractorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXRenderWindowInteractorWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkXRenderWindowInteractorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
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

void VtkXRenderWindowInteractorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
	vtkXRenderWindowInteractor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkXRenderWindowInteractorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXRenderWindowInteractorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXRenderWindowInteractorWrap *w = new VtkXRenderWindowInteractorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXRenderWindowInteractorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXRenderWindowInteractor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkXRenderWindowInteractorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXRenderWindowInteractorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXRenderWindowInteractorWrap *w = new VtkXRenderWindowInteractorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXRenderWindowInteractorWrap::SetBreakLoopFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBreakLoopFlag(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXRenderWindowInteractorWrap::Start(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Start();
}

void VtkXRenderWindowInteractorWrap::TerminateApp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TerminateApp();
}

void VtkXRenderWindowInteractorWrap::UpdateSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXRenderWindowInteractorWrap *wrapper = ObjectWrap::Unwrap<VtkXRenderWindowInteractorWrap>(info.Holder());
	vtkXRenderWindowInteractor *native = (vtkXRenderWindowInteractor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->UpdateSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

