/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStreamingDemandDrivenPipelineWrap.h"
#include "vtkImageImportExecutiveWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageImportExecutiveWrap::constructor;

VtkImageImportExecutiveWrap::VtkImageImportExecutiveWrap()
{ }

VtkImageImportExecutiveWrap::VtkImageImportExecutiveWrap(vtkSmartPointer<vtkImageImportExecutive> _native)
{ native = _native; }

VtkImageImportExecutiveWrap::~VtkImageImportExecutiveWrap()
{ }

void VtkImageImportExecutiveWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkImageImportExecutiveWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkExecutiveWrap::InitTpl(tpl);
	VtkDemandDrivenPipelineWrap::InitTpl(tpl);
	VtkStreamingDemandDrivenPipelineWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkImageImportExecutive").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageImportExecutive").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageImportExecutiveWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
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

void VtkImageImportExecutiveWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageImportExecutive> native = vtkSmartPointer<vtkImageImportExecutive>::New();
		VtkImageImportExecutiveWrap* obj = new VtkImageImportExecutiveWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageImportExecutiveWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportExecutiveWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportExecutiveWrap>(info.Holder());
	vtkImageImportExecutive *native = (vtkImageImportExecutive *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageImportExecutiveWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportExecutiveWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportExecutiveWrap>(info.Holder());
	vtkImageImportExecutive *native = (vtkImageImportExecutive *)wrapper->native.GetPointer();
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

void VtkImageImportExecutiveWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportExecutiveWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportExecutiveWrap>(info.Holder());
	vtkImageImportExecutive *native = (vtkImageImportExecutive *)wrapper->native.GetPointer();
	vtkImageImportExecutive * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageImportExecutiveWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageImportExecutiveWrap *w = new VtkImageImportExecutiveWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageImportExecutiveWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportExecutiveWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportExecutiveWrap>(info.Holder());
	vtkImageImportExecutive *native = (vtkImageImportExecutive *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageImportExecutive * r;
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
			Nan::New<v8::Function>(VtkImageImportExecutiveWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageImportExecutiveWrap *w = new VtkImageImportExecutiveWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

