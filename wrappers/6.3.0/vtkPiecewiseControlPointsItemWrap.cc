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
Nan::Persistent<v8::FunctionTemplate> VtkPiecewiseControlPointsItemWrap::ptpl;

VtkPiecewiseControlPointsItemWrap::VtkPiecewiseControlPointsItemWrap()
{ }

VtkPiecewiseControlPointsItemWrap::VtkPiecewiseControlPointsItemWrap(vtkSmartPointer<vtkPiecewiseControlPointsItem> _native)
{ native = _native; }

VtkPiecewiseControlPointsItemWrap::~VtkPiecewiseControlPointsItemWrap()
{ }

void VtkPiecewiseControlPointsItemWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPiecewiseControlPointsItem").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PiecewiseControlPointsItem").ToLocalChecked(), ConstructorGetter);
}

void VtkPiecewiseControlPointsItemWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPiecewiseControlPointsItemWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkControlPointsItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkControlPointsItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPiecewiseControlPointsItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

	ptpl.Reset( tpl );
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
		VtkPiecewiseFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPiecewiseFunctionWrap::ptpl)->GetFunction();
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
		VtkPiecewiseControlPointsItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPiecewiseControlPointsItemWrap::ptpl)->GetFunction();
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
			VtkPiecewiseControlPointsItemWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPiecewiseControlPointsItemWrap::ptpl)->GetFunction();
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPiecewiseFunctionWrap::ptpl))->HasInstance(info[0]))
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

