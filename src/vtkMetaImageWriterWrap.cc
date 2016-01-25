/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageWriterWrap.h"
#include "vtkMetaImageWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkMetaImageWriterWrap::constructor;

VtkMetaImageWriterWrap::VtkMetaImageWriterWrap()
{ }

VtkMetaImageWriterWrap::VtkMetaImageWriterWrap(vtkSmartPointer<vtkMetaImageWriter> _native)
{ native = _native; }

VtkMetaImageWriterWrap::~VtkMetaImageWriterWrap()
{ }

void VtkMetaImageWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkMetaImageWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkImageAlgorithmWrap::InitTpl(tpl);
	VtkImageWriterWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkMetaImageWriter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("MetaImageWriter").ToLocalChecked(),tpl->GetFunction());
}

void VtkMetaImageWriterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetRAWFileName", GetRAWFileName);
	Nan::SetPrototypeMethod(tpl, "getRAWFileName", GetRAWFileName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetRAWFileName", SetRAWFileName);
	Nan::SetPrototypeMethod(tpl, "setRAWFileName", SetRAWFileName);

	Nan::SetPrototypeMethod(tpl, "Write", Write);
	Nan::SetPrototypeMethod(tpl, "write", Write);

}

void VtkMetaImageWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMetaImageWriter> native = vtkSmartPointer<vtkMetaImageWriter>::New();
		VtkMetaImageWriterWrap* obj = new VtkMetaImageWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMetaImageWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageWriterWrap::GetRAWFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRAWFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
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

void VtkMetaImageWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	vtkMetaImageWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMetaImageWriterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMetaImageWriterWrap *w = new VtkMetaImageWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMetaImageWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMetaImageWriter * r;
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
			Nan::New<v8::Function>(VtkMetaImageWriterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMetaImageWriterWrap *w = new VtkMetaImageWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMetaImageWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMetaImageWriterWrap::SetRAWFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRAWFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMetaImageWriterWrap::Write(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Write();
}

