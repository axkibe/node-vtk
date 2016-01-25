/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkSimplePointsReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSimplePointsReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkSimplePointsReaderWrap::ptpl;

VtkSimplePointsReaderWrap::VtkSimplePointsReaderWrap()
{ }

VtkSimplePointsReaderWrap::VtkSimplePointsReaderWrap(vtkSmartPointer<vtkSimplePointsReader> _native)
{ native = _native; }

VtkSimplePointsReaderWrap::~VtkSimplePointsReaderWrap()
{ }

void VtkSimplePointsReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkSimplePointsReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkSimplePointsReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("SimplePointsReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkSimplePointsReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

}

void VtkSimplePointsReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSimplePointsReader> native = vtkSmartPointer<vtkSimplePointsReader>::New();
		VtkSimplePointsReaderWrap* obj = new VtkSimplePointsReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSimplePointsReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsReaderWrap>(info.Holder());
	vtkSimplePointsReader *native = (vtkSimplePointsReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSimplePointsReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsReaderWrap>(info.Holder());
	vtkSimplePointsReader *native = (vtkSimplePointsReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSimplePointsReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsReaderWrap>(info.Holder());
	vtkSimplePointsReader *native = (vtkSimplePointsReader *)wrapper->native.GetPointer();
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

void VtkSimplePointsReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsReaderWrap>(info.Holder());
	vtkSimplePointsReader *native = (vtkSimplePointsReader *)wrapper->native.GetPointer();
	vtkSimplePointsReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSimplePointsReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSimplePointsReaderWrap *w = new VtkSimplePointsReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSimplePointsReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsReaderWrap>(info.Holder());
	vtkSimplePointsReader *native = (vtkSimplePointsReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSimplePointsReader * r;
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
			Nan::New<v8::Function>(VtkSimplePointsReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSimplePointsReaderWrap *w = new VtkSimplePointsReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSimplePointsReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsReaderWrap>(info.Holder());
	vtkSimplePointsReader *native = (vtkSimplePointsReader *)wrapper->native.GetPointer();
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

