/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageDivergenceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageDivergenceWrap::constructor;

VtkImageDivergenceWrap::VtkImageDivergenceWrap()
{ }

VtkImageDivergenceWrap::VtkImageDivergenceWrap(vtkSmartPointer<vtkImageDivergence> _native)
{ native = _native; }

VtkImageDivergenceWrap::~VtkImageDivergenceWrap()
{ }

void VtkImageDivergenceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkImageDivergenceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkImageAlgorithmWrap::InitTpl(tpl);
	VtkThreadedImageAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkImageDivergence").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageDivergence").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageDivergenceWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkImageDivergenceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageDivergence> native = vtkSmartPointer<vtkImageDivergence>::New();
		VtkImageDivergenceWrap* obj = new VtkImageDivergenceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageDivergenceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDivergenceWrap *wrapper = ObjectWrap::Unwrap<VtkImageDivergenceWrap>(info.Holder());
	vtkImageDivergence *native = (vtkImageDivergence *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageDivergenceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDivergenceWrap *wrapper = ObjectWrap::Unwrap<VtkImageDivergenceWrap>(info.Holder());
	vtkImageDivergence *native = (vtkImageDivergence *)wrapper->native.GetPointer();
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

void VtkImageDivergenceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDivergenceWrap *wrapper = ObjectWrap::Unwrap<VtkImageDivergenceWrap>(info.Holder());
	vtkImageDivergence *native = (vtkImageDivergence *)wrapper->native.GetPointer();
	vtkImageDivergence * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDivergenceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDivergenceWrap *w = new VtkImageDivergenceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageDivergenceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDivergenceWrap *wrapper = ObjectWrap::Unwrap<VtkImageDivergenceWrap>(info.Holder());
	vtkImageDivergence *native = (vtkImageDivergence *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageDivergence * r;
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
			Nan::New<v8::Function>(VtkImageDivergenceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageDivergenceWrap *w = new VtkImageDivergenceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

