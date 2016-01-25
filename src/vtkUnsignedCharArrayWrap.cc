/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataArrayWrap.h"
#include "vtkUnsignedCharArrayWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkUnsignedCharArrayWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkUnsignedCharArrayWrap::ptpl;

VtkUnsignedCharArrayWrap::VtkUnsignedCharArrayWrap()
{ }

VtkUnsignedCharArrayWrap::VtkUnsignedCharArrayWrap(vtkSmartPointer<vtkUnsignedCharArray> _native)
{ native = _native; }

VtkUnsignedCharArrayWrap::~VtkUnsignedCharArrayWrap()
{ }

void VtkUnsignedCharArrayWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataArrayWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataArrayWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkUnsignedCharArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkUnsignedCharArray").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("UnsignedCharArray").ToLocalChecked(),tpl->GetFunction());
}

void VtkUnsignedCharArrayWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataType", GetDataType);
	Nan::SetPrototypeMethod(tpl, "getDataType", GetDataType);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkUnsignedCharArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkUnsignedCharArray> native = vtkSmartPointer<vtkUnsignedCharArray>::New();
		VtkUnsignedCharArrayWrap* obj = new VtkUnsignedCharArrayWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkUnsignedCharArrayWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnsignedCharArrayWrap *wrapper = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info.Holder());
	vtkUnsignedCharArray *native = (vtkUnsignedCharArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUnsignedCharArrayWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnsignedCharArrayWrap *wrapper = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info.Holder());
	vtkUnsignedCharArray *native = (vtkUnsignedCharArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnsignedCharArrayWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnsignedCharArrayWrap *wrapper = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info.Holder());
	vtkUnsignedCharArray *native = (vtkUnsignedCharArray *)wrapper->native.GetPointer();
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

void VtkUnsignedCharArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnsignedCharArrayWrap *wrapper = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info.Holder());
	vtkUnsignedCharArray *native = (vtkUnsignedCharArray *)wrapper->native.GetPointer();
	vtkUnsignedCharArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkUnsignedCharArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnsignedCharArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnsignedCharArrayWrap *wrapper = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info.Holder());
	vtkUnsignedCharArray *native = (vtkUnsignedCharArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkUnsignedCharArray * r;
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
			Nan::New<v8::Function>(VtkUnsignedCharArrayWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

