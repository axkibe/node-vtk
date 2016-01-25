/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractImageInterpolatorWrap.h"
#include "vtkImageBSplineInterpolatorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageBSplineInterpolatorWrap::constructor;

VtkImageBSplineInterpolatorWrap::VtkImageBSplineInterpolatorWrap()
{ }

VtkImageBSplineInterpolatorWrap::VtkImageBSplineInterpolatorWrap(vtkSmartPointer<vtkImageBSplineInterpolator> _native)
{ native = _native; }

VtkImageBSplineInterpolatorWrap::~VtkImageBSplineInterpolatorWrap()
{ }

void VtkImageBSplineInterpolatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkImageBSplineInterpolatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAbstractImageInterpolatorWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkImageBSplineInterpolator").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageBSplineInterpolator").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageBSplineInterpolatorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSplineDegree", GetSplineDegree);
	Nan::SetPrototypeMethod(tpl, "getSplineDegree", GetSplineDegree);

	Nan::SetPrototypeMethod(tpl, "GetSplineDegreeMaxValue", GetSplineDegreeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSplineDegreeMaxValue", GetSplineDegreeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSplineDegreeMinValue", GetSplineDegreeMinValue);
	Nan::SetPrototypeMethod(tpl, "getSplineDegreeMinValue", GetSplineDegreeMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSplineDegree", SetSplineDegree);
	Nan::SetPrototypeMethod(tpl, "setSplineDegree", SetSplineDegree);

}

void VtkImageBSplineInterpolatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageBSplineInterpolator> native = vtkSmartPointer<vtkImageBSplineInterpolator>::New();
		VtkImageBSplineInterpolatorWrap* obj = new VtkImageBSplineInterpolatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageBSplineInterpolatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineInterpolatorWrap>(info.Holder());
	vtkImageBSplineInterpolator *native = (vtkImageBSplineInterpolator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageBSplineInterpolatorWrap::GetSplineDegree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineInterpolatorWrap>(info.Holder());
	vtkImageBSplineInterpolator *native = (vtkImageBSplineInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplineDegree();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBSplineInterpolatorWrap::GetSplineDegreeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineInterpolatorWrap>(info.Holder());
	vtkImageBSplineInterpolator *native = (vtkImageBSplineInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplineDegreeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBSplineInterpolatorWrap::GetSplineDegreeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineInterpolatorWrap>(info.Holder());
	vtkImageBSplineInterpolator *native = (vtkImageBSplineInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplineDegreeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBSplineInterpolatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineInterpolatorWrap>(info.Holder());
	vtkImageBSplineInterpolator *native = (vtkImageBSplineInterpolator *)wrapper->native.GetPointer();
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

void VtkImageBSplineInterpolatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineInterpolatorWrap>(info.Holder());
	vtkImageBSplineInterpolator *native = (vtkImageBSplineInterpolator *)wrapper->native.GetPointer();
	vtkImageBSplineInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageBSplineInterpolatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageBSplineInterpolatorWrap *w = new VtkImageBSplineInterpolatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageBSplineInterpolatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineInterpolatorWrap>(info.Holder());
	vtkImageBSplineInterpolator *native = (vtkImageBSplineInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageBSplineInterpolator * r;
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
			Nan::New<v8::Function>(VtkImageBSplineInterpolatorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageBSplineInterpolatorWrap *w = new VtkImageBSplineInterpolatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBSplineInterpolatorWrap::SetSplineDegree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineInterpolatorWrap>(info.Holder());
	vtkImageBSplineInterpolator *native = (vtkImageBSplineInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSplineDegree(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

