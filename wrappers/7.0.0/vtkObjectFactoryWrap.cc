/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkObjectFactoryWrap.h"
#include "vtkCollectionWrap.h"
#include "vtkObjectFactoryCollectionWrap.h"
#include "vtkOverrideInformationCollectionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkObjectFactoryWrap::ptpl;

VtkObjectFactoryWrap::VtkObjectFactoryWrap()
{ }

VtkObjectFactoryWrap::VtkObjectFactoryWrap(vtkSmartPointer<vtkObjectFactory> _native)
{ native = _native; }

VtkObjectFactoryWrap::~VtkObjectFactoryWrap()
{ }

void VtkObjectFactoryWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkObjectFactory").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ObjectFactory").ToLocalChecked(), ConstructorGetter);
}

void VtkObjectFactoryWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkObjectFactoryWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkObjectFactoryWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ConstructInstance", ConstructInstance);
	Nan::SetPrototypeMethod(tpl, "constructInstance", ConstructInstance);

	Nan::SetPrototypeMethod(tpl, "CreateAllInstance", CreateAllInstance);
	Nan::SetPrototypeMethod(tpl, "createAllInstance", CreateAllInstance);

	Nan::SetPrototypeMethod(tpl, "CreateInstance", CreateInstance);
	Nan::SetPrototypeMethod(tpl, "createInstance", CreateInstance);

	Nan::SetPrototypeMethod(tpl, "Disable", Disable);
	Nan::SetPrototypeMethod(tpl, "disable", Disable);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClassOverrideName", GetClassOverrideName);
	Nan::SetPrototypeMethod(tpl, "getClassOverrideName", GetClassOverrideName);

	Nan::SetPrototypeMethod(tpl, "GetClassOverrideWithName", GetClassOverrideWithName);
	Nan::SetPrototypeMethod(tpl, "getClassOverrideWithName", GetClassOverrideWithName);

	Nan::SetPrototypeMethod(tpl, "GetEnableFlag", GetEnableFlag);
	Nan::SetPrototypeMethod(tpl, "getEnableFlag", GetEnableFlag);

	Nan::SetPrototypeMethod(tpl, "GetLibraryPath", GetLibraryPath);
	Nan::SetPrototypeMethod(tpl, "getLibraryPath", GetLibraryPath);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfOverrides", GetNumberOfOverrides);
	Nan::SetPrototypeMethod(tpl, "getNumberOfOverrides", GetNumberOfOverrides);

	Nan::SetPrototypeMethod(tpl, "GetOverrideDescription", GetOverrideDescription);
	Nan::SetPrototypeMethod(tpl, "getOverrideDescription", GetOverrideDescription);

	Nan::SetPrototypeMethod(tpl, "GetOverrideInformation", GetOverrideInformation);
	Nan::SetPrototypeMethod(tpl, "getOverrideInformation", GetOverrideInformation);

	Nan::SetPrototypeMethod(tpl, "GetRegisteredFactories", GetRegisteredFactories);
	Nan::SetPrototypeMethod(tpl, "getRegisteredFactories", GetRegisteredFactories);

	Nan::SetPrototypeMethod(tpl, "HasOverride", HasOverride);
	Nan::SetPrototypeMethod(tpl, "hasOverride", HasOverride);

	Nan::SetPrototypeMethod(tpl, "HasOverrideAny", HasOverrideAny);
	Nan::SetPrototypeMethod(tpl, "hasOverrideAny", HasOverrideAny);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReHash", ReHash);
	Nan::SetPrototypeMethod(tpl, "reHash", ReHash);

	Nan::SetPrototypeMethod(tpl, "RegisterFactory", RegisterFactory);
	Nan::SetPrototypeMethod(tpl, "registerFactory", RegisterFactory);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAllEnableFlags", SetAllEnableFlags);
	Nan::SetPrototypeMethod(tpl, "setAllEnableFlags", SetAllEnableFlags);

	Nan::SetPrototypeMethod(tpl, "SetEnableFlag", SetEnableFlag);
	Nan::SetPrototypeMethod(tpl, "setEnableFlag", SetEnableFlag);

	Nan::SetPrototypeMethod(tpl, "UnRegisterAllFactories", UnRegisterAllFactories);
	Nan::SetPrototypeMethod(tpl, "unRegisterAllFactories", UnRegisterAllFactories);

	Nan::SetPrototypeMethod(tpl, "UnRegisterFactory", UnRegisterFactory);
	Nan::SetPrototypeMethod(tpl, "unRegisterFactory", UnRegisterFactory);

	ptpl.Reset( tpl );
}

void VtkObjectFactoryWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkObjectFactoryWrap::ConstructInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ConstructInstance(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::CreateAllInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkCollectionWrap::ptpl))->HasInstance(info[1]))
		{
			VtkCollectionWrap *a1 = ObjectWrap::Unwrap<VtkCollectionWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->CreateAllInstance(
				*a0,
				(vtkCollection *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::CreateInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		vtkObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CreateInstance(
			*a0
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

void VtkObjectFactoryWrap::Disable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Disable(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkObjectFactoryWrap::GetClassOverrideName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetClassOverrideName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::GetClassOverrideWithName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetClassOverrideWithName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::GetEnableFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetEnableFlag(
				*a0,
				*a1
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetEnableFlag(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::GetLibraryPath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLibraryPath();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkObjectFactoryWrap::GetNumberOfOverrides(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfOverrides();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkObjectFactoryWrap::GetOverrideDescription(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOverrideDescription(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::GetOverrideInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkOverrideInformationCollectionWrap::ptpl))->HasInstance(info[1]))
		{
			VtkOverrideInformationCollectionWrap *a1 = ObjectWrap::Unwrap<VtkOverrideInformationCollectionWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetOverrideInformation(
				*a0,
				(vtkOverrideInformationCollection *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::GetRegisteredFactories(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	vtkObjectFactoryCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRegisteredFactories();
		VtkObjectFactoryCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkObjectFactoryCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkObjectFactoryCollectionWrap *w = new VtkObjectFactoryCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkObjectFactoryWrap::HasOverride(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->HasOverride(
				*a0,
				*a1
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
		r = native->HasOverride(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::HasOverrideAny(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->HasOverrideAny(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
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

void VtkObjectFactoryWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	vtkObjectFactory * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
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

void VtkObjectFactoryWrap::ReHash(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReHash();
}

void VtkObjectFactoryWrap::RegisterFactory(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectFactoryWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectFactoryWrap *a0 = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RegisterFactory(
			(vtkObjectFactory *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkObjectFactory * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
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
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::SetAllEnableFlags(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsString())
			{
				Nan::Utf8String a2(info[2]);
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetAllEnableFlags(
					info[0]->Int32Value(),
					*a1,
					*a2
				);
				return;
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAllEnableFlags(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::SetEnableFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsString())
			{
				Nan::Utf8String a2(info[2]);
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetEnableFlag(
					info[0]->Int32Value(),
					*a1,
					*a2
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectFactoryWrap::UnRegisterAllFactories(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UnRegisterAllFactories();
}

void VtkObjectFactoryWrap::UnRegisterFactory(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info.Holder());
	vtkObjectFactory *native = (vtkObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectFactoryWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectFactoryWrap *a0 = ObjectWrap::Unwrap<VtkObjectFactoryWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->UnRegisterFactory(
			(vtkObjectFactory *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
