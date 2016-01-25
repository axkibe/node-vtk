/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkComputeHistogram2DOutliersWrap.h"
#include "vtkPComputeHistogram2DOutliersWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPComputeHistogram2DOutliersWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPComputeHistogram2DOutliersWrap::ptpl;

VtkPComputeHistogram2DOutliersWrap::VtkPComputeHistogram2DOutliersWrap()
{ }

VtkPComputeHistogram2DOutliersWrap::VtkPComputeHistogram2DOutliersWrap(vtkSmartPointer<vtkPComputeHistogram2DOutliers> _native)
{ native = _native; }

VtkPComputeHistogram2DOutliersWrap::~VtkPComputeHistogram2DOutliersWrap()
{ }

void VtkPComputeHistogram2DOutliersWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkComputeHistogram2DOutliersWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkComputeHistogram2DOutliersWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkPComputeHistogram2DOutliersWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkPComputeHistogram2DOutliers").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PComputeHistogram2DOutliers").ToLocalChecked(),tpl->GetFunction());
}

void VtkPComputeHistogram2DOutliersWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
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

void VtkPComputeHistogram2DOutliersWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPComputeHistogram2DOutliers> native = vtkSmartPointer<vtkPComputeHistogram2DOutliers>::New();
		VtkPComputeHistogram2DOutliersWrap* obj = new VtkPComputeHistogram2DOutliersWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPComputeHistogram2DOutliersWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkPComputeHistogram2DOutliersWrap>(info.Holder());
	vtkPComputeHistogram2DOutliers *native = (vtkPComputeHistogram2DOutliers *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPComputeHistogram2DOutliersWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkPComputeHistogram2DOutliersWrap>(info.Holder());
	vtkPComputeHistogram2DOutliers *native = (vtkPComputeHistogram2DOutliers *)wrapper->native.GetPointer();
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

void VtkPComputeHistogram2DOutliersWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkPComputeHistogram2DOutliersWrap>(info.Holder());
	vtkPComputeHistogram2DOutliers *native = (vtkPComputeHistogram2DOutliers *)wrapper->native.GetPointer();
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

void VtkPComputeHistogram2DOutliersWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkPComputeHistogram2DOutliersWrap>(info.Holder());
	vtkPComputeHistogram2DOutliers *native = (vtkPComputeHistogram2DOutliers *)wrapper->native.GetPointer();
	vtkPComputeHistogram2DOutliers * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPComputeHistogram2DOutliersWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPComputeHistogram2DOutliersWrap *w = new VtkPComputeHistogram2DOutliersWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPComputeHistogram2DOutliersWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkPComputeHistogram2DOutliersWrap>(info.Holder());
	vtkPComputeHistogram2DOutliers *native = (vtkPComputeHistogram2DOutliers *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPComputeHistogram2DOutliers * r;
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
			Nan::New<v8::Function>(VtkPComputeHistogram2DOutliersWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPComputeHistogram2DOutliersWrap *w = new VtkPComputeHistogram2DOutliersWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPComputeHistogram2DOutliersWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkPComputeHistogram2DOutliersWrap>(info.Holder());
	vtkPComputeHistogram2DOutliers *native = (vtkPComputeHistogram2DOutliers *)wrapper->native.GetPointer();
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
