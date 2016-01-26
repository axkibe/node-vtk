/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkColorTransferFunctionItemWrap.h"
#include "vtkCompositeTransferFunctionItemWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPiecewiseFunctionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompositeTransferFunctionItemWrap::ptpl;

VtkCompositeTransferFunctionItemWrap::VtkCompositeTransferFunctionItemWrap()
{ }

VtkCompositeTransferFunctionItemWrap::VtkCompositeTransferFunctionItemWrap(vtkSmartPointer<vtkCompositeTransferFunctionItem> _native)
{ native = _native; }

VtkCompositeTransferFunctionItemWrap::~VtkCompositeTransferFunctionItemWrap()
{ }

void VtkCompositeTransferFunctionItemWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompositeTransferFunctionItem").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompositeTransferFunctionItem").ToLocalChecked(), ConstructorGetter);
}

void VtkCompositeTransferFunctionItemWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompositeTransferFunctionItemWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkColorTransferFunctionItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkColorTransferFunctionItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompositeTransferFunctionItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOpacityFunction", GetOpacityFunction);
	Nan::SetPrototypeMethod(tpl, "getOpacityFunction", GetOpacityFunction);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOpacityFunction", SetOpacityFunction);
	Nan::SetPrototypeMethod(tpl, "setOpacityFunction", SetOpacityFunction);

	ptpl.Reset( tpl );
}

void VtkCompositeTransferFunctionItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCompositeTransferFunctionItem> native = vtkSmartPointer<vtkCompositeTransferFunctionItem>::New();
		VtkCompositeTransferFunctionItemWrap* obj = new VtkCompositeTransferFunctionItemWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCompositeTransferFunctionItemWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeTransferFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeTransferFunctionItemWrap>(info.Holder());
	vtkCompositeTransferFunctionItem *native = (vtkCompositeTransferFunctionItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompositeTransferFunctionItemWrap::GetOpacityFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeTransferFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeTransferFunctionItemWrap>(info.Holder());
	vtkCompositeTransferFunctionItem *native = (vtkCompositeTransferFunctionItem *)wrapper->native.GetPointer();
	vtkPiecewiseFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpacityFunction();
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

void VtkCompositeTransferFunctionItemWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeTransferFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeTransferFunctionItemWrap>(info.Holder());
	vtkCompositeTransferFunctionItem *native = (vtkCompositeTransferFunctionItem *)wrapper->native.GetPointer();
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

void VtkCompositeTransferFunctionItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeTransferFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeTransferFunctionItemWrap>(info.Holder());
	vtkCompositeTransferFunctionItem *native = (vtkCompositeTransferFunctionItem *)wrapper->native.GetPointer();
	vtkCompositeTransferFunctionItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCompositeTransferFunctionItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeTransferFunctionItemWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeTransferFunctionItemWrap *w = new VtkCompositeTransferFunctionItemWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeTransferFunctionItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeTransferFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeTransferFunctionItemWrap>(info.Holder());
	vtkCompositeTransferFunctionItem *native = (vtkCompositeTransferFunctionItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompositeTransferFunctionItem * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCompositeTransferFunctionItemWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompositeTransferFunctionItemWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositeTransferFunctionItemWrap *w = new VtkCompositeTransferFunctionItemWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeTransferFunctionItemWrap::SetOpacityFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeTransferFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeTransferFunctionItemWrap>(info.Holder());
	vtkCompositeTransferFunctionItem *native = (vtkCompositeTransferFunctionItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPiecewiseFunctionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPiecewiseFunctionWrap *a0 = ObjectWrap::Unwrap<VtkPiecewiseFunctionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOpacityFunction(
			(vtkPiecewiseFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

