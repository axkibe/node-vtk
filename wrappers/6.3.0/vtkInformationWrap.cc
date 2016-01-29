/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationKeyWrap.h"
#include "vtkInformationDataObjectKeyWrap.h"
#include "vtkInformationDoubleVectorKeyWrap.h"
#include "vtkInformationVariantKeyWrap.h"
#include "vtkInformationVariantVectorKeyWrap.h"
#include "vtkInformationInformationKeyWrap.h"
#include "vtkInformationInformationVectorKeyWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationIntegerVectorKeyWrap.h"
#include "vtkInformationRequestKeyWrap.h"
#include "vtkInformationStringKeyWrap.h"
#include "vtkInformationStringVectorKeyWrap.h"
#include "vtkInformationUnsignedLongKeyWrap.h"
#include "vtkInformationKeyVectorKeyWrap.h"
#include "vtkInformationIdTypeKeyWrap.h"
#include "vtkInformationDoubleKeyWrap.h"
#include "vtkInformationIntegerPointerKeyWrap.h"
#include "vtkInformationObjectBaseKeyWrap.h"
#include "vtkInformationVectorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkDataObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInformationWrap::ptpl;

VtkInformationWrap::VtkInformationWrap()
{ }

VtkInformationWrap::VtkInformationWrap(vtkSmartPointer<vtkInformation> _native)
{ native = _native; }

VtkInformationWrap::~VtkInformationWrap()
{ }

void VtkInformationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInformation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Information").ToLocalChecked(), ConstructorGetter);
}

void VtkInformationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInformationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInformationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Append", Append);
	Nan::SetPrototypeMethod(tpl, "append", Append);

	Nan::SetPrototypeMethod(tpl, "AppendUnique", AppendUnique);
	Nan::SetPrototypeMethod(tpl, "appendUnique", AppendUnique);

	Nan::SetPrototypeMethod(tpl, "Clear", Clear);
	Nan::SetPrototypeMethod(tpl, "clear", Clear);

	Nan::SetPrototypeMethod(tpl, "Copy", Copy);
	Nan::SetPrototypeMethod(tpl, "copy", Copy);

	Nan::SetPrototypeMethod(tpl, "CopyEntries", CopyEntries);
	Nan::SetPrototypeMethod(tpl, "copyEntries", CopyEntries);

	Nan::SetPrototypeMethod(tpl, "CopyEntry", CopyEntry);
	Nan::SetPrototypeMethod(tpl, "copyEntry", CopyEntry);

	Nan::SetPrototypeMethod(tpl, "Get", Get);
	Nan::SetPrototypeMethod(tpl, "get", Get);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetKey", GetKey);
	Nan::SetPrototypeMethod(tpl, "getKey", GetKey);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfKeys", GetNumberOfKeys);
	Nan::SetPrototypeMethod(tpl, "getNumberOfKeys", GetNumberOfKeys);

	Nan::SetPrototypeMethod(tpl, "GetRequest", GetRequest);
	Nan::SetPrototypeMethod(tpl, "getRequest", GetRequest);

	Nan::SetPrototypeMethod(tpl, "Has", Has);
	Nan::SetPrototypeMethod(tpl, "has", Has);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Length", Length);
	Nan::SetPrototypeMethod(tpl, "length", Length);

	Nan::SetPrototypeMethod(tpl, "Modified", Modified);
	Nan::SetPrototypeMethod(tpl, "modified", Modified);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Remove", Remove);
	Nan::SetPrototypeMethod(tpl, "remove", Remove);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Set", Set);
	Nan::SetPrototypeMethod(tpl, "set", Set);

	Nan::SetPrototypeMethod(tpl, "SetRequest", SetRequest);
	Nan::SetPrototypeMethod(tpl, "setRequest", SetRequest);

	ptpl.Reset( tpl );
}

void VtkInformationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInformation> native = vtkSmartPointer<vtkInformation>::New();
		VtkInformationWrap* obj = new VtkInformationWrap(native);
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

