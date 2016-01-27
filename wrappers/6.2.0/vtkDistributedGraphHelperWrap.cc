/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkDistributedGraphHelperWrap.h"
#include "vtkInformationIntegerKeyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDistributedGraphHelperWrap::ptpl;

VtkDistributedGraphHelperWrap::VtkDistributedGraphHelperWrap()
{ }

VtkDistributedGraphHelperWrap::VtkDistributedGraphHelperWrap(vtkSmartPointer<vtkDistributedGraphHelper> _native)
{ native = _native; }

VtkDistributedGraphHelperWrap::~VtkDistributedGraphHelperWrap()
{ }

void VtkDistributedGraphHelperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDistributedGraphHelper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DistributedGraphHelper").ToLocalChecked(), ConstructorGetter);
}

void VtkDistributedGraphHelperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDistributedGraphHelperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDistributedGraphHelperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Clone", Clone);
	Nan::SetPrototypeMethod(tpl, "clone", Clone);

	Nan::SetPrototypeMethod(tpl, "DISTRIBUTEDEDGEIDS", DISTRIBUTEDEDGEIDS);

	Nan::SetPrototypeMethod(tpl, "DISTRIBUTEDVERTEXIDS", DISTRIBUTEDVERTEXIDS);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Synchronize", Synchronize);
	Nan::SetPrototypeMethod(tpl, "synchronize", Synchronize);

	ptpl.Reset( tpl );
}

void VtkDistributedGraphHelperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDistributedGraphHelperWrap::Clone(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistributedGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDistributedGraphHelperWrap>(info.Holder());
	vtkDistributedGraphHelper *native = (vtkDistributedGraphHelper *)wrapper->native.GetPointer();
	vtkDistributedGraphHelper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Clone();
		VtkDistributedGraphHelperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDistributedGraphHelperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDistributedGraphHelperWrap *w = new VtkDistributedGraphHelperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDistributedGraphHelperWrap::DISTRIBUTEDEDGEIDS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistributedGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDistributedGraphHelperWrap>(info.Holder());
	vtkDistributedGraphHelper *native = (vtkDistributedGraphHelper *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DISTRIBUTEDEDGEIDS();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDistributedGraphHelperWrap::DISTRIBUTEDVERTEXIDS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistributedGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDistributedGraphHelperWrap>(info.Holder());
	vtkDistributedGraphHelper *native = (vtkDistributedGraphHelper *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DISTRIBUTEDVERTEXIDS();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDistributedGraphHelperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistributedGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDistributedGraphHelperWrap>(info.Holder());
	vtkDistributedGraphHelper *native = (vtkDistributedGraphHelper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDistributedGraphHelperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistributedGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDistributedGraphHelperWrap>(info.Holder());
	vtkDistributedGraphHelper *native = (vtkDistributedGraphHelper *)wrapper->native.GetPointer();
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

void VtkDistributedGraphHelperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistributedGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDistributedGraphHelperWrap>(info.Holder());
	vtkDistributedGraphHelper *native = (vtkDistributedGraphHelper *)wrapper->native.GetPointer();
	vtkDistributedGraphHelper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDistributedGraphHelperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDistributedGraphHelperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDistributedGraphHelperWrap *w = new VtkDistributedGraphHelperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDistributedGraphHelperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistributedGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDistributedGraphHelperWrap>(info.Holder());
	vtkDistributedGraphHelper *native = (vtkDistributedGraphHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDistributedGraphHelper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDistributedGraphHelperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDistributedGraphHelperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDistributedGraphHelperWrap *w = new VtkDistributedGraphHelperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistributedGraphHelperWrap::Synchronize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistributedGraphHelperWrap *wrapper = ObjectWrap::Unwrap<VtkDistributedGraphHelperWrap>(info.Holder());
	vtkDistributedGraphHelper *native = (vtkDistributedGraphHelper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Synchronize();
}
