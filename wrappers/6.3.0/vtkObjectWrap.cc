/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectBaseWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCommandWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkObjectWrap::ptpl;

VtkObjectWrap::VtkObjectWrap()
{ }

VtkObjectWrap::VtkObjectWrap(vtkSmartPointer<vtkObject> _native)
{ native = _native; }

VtkObjectWrap::~VtkObjectWrap()
{ }

void VtkObjectWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkObject").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Object").ToLocalChecked(), ConstructorGetter);
}

void VtkObjectWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkObjectWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectBaseWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectBaseWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkObjectWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BreakOnError", BreakOnError);
	Nan::SetPrototypeMethod(tpl, "breakOnError", BreakOnError);

	Nan::SetPrototypeMethod(tpl, "DebugOff", DebugOff);
	Nan::SetPrototypeMethod(tpl, "debugOff", DebugOff);

	Nan::SetPrototypeMethod(tpl, "DebugOn", DebugOn);
	Nan::SetPrototypeMethod(tpl, "debugOn", DebugOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGlobalWarningDisplay", GetGlobalWarningDisplay);
	Nan::SetPrototypeMethod(tpl, "getGlobalWarningDisplay", GetGlobalWarningDisplay);

	Nan::SetPrototypeMethod(tpl, "GlobalWarningDisplayOff", GlobalWarningDisplayOff);
	Nan::SetPrototypeMethod(tpl, "globalWarningDisplayOff", GlobalWarningDisplayOff);

	Nan::SetPrototypeMethod(tpl, "GlobalWarningDisplayOn", GlobalWarningDisplayOn);
	Nan::SetPrototypeMethod(tpl, "globalWarningDisplayOn", GlobalWarningDisplayOn);

	Nan::SetPrototypeMethod(tpl, "HasObserver", HasObserver);
	Nan::SetPrototypeMethod(tpl, "hasObserver", HasObserver);

	Nan::SetPrototypeMethod(tpl, "InvokeEvent", InvokeEvent);
	Nan::SetPrototypeMethod(tpl, "invokeEvent", InvokeEvent);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Modified", Modified);
	Nan::SetPrototypeMethod(tpl, "modified", Modified);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllObservers", RemoveAllObservers);
	Nan::SetPrototypeMethod(tpl, "removeAllObservers", RemoveAllObservers);

	Nan::SetPrototypeMethod(tpl, "RemoveObserver", RemoveObserver);
	Nan::SetPrototypeMethod(tpl, "removeObserver", RemoveObserver);

	Nan::SetPrototypeMethod(tpl, "RemoveObservers", RemoveObservers);
	Nan::SetPrototypeMethod(tpl, "removeObservers", RemoveObservers);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGlobalWarningDisplay", SetGlobalWarningDisplay);
	Nan::SetPrototypeMethod(tpl, "setGlobalWarningDisplay", SetGlobalWarningDisplay);

	ptpl.Reset( tpl );
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
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
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
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkCommandWrap::ptpl))->HasInstance(info[1]))
		{
			VtkCommandWrap *a1 = ObjectWrap::Unwrap<VtkCommandWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->HasObserver(
				*a0,
				(vtkCommand *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
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
	if(info.Length() > 0 && info[0]->IsString())
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
		VtkObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkObjectWrap *w = new VtkObjectWrap();
	w->native = r;
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

void VtkObjectWrap::RemoveObserver(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCommandWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCommandWrap *a0 = ObjectWrap::Unwrap<VtkCommandWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveObserver(
			(vtkCommand *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectWrap::RemoveObservers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectWrap *wrapper = ObjectWrap::Unwrap<VtkObjectWrap>(info.Holder());
	vtkObject *native = (vtkObject *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkCommandWrap::ptpl))->HasInstance(info[1]))
		{
			VtkCommandWrap *a1 = ObjectWrap::Unwrap<VtkCommandWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->RemoveObservers(
				*a0,
				(vtkCommand *) a1->native.GetPointer()
			);
			return;
		}
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
			VtkObjectWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkObjectWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkObjectWrap *w = new VtkObjectWrap();
		w->native = r;
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

