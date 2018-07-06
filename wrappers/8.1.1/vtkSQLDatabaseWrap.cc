/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkSQLDatabaseWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkSQLDatabaseSchemaWrap.h"
#include "vtkInformationObjectBaseKeyWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSQLDatabaseWrap::ptpl;

VtkSQLDatabaseWrap::VtkSQLDatabaseWrap()
{ }

VtkSQLDatabaseWrap::VtkSQLDatabaseWrap(vtkSmartPointer<vtkSQLDatabase> _native)
{ native = _native; }

VtkSQLDatabaseWrap::~VtkSQLDatabaseWrap()
{ }

void VtkSQLDatabaseWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSQLDatabase").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SQLDatabase").ToLocalChecked(), ConstructorGetter);
}

void VtkSQLDatabaseWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSQLDatabaseWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSQLDatabaseWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateFromURL", CreateFromURL);
	Nan::SetPrototypeMethod(tpl, "createFromURL", CreateFromURL);

	Nan::SetPrototypeMethod(tpl, "DATABASE", DATABASE);

	Nan::SetPrototypeMethod(tpl, "EffectSchema", EffectSchema);
	Nan::SetPrototypeMethod(tpl, "effectSchema", EffectSchema);

	Nan::SetPrototypeMethod(tpl, "IsSupported", IsSupported);
	Nan::SetPrototypeMethod(tpl, "isSupported", IsSupported);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "UnRegisterAllCreateFromURLCallbacks", UnRegisterAllCreateFromURLCallbacks);
	Nan::SetPrototypeMethod(tpl, "unRegisterAllCreateFromURLCallbacks", UnRegisterAllCreateFromURLCallbacks);

#ifdef VTK_NODE_PLUS_VTKSQLDATABASEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSQLDATABASEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSQLDatabaseWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkSQLDatabaseWrap::CreateFromURL(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseWrap>(info.Holder());
	vtkSQLDatabase *native = (vtkSQLDatabase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		vtkSQLDatabase * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CreateFromURL(
			*a0
		);
		VtkSQLDatabaseWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSQLDatabaseWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSQLDatabaseWrap *w = new VtkSQLDatabaseWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLDatabaseWrap::DATABASE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseWrap>(info.Holder());
	vtkSQLDatabase *native = (vtkSQLDatabase *)wrapper->native.GetPointer();
	vtkInformationObjectBaseKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DATABASE();
	VtkInformationObjectBaseKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationObjectBaseKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationObjectBaseKeyWrap *w = new VtkInformationObjectBaseKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSQLDatabaseWrap::EffectSchema(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseWrap>(info.Holder());
	vtkSQLDatabase *native = (vtkSQLDatabase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSQLDatabaseSchemaWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSQLDatabaseSchemaWrap *a0 = ObjectWrap::Unwrap<VtkSQLDatabaseSchemaWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsBoolean())
		{
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->EffectSchema(
				(vtkSQLDatabaseSchema *) a0->native.GetPointer(),
				info[1]->BooleanValue()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLDatabaseWrap::IsSupported(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseWrap>(info.Holder());
	vtkSQLDatabase *native = (vtkSQLDatabase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsSupported(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLDatabaseWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseWrap>(info.Holder());
	vtkSQLDatabase *native = (vtkSQLDatabase *)wrapper->native.GetPointer();
	vtkSQLDatabase * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSQLDatabaseWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSQLDatabaseWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSQLDatabaseWrap *w = new VtkSQLDatabaseWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSQLDatabaseWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseWrap>(info.Holder());
	vtkSQLDatabase *native = (vtkSQLDatabase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkSQLDatabase * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkSQLDatabaseWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSQLDatabaseWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSQLDatabaseWrap *w = new VtkSQLDatabaseWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLDatabaseWrap::UnRegisterAllCreateFromURLCallbacks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseWrap>(info.Holder());
	vtkSQLDatabase *native = (vtkSQLDatabase *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UnRegisterAllCreateFromURLCallbacks();
}

