/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleWrap.h"
#include "vtkInteractorStyleDrawPolygonWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInteractorStyleDrawPolygonWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleDrawPolygonWrap::ptpl;

VtkInteractorStyleDrawPolygonWrap::VtkInteractorStyleDrawPolygonWrap()
{ }

VtkInteractorStyleDrawPolygonWrap::VtkInteractorStyleDrawPolygonWrap(vtkSmartPointer<vtkInteractorStyleDrawPolygon> _native)
{ native = _native; }

VtkInteractorStyleDrawPolygonWrap::~VtkInteractorStyleDrawPolygonWrap()
{ }

void VtkInteractorStyleDrawPolygonWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkInteractorStyleDrawPolygonWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkInteractorStyleDrawPolygon").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("InteractorStyleDrawPolygon").ToLocalChecked(),tpl->GetFunction());
}

void VtkInteractorStyleDrawPolygonWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "DrawPolygonPixelsOff", DrawPolygonPixelsOff);
	Nan::SetPrototypeMethod(tpl, "drawPolygonPixelsOff", DrawPolygonPixelsOff);

	Nan::SetPrototypeMethod(tpl, "DrawPolygonPixelsOn", DrawPolygonPixelsOn);
	Nan::SetPrototypeMethod(tpl, "drawPolygonPixelsOn", DrawPolygonPixelsOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonDown", OnLeftButtonDown);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonDown", OnLeftButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonUp", OnLeftButtonUp);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonUp", OnLeftButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnMouseMove", OnMouseMove);
	Nan::SetPrototypeMethod(tpl, "onMouseMove", OnMouseMove);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkInteractorStyleDrawPolygonWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleDrawPolygon> native = vtkSmartPointer<vtkInteractorStyleDrawPolygon>::New();
		VtkInteractorStyleDrawPolygonWrap* obj = new VtkInteractorStyleDrawPolygonWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInteractorStyleDrawPolygonWrap::DrawPolygonPixelsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleDrawPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleDrawPolygonWrap>(info.Holder());
	vtkInteractorStyleDrawPolygon *native = (vtkInteractorStyleDrawPolygon *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DrawPolygonPixelsOff();
}

void VtkInteractorStyleDrawPolygonWrap::DrawPolygonPixelsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleDrawPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleDrawPolygonWrap>(info.Holder());
	vtkInteractorStyleDrawPolygon *native = (vtkInteractorStyleDrawPolygon *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DrawPolygonPixelsOn();
}

void VtkInteractorStyleDrawPolygonWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleDrawPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleDrawPolygonWrap>(info.Holder());
	vtkInteractorStyleDrawPolygon *native = (vtkInteractorStyleDrawPolygon *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleDrawPolygonWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleDrawPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleDrawPolygonWrap>(info.Holder());
	vtkInteractorStyleDrawPolygon *native = (vtkInteractorStyleDrawPolygon *)wrapper->native.GetPointer();
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

void VtkInteractorStyleDrawPolygonWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleDrawPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleDrawPolygonWrap>(info.Holder());
	vtkInteractorStyleDrawPolygon *native = (vtkInteractorStyleDrawPolygon *)wrapper->native.GetPointer();
	vtkInteractorStyleDrawPolygon * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInteractorStyleDrawPolygonWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleDrawPolygonWrap *w = new VtkInteractorStyleDrawPolygonWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleDrawPolygonWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleDrawPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleDrawPolygonWrap>(info.Holder());
	vtkInteractorStyleDrawPolygon *native = (vtkInteractorStyleDrawPolygon *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkInteractorStyleDrawPolygonWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleDrawPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleDrawPolygonWrap>(info.Holder());
	vtkInteractorStyleDrawPolygon *native = (vtkInteractorStyleDrawPolygon *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleDrawPolygonWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleDrawPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleDrawPolygonWrap>(info.Holder());
	vtkInteractorStyleDrawPolygon *native = (vtkInteractorStyleDrawPolygon *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleDrawPolygonWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleDrawPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleDrawPolygonWrap>(info.Holder());
	vtkInteractorStyleDrawPolygon *native = (vtkInteractorStyleDrawPolygon *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleDrawPolygon * r;
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
			Nan::New<v8::Function>(VtkInteractorStyleDrawPolygonWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleDrawPolygonWrap *w = new VtkInteractorStyleDrawPolygonWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

