/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkOverrideInformationWrap.h"
#include "vtkObjectFactoryWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOverrideInformationWrap::ptpl;

VtkOverrideInformationWrap::VtkOverrideInformationWrap()
{ }

VtkOverrideInformationWrap::VtkOverrideInformationWrap(vtkSmartPointer<vtkOverrideInformation> _native)
{ native = _native; }

VtkOverrideInformationWrap::~VtkOverrideInformationWrap()
{ }

void VtkOverrideInformationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOverrideInformation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OverrideInformation").ToLocalChecked(), ConstructorGetter);
}

void VtkOverrideInformationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOverrideInformationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOverrideInformationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClassOverrideName", GetClassOverrideName);
	Nan::SetPrototypeMethod(tpl, "getClassOverrideName", GetClassOverrideName);

	Nan::SetPrototypeMethod(tpl, "GetClassOverrideWithName", GetClassOverrideWithName);
	Nan::SetPrototypeMethod(tpl, "getClassOverrideWithName", GetClassOverrideWithName);

	Nan::SetPrototypeMethod(tpl, "GetDescription", GetDescription);
	Nan::SetPrototypeMethod(tpl, "getDescription", GetDescription);

	Nan::SetPrototypeMethod(tpl, "GetObjectFactory", GetObjectFactory);
	Nan::SetPrototypeMethod(tpl, "getObjectFactory", GetObjectFactory);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetClassOverrideName", SetClassOverrideName);
	Nan::SetPrototypeMethod(tpl, "setClassOverrideName", SetClassOverrideName);

	Nan::SetPrototypeMethod(tpl, "SetClassOverrideWithName", SetClassOverrideWithName);
	Nan::SetPrototypeMethod(tpl, "setClassOverrideWithName", SetClassOverrideWithName);

	Nan::SetPrototypeMethod(tpl, "SetDescription", SetDescription);
	Nan::SetPrototypeMethod(tpl, "setDescription", SetDescription);

#ifdef VTK_NODE_PLUS_VTKOVERRIDEINFORMATIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKOVERRIDEINFORMATIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkOverrideInformationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOverrideInformation> native = vtkSmartPointer<vtkOverrideInformation>::New();
		VtkOverrideInformationWrap* obj = new VtkOverrideInformationWrap(native);
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

void VtkOverrideInformationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationWrap>(info.Holder());
	vtkOverrideInformation *native = (vtkOverrideInformation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOverrideInformationWrap::GetClassOverrideName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationWrap>(info.Holder());
	vtkOverrideInformation *native = (vtkOverrideInformation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassOverrideName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOverrideInformationWrap::GetClassOverrideWithName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationWrap>(info.Holder());
	vtkOverrideInformation *native = (vtkOverrideInformation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassOverrideWithName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOverrideInformationWrap::GetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationWrap>(info.Holder());
	vtkOverrideInformation *native = (vtkOverrideInformation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescription();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOverrideInformationWrap::GetObjectFactory(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationWrap>(info.Holder());
	vtkOverrideInformation *native = (vtkOverrideInformation *)wrapper->native.GetPointer();
	vtkObjectFactory * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetObjectFactory();
	VtkObjectFactoryWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkObjectFactoryWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkObjectFactoryWrap *w = new VtkObjectFactoryWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOverrideInformationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationWrap>(info.Holder());
	vtkOverrideInformation *native = (vtkOverrideInformation *)wrapper->native.GetPointer();
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

void VtkOverrideInformationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationWrap>(info.Holder());
	vtkOverrideInformation *native = (vtkOverrideInformation *)wrapper->native.GetPointer();
	vtkOverrideInformation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkOverrideInformationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOverrideInformationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOverrideInformationWrap *w = new VtkOverrideInformationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOverrideInformationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationWrap>(info.Holder());
	vtkOverrideInformation *native = (vtkOverrideInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOverrideInformation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkOverrideInformationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOverrideInformationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOverrideInformationWrap *w = new VtkOverrideInformationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOverrideInformationWrap::SetClassOverrideName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationWrap>(info.Holder());
	vtkOverrideInformation *native = (vtkOverrideInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClassOverrideName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOverrideInformationWrap::SetClassOverrideWithName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationWrap>(info.Holder());
	vtkOverrideInformation *native = (vtkOverrideInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClassOverrideWithName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOverrideInformationWrap::SetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverrideInformationWrap *wrapper = ObjectWrap::Unwrap<VtkOverrideInformationWrap>(info.Holder());
	vtkOverrideInformation *native = (vtkOverrideInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDescription(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

