/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkControlPointsItemWrap.h"
#include "vtkPiecewiseControlPointsItemWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPiecewiseFunctionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPiecewiseControlPointsItemWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPiecewiseControlPointsItemWrap::ptpl;

VtkPiecewiseControlPointsItemWrap::VtkPiecewiseControlPointsItemWrap()
{ }

VtkPiecewiseControlPointsItemWrap::VtkPiecewiseControlPointsItemWrap(vtkSmartPointer<vtkPiecewiseControlPointsItem> _native)
{ native = _native; }

VtkPiecewiseControlPointsItemWrap::~VtkPiecewiseControlPointsItemWrap()
{ }

void VtkPiecewiseControlPointsItemWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkControlPointsItemWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkControlPointsItemWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkPiecewiseControlPointsItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkPiecewiseControlPointsItem").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PiecewiseControlPointsItem").ToLocalChecked(),tpl->GetFunction());
}

void VtkPiecewiseControlPointsItemWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPiecewiseFunction", GetPiecewiseFunction);
	Nan::SetPrototypeMethod(tpl, "getPiecewiseFunction", GetPiecewiseFunction);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPiecewiseFunction", SetPiecewiseFunction);
	Nan::SetPrototypeMethod(tpl, "setPiecewiseFunction", SetPiecewiseFunction);

}

void VtkPiecewiseControlPointsItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPiecewiseControlPointsItem> native = vtkSmartPointer<vtkPiecewiseControlPointsItem>::New();
		VtkPiecewiseControlPointsItemWrap* obj = new VtkPiecewiseControlPointsItemWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPiecewiseControlPointsItemWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseControlPointsItemWrap>(info.Holder());
	vtkPiecewiseControlPointsItem *native = (vtkPiecewiseControlPointsItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPiecewiseControlPointsItemWrap::GetPiecewiseFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseControlPointsItemWrap>(info.Holder());
	vtkPiecewiseControlPointsItem *native = (vtkPiecewiseControlPointsItem *)wrapper->native.GetPointer();
	vtkPiecewiseFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPiecewiseFunction();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPiecewiseFunctionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPiecewiseFunctionWrap *w = new VtkPiecewiseFunctionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPiecewiseControlPointsItemWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseControlPointsItemWrap>(info.Holder());
	vtkPiecewiseControlPointsItem *native = (vtkPiecewiseControlPointsItem *)wrapper->native.GetPointer();
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

void VtkPiecewiseControlPointsItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseControlPointsItemWrap>(info.Holder());
	vtkPiecewiseControlPointsItem *native = (vtkPiecewiseControlPointsItem *)wrapper->native.GetPointer();
	vtkPiecewiseControlPointsItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPiecewiseControlPointsItemWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPiecewiseControlPointsItemWrap *w = new VtkPiecewiseControlPointsItemWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPiecewiseControlPointsItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseControlPointsItemWrap>(info.Holder());
	vtkPiecewiseControlPointsItem *native = (vtkPiecewiseControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPiecewiseControlPointsItem * r;
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
			Nan::New<v8::Function>(VtkPiecewiseControlPointsItemWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPiecewiseControlPointsItemWrap *w = new VtkPiecewiseControlPointsItemWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPiecewiseControlPointsItemWrap::SetPiecewiseFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseControlPointsItemWrap>(info.Holder());
	vtkPiecewiseControlPointsItem *native = (vtkPiecewiseControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPiecewiseFunctionWrap *a0 = ObjectWrap::Unwrap<VtkPiecewiseFunctionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPiecewiseFunction(
			(vtkPiecewiseFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
