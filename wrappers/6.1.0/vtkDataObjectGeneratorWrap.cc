/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectAlgorithmWrap.h"
#include "vtkDataObjectGeneratorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDataObjectGeneratorWrap::ptpl;

VtkDataObjectGeneratorWrap::VtkDataObjectGeneratorWrap()
{ }

VtkDataObjectGeneratorWrap::VtkDataObjectGeneratorWrap(vtkSmartPointer<vtkDataObjectGenerator> _native)
{ native = _native; }

VtkDataObjectGeneratorWrap::~VtkDataObjectGeneratorWrap()
{ }

void VtkDataObjectGeneratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDataObjectGenerator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DataObjectGenerator").ToLocalChecked(), ConstructorGetter);
}

void VtkDataObjectGeneratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDataObjectGeneratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDataObjectGeneratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetProgram", GetProgram);
	Nan::SetPrototypeMethod(tpl, "getProgram", GetProgram);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetProgram", SetProgram);
	Nan::SetPrototypeMethod(tpl, "setProgram", SetProgram);

	ptpl.Reset( tpl );
}

void VtkDataObjectGeneratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDataObjectGenerator> native = vtkSmartPointer<vtkDataObjectGenerator>::New();
		VtkDataObjectGeneratorWrap* obj = new VtkDataObjectGeneratorWrap(native);
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

void VtkDataObjectGeneratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectGeneratorWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectGeneratorWrap>(info.Holder());
	vtkDataObjectGenerator *native = (vtkDataObjectGenerator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataObjectGeneratorWrap::GetProgram(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectGeneratorWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectGeneratorWrap>(info.Holder());
	vtkDataObjectGenerator *native = (vtkDataObjectGenerator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProgram();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataObjectGeneratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectGeneratorWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectGeneratorWrap>(info.Holder());
	vtkDataObjectGenerator *native = (vtkDataObjectGenerator *)wrapper->native.GetPointer();
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

void VtkDataObjectGeneratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectGeneratorWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectGeneratorWrap>(info.Holder());
	vtkDataObjectGenerator *native = (vtkDataObjectGenerator *)wrapper->native.GetPointer();
	vtkDataObjectGenerator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDataObjectGeneratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataObjectGeneratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectGeneratorWrap *w = new VtkDataObjectGeneratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataObjectGeneratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectGeneratorWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectGeneratorWrap>(info.Holder());
	vtkDataObjectGenerator *native = (vtkDataObjectGenerator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDataObjectGenerator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDataObjectGeneratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataObjectGeneratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataObjectGeneratorWrap *w = new VtkDataObjectGeneratorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataObjectGeneratorWrap::SetProgram(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataObjectGeneratorWrap *wrapper = ObjectWrap::Unwrap<VtkDataObjectGeneratorWrap>(info.Holder());
	vtkDataObjectGenerator *native = (vtkDataObjectGenerator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProgram(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

