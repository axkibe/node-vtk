/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataArrayWrap.h"
#include "vtkUnsignedIntArrayWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkUnsignedIntArrayWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkUnsignedIntArrayWrap::ptpl;

VtkUnsignedIntArrayWrap::VtkUnsignedIntArrayWrap()
{ }

VtkUnsignedIntArrayWrap::VtkUnsignedIntArrayWrap(vtkSmartPointer<vtkUnsignedIntArray> _native)
{ native = _native; }

VtkUnsignedIntArrayWrap::~VtkUnsignedIntArrayWrap()
{ }

void VtkUnsignedIntArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkUnsignedIntArray").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("UnsignedIntArray").ToLocalChecked(), ConstructorGetter);
}

void VtkUnsignedIntArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkUnsignedIntArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataArrayWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataArrayWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkUnsignedIntArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataType", GetDataType);
	Nan::SetPrototypeMethod(tpl, "getDataType", GetDataType);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkUnsignedIntArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkUnsignedIntArray> native = vtkSmartPointer<vtkUnsignedIntArray>::New();
		VtkUnsignedIntArrayWrap* obj = new VtkUnsignedIntArrayWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkUnsignedIntArrayWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnsignedIntArrayWrap *wrapper = ObjectWrap::Unwrap<VtkUnsignedIntArrayWrap>(info.Holder());
	vtkUnsignedIntArray *native = (vtkUnsignedIntArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUnsignedIntArrayWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnsignedIntArrayWrap *wrapper = ObjectWrap::Unwrap<VtkUnsignedIntArrayWrap>(info.Holder());
	vtkUnsignedIntArray *native = (vtkUnsignedIntArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnsignedIntArrayWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnsignedIntArrayWrap *wrapper = ObjectWrap::Unwrap<VtkUnsignedIntArrayWrap>(info.Holder());
	vtkUnsignedIntArray *native = (vtkUnsignedIntArray *)wrapper->native.GetPointer();
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

void VtkUnsignedIntArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnsignedIntArrayWrap *wrapper = ObjectWrap::Unwrap<VtkUnsignedIntArrayWrap>(info.Holder());
	vtkUnsignedIntArray *native = (vtkUnsignedIntArray *)wrapper->native.GetPointer();
	vtkUnsignedIntArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkUnsignedIntArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkUnsignedIntArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnsignedIntArrayWrap *w = new VtkUnsignedIntArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnsignedIntArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnsignedIntArrayWrap *wrapper = ObjectWrap::Unwrap<VtkUnsignedIntArrayWrap>(info.Holder());
	vtkUnsignedIntArray *native = (vtkUnsignedIntArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkUnsignedIntArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkUnsignedIntArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkUnsignedIntArrayWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnsignedIntArrayWrap *w = new VtkUnsignedIntArrayWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

