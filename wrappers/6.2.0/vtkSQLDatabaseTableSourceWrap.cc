/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTableAlgorithmWrap.h"
#include "vtkSQLDatabaseTableSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSQLDatabaseTableSourceWrap::ptpl;

VtkSQLDatabaseTableSourceWrap::VtkSQLDatabaseTableSourceWrap()
{ }

VtkSQLDatabaseTableSourceWrap::VtkSQLDatabaseTableSourceWrap(vtkSmartPointer<vtkSQLDatabaseTableSource> _native)
{ native = _native; }

VtkSQLDatabaseTableSourceWrap::~VtkSQLDatabaseTableSourceWrap()
{ }

void VtkSQLDatabaseTableSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSQLDatabaseTableSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SQLDatabaseTableSource").ToLocalChecked(), ConstructorGetter);
}

void VtkSQLDatabaseTableSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSQLDatabaseTableSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSQLDatabaseTableSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GeneratePedigreeIdsOff", GeneratePedigreeIdsOff);
	Nan::SetPrototypeMethod(tpl, "generatePedigreeIdsOff", GeneratePedigreeIdsOff);

	Nan::SetPrototypeMethod(tpl, "GeneratePedigreeIdsOn", GeneratePedigreeIdsOn);
	Nan::SetPrototypeMethod(tpl, "generatePedigreeIdsOn", GeneratePedigreeIdsOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPedigreeIdArrayName", GetPedigreeIdArrayName);
	Nan::SetPrototypeMethod(tpl, "getPedigreeIdArrayName", GetPedigreeIdArrayName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPedigreeIdArrayName", SetPedigreeIdArrayName);
	Nan::SetPrototypeMethod(tpl, "setPedigreeIdArrayName", SetPedigreeIdArrayName);

	ptpl.Reset( tpl );
}

void VtkSQLDatabaseTableSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSQLDatabaseTableSource> native = vtkSmartPointer<vtkSQLDatabaseTableSource>::New();
		VtkSQLDatabaseTableSourceWrap* obj = new VtkSQLDatabaseTableSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSQLDatabaseTableSourceWrap::GeneratePedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseTableSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseTableSourceWrap>(info.Holder());
	vtkSQLDatabaseTableSource *native = (vtkSQLDatabaseTableSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GeneratePedigreeIdsOff();
}

void VtkSQLDatabaseTableSourceWrap::GeneratePedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseTableSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseTableSourceWrap>(info.Holder());
	vtkSQLDatabaseTableSource *native = (vtkSQLDatabaseTableSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GeneratePedigreeIdsOn();
}

void VtkSQLDatabaseTableSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseTableSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseTableSourceWrap>(info.Holder());
	vtkSQLDatabaseTableSource *native = (vtkSQLDatabaseTableSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSQLDatabaseTableSourceWrap::GetPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseTableSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseTableSourceWrap>(info.Holder());
	vtkSQLDatabaseTableSource *native = (vtkSQLDatabaseTableSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPedigreeIdArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSQLDatabaseTableSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseTableSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseTableSourceWrap>(info.Holder());
	vtkSQLDatabaseTableSource *native = (vtkSQLDatabaseTableSource *)wrapper->native.GetPointer();
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

void VtkSQLDatabaseTableSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseTableSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseTableSourceWrap>(info.Holder());
	vtkSQLDatabaseTableSource *native = (vtkSQLDatabaseTableSource *)wrapper->native.GetPointer();
	vtkSQLDatabaseTableSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSQLDatabaseTableSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSQLDatabaseTableSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSQLDatabaseTableSourceWrap *w = new VtkSQLDatabaseTableSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSQLDatabaseTableSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseTableSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseTableSourceWrap>(info.Holder());
	vtkSQLDatabaseTableSource *native = (vtkSQLDatabaseTableSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSQLDatabaseTableSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSQLDatabaseTableSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSQLDatabaseTableSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSQLDatabaseTableSourceWrap *w = new VtkSQLDatabaseTableSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLDatabaseTableSourceWrap::SetPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLDatabaseTableSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSQLDatabaseTableSourceWrap>(info.Holder());
	vtkSQLDatabaseTableSource *native = (vtkSQLDatabaseTableSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPedigreeIdArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
