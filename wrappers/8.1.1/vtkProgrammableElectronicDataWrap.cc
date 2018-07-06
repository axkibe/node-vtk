/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAbstractElectronicDataWrap.h"
#include "vtkProgrammableElectronicDataWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkDataObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProgrammableElectronicDataWrap::ptpl;

VtkProgrammableElectronicDataWrap::VtkProgrammableElectronicDataWrap()
{ }

VtkProgrammableElectronicDataWrap::VtkProgrammableElectronicDataWrap(vtkSmartPointer<vtkProgrammableElectronicData> _native)
{ native = _native; }

VtkProgrammableElectronicDataWrap::~VtkProgrammableElectronicDataWrap()
{ }

void VtkProgrammableElectronicDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProgrammableElectronicData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProgrammableElectronicData").ToLocalChecked(), ConstructorGetter);
}

void VtkProgrammableElectronicDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProgrammableElectronicDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractElectronicDataWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractElectronicDataWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProgrammableElectronicDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetElectronDensity", GetElectronDensity);
	Nan::SetPrototypeMethod(tpl, "getElectronDensity", GetElectronDensity);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetElectronDensity", SetElectronDensity);
	Nan::SetPrototypeMethod(tpl, "setElectronDensity", SetElectronDensity);

	Nan::SetPrototypeMethod(tpl, "SetPadding", SetPadding);
	Nan::SetPrototypeMethod(tpl, "setPadding", SetPadding);

#ifdef VTK_NODE_PLUS_VTKPROGRAMMABLEELECTRONICDATAWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPROGRAMMABLEELECTRONICDATAWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
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
		VtkProgrammableElectronicDataWrap* obj = new VtkProgrammableElectronicDataWrap(native);
		obj->Wrap(info.This());
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

void VtkProgrammableElectronicDataWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableElectronicDataWrap>(info.Holder());
	vtkProgrammableElectronicData *native = (vtkProgrammableElectronicData *)wrapper->native.GetPointer();
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
	VtkProgrammableElectronicDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProgrammableElectronicDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProgrammableElectronicDataWrap *w = new VtkProgrammableElectronicDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProgrammableElectronicDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableElectronicDataWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableElectronicDataWrap>(info.Holder());
	vtkProgrammableElectronicData *native = (vtkProgrammableElectronicData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkProgrammableElectronicData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkProgrammableElectronicDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProgrammableElectronicDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProgrammableElectronicDataWrap *w = new VtkProgrammableElectronicDataWrap();
		w->native = r;
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
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
