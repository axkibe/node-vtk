/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTreeAlgorithmWrap.h"
#include "vtkStrahlerMetricWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkStrahlerMetricWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkStrahlerMetricWrap::ptpl;

VtkStrahlerMetricWrap::VtkStrahlerMetricWrap()
{ }

VtkStrahlerMetricWrap::VtkStrahlerMetricWrap(vtkSmartPointer<vtkStrahlerMetric> _native)
{ native = _native; }

VtkStrahlerMetricWrap::~VtkStrahlerMetricWrap()
{ }

void VtkStrahlerMetricWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTreeAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTreeAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkStrahlerMetricWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkStrahlerMetric").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("StrahlerMetric").ToLocalChecked(),tpl->GetFunction());
}

void VtkStrahlerMetricWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNormalize", GetNormalize);
	Nan::SetPrototypeMethod(tpl, "getNormalize", GetNormalize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NormalizeOff", NormalizeOff);
	Nan::SetPrototypeMethod(tpl, "normalizeOff", NormalizeOff);

	Nan::SetPrototypeMethod(tpl, "NormalizeOn", NormalizeOn);
	Nan::SetPrototypeMethod(tpl, "normalizeOn", NormalizeOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMetricArrayName", SetMetricArrayName);
	Nan::SetPrototypeMethod(tpl, "setMetricArrayName", SetMetricArrayName);

	Nan::SetPrototypeMethod(tpl, "SetNormalize", SetNormalize);
	Nan::SetPrototypeMethod(tpl, "setNormalize", SetNormalize);

}

void VtkStrahlerMetricWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStrahlerMetric> native = vtkSmartPointer<vtkStrahlerMetric>::New();
		VtkStrahlerMetricWrap* obj = new VtkStrahlerMetricWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStrahlerMetricWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStrahlerMetricWrap *wrapper = ObjectWrap::Unwrap<VtkStrahlerMetricWrap>(info.Holder());
	vtkStrahlerMetric *native = (vtkStrahlerMetric *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStrahlerMetricWrap::GetNormalize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStrahlerMetricWrap *wrapper = ObjectWrap::Unwrap<VtkStrahlerMetricWrap>(info.Holder());
	vtkStrahlerMetric *native = (vtkStrahlerMetric *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStrahlerMetricWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStrahlerMetricWrap *wrapper = ObjectWrap::Unwrap<VtkStrahlerMetricWrap>(info.Holder());
	vtkStrahlerMetric *native = (vtkStrahlerMetric *)wrapper->native.GetPointer();
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

void VtkStrahlerMetricWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStrahlerMetricWrap *wrapper = ObjectWrap::Unwrap<VtkStrahlerMetricWrap>(info.Holder());
	vtkStrahlerMetric *native = (vtkStrahlerMetric *)wrapper->native.GetPointer();
	vtkStrahlerMetric * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStrahlerMetricWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStrahlerMetricWrap *w = new VtkStrahlerMetricWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStrahlerMetricWrap::NormalizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStrahlerMetricWrap *wrapper = ObjectWrap::Unwrap<VtkStrahlerMetricWrap>(info.Holder());
	vtkStrahlerMetric *native = (vtkStrahlerMetric *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalizeOff();
}

void VtkStrahlerMetricWrap::NormalizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStrahlerMetricWrap *wrapper = ObjectWrap::Unwrap<VtkStrahlerMetricWrap>(info.Holder());
	vtkStrahlerMetric *native = (vtkStrahlerMetric *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalizeOn();
}

void VtkStrahlerMetricWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStrahlerMetricWrap *wrapper = ObjectWrap::Unwrap<VtkStrahlerMetricWrap>(info.Holder());
	vtkStrahlerMetric *native = (vtkStrahlerMetric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStrahlerMetric * r;
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
			Nan::New<v8::Function>(VtkStrahlerMetricWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStrahlerMetricWrap *w = new VtkStrahlerMetricWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStrahlerMetricWrap::SetMetricArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStrahlerMetricWrap *wrapper = ObjectWrap::Unwrap<VtkStrahlerMetricWrap>(info.Holder());
	vtkStrahlerMetric *native = (vtkStrahlerMetric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMetricArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStrahlerMetricWrap::SetNormalize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStrahlerMetricWrap *wrapper = ObjectWrap::Unwrap<VtkStrahlerMetricWrap>(info.Holder());
	vtkStrahlerMetric *native = (vtkStrahlerMetric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

