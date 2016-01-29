/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationIntegerRequestKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInformationIntegerRequestKeyWrap::ptpl;

VtkInformationIntegerRequestKeyWrap::VtkInformationIntegerRequestKeyWrap()
{ }

VtkInformationIntegerRequestKeyWrap::VtkInformationIntegerRequestKeyWrap(vtkSmartPointer<vtkInformationIntegerRequestKey> _native)
{ native = _native; }

VtkInformationIntegerRequestKeyWrap::~VtkInformationIntegerRequestKeyWrap()
{ }

void VtkInformationIntegerRequestKeyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInformationIntegerRequestKey").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InformationIntegerRequestKey").ToLocalChecked(), ConstructorGetter);
}

void VtkInformationIntegerRequestKeyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInformationIntegerRequestKeyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInformationIntegerKeyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInformationIntegerRequestKeyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CopyDefaultInformation", CopyDefaultInformation);
	Nan::SetPrototypeMethod(tpl, "copyDefaultInformation", CopyDefaultInformation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MakeKey", MakeKey);
	Nan::SetPrototypeMethod(tpl, "makeKey", MakeKey);

	Nan::SetPrototypeMethod(tpl, "NeedToExecute", NeedToExecute);
	Nan::SetPrototypeMethod(tpl, "needToExecute", NeedToExecute);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "StoreMetaData", StoreMetaData);
	Nan::SetPrototypeMethod(tpl, "storeMetaData", StoreMetaData);

	ptpl.Reset( tpl );
}

void VtkInformationIntegerRequestKeyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkInformationIntegerRequestKeyWrap::CopyDefaultInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerRequestKeyWrap>(info.Holder());
	vtkInformationIntegerRequestKey *native = (vtkInformationIntegerRequestKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[2]))
			{
				VtkInformationWrap *a2 = ObjectWrap::Unwrap<VtkInformationWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->CopyDefaultInformation(
					(vtkInformation *) a0->native.GetPointer(),
					(vtkInformation *) a1->native.GetPointer(),
					(vtkInformation *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationIntegerRequestKeyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerRequestKeyWrap>(info.Holder());
	vtkInformationIntegerRequestKey *native = (vtkInformationIntegerRequestKey *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationIntegerRequestKeyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerRequestKeyWrap>(info.Holder());
	vtkInformationIntegerRequestKey *native = (vtkInformationIntegerRequestKey *)wrapper->native.GetPointer();
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

void VtkInformationIntegerRequestKeyWrap::MakeKey(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerRequestKeyWrap>(info.Holder());
	vtkInformationIntegerRequestKey *native = (vtkInformationIntegerRequestKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			vtkInformationIntegerRequestKey * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->MakeKey(
				*a0,
				*a1
			);
				VtkInformationIntegerRequestKeyWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkInformationIntegerRequestKeyWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkInformationIntegerRequestKeyWrap *w = new VtkInformationIntegerRequestKeyWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationIntegerRequestKeyWrap::NeedToExecute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerRequestKeyWrap>(info.Holder());
	vtkInformationIntegerRequestKey *native = (vtkInformationIntegerRequestKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->NeedToExecute(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationIntegerRequestKeyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerRequestKeyWrap>(info.Holder());
	vtkInformationIntegerRequestKey *native = (vtkInformationIntegerRequestKey *)wrapper->native.GetPointer();
	vtkInformationIntegerRequestKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInformationIntegerRequestKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerRequestKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerRequestKeyWrap *w = new VtkInformationIntegerRequestKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationIntegerRequestKeyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerRequestKeyWrap>(info.Holder());
	vtkInformationIntegerRequestKey *native = (vtkInformationIntegerRequestKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationIntegerRequestKey * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInformationIntegerRequestKeyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationIntegerRequestKeyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationIntegerRequestKeyWrap *w = new VtkInformationIntegerRequestKeyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationIntegerRequestKeyWrap::StoreMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationIntegerRequestKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationIntegerRequestKeyWrap>(info.Holder());
	vtkInformationIntegerRequestKey *native = (vtkInformationIntegerRequestKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[2]))
			{
				VtkInformationWrap *a2 = ObjectWrap::Unwrap<VtkInformationWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->StoreMetaData(
					(vtkInformation *) a0->native.GetPointer(),
					(vtkInformation *) a1->native.GetPointer(),
					(vtkInformation *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

