/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkObjectBase.h>

#include "vtkObjectBaseWrap.h"

using namespace v8;

Nan::Persistent<v8::Function> VtkObjectBaseWrap::constructor;

VtkObjectBaseWrap::VtkObjectBaseWrap()
{ }

VtkObjectBaseWrap::VtkObjectBaseWrap(vtkSmartPointer<vtkObjectBase> _native)
{ native = _native; }

VtkObjectBaseWrap::~VtkObjectBaseWrap()
{ }

void VtkObjectBaseWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkObjectBaseWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkObjectBase").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("objectBase").ToLocalChecked(),tpl->GetFunction());
}

void VtkObjectBaseWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsTypeOf", IsTypeOf);
	Nan::SetPrototypeMethod(tpl, "isTypeOf", IsTypeOf);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

}

void VtkObjectBaseWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkObjectBase> native = vtkSmartPointer<vtkObjectBase>::New();
		VtkObjectBaseWrap* obj = new VtkObjectBaseWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(strcmp(*s, "__nowrap" ))
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkObjectBaseWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectBaseWrap *wrapper = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info.Holder());
	vtkObjectBase *native = (vtkObjectBase *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkObjectBaseWrap::IsTypeOf(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectBaseWrap *wrapper = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info.Holder());
	vtkObjectBase *native = (vtkObjectBase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsTypeOf(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkObjectBaseWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkObjectBaseWrap *wrapper = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info.Holder());
	vtkObjectBase *native = (vtkObjectBase *)wrapper->native.GetPointer();
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
