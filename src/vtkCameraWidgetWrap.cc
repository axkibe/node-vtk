/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkBorderWidgetWrap.h"
#include "vtkCameraWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCameraRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCameraWidgetWrap::constructor;

VtkCameraWidgetWrap::VtkCameraWidgetWrap()
{ }

VtkCameraWidgetWrap::VtkCameraWidgetWrap(vtkSmartPointer<vtkCameraWidget> _native)
{ native = _native; }

VtkCameraWidgetWrap::~VtkCameraWidgetWrap()
{ }

void VtkCameraWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkCameraWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkInteractorObserverWrap::InitTpl(tpl);
	VtkAbstractWidgetWrap::InitTpl(tpl);
	VtkBorderWidgetWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkCameraWidget").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CameraWidget").ToLocalChecked(),tpl->GetFunction());
}

void VtkCameraWidgetWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

}

void VtkCameraWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCameraWidget> native = vtkSmartPointer<vtkCameraWidget>::New();
		VtkCameraWidgetWrap* obj = new VtkCameraWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCameraWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCameraWidgetWrap>(info.Holder());
	vtkCameraWidget *native = (vtkCameraWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkCameraWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCameraWidgetWrap>(info.Holder());
	vtkCameraWidget *native = (vtkCameraWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCameraWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCameraWidgetWrap>(info.Holder());
	vtkCameraWidget *native = (vtkCameraWidget *)wrapper->native.GetPointer();
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

void VtkCameraWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCameraWidgetWrap>(info.Holder());
	vtkCameraWidget *native = (vtkCameraWidget *)wrapper->native.GetPointer();
	vtkCameraWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCameraWidgetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCameraWidgetWrap *w = new VtkCameraWidgetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCameraWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCameraWidgetWrap>(info.Holder());
	vtkCameraWidget *native = (vtkCameraWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCameraWidget * r;
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
			Nan::New<v8::Function>(VtkCameraWidgetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCameraWidgetWrap *w = new VtkCameraWidgetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCameraWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCameraWidgetWrap>(info.Holder());
	vtkCameraWidget *native = (vtkCameraWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkCameraRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkCameraRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

