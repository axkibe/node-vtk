/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractElectronicDataWrap.h"
#include "vtkProgrammableElectronicDataWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkDataObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkProgrammableElectronicDataWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkProgrammableElectronicDataWrap::ptpl;

VtkProgrammableElectronicDataWrap::VtkProgrammableElectronicDataWrap()
{ }

VtkProgrammableElectronicDataWrap::VtkProgrammableElectronicDataWrap(vtkSmartPointer<vtkProgrammableElectronicData> _native)
{ native = _native; }

VtkProgrammableElectronicDataWrap::~VtkProgrammableElectronicDataWrap()
{ }

void VtkProgrammableElectronicDataWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractElectronicDataWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractElectronicDataWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkProgrammableElectronicDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkProgrammableElectronicData").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ProgrammableElectronicData").ToLocalChecked(),tpl->GetFunction());
}

void VtkProgrammableElectronicDataWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetElectronDensity", GetElectronDensity);
	Nan::SetPrototypeMethod(tpl, "getElectronDensity", GetElectronDensity);

	Nan::SetPrototypeMethod(tpl, "GetPadding", GetPadding);
	Nan::SetPrototypeMethod(tpl, "getPadding", GetPadding);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetElectronDensity", SetElectronDensity);
	Nan::SetPrototypeMethod(tpl, "setElectronDensity", SetElectronDensity);

	Nan::SetPrototypeMethod(tpl, "SetPadding", SetPadding);
	Nan::SetPrototypeMethod(tpl, "setPadding", SetPadding);

}

void VtkProgrammableElectronicDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProgrammableElectronicData> native = vtkSmartPointer<vtkProgrammableElectronicData>::New();
		VtkProgrammableElectronicDataWrap* obj = new VtkProgrammableElectronicDataWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkProgrammableElectronicDataWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableElectronicDataWrap>(info.Holder());
	vtkProgrammableElectronicData *native = (vtkProgrammableElectronicData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProgrammableElectronicDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableElectronicDataWrap>(info.Holder());
	vtkProgrammableElectronicData *native = (vtkProgrammableElectronicData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProgrammableElectronicDataWrap::GetElectronDensity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableElectronicDataWrap>(info.Holder());
	vtkProgrammableElectronicData *native = (vtkProgrammableElectronicData *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetElectronDensity();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProgrammableElectronicDataWrap::GetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableElectronicDataWrap>(info.Holder());
	vtkProgrammableElectronicData *native = (vtkProgrammableElectronicData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPadding();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProgrammableElectronicDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableElectronicDataWrap>(info.Holder());
	vtkProgrammableElectronicData *native = (vtkProgrammableElectronicData *)wrapper->native.GetPointer();
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

void VtkProgrammableElectronicDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableElectronicDataWrap>(info.Holder());
	vtkProgrammableElectronicData *native = (vtkProgrammableElectronicData *)wrapper->native.GetPointer();
	vtkProgrammableElectronicData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkProgrammableElectronicDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProgrammableElectronicDataWrap *w = new VtkProgrammableElectronicDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProgrammableElectronicDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableElectronicDataWrap>(info.Holder());
	vtkProgrammableElectronicData *native = (vtkProgrammableElectronicData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProgrammableElectronicData * r;
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
			Nan::New<v8::Function>(VtkProgrammableElectronicDataWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProgrammableElectronicDataWrap *w = new VtkProgrammableElectronicDataWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProgrammableElectronicDataWrap::SetElectronDensity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableElectronicDataWrap>(info.Holder());
	vtkProgrammableElectronicData *native = (vtkProgrammableElectronicData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetElectronDensity(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProgrammableElectronicDataWrap::SetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableElectronicDataWrap>(info.Holder());
	vtkProgrammableElectronicData *native = (vtkProgrammableElectronicData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPadding(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
