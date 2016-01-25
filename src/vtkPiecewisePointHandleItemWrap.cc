/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkContextItemWrap.h"
#include "vtkPiecewisePointHandleItemWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAbstractContextItemWrap.h"
#include "vtkPiecewiseFunctionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPiecewisePointHandleItemWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPiecewisePointHandleItemWrap::ptpl;

VtkPiecewisePointHandleItemWrap::VtkPiecewisePointHandleItemWrap()
{ }

VtkPiecewisePointHandleItemWrap::VtkPiecewisePointHandleItemWrap(vtkSmartPointer<vtkPiecewisePointHandleItem> _native)
{ native = _native; }

VtkPiecewisePointHandleItemWrap::~VtkPiecewisePointHandleItemWrap()
{ }

void VtkPiecewisePointHandleItemWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextItemWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextItemWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkPiecewisePointHandleItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkPiecewisePointHandleItem").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PiecewisePointHandleItem").ToLocalChecked(),tpl->GetFunction());
}

void VtkPiecewisePointHandleItemWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetParent", SetParent);
	Nan::SetPrototypeMethod(tpl, "setParent", SetParent);

	Nan::SetPrototypeMethod(tpl, "SetPiecewiseFunction", SetPiecewiseFunction);
	Nan::SetPrototypeMethod(tpl, "setPiecewiseFunction", SetPiecewiseFunction);

}

void VtkPiecewisePointHandleItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPiecewisePointHandleItem> native = vtkSmartPointer<vtkPiecewisePointHandleItem>::New();
		VtkPiecewisePointHandleItemWrap* obj = new VtkPiecewisePointHandleItemWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPiecewisePointHandleItemWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewisePointHandleItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewisePointHandleItemWrap>(info.Holder());
	vtkPiecewisePointHandleItem *native = (vtkPiecewisePointHandleItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPiecewisePointHandleItemWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewisePointHandleItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewisePointHandleItemWrap>(info.Holder());
	vtkPiecewisePointHandleItem *native = (vtkPiecewisePointHandleItem *)wrapper->native.GetPointer();
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

void VtkPiecewisePointHandleItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewisePointHandleItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewisePointHandleItemWrap>(info.Holder());
	vtkPiecewisePointHandleItem *native = (vtkPiecewisePointHandleItem *)wrapper->native.GetPointer();
	vtkPiecewisePointHandleItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPiecewisePointHandleItemWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPiecewisePointHandleItemWrap *w = new VtkPiecewisePointHandleItemWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPiecewisePointHandleItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewisePointHandleItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewisePointHandleItemWrap>(info.Holder());
	vtkPiecewisePointHandleItem *native = (vtkPiecewisePointHandleItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPiecewisePointHandleItem * r;
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
			Nan::New<v8::Function>(VtkPiecewisePointHandleItemWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPiecewisePointHandleItemWrap *w = new VtkPiecewisePointHandleItemWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPiecewisePointHandleItemWrap::SetParent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewisePointHandleItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewisePointHandleItemWrap>(info.Holder());
	vtkPiecewisePointHandleItem *native = (vtkPiecewisePointHandleItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAbstractContextItemWrap *a0 = ObjectWrap::Unwrap<VtkAbstractContextItemWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParent(
			(vtkAbstractContextItem *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPiecewisePointHandleItemWrap::SetPiecewiseFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewisePointHandleItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewisePointHandleItemWrap>(info.Holder());
	vtkPiecewisePointHandleItem *native = (vtkPiecewisePointHandleItem *)wrapper->native.GetPointer();
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

