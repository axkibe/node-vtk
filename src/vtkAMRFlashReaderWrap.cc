/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAMRBaseReaderWrap.h"
#include "vtkAMRFlashReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAMRFlashReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkAMRFlashReaderWrap::ptpl;

VtkAMRFlashReaderWrap::VtkAMRFlashReaderWrap()
{ }

VtkAMRFlashReaderWrap::VtkAMRFlashReaderWrap(vtkSmartPointer<vtkAMRFlashReader> _native)
{ native = _native; }

VtkAMRFlashReaderWrap::~VtkAMRFlashReaderWrap()
{ }

void VtkAMRFlashReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAMRBaseReaderWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAMRBaseReaderWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkAMRFlashReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkAMRFlashReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AMRFlashReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkAMRFlashReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfBlocks", GetNumberOfBlocks);
	Nan::SetPrototypeMethod(tpl, "getNumberOfBlocks", GetNumberOfBlocks);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfLevels", GetNumberOfLevels);
	Nan::SetPrototypeMethod(tpl, "getNumberOfLevels", GetNumberOfLevels);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

}

void VtkAMRFlashReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAMRFlashReader> native = vtkSmartPointer<vtkAMRFlashReader>::New();
		VtkAMRFlashReaderWrap* obj = new VtkAMRFlashReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAMRFlashReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashReaderWrap>(info.Holder());
	vtkAMRFlashReader *native = (vtkAMRFlashReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAMRFlashReaderWrap::GetNumberOfBlocks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashReaderWrap>(info.Holder());
	vtkAMRFlashReader *native = (vtkAMRFlashReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfBlocks();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRFlashReaderWrap::GetNumberOfLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashReaderWrap>(info.Holder());
	vtkAMRFlashReader *native = (vtkAMRFlashReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfLevels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRFlashReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashReaderWrap>(info.Holder());
	vtkAMRFlashReader *native = (vtkAMRFlashReader *)wrapper->native.GetPointer();
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

void VtkAMRFlashReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashReaderWrap>(info.Holder());
	vtkAMRFlashReader *native = (vtkAMRFlashReader *)wrapper->native.GetPointer();
	vtkAMRFlashReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAMRFlashReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMRFlashReaderWrap *w = new VtkAMRFlashReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRFlashReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashReaderWrap>(info.Holder());
	vtkAMRFlashReader *native = (vtkAMRFlashReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAMRFlashReader * r;
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
			Nan::New<v8::Function>(VtkAMRFlashReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMRFlashReaderWrap *w = new VtkAMRFlashReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRFlashReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashReaderWrap>(info.Holder());
	vtkAMRFlashReader *native = (vtkAMRFlashReader *)wrapper->native.GetPointer();
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

