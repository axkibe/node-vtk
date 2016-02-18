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
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractSelectedTreeWrap::ptpl;

VtkExtractSelectedTreeWrap::VtkExtractSelectedTreeWrap()
{ }

VtkExtractSelectedTreeWrap::VtkExtractSelectedTreeWrap(vtkSmartPointer<vtkExtractSelectedTree> _native)
{ native = _native; }

VtkExtractSelectedTreeWrap::~VtkExtractSelectedTreeWrap()
{ }

void VtkExtractSelectedTreeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractSelectedTree").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractSelectedTree").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractSelectedTreeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractSelectedTreeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTreeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTreeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractSelectedTreeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

#ifdef VTK_NODE_PLUS_VTKEXTRACTSELECTEDTREEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKEXTRACTSELECTEDTREEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
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
		VtkExtractSelectedTreeWrap* obj = new VtkExtractSelectedTreeWrap(native);
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

void VtkExtractSelectedTreeWrap::FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedTreeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedTreeWrap>(info.Holder());
	vtkExtractSelectedTree *native = (vtkExtractSelectedTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
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
	VtkExtractSelectedTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractSelectedTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractSelectedTreeWrap *w = new VtkExtractSelectedTreeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractSelectedTreeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedTreeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedTreeWrap>(info.Holder());
	vtkExtractSelectedTree *native = (vtkExtractSelectedTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
		VtkExtractSelectedTreeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractSelectedTreeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractSelectedTreeWrap *w = new VtkExtractSelectedTreeWrap();
		w->native = r;
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
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

