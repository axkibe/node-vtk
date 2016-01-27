/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkParametricFunctionWrap.h"
#include "vtkParametricDiniWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkParametricDiniWrap::ptpl;

VtkParametricDiniWrap::VtkParametricDiniWrap()
{ }

VtkParametricDiniWrap::VtkParametricDiniWrap(vtkSmartPointer<vtkParametricDini> _native)
{ native = _native; }

VtkParametricDiniWrap::~VtkParametricDiniWrap()
{ }

void VtkParametricDiniWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkParametricDini").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ParametricDini").ToLocalChecked(), ConstructorGetter);
}

void VtkParametricDiniWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkParametricDiniWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkParametricFunctionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkParametricFunctionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkParametricDiniWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetA", GetA);
	Nan::SetPrototypeMethod(tpl, "getA", GetA);

	Nan::SetPrototypeMethod(tpl, "GetB", GetB);
	Nan::SetPrototypeMethod(tpl, "getB", GetB);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetA", SetA);
	Nan::SetPrototypeMethod(tpl, "setA", SetA);

	Nan::SetPrototypeMethod(tpl, "SetB", SetB);
	Nan::SetPrototypeMethod(tpl, "setB", SetB);

	ptpl.Reset( tpl );
}

void VtkParametricDiniWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkParametricDini> native = vtkSmartPointer<vtkParametricDini>::New();
		VtkParametricDiniWrap* obj = new VtkParametricDiniWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkParametricDiniWrap::GetA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricDiniWrap *wrapper = ObjectWrap::Unwrap<VtkParametricDiniWrap>(info.Holder());
	vtkParametricDini *native = (vtkParametricDini *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetA();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricDiniWrap::GetB(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricDiniWrap *wrapper = ObjectWrap::Unwrap<VtkParametricDiniWrap>(info.Holder());
	vtkParametricDini *native = (vtkParametricDini *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetB();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricDiniWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricDiniWrap *wrapper = ObjectWrap::Unwrap<VtkParametricDiniWrap>(info.Holder());
	vtkParametricDini *native = (vtkParametricDini *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkParametricDiniWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricDiniWrap *wrapper = ObjectWrap::Unwrap<VtkParametricDiniWrap>(info.Holder());
	vtkParametricDini *native = (vtkParametricDini *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricDiniWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricDiniWrap *wrapper = ObjectWrap::Unwrap<VtkParametricDiniWrap>(info.Holder());
	vtkParametricDini *native = (vtkParametricDini *)wrapper->native.GetPointer();
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

void VtkParametricDiniWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricDiniWrap *wrapper = ObjectWrap::Unwrap<VtkParametricDiniWrap>(info.Holder());
	vtkParametricDini *native = (vtkParametricDini *)wrapper->native.GetPointer();
	vtkParametricDini * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkParametricDiniWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParametricDiniWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParametricDiniWrap *w = new VtkParametricDiniWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParametricDiniWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricDiniWrap *wrapper = ObjectWrap::Unwrap<VtkParametricDiniWrap>(info.Holder());
	vtkParametricDini *native = (vtkParametricDini *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkParametricDini * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkParametricDiniWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkParametricDiniWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParametricDiniWrap *w = new VtkParametricDiniWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricDiniWrap::SetA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricDiniWrap *wrapper = ObjectWrap::Unwrap<VtkParametricDiniWrap>(info.Holder());
	vtkParametricDini *native = (vtkParametricDini *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetA(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricDiniWrap::SetB(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricDiniWrap *wrapper = ObjectWrap::Unwrap<VtkParametricDiniWrap>(info.Holder());
	vtkParametricDini *native = (vtkParametricDini *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetB(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

