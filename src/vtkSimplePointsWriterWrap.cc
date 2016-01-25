/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetWriterWrap.h"
#include "vtkSimplePointsWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSimplePointsWriterWrap::constructor;

VtkSimplePointsWriterWrap::VtkSimplePointsWriterWrap()
{ }

VtkSimplePointsWriterWrap::VtkSimplePointsWriterWrap(vtkSmartPointer<vtkSimplePointsWriter> _native)
{ native = _native; }

VtkSimplePointsWriterWrap::~VtkSimplePointsWriterWrap()
{ }

void VtkSimplePointsWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkSimplePointsWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkWriterWrap::InitTpl(tpl);
	VtkDataWriterWrap::InitTpl(tpl);
	VtkDataSetWriterWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkSimplePointsWriter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("SimplePointsWriter").ToLocalChecked(),tpl->GetFunction());
}

void VtkSimplePointsWriterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDecimalPrecision", GetDecimalPrecision);
	Nan::SetPrototypeMethod(tpl, "getDecimalPrecision", GetDecimalPrecision);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDecimalPrecision", SetDecimalPrecision);
	Nan::SetPrototypeMethod(tpl, "setDecimalPrecision", SetDecimalPrecision);

}

void VtkSimplePointsWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSimplePointsWriter> native = vtkSmartPointer<vtkSimplePointsWriter>::New();
		VtkSimplePointsWriterWrap* obj = new VtkSimplePointsWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSimplePointsWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsWriterWrap>(info.Holder());
	vtkSimplePointsWriter *native = (vtkSimplePointsWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSimplePointsWriterWrap::GetDecimalPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsWriterWrap>(info.Holder());
	vtkSimplePointsWriter *native = (vtkSimplePointsWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDecimalPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimplePointsWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsWriterWrap>(info.Holder());
	vtkSimplePointsWriter *native = (vtkSimplePointsWriter *)wrapper->native.GetPointer();
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

void VtkSimplePointsWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsWriterWrap>(info.Holder());
	vtkSimplePointsWriter *native = (vtkSimplePointsWriter *)wrapper->native.GetPointer();
	vtkSimplePointsWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSimplePointsWriterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSimplePointsWriterWrap *w = new VtkSimplePointsWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSimplePointsWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsWriterWrap>(info.Holder());
	vtkSimplePointsWriter *native = (vtkSimplePointsWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSimplePointsWriter * r;
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
			Nan::New<v8::Function>(VtkSimplePointsWriterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSimplePointsWriterWrap *w = new VtkSimplePointsWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSimplePointsWriterWrap::SetDecimalPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsWriterWrap>(info.Holder());
	vtkSimplePointsWriter *native = (vtkSimplePointsWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDecimalPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

