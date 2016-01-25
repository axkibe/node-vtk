/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWriterWrap.h"
#include "vtkIVWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkIVWriterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkIVWriterWrap::ptpl;

VtkIVWriterWrap::VtkIVWriterWrap()
{ }

VtkIVWriterWrap::VtkIVWriterWrap(vtkSmartPointer<vtkIVWriter> _native)
{ native = _native; }

VtkIVWriterWrap::~VtkIVWriterWrap()
{ }

void VtkIVWriterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWriterWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWriterWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkIVWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkIVWriter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("IVWriter").ToLocalChecked(),tpl->GetFunction());
}

void VtkIVWriterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

}

void VtkIVWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkIVWriter> native = vtkSmartPointer<vtkIVWriter>::New();
		VtkIVWriterWrap* obj = new VtkIVWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkIVWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIVWriterWrap *wrapper = ObjectWrap::Unwrap<VtkIVWriterWrap>(info.Holder());
	vtkIVWriter *native = (vtkIVWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkIVWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIVWriterWrap *wrapper = ObjectWrap::Unwrap<VtkIVWriterWrap>(info.Holder());
	vtkIVWriter *native = (vtkIVWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkIVWriterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIVWriterWrap *wrapper = ObjectWrap::Unwrap<VtkIVWriterWrap>(info.Holder());
	vtkIVWriter *native = (vtkIVWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetInput(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataWrap *w = new VtkPolyDataWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIVWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIVWriterWrap *wrapper = ObjectWrap::Unwrap<VtkIVWriterWrap>(info.Holder());
	vtkIVWriter *native = (vtkIVWriter *)wrapper->native.GetPointer();
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

void VtkIVWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIVWriterWrap *wrapper = ObjectWrap::Unwrap<VtkIVWriterWrap>(info.Holder());
	vtkIVWriter *native = (vtkIVWriter *)wrapper->native.GetPointer();
	vtkIVWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkIVWriterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIVWriterWrap *w = new VtkIVWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIVWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIVWriterWrap *wrapper = ObjectWrap::Unwrap<VtkIVWriterWrap>(info.Holder());
	vtkIVWriter *native = (vtkIVWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkIVWriter * r;
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
			Nan::New<v8::Function>(VtkIVWriterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIVWriterWrap *w = new VtkIVWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIVWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIVWriterWrap *wrapper = ObjectWrap::Unwrap<VtkIVWriterWrap>(info.Holder());
	vtkIVWriter *native = (vtkIVWriter *)wrapper->native.GetPointer();
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
