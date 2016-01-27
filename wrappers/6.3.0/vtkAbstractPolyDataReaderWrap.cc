/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkAbstractPolyDataReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractPolyDataReaderWrap::ptpl;

VtkAbstractPolyDataReaderWrap::VtkAbstractPolyDataReaderWrap()
{ }

VtkAbstractPolyDataReaderWrap::VtkAbstractPolyDataReaderWrap(vtkSmartPointer<vtkAbstractPolyDataReader> _native)
{ native = _native; }

VtkAbstractPolyDataReaderWrap::~VtkAbstractPolyDataReaderWrap()
{ }

void VtkAbstractPolyDataReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractPolyDataReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractPolyDataReader").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractPolyDataReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractPolyDataReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractPolyDataReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	ptpl.Reset( tpl );
}

void VtkAbstractPolyDataReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkAbstractPolyDataReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolyDataReaderWrap>(info.Holder());
	vtkAbstractPolyDataReader *native = (vtkAbstractPolyDataReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractPolyDataReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolyDataReaderWrap>(info.Holder());
	vtkAbstractPolyDataReader *native = (vtkAbstractPolyDataReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractPolyDataReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolyDataReaderWrap>(info.Holder());
	vtkAbstractPolyDataReader *native = (vtkAbstractPolyDataReader *)wrapper->native.GetPointer();
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

void VtkAbstractPolyDataReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolyDataReaderWrap>(info.Holder());
	vtkAbstractPolyDataReader *native = (vtkAbstractPolyDataReader *)wrapper->native.GetPointer();
	vtkAbstractPolyDataReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAbstractPolyDataReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractPolyDataReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractPolyDataReaderWrap *w = new VtkAbstractPolyDataReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPolyDataReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolyDataReaderWrap>(info.Holder());
	vtkAbstractPolyDataReader *native = (vtkAbstractPolyDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAbstractPolyDataReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAbstractPolyDataReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAbstractPolyDataReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractPolyDataReaderWrap *w = new VtkAbstractPolyDataReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractPolyDataReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPolyDataReaderWrap>(info.Holder());
	vtkAbstractPolyDataReader *native = (vtkAbstractPolyDataReader *)wrapper->native.GetPointer();
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

