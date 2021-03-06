/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageAlgorithmWrap.h"
#include "vtkContinuousScatterplotWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkContinuousScatterplotWrap::ptpl;

VtkContinuousScatterplotWrap::VtkContinuousScatterplotWrap()
{ }

VtkContinuousScatterplotWrap::VtkContinuousScatterplotWrap(vtkSmartPointer<vtkContinuousScatterplot> _native)
{ native = _native; }

VtkContinuousScatterplotWrap::~VtkContinuousScatterplotWrap()
{ }

void VtkContinuousScatterplotWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkContinuousScatterplot").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ContinuousScatterplot").ToLocalChecked(), ConstructorGetter);
}

void VtkContinuousScatterplotWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkContinuousScatterplotWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkContinuousScatterplotWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetEpsilon", GetEpsilon);
	Nan::SetPrototypeMethod(tpl, "getEpsilon", GetEpsilon);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEpsilon", SetEpsilon);
	Nan::SetPrototypeMethod(tpl, "setEpsilon", SetEpsilon);

#ifdef VTK_NODE_PLUS_VTKCONTINUOUSSCATTERPLOTWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCONTINUOUSSCATTERPLOTWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkContinuousScatterplotWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkContinuousScatterplot> native = vtkSmartPointer<vtkContinuousScatterplot>::New();
		VtkContinuousScatterplotWrap* obj = new VtkContinuousScatterplotWrap(native);
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

void VtkContinuousScatterplotWrap::GetEpsilon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContinuousScatterplotWrap *wrapper = ObjectWrap::Unwrap<VtkContinuousScatterplotWrap>(info.Holder());
	vtkContinuousScatterplot *native = (vtkContinuousScatterplot *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEpsilon();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContinuousScatterplotWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContinuousScatterplotWrap *wrapper = ObjectWrap::Unwrap<VtkContinuousScatterplotWrap>(info.Holder());
	vtkContinuousScatterplot *native = (vtkContinuousScatterplot *)wrapper->native.GetPointer();
	vtkContinuousScatterplot * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkContinuousScatterplotWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkContinuousScatterplotWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContinuousScatterplotWrap *w = new VtkContinuousScatterplotWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContinuousScatterplotWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContinuousScatterplotWrap *wrapper = ObjectWrap::Unwrap<VtkContinuousScatterplotWrap>(info.Holder());
	vtkContinuousScatterplot *native = (vtkContinuousScatterplot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkContinuousScatterplot * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkContinuousScatterplotWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkContinuousScatterplotWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkContinuousScatterplotWrap *w = new VtkContinuousScatterplotWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContinuousScatterplotWrap::SetEpsilon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContinuousScatterplotWrap *wrapper = ObjectWrap::Unwrap<VtkContinuousScatterplotWrap>(info.Holder());
	vtkContinuousScatterplot *native = (vtkContinuousScatterplot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEpsilon(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

