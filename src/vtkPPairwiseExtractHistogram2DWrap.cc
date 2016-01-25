/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPairwiseExtractHistogram2DWrap.h"
#include "vtkPPairwiseExtractHistogram2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPPairwiseExtractHistogram2DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPPairwiseExtractHistogram2DWrap::ptpl;

VtkPPairwiseExtractHistogram2DWrap::VtkPPairwiseExtractHistogram2DWrap()
{ }

VtkPPairwiseExtractHistogram2DWrap::VtkPPairwiseExtractHistogram2DWrap(vtkSmartPointer<vtkPPairwiseExtractHistogram2D> _native)
{ native = _native; }

VtkPPairwiseExtractHistogram2DWrap::~VtkPPairwiseExtractHistogram2DWrap()
{ }

void VtkPPairwiseExtractHistogram2DWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPairwiseExtractHistogram2DWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPairwiseExtractHistogram2DWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkPPairwiseExtractHistogram2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkPPairwiseExtractHistogram2D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PPairwiseExtractHistogram2D").ToLocalChecked(),tpl->GetFunction());
}

void VtkPPairwiseExtractHistogram2DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

}

void VtkPPairwiseExtractHistogram2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPPairwiseExtractHistogram2D> native = vtkSmartPointer<vtkPPairwiseExtractHistogram2D>::New();
		VtkPPairwiseExtractHistogram2DWrap* obj = new VtkPPairwiseExtractHistogram2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPPairwiseExtractHistogram2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPPairwiseExtractHistogram2D *native = (vtkPPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPPairwiseExtractHistogram2DWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPPairwiseExtractHistogram2D *native = (vtkPPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMultiProcessControllerWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPPairwiseExtractHistogram2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPPairwiseExtractHistogram2D *native = (vtkPPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
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

void VtkPPairwiseExtractHistogram2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPPairwiseExtractHistogram2D *native = (vtkPPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	vtkPPairwiseExtractHistogram2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPPairwiseExtractHistogram2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPPairwiseExtractHistogram2DWrap *w = new VtkPPairwiseExtractHistogram2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPPairwiseExtractHistogram2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPPairwiseExtractHistogram2D *native = (vtkPPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPPairwiseExtractHistogram2D * r;
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
			Nan::New<v8::Function>(VtkPPairwiseExtractHistogram2DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPPairwiseExtractHistogram2DWrap *w = new VtkPPairwiseExtractHistogram2DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPPairwiseExtractHistogram2DWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPairwiseExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPPairwiseExtractHistogram2DWrap>(info.Holder());
	vtkPPairwiseExtractHistogram2D *native = (vtkPPairwiseExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetController(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

