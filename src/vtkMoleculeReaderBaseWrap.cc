/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkMoleculeReaderBaseWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkMoleculeReaderBaseWrap::constructor;

VtkMoleculeReaderBaseWrap::VtkMoleculeReaderBaseWrap()
{ }

VtkMoleculeReaderBaseWrap::VtkMoleculeReaderBaseWrap(vtkSmartPointer<vtkMoleculeReaderBase> _native)
{ native = _native; }

VtkMoleculeReaderBaseWrap::~VtkMoleculeReaderBaseWrap()
{ }

void VtkMoleculeReaderBaseWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkMoleculeReaderBaseWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkPolyDataAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkMoleculeReaderBase").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("MoleculeReaderBase").ToLocalChecked(),tpl->GetFunction());
}

void VtkMoleculeReaderBaseWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetBScale", GetBScale);
	Nan::SetPrototypeMethod(tpl, "getBScale", GetBScale);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetHBScale", GetHBScale);
	Nan::SetPrototypeMethod(tpl, "getHBScale", GetHBScale);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfAtoms", GetNumberOfAtoms);
	Nan::SetPrototypeMethod(tpl, "getNumberOfAtoms", GetNumberOfAtoms);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBScale", SetBScale);
	Nan::SetPrototypeMethod(tpl, "setBScale", SetBScale);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetHBScale", SetHBScale);
	Nan::SetPrototypeMethod(tpl, "setHBScale", SetHBScale);

}

void VtkMoleculeReaderBaseWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMoleculeReaderBaseWrap::GetBScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeReaderBaseWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeReaderBaseWrap>(info.Holder());
	vtkMoleculeReaderBase *native = (vtkMoleculeReaderBase *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMoleculeReaderBaseWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeReaderBaseWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeReaderBaseWrap>(info.Holder());
	vtkMoleculeReaderBase *native = (vtkMoleculeReaderBase *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMoleculeReaderBaseWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeReaderBaseWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeReaderBaseWrap>(info.Holder());
	vtkMoleculeReaderBase *native = (vtkMoleculeReaderBase *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMoleculeReaderBaseWrap::GetHBScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeReaderBaseWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeReaderBaseWrap>(info.Holder());
	vtkMoleculeReaderBase *native = (vtkMoleculeReaderBase *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHBScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMoleculeReaderBaseWrap::GetNumberOfAtoms(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeReaderBaseWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeReaderBaseWrap>(info.Holder());
	vtkMoleculeReaderBase *native = (vtkMoleculeReaderBase *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfAtoms();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMoleculeReaderBaseWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeReaderBaseWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeReaderBaseWrap>(info.Holder());
	vtkMoleculeReaderBase *native = (vtkMoleculeReaderBase *)wrapper->native.GetPointer();
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

void VtkMoleculeReaderBaseWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeReaderBaseWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeReaderBaseWrap>(info.Holder());
	vtkMoleculeReaderBase *native = (vtkMoleculeReaderBase *)wrapper->native.GetPointer();
	vtkMoleculeReaderBase * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMoleculeReaderBaseWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMoleculeReaderBaseWrap *w = new VtkMoleculeReaderBaseWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMoleculeReaderBaseWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeReaderBaseWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeReaderBaseWrap>(info.Holder());
	vtkMoleculeReaderBase *native = (vtkMoleculeReaderBase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMoleculeReaderBase * r;
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
			Nan::New<v8::Function>(VtkMoleculeReaderBaseWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMoleculeReaderBaseWrap *w = new VtkMoleculeReaderBaseWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMoleculeReaderBaseWrap::SetBScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeReaderBaseWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeReaderBaseWrap>(info.Holder());
	vtkMoleculeReaderBase *native = (vtkMoleculeReaderBase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMoleculeReaderBaseWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeReaderBaseWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeReaderBaseWrap>(info.Holder());
	vtkMoleculeReaderBase *native = (vtkMoleculeReaderBase *)wrapper->native.GetPointer();
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

void VtkMoleculeReaderBaseWrap::SetHBScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeReaderBaseWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeReaderBaseWrap>(info.Holder());
	vtkMoleculeReaderBase *native = (vtkMoleculeReaderBase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHBScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

