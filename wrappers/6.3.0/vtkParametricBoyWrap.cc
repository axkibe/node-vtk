/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkParametricFunctionWrap.h"
#include "vtkParametricBoyWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkParametricBoyWrap::ptpl;

VtkParametricBoyWrap::VtkParametricBoyWrap()
{ }

VtkParametricBoyWrap::VtkParametricBoyWrap(vtkSmartPointer<vtkParametricBoy> _native)
{ native = _native; }

VtkParametricBoyWrap::~VtkParametricBoyWrap()
{ }

void VtkParametricBoyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkParametricBoy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ParametricBoy").ToLocalChecked(), ConstructorGetter);
}

void VtkParametricBoyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkParametricBoyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkParametricFunctionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkParametricFunctionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkParametricBoyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "GetZScale", GetZScale);
	Nan::SetPrototypeMethod(tpl, "getZScale", GetZScale);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetZScale", SetZScale);
	Nan::SetPrototypeMethod(tpl, "setZScale", SetZScale);

	ptpl.Reset( tpl );
}

void VtkParametricBoyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkParametricBoy> native = vtkSmartPointer<vtkParametricBoy>::New();
		VtkParametricBoyWrap* obj = new VtkParametricBoyWrap(native);
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

void VtkParametricBoyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricBoyWrap *wrapper = ObjectWrap::Unwrap<VtkParametricBoyWrap>(info.Holder());
	vtkParametricBoy *native = (vtkParametricBoy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkParametricBoyWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricBoyWrap *wrapper = ObjectWrap::Unwrap<VtkParametricBoyWrap>(info.Holder());
	vtkParametricBoy *native = (vtkParametricBoy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricBoyWrap::GetZScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricBoyWrap *wrapper = ObjectWrap::Unwrap<VtkParametricBoyWrap>(info.Holder());
	vtkParametricBoy *native = (vtkParametricBoy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricBoyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricBoyWrap *wrapper = ObjectWrap::Unwrap<VtkParametricBoyWrap>(info.Holder());
	vtkParametricBoy *native = (vtkParametricBoy *)wrapper->native.GetPointer();
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

void VtkParametricBoyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricBoyWrap *wrapper = ObjectWrap::Unwrap<VtkParametricBoyWrap>(info.Holder());
	vtkParametricBoy *native = (vtkParametricBoy *)wrapper->native.GetPointer();
	vtkParametricBoy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkParametricBoyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParametricBoyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParametricBoyWrap *w = new VtkParametricBoyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParametricBoyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricBoyWrap *wrapper = ObjectWrap::Unwrap<VtkParametricBoyWrap>(info.Holder());
	vtkParametricBoy *native = (vtkParametricBoy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkParametricBoy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkParametricBoyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkParametricBoyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParametricBoyWrap *w = new VtkParametricBoyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricBoyWrap::SetZScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricBoyWrap *wrapper = ObjectWrap::Unwrap<VtkParametricBoyWrap>(info.Holder());
	vtkParametricBoy *native = (vtkParametricBoy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

