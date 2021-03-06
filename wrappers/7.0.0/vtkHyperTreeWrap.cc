/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkHyperTreeWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperTreeWrap::ptpl;

VtkHyperTreeWrap::VtkHyperTreeWrap()
{ }

VtkHyperTreeWrap::VtkHyperTreeWrap(vtkSmartPointer<vtkHyperTree> _native)
{ native = _native; }

VtkHyperTreeWrap::~VtkHyperTreeWrap()
{ }

void VtkHyperTreeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperTree").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperTree").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperTreeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperTreeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperTreeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateInstance", CreateInstance);
	Nan::SetPrototypeMethod(tpl, "createInstance", CreateInstance);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKHYPERTREEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHYPERTREEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHyperTreeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkHyperTreeWrap::CreateInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeWrap>(info.Holder());
	vtkHyperTree *native = (vtkHyperTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
			vtkHyperTree * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->CreateInstance(
				info[0]->Uint32Value(),
				info[1]->Uint32Value()
			);
			VtkHyperTreeWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkHyperTreeWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkHyperTreeWrap *w = new VtkHyperTreeWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeWrap>(info.Holder());
	vtkHyperTree *native = (vtkHyperTree *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHyperTreeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeWrap>(info.Holder());
	vtkHyperTree *native = (vtkHyperTree *)wrapper->native.GetPointer();
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

void VtkHyperTreeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeWrap>(info.Holder());
	vtkHyperTree *native = (vtkHyperTree *)wrapper->native.GetPointer();
	vtkHyperTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHyperTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperTreeWrap *w = new VtkHyperTreeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeWrap>(info.Holder());
	vtkHyperTree *native = (vtkHyperTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHyperTree * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkHyperTreeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperTreeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperTreeWrap *w = new VtkHyperTreeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

