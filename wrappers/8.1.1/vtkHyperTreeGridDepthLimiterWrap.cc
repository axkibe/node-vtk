/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkHyperTreeGridAlgorithmWrap.h"
#include "vtkHyperTreeGridDepthLimiterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperTreeGridDepthLimiterWrap::ptpl;

VtkHyperTreeGridDepthLimiterWrap::VtkHyperTreeGridDepthLimiterWrap()
{ }

VtkHyperTreeGridDepthLimiterWrap::VtkHyperTreeGridDepthLimiterWrap(vtkSmartPointer<vtkHyperTreeGridDepthLimiter> _native)
{ native = _native; }

VtkHyperTreeGridDepthLimiterWrap::~VtkHyperTreeGridDepthLimiterWrap()
{ }

void VtkHyperTreeGridDepthLimiterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperTreeGridDepthLimiter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperTreeGridDepthLimiter").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperTreeGridDepthLimiterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperTreeGridDepthLimiterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHyperTreeGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHyperTreeGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperTreeGridDepthLimiterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetDepth", GetDepth);
	Nan::SetPrototypeMethod(tpl, "getDepth", GetDepth);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDepth", SetDepth);
	Nan::SetPrototypeMethod(tpl, "setDepth", SetDepth);

#ifdef VTK_NODE_PLUS_VTKHYPERTREEGRIDDEPTHLIMITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHYPERTREEGRIDDEPTHLIMITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHyperTreeGridDepthLimiterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperTreeGridDepthLimiter> native = vtkSmartPointer<vtkHyperTreeGridDepthLimiter>::New();
		VtkHyperTreeGridDepthLimiterWrap* obj = new VtkHyperTreeGridDepthLimiterWrap(native);
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

void VtkHyperTreeGridDepthLimiterWrap::GetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridDepthLimiterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridDepthLimiterWrap>(info.Holder());
	vtkHyperTreeGridDepthLimiter *native = (vtkHyperTreeGridDepthLimiter *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridDepthLimiterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridDepthLimiterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridDepthLimiterWrap>(info.Holder());
	vtkHyperTreeGridDepthLimiter *native = (vtkHyperTreeGridDepthLimiter *)wrapper->native.GetPointer();
	vtkHyperTreeGridDepthLimiter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHyperTreeGridDepthLimiterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridDepthLimiterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperTreeGridDepthLimiterWrap *w = new VtkHyperTreeGridDepthLimiterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridDepthLimiterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridDepthLimiterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridDepthLimiterWrap>(info.Holder());
	vtkHyperTreeGridDepthLimiter *native = (vtkHyperTreeGridDepthLimiter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkHyperTreeGridDepthLimiter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkHyperTreeGridDepthLimiterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridDepthLimiterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperTreeGridDepthLimiterWrap *w = new VtkHyperTreeGridDepthLimiterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridDepthLimiterWrap::SetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridDepthLimiterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridDepthLimiterWrap>(info.Holder());
	vtkHyperTreeGridDepthLimiter *native = (vtkHyperTreeGridDepthLimiter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDepth(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

