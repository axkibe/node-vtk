/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkRandomSequenceWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRandomSequenceWrap::ptpl;

VtkRandomSequenceWrap::VtkRandomSequenceWrap()
{ }

VtkRandomSequenceWrap::VtkRandomSequenceWrap(vtkSmartPointer<vtkRandomSequence> _native)
{ native = _native; }

VtkRandomSequenceWrap::~VtkRandomSequenceWrap()
{ }

void VtkRandomSequenceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRandomSequence").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RandomSequence").ToLocalChecked(), ConstructorGetter);
}

void VtkRandomSequenceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRandomSequenceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRandomSequenceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Next", Next);
	Nan::SetPrototypeMethod(tpl, "next", Next);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkRandomSequenceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkRandomSequenceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkRandomSequenceWrap>(info.Holder());
	vtkRandomSequence *native = (vtkRandomSequence *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRandomSequenceWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkRandomSequenceWrap>(info.Holder());
	vtkRandomSequence *native = (vtkRandomSequence *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRandomSequenceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkRandomSequenceWrap>(info.Holder());
	vtkRandomSequence *native = (vtkRandomSequence *)wrapper->native.GetPointer();
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

void VtkRandomSequenceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkRandomSequenceWrap>(info.Holder());
	vtkRandomSequence *native = (vtkRandomSequence *)wrapper->native.GetPointer();
	vtkRandomSequence * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRandomSequenceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRandomSequenceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRandomSequenceWrap *w = new VtkRandomSequenceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRandomSequenceWrap::Next(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkRandomSequenceWrap>(info.Holder());
	vtkRandomSequence *native = (vtkRandomSequence *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Next();
}

void VtkRandomSequenceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkRandomSequenceWrap>(info.Holder());
	vtkRandomSequence *native = (vtkRandomSequence *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRandomSequence * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRandomSequenceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRandomSequenceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRandomSequenceWrap *w = new VtkRandomSequenceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

