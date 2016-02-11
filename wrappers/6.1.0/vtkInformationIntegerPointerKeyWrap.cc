/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInformationKeyWrap.h"
#include "vtkInformationIntegerPointerKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInformationIntegerPointerKeyWrap::ptpl;

VtkInformationIntegerPointerKeyWrap::VtkInformationIntegerPointerKeyWrap()
{ }

VtkInformationIntegerPointerKeyWrap::VtkInformationIntegerPointerKeyWrap(vtkSmartPointer<vtkInformationIntegerPointerKey> _native)
{ native = _native; }

VtkInformationIntegerPointerKeyWrap::~VtkInformationIntegerPointerKeyWrap()
{ }

void VtkInformationIntegerPointerKeyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInformationIntegerPointerKey").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InformationIntegerPointerKey").ToLocalChecked(), ConstructorGetter);
}

void VtkInformationIntegerPointerKeyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInformationIntegerPointerKeyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInformationKeyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInformationKeyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInformationIntegerPointerKeyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Length", Length);
	Nan::SetPrototypeMethod(tpl, "length", Length);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkInformationIntegerPointerKeyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkInformationIntegerPointerKeyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerPointerKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerPointerKeyWrap>(info.Holder());
	vtkInformationIntegerPointerKey *native = (vtkInformationIntegerPointerKey *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationIntegerPointerKeyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerPointerKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerPointerKeyWrap>(info.Holder());
	vtkInformationIntegerPointerKey *native = (vtkInformationIntegerPointerKey *)wrapper->native.GetPointer();
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

void VtkInformationIntegerPointerKeyWrap::Length(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerPointerKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerPointerKeyWrap>(info.Holder());
	vtkInformationIntegerPointerKey *native = (vtkInformationIntegerPointerKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Length(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationIntegerPointerKeyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerPointerKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerPointerKeyWrap>(info.Holder());
	vtkInformationIntegerPointerKey *native = (vtkInformationIntegerPointerKey *)wrapper->native.GetPointer();
	vtkInformationIntegerPointerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInformationIntegerPointerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerPointerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerPointerKeyWrap *w = new VtkInformationIntegerPointerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationIntegerPointerKeyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerPointerKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerPointerKeyWrap>(info.Holder());
	vtkInformationIntegerPointerKey *native = (vtkInformationIntegerPointerKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationIntegerPointerKey * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkInformationIntegerPointerKeyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationIntegerPointerKeyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationIntegerPointerKeyWrap *w = new VtkInformationIntegerPointerKeyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationIntegerPointerKeyWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerPointerKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerPointerKeyWrap>(info.Holder());
	vtkInformationIntegerPointerKey *native = (vtkInformationIntegerPointerKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ShallowCopy(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkInformation *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

