/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkScalarsToColorsItemWrap.h"
#include "vtkColorTransferFunctionItemWrap.h"
#include "vtkObjectWrap.h"
#include "vtkColorTransferFunctionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkColorTransferFunctionItemWrap::ptpl;

VtkColorTransferFunctionItemWrap::VtkColorTransferFunctionItemWrap()
{ }

VtkColorTransferFunctionItemWrap::VtkColorTransferFunctionItemWrap(vtkSmartPointer<vtkColorTransferFunctionItem> _native)
{ native = _native; }

VtkColorTransferFunctionItemWrap::~VtkColorTransferFunctionItemWrap()
{ }

void VtkColorTransferFunctionItemWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkColorTransferFunctionItem").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ColorTransferFunctionItem").ToLocalChecked(), ConstructorGetter);
}

void VtkColorTransferFunctionItemWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkColorTransferFunctionItemWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkScalarsToColorsItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkScalarsToColorsItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkColorTransferFunctionItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColorTransferFunction", GetColorTransferFunction);
	Nan::SetPrototypeMethod(tpl, "getColorTransferFunction", GetColorTransferFunction);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColorTransferFunction", SetColorTransferFunction);
	Nan::SetPrototypeMethod(tpl, "setColorTransferFunction", SetColorTransferFunction);

	ptpl.Reset( tpl );
}

void VtkColorTransferFunctionItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkColorTransferFunctionItem> native = vtkSmartPointer<vtkColorTransferFunctionItem>::New();
		VtkColorTransferFunctionItemWrap* obj = new VtkColorTransferFunctionItemWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkColorTransferFunctionItemWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorTransferFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkColorTransferFunctionItemWrap>(info.Holder());
	vtkColorTransferFunctionItem *native = (vtkColorTransferFunctionItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkColorTransferFunctionItemWrap::GetColorTransferFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorTransferFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkColorTransferFunctionItemWrap>(info.Holder());
	vtkColorTransferFunctionItem *native = (vtkColorTransferFunctionItem *)wrapper->native.GetPointer();
	vtkColorTransferFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorTransferFunction();
		VtkColorTransferFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkColorTransferFunctionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkColorTransferFunctionWrap *w = new VtkColorTransferFunctionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkColorTransferFunctionItemWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorTransferFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkColorTransferFunctionItemWrap>(info.Holder());
	vtkColorTransferFunctionItem *native = (vtkColorTransferFunctionItem *)wrapper->native.GetPointer();
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

void VtkColorTransferFunctionItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorTransferFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkColorTransferFunctionItemWrap>(info.Holder());
	vtkColorTransferFunctionItem *native = (vtkColorTransferFunctionItem *)wrapper->native.GetPointer();
	vtkColorTransferFunctionItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkColorTransferFunctionItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkColorTransferFunctionItemWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkColorTransferFunctionItemWrap *w = new VtkColorTransferFunctionItemWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkColorTransferFunctionItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorTransferFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkColorTransferFunctionItemWrap>(info.Holder());
	vtkColorTransferFunctionItem *native = (vtkColorTransferFunctionItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkColorTransferFunctionItem * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkColorTransferFunctionItemWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkColorTransferFunctionItemWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkColorTransferFunctionItemWrap *w = new VtkColorTransferFunctionItemWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkColorTransferFunctionItemWrap::SetColorTransferFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkColorTransferFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkColorTransferFunctionItemWrap>(info.Holder());
	vtkColorTransferFunctionItem *native = (vtkColorTransferFunctionItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkColorTransferFunctionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkColorTransferFunctionWrap *a0 = ObjectWrap::Unwrap<VtkColorTransferFunctionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorTransferFunction(
			(vtkColorTransferFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

