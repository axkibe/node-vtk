/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAlgorithmWrap.h"
#include "vtkTrivialConsumerWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTrivialConsumerWrap::ptpl;

VtkTrivialConsumerWrap::VtkTrivialConsumerWrap()
{ }

VtkTrivialConsumerWrap::VtkTrivialConsumerWrap(vtkSmartPointer<vtkTrivialConsumer> _native)
{ native = _native; }

VtkTrivialConsumerWrap::~VtkTrivialConsumerWrap()
{ }

void VtkTrivialConsumerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTrivialConsumer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TrivialConsumer").ToLocalChecked(), ConstructorGetter);
}

void VtkTrivialConsumerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTrivialConsumerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTrivialConsumerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKTRIVIALCONSUMERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTRIVIALCONSUMERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTrivialConsumerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTrivialConsumer> native = vtkSmartPointer<vtkTrivialConsumer>::New();
		VtkTrivialConsumerWrap* obj = new VtkTrivialConsumerWrap(native);
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

void VtkTrivialConsumerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTrivialConsumerWrap *wrapper = ObjectWrap::Unwrap<VtkTrivialConsumerWrap>(info.Holder());
	vtkTrivialConsumer *native = (vtkTrivialConsumer *)wrapper->native.GetPointer();
	vtkTrivialConsumer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTrivialConsumerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTrivialConsumerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTrivialConsumerWrap *w = new VtkTrivialConsumerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTrivialConsumerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTrivialConsumerWrap *wrapper = ObjectWrap::Unwrap<VtkTrivialConsumerWrap>(info.Holder());
	vtkTrivialConsumer *native = (vtkTrivialConsumer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkTrivialConsumer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkTrivialConsumerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTrivialConsumerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTrivialConsumerWrap *w = new VtkTrivialConsumerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

