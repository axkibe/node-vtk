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
Nan::Persistent<v8::FunctionTemplate> VtkRISReaderWrap::ptpl;

VtkRISReaderWrap::VtkRISReaderWrap()
{ }

VtkRISReaderWrap::VtkRISReaderWrap(vtkSmartPointer<vtkRISReader> _native)
{ native = _native; }

VtkRISReaderWrap::~VtkRISReaderWrap()
{ }

void VtkRISReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRISReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RISReader").ToLocalChecked(), ConstructorGetter);
}

void VtkRISReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRISReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRISReaderWrap").ToLocalChecked());
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

	ptpl.Reset( tpl );
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
		VtkRISReaderWrap* obj = new VtkRISReaderWrap(native);
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
	VtkRISReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRISReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRISReaderWrap *w = new VtkRISReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRISReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRISReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRISReaderWrap>(info.Holder());
	vtkRISReader *native = (vtkRISReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
		VtkRISReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRISReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRISReaderWrap *w = new VtkRISReaderWrap();
		w->native = r;
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
	if(info.Length() > 0 && info[0]->IsString())
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
	if(info.Length() > 0 && info[0]->IsString())
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

