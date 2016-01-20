/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkObject.h>

#include "vtkObjectBaseWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

Nan::Persistent<v8::Function> VtkObjectWrap::constructor;

VtkObjectWrap::VtkObjectWrap()
{ }

VtkObjectWrap::VtkObjectWrap(vtkSmartPointer<vtkObject> _native)
{ native = _native; }

VtkObjectWrap::~VtkObjectWrap()
{ }

void VtkObjectWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkObjectWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkObject").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("object").ToLocalChecked(),tpl->GetFunction());
}

void VtkObjectWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "DebugOn", DebugOn);
	Nan::SetPrototypeMethod(tpl, "debugOn", DebugOn);

	Nan::SetPrototypeMethod(tpl, "DebugOff", DebugOff);
	Nan::SetPrototypeMethod(tpl, "debugOff", DebugOff);

	Nan::SetPrototypeMethod(tpl, "BreakOnError", BreakOnError);
	Nan::SetPrototypeMethod(tpl, "breakOnError", BreakOnError);

	Nan::SetPrototypeMethod(tpl, "Modified", Modified);
	Nan::SetPrototypeMethod(tpl, "modified", Modified);

	Nan::SetPrototypeMethod(tpl, "SetGlobalWarningDisplay", SetGlobalWarningDisplay);
	Nan::SetPrototypeMethod(tpl, "setGlobalWarningDisplay", SetGlobalWarningDisplay);

	Nan::SetPrototypeMethod(tpl, "GlobalWarningDisplayOn", GlobalWarningDisplayOn);
	Nan::SetPrototypeMethod(tpl, "globalWarningDisplayOn", GlobalWarningDisplayOn);

	Nan::SetPrototypeMethod(tpl, "GlobalWarningDisplayOff", GlobalWarningDisplayOff);
	Nan::SetPrototypeMethod(tpl, "globalWarningDisplayOff", GlobalWarningDisplayOff);

	Nan::SetPrototypeMethod(tpl, "GetGlobalWarningDisplay", GetGlobalWarningDisplay);
	Nan::SetPrototypeMethod(tpl, "getGlobalWarningDisplay", GetGlobalWarningDisplay);

	Nan::SetPrototypeMethod(tpl, "RemoveObservers", RemoveObservers);
	Nan::SetPrototypeMethod(tpl, "removeObservers", RemoveObservers);

	Nan::SetPrototypeMethod(tpl, "RemoveAllObservers", RemoveAllObservers);
	Nan::SetPrototypeMethod(tpl, "removeAllObservers", RemoveAllObservers);

	Nan::SetPrototypeMethod(tpl, "HasObserver", HasObserver);
	Nan::SetPrototypeMethod(tpl, "hasObserver", HasObserver);

	Nan::SetPrototypeMethod(tpl, "InvokeEvent", InvokeEvent);
	Nan::SetPrototypeMethod(tpl, "invokeEvent", InvokeEvent);

}

void VtkObjectWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkObject> native = vtkSmartPointer<vtkObject>::New();
		VtkObjectWrap* obj = new VtkObjectWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(strcmp(*s, "__nowrap" ))
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkObjectWrap::BreakOnError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BreakOnError();
}

void VtkObjectWrap::DebugOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DebugOff();
}

void VtkObjectWrap::DebugOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DebugOn();
}

void VtkObjectWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkObjectWrap::GetGlobalWarningDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlobalWarningDisplay();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkObjectWrap::GlobalWarningDisplayOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GlobalWarningDisplayOff();
}

void VtkObjectWrap::GlobalWarningDisplayOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GlobalWarningDisplayOn();
}

void VtkObjectWrap::HasObserver(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->HasObserver(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectWrap::InvokeEvent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->InvokeEvent(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
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

void VtkObjectWrap::Modified(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Modified();
}

void VtkObjectWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	vtkObject * r;
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
		Nan::New<v8::Function>(VtkObjectWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkObjectWrap *w = new VtkObjectWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkObjectWrap::RemoveAllObservers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllObservers();
}

void VtkObjectWrap::RemoveObservers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveObservers(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkObject * r;
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
			Nan::New<v8::Function>(VtkObjectWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
		VtkObjectWrap *w = new VtkObjectWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectWrap::SetGlobalWarningDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGlobalWarningDisplay(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

