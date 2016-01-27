/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnsignedShortArrayWrap.h"
#include "vtkTypeUInt16ArrayWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTypeUInt16ArrayWrap::ptpl;

VtkTypeUInt16ArrayWrap::VtkTypeUInt16ArrayWrap()
{ }

VtkTypeUInt16ArrayWrap::VtkTypeUInt16ArrayWrap(vtkSmartPointer<vtkTypeUInt16Array> _native)
{ native = _native; }

VtkTypeUInt16ArrayWrap::~VtkTypeUInt16ArrayWrap()
{ }

void VtkTypeUInt16ArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTypeUInt16Array").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TypeUInt16Array").ToLocalChecked(), ConstructorGetter);
}

void VtkTypeUInt16ArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTypeUInt16ArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnsignedShortArrayWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnsignedShortArrayWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTypeUInt16ArrayWrap").ToLocalChecked());
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

void VtkTypeUInt16ArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTypeUInt16Array> native = vtkSmartPointer<vtkTypeUInt16Array>::New();
		VtkTypeUInt16ArrayWrap* obj = new VtkTypeUInt16ArrayWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTypeUInt16ArrayWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTypeUInt16ArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTypeUInt16ArrayWrap>(info.Holder());
	vtkTypeUInt16Array *native = (vtkTypeUInt16Array *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTypeUInt16ArrayWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTypeUInt16ArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTypeUInt16ArrayWrap>(info.Holder());
	vtkTypeUInt16Array *native = (vtkTypeUInt16Array *)wrapper->native.GetPointer();
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

void VtkTypeUInt16ArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTypeUInt16ArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTypeUInt16ArrayWrap>(info.Holder());
	vtkTypeUInt16Array *native = (vtkTypeUInt16Array *)wrapper->native.GetPointer();
	vtkTypeUInt16Array * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTypeUInt16ArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTypeUInt16ArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTypeUInt16ArrayWrap *w = new VtkTypeUInt16ArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTypeUInt16ArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTypeUInt16ArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTypeUInt16ArrayWrap>(info.Holder());
	vtkTypeUInt16Array *native = (vtkTypeUInt16Array *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTypeUInt16Array * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTypeUInt16ArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTypeUInt16ArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTypeUInt16ArrayWrap *w = new VtkTypeUInt16ArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

