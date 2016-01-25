/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTreeAlgorithmWrap.h"
#include "vtkExtractSelectedTreeWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkExtractSelectedTreeWrap::constructor;

VtkExtractSelectedTreeWrap::VtkExtractSelectedTreeWrap()
{ }

VtkExtractSelectedTreeWrap::VtkExtractSelectedTreeWrap(vtkSmartPointer<vtkExtractSelectedTree> _native)
{ native = _native; }

VtkExtractSelectedTreeWrap::~VtkExtractSelectedTreeWrap()
{ }

void VtkExtractSelectedTreeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkExtractSelectedTreeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkTreeAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkExtractSelectedTree").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ExtractSelectedTree").ToLocalChecked(),tpl->GetFunction());
}

void VtkExtractSelectedTreeWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "FillInputPortInformation", FillInputPortInformation);
	Nan::SetPrototypeMethod(tpl, "fillInputPortInformation", FillInputPortInformation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSelectionConnection", SetSelectionConnection);
	Nan::SetPrototypeMethod(tpl, "setSelectionConnection", SetSelectionConnection);

}

void VtkExtractSelectedTreeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractSelectedTree> native = vtkSmartPointer<vtkExtractSelectedTree>::New();
		VtkExtractSelectedTreeWrap* obj = new VtkExtractSelectedTreeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExtractSelectedTreeWrap::FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedTreeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedTreeWrap>(info.Holder());
	vtkExtractSelectedTree *native = (vtkExtractSelectedTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FillInputPortInformation(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractSelectedTreeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedTreeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedTreeWrap>(info.Holder());
	vtkExtractSelectedTree *native = (vtkExtractSelectedTree *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractSelectedTreeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedTreeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedTreeWrap>(info.Holder());
	vtkExtractSelectedTree *native = (vtkExtractSelectedTree *)wrapper->native.GetPointer();
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

void VtkExtractSelectedTreeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedTreeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedTreeWrap>(info.Holder());
	vtkExtractSelectedTree *native = (vtkExtractSelectedTree *)wrapper->native.GetPointer();
	vtkExtractSelectedTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkExtractSelectedTreeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractSelectedTreeWrap *w = new VtkExtractSelectedTreeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractSelectedTreeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedTreeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedTreeWrap>(info.Holder());
	vtkExtractSelectedTree *native = (vtkExtractSelectedTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractSelectedTree * r;
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
			Nan::New<v8::Function>(VtkExtractSelectedTreeWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractSelectedTreeWrap *w = new VtkExtractSelectedTreeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractSelectedTreeWrap::SetSelectionConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedTreeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedTreeWrap>(info.Holder());
	vtkExtractSelectedTree *native = (vtkExtractSelectedTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

