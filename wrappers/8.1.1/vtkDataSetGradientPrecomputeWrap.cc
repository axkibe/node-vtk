/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "vtkDataSetGradientPrecomputeWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkDataSetWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDataSetGradientPrecomputeWrap::ptpl;

VtkDataSetGradientPrecomputeWrap::VtkDataSetGradientPrecomputeWrap()
{ }

VtkDataSetGradientPrecomputeWrap::VtkDataSetGradientPrecomputeWrap(vtkSmartPointer<vtkDataSetGradientPrecompute> _native)
{ native = _native; }

VtkDataSetGradientPrecomputeWrap::~VtkDataSetGradientPrecomputeWrap()
{ }

void VtkDataSetGradientPrecomputeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDataSetGradientPrecompute").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DataSetGradientPrecompute").ToLocalChecked(), ConstructorGetter);
}

void VtkDataSetGradientPrecomputeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDataSetGradientPrecomputeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDataSetGradientPrecomputeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GradientPrecompute", GradientPrecompute);
	Nan::SetPrototypeMethod(tpl, "gradientPrecompute", GradientPrecompute);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKDATASETGRADIENTPRECOMPUTEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDATASETGRADIENTPRECOMPUTEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkDataSetGradientPrecomputeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDataSetGradientPrecompute> native = vtkSmartPointer<vtkDataSetGradientPrecompute>::New();
		VtkDataSetGradientPrecomputeWrap* obj = new VtkDataSetGradientPrecomputeWrap(native);
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

void VtkDataSetGradientPrecomputeWrap::GradientPrecompute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetGradientPrecomputeWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetGradientPrecomputeWrap>(info.Holder());
	vtkDataSetGradientPrecompute *native = (vtkDataSetGradientPrecompute *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GradientPrecompute(
			(vtkDataSet *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetGradientPrecomputeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetGradientPrecomputeWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetGradientPrecomputeWrap>(info.Holder());
	vtkDataSetGradientPrecompute *native = (vtkDataSetGradientPrecompute *)wrapper->native.GetPointer();
	vtkDataSetGradientPrecompute * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDataSetGradientPrecomputeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetGradientPrecomputeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetGradientPrecomputeWrap *w = new VtkDataSetGradientPrecomputeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetGradientPrecomputeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetGradientPrecomputeWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetGradientPrecomputeWrap>(info.Holder());
	vtkDataSetGradientPrecompute *native = (vtkDataSetGradientPrecompute *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkDataSetGradientPrecompute * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkDataSetGradientPrecomputeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataSetGradientPrecomputeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataSetGradientPrecomputeWrap *w = new VtkDataSetGradientPrecomputeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

