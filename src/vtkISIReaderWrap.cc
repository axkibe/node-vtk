/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTableAlgorithmWrap.h"
#include "vtkISIReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkISIReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkISIReaderWrap::ptpl;

VtkISIReaderWrap::VtkISIReaderWrap()
{ }

VtkISIReaderWrap::VtkISIReaderWrap(vtkSmartPointer<vtkISIReader> _native)
{ native = _native; }

VtkISIReaderWrap::~VtkISIReaderWrap()
{ }

void VtkISIReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkISIReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ISIReader").ToLocalChecked(), ConstructorGetter);
}

void VtkISIReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkISIReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkISIReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDelimiter", GetDelimiter);
	Nan::SetPrototypeMethod(tpl, "getDelimiter", GetDelimiter);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetMaxRecords", GetMaxRecords);
	Nan::SetPrototypeMethod(tpl, "getMaxRecords", GetMaxRecords);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDelimiter", SetDelimiter);
	Nan::SetPrototypeMethod(tpl, "setDelimiter", SetDelimiter);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetMaxRecords", SetMaxRecords);
	Nan::SetPrototypeMethod(tpl, "setMaxRecords", SetMaxRecords);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkISIReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkISIReader> native = vtkSmartPointer<vtkISIReader>::New();
		VtkISIReaderWrap* obj = new VtkISIReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkISIReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkISIReaderWrap *wrapper = ObjectWrap::Unwrap<VtkISIReaderWrap>(info.Holder());
	vtkISIReader *native = (vtkISIReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkISIReaderWrap::GetDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkISIReaderWrap *wrapper = ObjectWrap::Unwrap<VtkISIReaderWrap>(info.Holder());
	vtkISIReader *native = (vtkISIReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDelimiter();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkISIReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkISIReaderWrap *wrapper = ObjectWrap::Unwrap<VtkISIReaderWrap>(info.Holder());
	vtkISIReader *native = (vtkISIReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkISIReaderWrap::GetMaxRecords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkISIReaderWrap *wrapper = ObjectWrap::Unwrap<VtkISIReaderWrap>(info.Holder());
	vtkISIReader *native = (vtkISIReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxRecords();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkISIReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkISIReaderWrap *wrapper = ObjectWrap::Unwrap<VtkISIReaderWrap>(info.Holder());
	vtkISIReader *native = (vtkISIReader *)wrapper->native.GetPointer();
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

void VtkISIReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkISIReaderWrap *wrapper = ObjectWrap::Unwrap<VtkISIReaderWrap>(info.Holder());
	vtkISIReader *native = (vtkISIReader *)wrapper->native.GetPointer();
	vtkISIReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkISIReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkISIReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkISIReaderWrap *w = new VtkISIReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkISIReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkISIReaderWrap *wrapper = ObjectWrap::Unwrap<VtkISIReaderWrap>(info.Holder());
	vtkISIReader *native = (vtkISIReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkISIReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkISIReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkISIReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkISIReaderWrap *w = new VtkISIReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkISIReaderWrap::SetDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkISIReaderWrap *wrapper = ObjectWrap::Unwrap<VtkISIReaderWrap>(info.Holder());
	vtkISIReader *native = (vtkISIReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDelimiter(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkISIReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkISIReaderWrap *wrapper = ObjectWrap::Unwrap<VtkISIReaderWrap>(info.Holder());
	vtkISIReader *native = (vtkISIReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkISIReaderWrap::SetMaxRecords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkISIReaderWrap *wrapper = ObjectWrap::Unwrap<VtkISIReaderWrap>(info.Holder());
	vtkISIReader *native = (vtkISIReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxRecords(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