void VtkInformationWrap::Append(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationStringVectorKeyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationStringVectorKeyWrap *a0 = ObjectWrap::Unwrap<VtkInformationStringVectorKeyWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Append(
				(vtkInformationStringVectorKey *) a0->native.GetPointer(),
				*a1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationUnsignedLongKeyWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationUnsignedLongKeyWrap *a1 = ObjectWrap::Unwrap<VtkInformationUnsignedLongKeyWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Append(
				(vtkInformationKeyVectorKey *) a0->native.GetPointer(),
				(vtkInformationUnsignedLongKey *) a1->native.GetPointer()
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Append(
				(vtkInformationDoubleVectorKey *) a0->native.GetPointer(),
				info[1]->NumberValue()
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Append(
				(vtkInformationIntegerVectorKey *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationWrap::AppendUnique(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationKeyVectorKeyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationKeyVectorKeyWrap *a0 = ObjectWrap::Unwrap<VtkInformationKeyVectorKeyWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationUnsignedLongKeyWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationUnsignedLongKeyWrap *a1 = ObjectWrap::Unwrap<VtkInformationUnsignedLongKeyWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AppendUnique(
				(vtkInformationKeyVectorKey *) a0->native.GetPointer(),
				(vtkInformationUnsignedLongKey *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationWrap::Clear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Clear();
}

void VtkInformationWrap::Copy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Copy(
				(vtkInformation *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationWrap::CopyEntries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationKeyVectorKeyWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationKeyVectorKeyWrap *a1 = ObjectWrap::Unwrap<VtkInformationKeyVectorKeyWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->CopyEntries(
					(vtkInformation *) a0->native.GetPointer(),
					(vtkInformationKeyVectorKey *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationWrap::CopyEntry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationUnsignedLongKeyWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationUnsignedLongKeyWrap *a1 = ObjectWrap::Unwrap<VtkInformationUnsignedLongKeyWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->CopyEntry(
					(vtkInformation *) a0->native.GetPointer(),
					(vtkInformationUnsignedLongKey *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationWrap::Get(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationKeyVectorKeyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationKeyVectorKeyWrap *a0 = ObjectWrap::Unwrap<VtkInformationKeyVectorKeyWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkInformationKey * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Get(
				(vtkInformationKeyVectorKey *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
				VtkInformationKeyWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkInformationKeyWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkInformationKeyWrap *w = new VtkInformationKeyWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkInformation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Get(
			(vtkInformationInformationKey *) a0->native.GetPointer()
		);
			VtkInformationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationWrap *w = new VtkInformationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationWrap::GetKey(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationDataObjectKeyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationDataObjectKeyWrap *a0 = ObjectWrap::Unwrap<VtkInformationDataObjectKeyWrap>(info[0]->ToObject());
		vtkInformationKey * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetKey(
			(vtkInformationDataObjectKey *) a0->native.GetPointer()
		);
			VtkInformationKeyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationKeyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationKeyWrap *w = new VtkInformationKeyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationWrap::GetNumberOfKeys(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfKeys();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInformationWrap::GetRequest(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	vtkInformationRequestKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRequest();
		VtkInformationRequestKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationRequestKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationRequestKeyWrap *w = new VtkInformationRequestKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationWrap::Has(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationInformationKeyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationInformationKeyWrap *a0 = ObjectWrap::Unwrap<VtkInformationInformationKeyWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Has(
			(vtkInformationInformationKey *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
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

void VtkInformationWrap::Length(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationKeyVectorKeyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationKeyVectorKeyWrap *a0 = ObjectWrap::Unwrap<VtkInformationKeyVectorKeyWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Length(
			(vtkInformationKeyVectorKey *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationWrap::Modified(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationKeyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationKeyWrap *a0 = ObjectWrap::Unwrap<VtkInformationKeyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Modified(
			(vtkInformationKey *) a0->native.GetPointer()
		);
		return;
	}
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Modified();
}

void VtkInformationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	vtkInformation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInformationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationWrap *w = new VtkInformationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationWrap::Remove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationKeyVectorKeyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationKeyVectorKeyWrap *a0 = ObjectWrap::Unwrap<VtkInformationKeyVectorKeyWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationKeyWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationKeyWrap *a1 = ObjectWrap::Unwrap<VtkInformationKeyWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Remove(
				(vtkInformationKeyVectorKey *) a0->native.GetPointer(),
				(vtkInformationKey *) a1->native.GetPointer()
			);
			return;
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Remove(
			(vtkInformationInformationKey *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInformationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationWrap *w = new VtkInformationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationWrap::Set(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationStringVectorKeyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationStringVectorKeyWrap *a0 = ObjectWrap::Unwrap<VtkInformationStringVectorKeyWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Set(
					(vtkInformationStringVectorKey *) a0->native.GetPointer(),
					*a1,
					info[2]->Int32Value()
				);
				return;
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Set(
				(vtkInformationStringKey *) a0->native.GetPointer(),
				*a1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Set(
				(vtkInformationInformationKey *) a0->native.GetPointer(),
				(vtkInformation *) a1->native.GetPointer()
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() > 6 && info[6]->IsNumber())
							{
								if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								native->Set(
									(vtkInformationDoubleVectorKey *) a0->native.GetPointer(),
									info[1]->NumberValue(),
									info[2]->NumberValue(),
									info[3]->NumberValue(),
									info[4]->NumberValue(),
									info[5]->NumberValue(),
									info[6]->NumberValue()
								);
								return;
							}
						}
					}
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->Set(
						(vtkInformationDoubleVectorKey *) a0->native.GetPointer(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Set(
				(vtkInformationDoubleKey *) a0->native.GetPointer(),
				info[1]->NumberValue()
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() > 6 && info[6]->IsInt32())
							{
								if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								native->Set(
									(vtkInformationIntegerVectorKey *) a0->native.GetPointer(),
									info[1]->Int32Value(),
									info[2]->Int32Value(),
									info[3]->Int32Value(),
									info[4]->Int32Value(),
									info[5]->Int32Value(),
									info[6]->Int32Value()
								);
								return;
							}
						}
					}
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->Set(
						(vtkInformationIntegerVectorKey *) a0->native.GetPointer(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Set(
				(vtkInformationIntegerKey *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Set(
			(vtkInformationRequestKey *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationWrap::SetRequest(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationWrap *wrapper = ObjectWrap::Unwrap<VtkInformationWrap>(info.Holder());
	vtkInformation *native = (vtkInformation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationRequestKeyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationRequestKeyWrap *a0 = ObjectWrap::Unwrap<VtkInformationRequestKeyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRequest(
			(vtkInformationRequestKey *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

