/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTableAlgorithmWrap.h"
#include "vtkRISReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkRISReaderWrap::constructor;

VtkRISReaderWrap::VtkRISReaderWrap()
{ }

VtkRISReaderWrap::VtkRISReaderWrap(vtkSmartPointer<vtkRISReader> _native)
{ native = _native; }

VtkRISReaderWrap::~VtkRISReaderWrap()
{ }

void VtkRISReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkRISReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkTableAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkRISReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("RISReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkRISReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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

}

void VtkRISReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRISReader> native = vtkSmartPointer<vtkRISReader>::New();
		VtkRISReaderWrap* obj = new VtkRISReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRISReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRISReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRISReaderWrap>(info.Holder());
	vtkRISReader *native = (vtkRISReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRISReaderWrap::GetDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRISReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRISReaderWrap>(info.Holder());
	vtkRISReader *native = (vtkRISReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDelimiter();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRISReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRISReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRISReaderWrap>(info.Holder());
	vtkRISReader *native = (vtkRISReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRISReaderWrap::GetMaxRecords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRISReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRISReaderWrap>(info.Holder());
	vtkRISReader *native = (vtkRISReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxRecords();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRISReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRISReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRISReaderWrap>(info.Holder());
	vtkRISReader *native = (vtkRISReader *)wrapper->native.GetPointer();
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

void VtkRISReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRISReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRISReaderWrap>(info.Holder());
	vtkRISReader *native = (vtkRISReader *)wrapper->native.GetPointer();
	vtkRISReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRISReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRISReaderWrap *w = new VtkRISReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRISReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRISReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRISReaderWrap>(info.Holder());
	vtkRISReader *native = (vtkRISReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRISReader * r;
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
			Nan::New<v8::Function>(VtkRISReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRISReaderWrap *w = new VtkRISReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRISReaderWrap::SetDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRISReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRISReaderWrap>(info.Holder());
	vtkRISReader *native = (vtkRISReader *)wrapper->native.GetPointer();
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

void VtkRISReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRISReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRISReaderWrap>(info.Holder());
	vtkRISReader *native = (vtkRISReader *)wrapper->native.GetPointer();
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

void VtkRISReaderWrap::SetMaxRecords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRISReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRISReaderWrap>(info.Holder());
	vtkRISReader *native = (vtkRISReader *)wrapper->native.GetPointer();
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

