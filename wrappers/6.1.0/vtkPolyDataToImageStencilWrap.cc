/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageStencilSourceWrap.h"
#include "vtkPolyDataToImageStencilWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPolyDataToImageStencilWrap::ptpl;

VtkPolyDataToImageStencilWrap::VtkPolyDataToImageStencilWrap()
{ }

VtkPolyDataToImageStencilWrap::VtkPolyDataToImageStencilWrap(vtkSmartPointer<vtkPolyDataToImageStencil> _native)
{ native = _native; }

VtkPolyDataToImageStencilWrap::~VtkPolyDataToImageStencilWrap()
{ }

void VtkPolyDataToImageStencilWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPolyDataToImageStencil").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PolyDataToImageStencil").ToLocalChecked(), ConstructorGetter);
}

void VtkPolyDataToImageStencilWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPolyDataToImageStencilWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageStencilSourceWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageStencilSourceWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPolyDataToImageStencilWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	ptpl.Reset( tpl );
}

void VtkPolyDataToImageStencilWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolyDataToImageStencil> native = vtkSmartPointer<vtkPolyDataToImageStencil>::New();
		VtkPolyDataToImageStencilWrap* obj = new VtkPolyDataToImageStencilWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPolyDataToImageStencilWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToImageStencilWrap>(info.Holder());
	vtkPolyDataToImageStencil *native = (vtkPolyDataToImageStencil *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolyDataToImageStencilWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToImageStencilWrap>(info.Holder());
	vtkPolyDataToImageStencil *native = (vtkPolyDataToImageStencil *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataToImageStencilWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToImageStencilWrap>(info.Holder());
	vtkPolyDataToImageStencil *native = (vtkPolyDataToImageStencil *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataToImageStencilWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToImageStencilWrap>(info.Holder());
	vtkPolyDataToImageStencil *native = (vtkPolyDataToImageStencil *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataToImageStencilWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToImageStencilWrap>(info.Holder());
	vtkPolyDataToImageStencil *native = (vtkPolyDataToImageStencil *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataToImageStencilWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToImageStencilWrap>(info.Holder());
	vtkPolyDataToImageStencil *native = (vtkPolyDataToImageStencil *)wrapper->native.GetPointer();
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

void VtkPolyDataToImageStencilWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToImageStencilWrap>(info.Holder());
	vtkPolyDataToImageStencil *native = (vtkPolyDataToImageStencil *)wrapper->native.GetPointer();
	vtkPolyDataToImageStencil * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPolyDataToImageStencilWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataToImageStencilWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataToImageStencilWrap *w = new VtkPolyDataToImageStencilWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataToImageStencilWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToImageStencilWrap>(info.Holder());
	vtkPolyDataToImageStencil *native = (vtkPolyDataToImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPolyDataToImageStencil * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPolyDataToImageStencilWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolyDataToImageStencilWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataToImageStencilWrap *w = new VtkPolyDataToImageStencilWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataToImageStencilWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToImageStencilWrap>(info.Holder());
	vtkPolyDataToImageStencil *native = (vtkPolyDataToImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataToImageStencilWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataToImageStencilWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataToImageStencilWrap>(info.Holder());
	vtkPolyDataToImageStencil *native = (vtkPolyDataToImageStencil *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

