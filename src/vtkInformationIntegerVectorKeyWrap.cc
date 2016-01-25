/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInformationKeyWrap.h"
#include "vtkInformationIntegerVectorKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInformationIntegerVectorKeyWrap::constructor;

VtkInformationIntegerVectorKeyWrap::VtkInformationIntegerVectorKeyWrap()
{ }

VtkInformationIntegerVectorKeyWrap::VtkInformationIntegerVectorKeyWrap(vtkSmartPointer<vtkInformationIntegerVectorKey> _native)
{ native = _native; }

VtkInformationIntegerVectorKeyWrap::~VtkInformationIntegerVectorKeyWrap()
{ }

void VtkInformationIntegerVectorKeyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkInformationIntegerVectorKeyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkInformationKeyWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkInformationIntegerVectorKey").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("InformationIntegerVectorKey").ToLocalChecked(),tpl->GetFunction());
}

void VtkInformationIntegerVectorKeyWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "Append", Append);
	Nan::SetPrototypeMethod(tpl, "append", Append);

	Nan::SetPrototypeMethod(tpl, "Get", Get);
	Nan::SetPrototypeMethod(tpl, "get", Get);

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

	Nan::SetPrototypeMethod(tpl, "Set", Set);
	Nan::SetPrototypeMethod(tpl, "set", Set);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

}

void VtkInformationIntegerVectorKeyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInformationIntegerVectorKeyWrap::Append(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerVectorKeyWrap>(info.Holder());
	vtkInformationIntegerVectorKey *native = (vtkInformationIntegerVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Append(
				(vtkInformation *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationIntegerVectorKeyWrap::Get(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerVectorKeyWrap>(info.Holder());
	vtkInformationIntegerVectorKey *native = (vtkInformationIntegerVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Get(
				(vtkInformation *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationIntegerVectorKeyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerVectorKeyWrap>(info.Holder());
	vtkInformationIntegerVectorKey *native = (vtkInformationIntegerVectorKey *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationIntegerVectorKeyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerVectorKeyWrap>(info.Holder());
	vtkInformationIntegerVectorKey *native = (vtkInformationIntegerVectorKey *)wrapper->native.GetPointer();
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

void VtkInformationIntegerVectorKeyWrap::Length(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerVectorKeyWrap>(info.Holder());
	vtkInformationIntegerVectorKey *native = (vtkInformationIntegerVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkInformationIntegerVectorKeyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerVectorKeyWrap>(info.Holder());
	vtkInformationIntegerVectorKey *native = (vtkInformationIntegerVectorKey *)wrapper->native.GetPointer();
	vtkInformationIntegerVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationIntegerVectorKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerVectorKeyWrap *w = new VtkInformationIntegerVectorKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationIntegerVectorKeyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerVectorKeyWrap>(info.Holder());
	vtkInformationIntegerVectorKey *native = (vtkInformationIntegerVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationIntegerVectorKey * r;
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
			Nan::New<v8::Function>(VtkInformationIntegerVectorKeyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationIntegerVectorKeyWrap *w = new VtkInformationIntegerVectorKeyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationIntegerVectorKeyWrap::Set(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerVectorKeyWrap>(info.Holder());
	vtkInformationIntegerVectorKey *native = (vtkInformationIntegerVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Set(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationIntegerVectorKeyWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerVectorKeyWrap>(info.Holder());
	vtkInformationIntegerVectorKey *native = (vtkInformationIntegerVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
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

