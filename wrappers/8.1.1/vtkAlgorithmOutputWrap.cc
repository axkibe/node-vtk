/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAlgorithmWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAlgorithmOutputWrap::ptpl;

VtkAlgorithmOutputWrap::VtkAlgorithmOutputWrap()
{ }

VtkAlgorithmOutputWrap::VtkAlgorithmOutputWrap(vtkSmartPointer<vtkAlgorithmOutput> _native)
{ native = _native; }

VtkAlgorithmOutputWrap::~VtkAlgorithmOutputWrap()
{ }

void VtkAlgorithmOutputWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAlgorithmOutput").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AlgorithmOutput").ToLocalChecked(), ConstructorGetter);
}

void VtkAlgorithmOutputWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAlgorithmOutputWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAlgorithmOutputWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetIndex", GetIndex);
	Nan::SetPrototypeMethod(tpl, "getIndex", GetIndex);

	Nan::SetPrototypeMethod(tpl, "GetProducer", GetProducer);
	Nan::SetPrototypeMethod(tpl, "getProducer", GetProducer);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetIndex", SetIndex);
	Nan::SetPrototypeMethod(tpl, "setIndex", SetIndex);

	Nan::SetPrototypeMethod(tpl, "SetProducer", SetProducer);
	Nan::SetPrototypeMethod(tpl, "setProducer", SetProducer);

#ifdef VTK_NODE_PLUS_VTKALGORITHMOUTPUTWRAP_INITPTPL
	VTK_NODE_PLUS_VTKALGORITHMOUTPUTWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
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
		VtkAlgorithmOutputWrap* obj = new VtkAlgorithmOutputWrap(native);
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
	VtkAlgorithmWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAlgorithmWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAlgorithmWrap *w = new VtkAlgorithmWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
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
	VtkAlgorithmOutputWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAlgorithmOutputWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAlgorithmOutputWrap *w = new VtkAlgorithmOutputWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAlgorithmOutputWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAlgorithmOutputWrap *wrapper = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info.Holder());
	vtkAlgorithmOutput *native = (vtkAlgorithmOutput *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkAlgorithmOutput * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkAlgorithmOutputWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAlgorithmOutputWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAlgorithmOutputWrap *w = new VtkAlgorithmOutputWrap();
		w->native = r;
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmWrap::ptpl))->HasInstance(info[0]))
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

