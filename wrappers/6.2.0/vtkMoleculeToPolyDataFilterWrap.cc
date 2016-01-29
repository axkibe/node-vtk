/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkMoleculeToPolyDataFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMoleculeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMoleculeToPolyDataFilterWrap::ptpl;

VtkMoleculeToPolyDataFilterWrap::VtkMoleculeToPolyDataFilterWrap()
{ }

VtkMoleculeToPolyDataFilterWrap::VtkMoleculeToPolyDataFilterWrap(vtkSmartPointer<vtkMoleculeToPolyDataFilter> _native)
{ native = _native; }

VtkMoleculeToPolyDataFilterWrap::~VtkMoleculeToPolyDataFilterWrap()
{ }

void VtkMoleculeToPolyDataFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMoleculeToPolyDataFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MoleculeToPolyDataFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkMoleculeToPolyDataFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMoleculeToPolyDataFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMoleculeToPolyDataFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkMoleculeToPolyDataFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkMoleculeToPolyDataFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeToPolyDataFilterWrap>(info.Holder());
	vtkMoleculeToPolyDataFilter *native = (vtkMoleculeToPolyDataFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMoleculeToPolyDataFilterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeToPolyDataFilterWrap>(info.Holder());
	vtkMoleculeToPolyDataFilter *native = (vtkMoleculeToPolyDataFilter *)wrapper->native.GetPointer();
	vtkMolecule * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkMoleculeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMoleculeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMoleculeWrap *w = new VtkMoleculeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMoleculeToPolyDataFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeToPolyDataFilterWrap>(info.Holder());
	vtkMoleculeToPolyDataFilter *native = (vtkMoleculeToPolyDataFilter *)wrapper->native.GetPointer();
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

void VtkMoleculeToPolyDataFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeToPolyDataFilterWrap>(info.Holder());
	vtkMoleculeToPolyDataFilter *native = (vtkMoleculeToPolyDataFilter *)wrapper->native.GetPointer();
	vtkMoleculeToPolyDataFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMoleculeToPolyDataFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMoleculeToPolyDataFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMoleculeToPolyDataFilterWrap *w = new VtkMoleculeToPolyDataFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMoleculeToPolyDataFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeToPolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeToPolyDataFilterWrap>(info.Holder());
	vtkMoleculeToPolyDataFilter *native = (vtkMoleculeToPolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMoleculeToPolyDataFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMoleculeToPolyDataFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMoleculeToPolyDataFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMoleculeToPolyDataFilterWrap *w = new VtkMoleculeToPolyDataFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

