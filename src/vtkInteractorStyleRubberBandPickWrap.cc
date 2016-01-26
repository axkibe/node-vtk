/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleTrackballCameraWrap.h"
#include "vtkInteractorStyleRubberBandPickWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInteractorStyleRubberBandPickWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleRubberBandPickWrap::ptpl;

VtkInteractorStyleRubberBandPickWrap::VtkInteractorStyleRubberBandPickWrap()
{ }

VtkInteractorStyleRubberBandPickWrap::VtkInteractorStyleRubberBandPickWrap(vtkSmartPointer<vtkInteractorStyleRubberBandPick> _native)
{ native = _native; }

VtkInteractorStyleRubberBandPickWrap::~VtkInteractorStyleRubberBandPickWrap()
{ }

void VtkInteractorStyleRubberBandPickWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleRubberBandPick").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleRubberBandPick").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleRubberBandPickWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleRubberBandPickWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleTrackballCameraWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleTrackballCameraWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleRubberBandPickWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnChar", OnChar);
	Nan::SetPrototypeMethod(tpl, "onChar", OnChar);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonDown", OnLeftButtonDown);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonDown", OnLeftButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonUp", OnLeftButtonUp);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonUp", OnLeftButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnMouseMove", OnMouseMove);
	Nan::SetPrototypeMethod(tpl, "onMouseMove", OnMouseMove);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "StartSelect", StartSelect);
	Nan::SetPrototypeMethod(tpl, "startSelect", StartSelect);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkInteractorStyleRubberBandPickWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleRubberBandPick> native = vtkSmartPointer<vtkInteractorStyleRubberBandPick>::New();
		VtkInteractorStyleRubberBandPickWrap* obj = new VtkInteractorStyleRubberBandPickWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInteractorStyleRubberBandPickWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBandPickWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBandPickWrap>(info.Holder());
	vtkInteractorStyleRubberBandPick *native = (vtkInteractorStyleRubberBandPick *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleRubberBandPickWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBandPickWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBandPickWrap>(info.Holder());
	vtkInteractorStyleRubberBandPick *native = (vtkInteractorStyleRubberBandPick *)wrapper->native.GetPointer();
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

void VtkInteractorStyleRubberBandPickWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBandPickWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBandPickWrap>(info.Holder());
	vtkInteractorStyleRubberBandPick *native = (vtkInteractorStyleRubberBandPick *)wrapper->native.GetPointer();
	vtkInteractorStyleRubberBandPick * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInteractorStyleRubberBandPickWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInteractorStyleRubberBandPickWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleRubberBandPickWrap *w = new VtkInteractorStyleRubberBandPickWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleRubberBandPickWrap::OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBandPickWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBandPickWrap>(info.Holder());
	vtkInteractorStyleRubberBandPick *native = (vtkInteractorStyleRubberBandPick *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnChar();
}

void VtkInteractorStyleRubberBandPickWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBandPickWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBandPickWrap>(info.Holder());
	vtkInteractorStyleRubberBandPick *native = (vtkInteractorStyleRubberBandPick *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkInteractorStyleRubberBandPickWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBandPickWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBandPickWrap>(info.Holder());
	vtkInteractorStyleRubberBandPick *native = (vtkInteractorStyleRubberBandPick *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleRubberBandPickWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBandPickWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBandPickWrap>(info.Holder());
	vtkInteractorStyleRubberBandPick *native = (vtkInteractorStyleRubberBandPick *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleRubberBandPickWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBandPickWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBandPickWrap>(info.Holder());
	vtkInteractorStyleRubberBandPick *native = (vtkInteractorStyleRubberBandPick *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleRubberBandPick * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInteractorStyleRubberBandPickWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkInteractorStyleRubberBandPickWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleRubberBandPickWrap *w = new VtkInteractorStyleRubberBandPickWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleRubberBandPickWrap::StartSelect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBandPickWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBandPickWrap>(info.Holder());
	vtkInteractorStyleRubberBandPick *native = (vtkInteractorStyleRubberBandPick *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartSelect();
}

