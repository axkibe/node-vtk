/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkDebugLeaksWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDebugLeaksWrap::constructor;

VtkDebugLeaksWrap::VtkDebugLeaksWrap()
{ }

VtkDebugLeaksWrap::VtkDebugLeaksWrap(vtkSmartPointer<vtkDebugLeaks> _native)
{ native = _native; }

VtkDebugLeaksWrap::~VtkDebugLeaksWrap()
{ }

void VtkDebugLeaksWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkDebugLeaksWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkDebugLeaks").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("DebugLeaks").ToLocalChecked(),tpl->GetFunction());
}

void VtkDebugLeaksWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "ConstructClass", ConstructClass);
	Nan::SetPrototypeMethod(tpl, "constructClass", ConstructClass);

	Nan::SetPrototypeMethod(tpl, "DestructClass", DestructClass);
	Nan::SetPrototypeMethod(tpl, "destructClass", DestructClass);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetExitError", GetExitError);
	Nan::SetPrototypeMethod(tpl, "getExitError", GetExitError);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PrintCurrentLeaks", PrintCurrentLeaks);
	Nan::SetPrototypeMethod(tpl, "printCurrentLeaks", PrintCurrentLeaks);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetExitError", SetExitError);
	Nan::SetPrototypeMethod(tpl, "setExitError", SetExitError);

}

void VtkDebugLeaksWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDebugLeaks> native = vtkSmartPointer<vtkDebugLeaks>::New();
		VtkDebugLeaksWrap* obj = new VtkDebugLeaksWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDebugLeaksWrap::ConstructClass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDebugLeaksWrap *wrapper = ObjectWrap::Unwrap<VtkDebugLeaksWrap>(info.Holder());
	vtkDebugLeaks *native = (vtkDebugLeaks *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ConstructClass(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDebugLeaksWrap::DestructClass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDebugLeaksWrap *wrapper = ObjectWrap::Unwrap<VtkDebugLeaksWrap>(info.Holder());
	vtkDebugLeaks *native = (vtkDebugLeaks *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DestructClass(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDebugLeaksWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDebugLeaksWrap *wrapper = ObjectWrap::Unwrap<VtkDebugLeaksWrap>(info.Holder());
	vtkDebugLeaks *native = (vtkDebugLeaks *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDebugLeaksWrap::GetExitError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDebugLeaksWrap *wrapper = ObjectWrap::Unwrap<VtkDebugLeaksWrap>(info.Holder());
	vtkDebugLeaks *native = (vtkDebugLeaks *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExitError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDebugLeaksWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDebugLeaksWrap *wrapper = ObjectWrap::Unwrap<VtkDebugLeaksWrap>(info.Holder());
	vtkDebugLeaks *native = (vtkDebugLeaks *)wrapper->native.GetPointer();
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

void VtkDebugLeaksWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDebugLeaksWrap *wrapper = ObjectWrap::Unwrap<VtkDebugLeaksWrap>(info.Holder());
	vtkDebugLeaks *native = (vtkDebugLeaks *)wrapper->native.GetPointer();
	vtkDebugLeaks * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDebugLeaksWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDebugLeaksWrap *w = new VtkDebugLeaksWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDebugLeaksWrap::PrintCurrentLeaks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDebugLeaksWrap *wrapper = ObjectWrap::Unwrap<VtkDebugLeaksWrap>(info.Holder());
	vtkDebugLeaks *native = (vtkDebugLeaks *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->PrintCurrentLeaks();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDebugLeaksWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDebugLeaksWrap *wrapper = ObjectWrap::Unwrap<VtkDebugLeaksWrap>(info.Holder());
	vtkDebugLeaks *native = (vtkDebugLeaks *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDebugLeaks * r;
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
			Nan::New<v8::Function>(VtkDebugLeaksWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDebugLeaksWrap *w = new VtkDebugLeaksWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDebugLeaksWrap::SetExitError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDebugLeaksWrap *wrapper = ObjectWrap::Unwrap<VtkDebugLeaksWrap>(info.Holder());
	vtkDebugLeaks *native = (vtkDebugLeaks *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExitError(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

