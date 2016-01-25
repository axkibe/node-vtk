/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkContourGridWrap.h"
#include "vtkSMPContourGridWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSMPContourGridWrap::constructor;

VtkSMPContourGridWrap::VtkSMPContourGridWrap()
{ }

VtkSMPContourGridWrap::VtkSMPContourGridWrap(vtkSmartPointer<vtkSMPContourGrid> _native)
{ native = _native; }

VtkSMPContourGridWrap::~VtkSMPContourGridWrap()
{ }

void VtkSMPContourGridWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkSMPContourGridWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkPolyDataAlgorithmWrap::InitTpl(tpl);
	VtkContourGridWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkSMPContourGrid").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("SMPContourGrid").ToLocalChecked(),tpl->GetFunction());
}

void VtkSMPContourGridWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MergePiecesOff", MergePiecesOff);
	Nan::SetPrototypeMethod(tpl, "mergePiecesOff", MergePiecesOff);

	Nan::SetPrototypeMethod(tpl, "MergePiecesOn", MergePiecesOn);
	Nan::SetPrototypeMethod(tpl, "mergePiecesOn", MergePiecesOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkSMPContourGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSMPContourGrid> native = vtkSmartPointer<vtkSMPContourGrid>::New();
		VtkSMPContourGridWrap* obj = new VtkSMPContourGridWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSMPContourGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSMPContourGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
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

void VtkSMPContourGridWrap::MergePiecesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergePiecesOff();
}

void VtkSMPContourGridWrap::MergePiecesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergePiecesOn();
}

void VtkSMPContourGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
	vtkSMPContourGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSMPContourGridWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSMPContourGridWrap *w = new VtkSMPContourGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSMPContourGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSMPContourGrid * r;
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
			Nan::New<v8::Function>(VtkSMPContourGridWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSMPContourGridWrap *w = new VtkSMPContourGridWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

