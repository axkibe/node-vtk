/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkEnSightReaderWrap.h"
#include "vtkEnSightGoldBinaryReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkEnSightGoldBinaryReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkEnSightGoldBinaryReaderWrap::ptpl;

VtkEnSightGoldBinaryReaderWrap::VtkEnSightGoldBinaryReaderWrap()
{ }

VtkEnSightGoldBinaryReaderWrap::VtkEnSightGoldBinaryReaderWrap(vtkSmartPointer<vtkEnSightGoldBinaryReader> _native)
{ native = _native; }

VtkEnSightGoldBinaryReaderWrap::~VtkEnSightGoldBinaryReaderWrap()
{ }

void VtkEnSightGoldBinaryReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkEnSightGoldBinaryReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("EnSightGoldBinaryReader").ToLocalChecked(), ConstructorGetter);
}

void VtkEnSightGoldBinaryReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkEnSightGoldBinaryReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkEnSightReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkEnSightReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkEnSightGoldBinaryReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkEnSightGoldBinaryReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkEnSightGoldBinaryReader> native = vtkSmartPointer<vtkEnSightGoldBinaryReader>::New();
		VtkEnSightGoldBinaryReaderWrap* obj = new VtkEnSightGoldBinaryReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkEnSightGoldBinaryReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightGoldBinaryReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightGoldBinaryReaderWrap>(info.Holder());
	vtkEnSightGoldBinaryReader *native = (vtkEnSightGoldBinaryReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEnSightGoldBinaryReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightGoldBinaryReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightGoldBinaryReaderWrap>(info.Holder());
	vtkEnSightGoldBinaryReader *native = (vtkEnSightGoldBinaryReader *)wrapper->native.GetPointer();
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

void VtkEnSightGoldBinaryReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightGoldBinaryReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightGoldBinaryReaderWrap>(info.Holder());
	vtkEnSightGoldBinaryReader *native = (vtkEnSightGoldBinaryReader *)wrapper->native.GetPointer();
	vtkEnSightGoldBinaryReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkEnSightGoldBinaryReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkEnSightGoldBinaryReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEnSightGoldBinaryReaderWrap *w = new VtkEnSightGoldBinaryReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEnSightGoldBinaryReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightGoldBinaryReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightGoldBinaryReaderWrap>(info.Holder());
	vtkEnSightGoldBinaryReader *native = (vtkEnSightGoldBinaryReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkEnSightGoldBinaryReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkEnSightGoldBinaryReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkEnSightGoldBinaryReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEnSightGoldBinaryReaderWrap *w = new VtkEnSightGoldBinaryReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

