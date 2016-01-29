/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectWrap.h"
#include "vtkAbstractElectronicDataWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractElectronicDataWrap::ptpl;

VtkAbstractElectronicDataWrap::VtkAbstractElectronicDataWrap()
{ }

VtkAbstractElectronicDataWrap::VtkAbstractElectronicDataWrap(vtkSmartPointer<vtkAbstractElectronicData> _native)
{ native = _native; }

VtkAbstractElectronicDataWrap::~VtkAbstractElectronicDataWrap()
{ }

void VtkAbstractElectronicDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractElectronicData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractElectronicData").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractElectronicDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractElectronicDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractElectronicDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetElectronDensity", GetElectronDensity);
	Nan::SetPrototypeMethod(tpl, "getElectronDensity", GetElectronDensity);

	Nan::SetPrototypeMethod(tpl, "GetHOMO", GetHOMO);
	Nan::SetPrototypeMethod(tpl, "getHOMO", GetHOMO);

	Nan::SetPrototypeMethod(tpl, "GetLUMO", GetLUMO);
	Nan::SetPrototypeMethod(tpl, "getLUMO", GetLUMO);

	Nan::SetPrototypeMethod(tpl, "GetPadding", GetPadding);
	Nan::SetPrototypeMethod(tpl, "getPadding", GetPadding);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkAbstractElectronicDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAbstractElectronicDataWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractElectronicDataWrap>(info.Holder());
	vtkAbstractElectronicData *native = (vtkAbstractElectronicData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
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

void VtkAbstractElectronicDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractElectronicDataWrap>(info.Holder());
	vtkAbstractElectronicData *native = (vtkAbstractElectronicData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractElectronicDataWrap::GetElectronDensity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractElectronicDataWrap>(info.Holder());
	vtkAbstractElectronicData *native = (vtkAbstractElectronicData *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetElectronDensity();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractElectronicDataWrap::GetHOMO(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractElectronicDataWrap>(info.Holder());
	vtkAbstractElectronicData *native = (vtkAbstractElectronicData *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHOMO();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractElectronicDataWrap::GetLUMO(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractElectronicDataWrap>(info.Holder());
	vtkAbstractElectronicData *native = (vtkAbstractElectronicData *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLUMO();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractElectronicDataWrap::GetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractElectronicDataWrap>(info.Holder());
	vtkAbstractElectronicData *native = (vtkAbstractElectronicData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPadding();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractElectronicDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractElectronicDataWrap>(info.Holder());
	vtkAbstractElectronicData *native = (vtkAbstractElectronicData *)wrapper->native.GetPointer();
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

void VtkAbstractElectronicDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractElectronicDataWrap>(info.Holder());
	vtkAbstractElectronicData *native = (vtkAbstractElectronicData *)wrapper->native.GetPointer();
	vtkAbstractElectronicData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAbstractElectronicDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractElectronicDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractElectronicDataWrap *w = new VtkAbstractElectronicDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractElectronicDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractElectronicDataWrap>(info.Holder());
	vtkAbstractElectronicData *native = (vtkAbstractElectronicData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAbstractElectronicData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAbstractElectronicDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAbstractElectronicDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractElectronicDataWrap *w = new VtkAbstractElectronicDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

