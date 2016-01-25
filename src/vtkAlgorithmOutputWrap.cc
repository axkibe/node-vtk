/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkAlgorithmWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAlgorithmOutputWrap::constructor;

VtkAlgorithmOutputWrap::VtkAlgorithmOutputWrap()
{ }

VtkAlgorithmOutputWrap::VtkAlgorithmOutputWrap(vtkSmartPointer<vtkAlgorithmOutput> _native)
{ native = _native; }

VtkAlgorithmOutputWrap::~VtkAlgorithmOutputWrap()
{ }

void VtkAlgorithmOutputWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkAlgorithmOutputWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkAlgorithmOutput").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AlgorithmOutput").ToLocalChecked(),tpl->GetFunction());
}

void VtkAlgorithmOutputWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetIndex", GetIndex);
	Nan::SetPrototypeMethod(tpl, "getIndex", GetIndex);

	Nan::SetPrototypeMethod(tpl, "GetProducer", GetProducer);
	Nan::SetPrototypeMethod(tpl, "getProducer", GetProducer);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetIndex", SetIndex);
	Nan::SetPrototypeMethod(tpl, "setIndex", SetIndex);

	Nan::SetPrototypeMethod(tpl, "SetProducer", SetProducer);
	Nan::SetPrototypeMethod(tpl, "setProducer", SetProducer);

}

void VtkAlgorithmOutputWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAlgorithmOutput> native = vtkSmartPointer<vtkAlgorithmOutput>::New();
		VtkAlgorithmOutputWrap* obj = new VtkAlgorithmOutputWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAlgorithmOutputWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAlgorithmOutputWrap *wrapper = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info.Holder());
	vtkAlgorithmOutput *native = (vtkAlgorithmOutput *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAlgorithmOutputWrap::GetIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAlgorithmOutputWrap *wrapper = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info.Holder());
	vtkAlgorithmOutput *native = (vtkAlgorithmOutput *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAlgorithmOutputWrap::GetProducer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAlgorithmOutputWrap *wrapper = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info.Holder());
	vtkAlgorithmOutput *native = (vtkAlgorithmOutput *)wrapper->native.GetPointer();
	vtkAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProducer();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAlgorithmWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAlgorithmWrap *w = new VtkAlgorithmWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAlgorithmOutputWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAlgorithmOutputWrap *wrapper = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info.Holder());
	vtkAlgorithmOutput *native = (vtkAlgorithmOutput *)wrapper->native.GetPointer();
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

void VtkAlgorithmOutputWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAlgorithmOutputWrap *wrapper = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info.Holder());
	vtkAlgorithmOutput *native = (vtkAlgorithmOutput *)wrapper->native.GetPointer();
	vtkAlgorithmOutput * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAlgorithmOutputWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAlgorithmOutputWrap *w = new VtkAlgorithmOutputWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAlgorithmOutputWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAlgorithmOutputWrap *wrapper = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info.Holder());
	vtkAlgorithmOutput *native = (vtkAlgorithmOutput *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAlgorithmOutput * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkAlgorithmOutputWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAlgorithmOutputWrap *w = new VtkAlgorithmOutputWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAlgorithmOutputWrap::SetIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAlgorithmOutputWrap *wrapper = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info.Holder());
	vtkAlgorithmOutput *native = (vtkAlgorithmOutput *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIndex(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAlgorithmOutputWrap::SetProducer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAlgorithmOutputWrap *wrapper = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info.Holder());
	vtkAlgorithmOutput *native = (vtkAlgorithmOutput *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAlgorithmWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProducer(
			(vtkAlgorithm *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

