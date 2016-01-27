/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPainterWrap.h"
#include "vtkCompositePainterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkInformationObjectBaseKeyWrap.h"
#include "vtkCompositeDataDisplayAttributesWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompositePainterWrap::ptpl;

VtkCompositePainterWrap::VtkCompositePainterWrap()
{ }

VtkCompositePainterWrap::VtkCompositePainterWrap(vtkSmartPointer<vtkCompositePainter> _native)
{ native = _native; }

VtkCompositePainterWrap::~VtkCompositePainterWrap()
{ }

void VtkCompositePainterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompositePainter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompositePainter").ToLocalChecked(), ConstructorGetter);
}

void VtkCompositePainterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompositePainterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPainterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPainterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompositePainterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DISPLAY_ATTRIBUTES", DISPLAY_ATTRIBUTES);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCompositeDataDisplayAttributes", GetCompositeDataDisplayAttributes);
	Nan::SetPrototypeMethod(tpl, "getCompositeDataDisplayAttributes", GetCompositeDataDisplayAttributes);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCompositeDataDisplayAttributes", SetCompositeDataDisplayAttributes);
	Nan::SetPrototypeMethod(tpl, "setCompositeDataDisplayAttributes", SetCompositeDataDisplayAttributes);

	ptpl.Reset( tpl );
}

void VtkCompositePainterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCompositePainter> native = vtkSmartPointer<vtkCompositePainter>::New();
		VtkCompositePainterWrap* obj = new VtkCompositePainterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCompositePainterWrap::DISPLAY_ATTRIBUTES(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePainterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePainterWrap>(info.Holder());
	vtkCompositePainter *native = (vtkCompositePainter *)wrapper->native.GetPointer();
	vtkInformationObjectBaseKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DISPLAY_ATTRIBUTES();
		VtkInformationObjectBaseKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationObjectBaseKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationObjectBaseKeyWrap *w = new VtkInformationObjectBaseKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositePainterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePainterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePainterWrap>(info.Holder());
	vtkCompositePainter *native = (vtkCompositePainter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompositePainterWrap::GetCompositeDataDisplayAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePainterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePainterWrap>(info.Holder());
	vtkCompositePainter *native = (vtkCompositePainter *)wrapper->native.GetPointer();
	vtkCompositeDataDisplayAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompositeDataDisplayAttributes();
		VtkCompositeDataDisplayAttributesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeDataDisplayAttributesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataDisplayAttributesWrap *w = new VtkCompositeDataDisplayAttributesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositePainterWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePainterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePainterWrap>(info.Holder());
	vtkCompositePainter *native = (vtkCompositePainter *)wrapper->native.GetPointer();
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
		VtkDataObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositePainterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePainterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePainterWrap>(info.Holder());
	vtkCompositePainter *native = (vtkCompositePainter *)wrapper->native.GetPointer();
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

void VtkCompositePainterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePainterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePainterWrap>(info.Holder());
	vtkCompositePainter *native = (vtkCompositePainter *)wrapper->native.GetPointer();
	vtkCompositePainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCompositePainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositePainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositePainterWrap *w = new VtkCompositePainterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositePainterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePainterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePainterWrap>(info.Holder());
	vtkCompositePainter *native = (vtkCompositePainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompositePainter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCompositePainterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompositePainterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositePainterWrap *w = new VtkCompositePainterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositePainterWrap::SetCompositeDataDisplayAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePainterWrap *wrapper = ObjectWrap::Unwrap<VtkCompositePainterWrap>(info.Holder());
	vtkCompositePainter *native = (vtkCompositePainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompositeDataDisplayAttributesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompositeDataDisplayAttributesWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompositeDataDisplayAttributes(
			(vtkCompositeDataDisplayAttributes *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
