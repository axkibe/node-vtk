/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageStencilSourceWrap.h"
#include "vtkImplicitFunctionToImageStencilWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImplicitFunctionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImplicitFunctionToImageStencilWrap::ptpl;

VtkImplicitFunctionToImageStencilWrap::VtkImplicitFunctionToImageStencilWrap()
{ }

VtkImplicitFunctionToImageStencilWrap::VtkImplicitFunctionToImageStencilWrap(vtkSmartPointer<vtkImplicitFunctionToImageStencil> _native)
{ native = _native; }

VtkImplicitFunctionToImageStencilWrap::~VtkImplicitFunctionToImageStencilWrap()
{ }

void VtkImplicitFunctionToImageStencilWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImplicitFunctionToImageStencil").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImplicitFunctionToImageStencil").ToLocalChecked(), ConstructorGetter);
}

void VtkImplicitFunctionToImageStencilWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImplicitFunctionToImageStencilWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageStencilSourceWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageStencilSourceWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImplicitFunctionToImageStencilWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetThreshold", GetThreshold);
	Nan::SetPrototypeMethod(tpl, "getThreshold", GetThreshold);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	Nan::SetPrototypeMethod(tpl, "SetThreshold", SetThreshold);
	Nan::SetPrototypeMethod(tpl, "setThreshold", SetThreshold);

	ptpl.Reset( tpl );
}

void VtkImplicitFunctionToImageStencilWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImplicitFunctionToImageStencil> native = vtkSmartPointer<vtkImplicitFunctionToImageStencil>::New();
		VtkImplicitFunctionToImageStencilWrap* obj = new VtkImplicitFunctionToImageStencilWrap(native);
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

void VtkImplicitFunctionToImageStencilWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitFunctionToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitFunctionToImageStencilWrap>(info.Holder());
	vtkImplicitFunctionToImageStencil *native = (vtkImplicitFunctionToImageStencil *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImplicitFunctionToImageStencilWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitFunctionToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitFunctionToImageStencilWrap>(info.Holder());
	vtkImplicitFunctionToImageStencil *native = (vtkImplicitFunctionToImageStencil *)wrapper->native.GetPointer();
	vtkImplicitFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkImplicitFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImplicitFunctionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImplicitFunctionWrap *w = new VtkImplicitFunctionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImplicitFunctionToImageStencilWrap::GetThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitFunctionToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitFunctionToImageStencilWrap>(info.Holder());
	vtkImplicitFunctionToImageStencil *native = (vtkImplicitFunctionToImageStencil *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitFunctionToImageStencilWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitFunctionToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitFunctionToImageStencilWrap>(info.Holder());
	vtkImplicitFunctionToImageStencil *native = (vtkImplicitFunctionToImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkImplicitFunctionToImageStencilWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitFunctionToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitFunctionToImageStencilWrap>(info.Holder());
	vtkImplicitFunctionToImageStencil *native = (vtkImplicitFunctionToImageStencil *)wrapper->native.GetPointer();
	vtkImplicitFunctionToImageStencil * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImplicitFunctionToImageStencilWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImplicitFunctionToImageStencilWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImplicitFunctionToImageStencilWrap *w = new VtkImplicitFunctionToImageStencilWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImplicitFunctionToImageStencilWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitFunctionToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitFunctionToImageStencilWrap>(info.Holder());
	vtkImplicitFunctionToImageStencil *native = (vtkImplicitFunctionToImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImplicitFunctionToImageStencil * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImplicitFunctionToImageStencilWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImplicitFunctionToImageStencilWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImplicitFunctionToImageStencilWrap *w = new VtkImplicitFunctionToImageStencilWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitFunctionToImageStencilWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitFunctionToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitFunctionToImageStencilWrap>(info.Holder());
	vtkImplicitFunctionToImageStencil *native = (vtkImplicitFunctionToImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImplicitFunctionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImplicitFunctionWrap *a0 = ObjectWrap::Unwrap<VtkImplicitFunctionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			(vtkImplicitFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitFunctionToImageStencilWrap::SetThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitFunctionToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitFunctionToImageStencilWrap>(info.Holder());
	vtkImplicitFunctionToImageStencil *native = (vtkImplicitFunctionToImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
