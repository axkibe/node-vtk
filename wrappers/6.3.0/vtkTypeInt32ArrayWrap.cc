/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkIntArrayWrap.h"
#include "vtkTypeInt32ArrayWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTypeInt32ArrayWrap::ptpl;

VtkTypeInt32ArrayWrap::VtkTypeInt32ArrayWrap()
{ }

VtkTypeInt32ArrayWrap::VtkTypeInt32ArrayWrap(vtkSmartPointer<vtkTypeInt32Array> _native)
{ native = _native; }

VtkTypeInt32ArrayWrap::~VtkTypeInt32ArrayWrap()
{ }

void VtkTypeInt32ArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTypeInt32Array").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TypeInt32Array").ToLocalChecked(), ConstructorGetter);
}

void VtkTypeInt32ArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTypeInt32ArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkIntArrayWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkIntArrayWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTypeInt32ArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkTypeInt32ArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTypeInt32Array> native = vtkSmartPointer<vtkTypeInt32Array>::New();
		VtkTypeInt32ArrayWrap* obj = new VtkTypeInt32ArrayWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTypeInt32ArrayWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTypeInt32ArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTypeInt32ArrayWrap>(info.Holder());
	vtkTypeInt32Array *native = (vtkTypeInt32Array *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTypeInt32ArrayWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTypeInt32ArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTypeInt32ArrayWrap>(info.Holder());
	vtkTypeInt32Array *native = (vtkTypeInt32Array *)wrapper->native.GetPointer();
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

void VtkTypeInt32ArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTypeInt32ArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTypeInt32ArrayWrap>(info.Holder());
	vtkTypeInt32Array *native = (vtkTypeInt32Array *)wrapper->native.GetPointer();
	vtkTypeInt32Array * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTypeInt32ArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTypeInt32ArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTypeInt32ArrayWrap *w = new VtkTypeInt32ArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTypeInt32ArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTypeInt32ArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTypeInt32ArrayWrap>(info.Holder());
	vtkTypeInt32Array *native = (vtkTypeInt32Array *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTypeInt32Array * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTypeInt32ArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTypeInt32ArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTypeInt32ArrayWrap *w = new VtkTypeInt32ArrayWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

