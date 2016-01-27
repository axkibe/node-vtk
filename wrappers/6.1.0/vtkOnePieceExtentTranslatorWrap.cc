/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkExtentTranslatorWrap.h"
#include "vtkOnePieceExtentTranslatorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOnePieceExtentTranslatorWrap::ptpl;

VtkOnePieceExtentTranslatorWrap::VtkOnePieceExtentTranslatorWrap()
{ }

VtkOnePieceExtentTranslatorWrap::VtkOnePieceExtentTranslatorWrap(vtkSmartPointer<vtkOnePieceExtentTranslator> _native)
{ native = _native; }

VtkOnePieceExtentTranslatorWrap::~VtkOnePieceExtentTranslatorWrap()
{ }

void VtkOnePieceExtentTranslatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOnePieceExtentTranslator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OnePieceExtentTranslator").ToLocalChecked(), ConstructorGetter);
}

void VtkOnePieceExtentTranslatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOnePieceExtentTranslatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkExtentTranslatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkExtentTranslatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOnePieceExtentTranslatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkOnePieceExtentTranslatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOnePieceExtentTranslator> native = vtkSmartPointer<vtkOnePieceExtentTranslator>::New();
		VtkOnePieceExtentTranslatorWrap* obj = new VtkOnePieceExtentTranslatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOnePieceExtentTranslatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOnePieceExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkOnePieceExtentTranslatorWrap>(info.Holder());
	vtkOnePieceExtentTranslator *native = (vtkOnePieceExtentTranslator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOnePieceExtentTranslatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOnePieceExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkOnePieceExtentTranslatorWrap>(info.Holder());
	vtkOnePieceExtentTranslator *native = (vtkOnePieceExtentTranslator *)wrapper->native.GetPointer();
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

void VtkOnePieceExtentTranslatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOnePieceExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkOnePieceExtentTranslatorWrap>(info.Holder());
	vtkOnePieceExtentTranslator *native = (vtkOnePieceExtentTranslator *)wrapper->native.GetPointer();
	vtkOnePieceExtentTranslator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOnePieceExtentTranslatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOnePieceExtentTranslatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOnePieceExtentTranslatorWrap *w = new VtkOnePieceExtentTranslatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOnePieceExtentTranslatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOnePieceExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkOnePieceExtentTranslatorWrap>(info.Holder());
	vtkOnePieceExtentTranslator *native = (vtkOnePieceExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOnePieceExtentTranslator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOnePieceExtentTranslatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOnePieceExtentTranslatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOnePieceExtentTranslatorWrap *w = new VtkOnePieceExtentTranslatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

