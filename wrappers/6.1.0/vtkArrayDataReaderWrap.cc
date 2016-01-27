/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkArrayDataAlgorithmWrap.h"
#include "vtkArrayDataReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkArrayDataReaderWrap::ptpl;

VtkArrayDataReaderWrap::VtkArrayDataReaderWrap()
{ }

VtkArrayDataReaderWrap::VtkArrayDataReaderWrap(vtkSmartPointer<vtkArrayDataReader> _native)
{ native = _native; }

VtkArrayDataReaderWrap::~VtkArrayDataReaderWrap()
{ }

void VtkArrayDataReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkArrayDataReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ArrayDataReader").ToLocalChecked(), ConstructorGetter);
}

void VtkArrayDataReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkArrayDataReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkArrayDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkArrayDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkArrayDataReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReadFromInputStringOff", ReadFromInputStringOff);
	Nan::SetPrototypeMethod(tpl, "readFromInputStringOff", ReadFromInputStringOff);

	Nan::SetPrototypeMethod(tpl, "ReadFromInputStringOn", ReadFromInputStringOn);
	Nan::SetPrototypeMethod(tpl, "readFromInputStringOn", ReadFromInputStringOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	ptpl.Reset( tpl );
}

void VtkArrayDataReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkArrayDataReader> native = vtkSmartPointer<vtkArrayDataReader>::New();
		VtkArrayDataReaderWrap* obj = new VtkArrayDataReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkArrayDataReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataReaderWrap>(info.Holder());
	vtkArrayDataReader *native = (vtkArrayDataReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkArrayDataReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataReaderWrap>(info.Holder());
	vtkArrayDataReader *native = (vtkArrayDataReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkArrayDataReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataReaderWrap>(info.Holder());
	vtkArrayDataReader *native = (vtkArrayDataReader *)wrapper->native.GetPointer();
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

void VtkArrayDataReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataReaderWrap>(info.Holder());
	vtkArrayDataReader *native = (vtkArrayDataReader *)wrapper->native.GetPointer();
	vtkArrayDataReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkArrayDataReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkArrayDataReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkArrayDataReaderWrap *w = new VtkArrayDataReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkArrayDataReaderWrap::ReadFromInputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataReaderWrap>(info.Holder());
	vtkArrayDataReader *native = (vtkArrayDataReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadFromInputStringOff();
}

void VtkArrayDataReaderWrap::ReadFromInputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataReaderWrap>(info.Holder());
	vtkArrayDataReader *native = (vtkArrayDataReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadFromInputStringOn();
}

void VtkArrayDataReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataReaderWrap>(info.Holder());
	vtkArrayDataReader *native = (vtkArrayDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkArrayDataReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkArrayDataReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkArrayDataReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkArrayDataReaderWrap *w = new VtkArrayDataReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayDataReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataReaderWrap>(info.Holder());
	vtkArrayDataReader *native = (vtkArrayDataReader *)wrapper->native.GetPointer();
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

