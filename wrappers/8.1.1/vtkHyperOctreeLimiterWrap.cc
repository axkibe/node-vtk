/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "vtkHyperOctreeLimiterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperOctreeLimiterWrap::ptpl;

VtkHyperOctreeLimiterWrap::VtkHyperOctreeLimiterWrap()
{ }

VtkHyperOctreeLimiterWrap::VtkHyperOctreeLimiterWrap(vtkSmartPointer<vtkHyperOctreeLimiter> _native)
{ native = _native; }

VtkHyperOctreeLimiterWrap::~VtkHyperOctreeLimiterWrap()
{ }

void VtkHyperOctreeLimiterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperOctreeLimiter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperOctreeLimiter").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperOctreeLimiterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperOctreeLimiterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperOctreeLimiterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetMaximumLevel", GetMaximumLevel);
	Nan::SetPrototypeMethod(tpl, "getMaximumLevel", GetMaximumLevel);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMaximumLevel", SetMaximumLevel);
	Nan::SetPrototypeMethod(tpl, "setMaximumLevel", SetMaximumLevel);

#ifdef VTK_NODE_PLUS_VTKHYPEROCTREELIMITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHYPEROCTREELIMITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHyperOctreeLimiterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperOctreeLimiter> native = vtkSmartPointer<vtkHyperOctreeLimiter>::New();
		VtkHyperOctreeLimiterWrap* obj = new VtkHyperOctreeLimiterWrap(native);
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

void VtkHyperOctreeLimiterWrap::GetMaximumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeLimiterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeLimiterWrap>(info.Holder());
	vtkHyperOctreeLimiter *native = (vtkHyperOctreeLimiter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeLimiterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeLimiterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeLimiterWrap>(info.Holder());
	vtkHyperOctreeLimiter *native = (vtkHyperOctreeLimiter *)wrapper->native.GetPointer();
	vtkHyperOctreeLimiter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHyperOctreeLimiterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperOctreeLimiterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeLimiterWrap *w = new VtkHyperOctreeLimiterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeLimiterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeLimiterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeLimiterWrap>(info.Holder());
	vtkHyperOctreeLimiter *native = (vtkHyperOctreeLimiter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkHyperOctreeLimiter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkHyperOctreeLimiterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperOctreeLimiterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperOctreeLimiterWrap *w = new VtkHyperOctreeLimiterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeLimiterWrap::SetMaximumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeLimiterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeLimiterWrap>(info.Holder());
	vtkHyperOctreeLimiter *native = (vtkHyperOctreeLimiter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

