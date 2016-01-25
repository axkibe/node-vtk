/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkParametricFunctionWrap.h"
#include "vtkParametricRomanWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkParametricRomanWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkParametricRomanWrap::ptpl;

VtkParametricRomanWrap::VtkParametricRomanWrap()
{ }

VtkParametricRomanWrap::VtkParametricRomanWrap(vtkSmartPointer<vtkParametricRoman> _native)
{ native = _native; }

VtkParametricRomanWrap::~VtkParametricRomanWrap()
{ }

void VtkParametricRomanWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkParametricFunctionWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkParametricFunctionWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkParametricRomanWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkParametricRoman").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ParametricRoman").ToLocalChecked(),tpl->GetFunction());
}

void VtkParametricRomanWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

}

void VtkParametricRomanWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkParametricRoman> native = vtkSmartPointer<vtkParametricRoman>::New();
		VtkParametricRomanWrap* obj = new VtkParametricRomanWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkParametricRomanWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRomanWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRomanWrap>(info.Holder());
	vtkParametricRoman *native = (vtkParametricRoman *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkParametricRomanWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRomanWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRomanWrap>(info.Holder());
	vtkParametricRoman *native = (vtkParametricRoman *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricRomanWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRomanWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRomanWrap>(info.Holder());
	vtkParametricRoman *native = (vtkParametricRoman *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricRomanWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRomanWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRomanWrap>(info.Holder());
	vtkParametricRoman *native = (vtkParametricRoman *)wrapper->native.GetPointer();
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

void VtkParametricRomanWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRomanWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRomanWrap>(info.Holder());
	vtkParametricRoman *native = (vtkParametricRoman *)wrapper->native.GetPointer();
	vtkParametricRoman * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkParametricRomanWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParametricRomanWrap *w = new VtkParametricRomanWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParametricRomanWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRomanWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRomanWrap>(info.Holder());
	vtkParametricRoman *native = (vtkParametricRoman *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkParametricRoman * r;
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
			Nan::New<v8::Function>(VtkParametricRomanWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParametricRomanWrap *w = new VtkParametricRomanWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricRomanWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRomanWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRomanWrap>(info.Holder());
	vtkParametricRoman *native = (vtkParametricRoman *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
