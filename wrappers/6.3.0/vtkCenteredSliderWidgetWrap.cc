/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractWidgetWrap.h"
#include "vtkCenteredSliderWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSliderRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCenteredSliderWidgetWrap::ptpl;

VtkCenteredSliderWidgetWrap::VtkCenteredSliderWidgetWrap()
{ }

VtkCenteredSliderWidgetWrap::VtkCenteredSliderWidgetWrap(vtkSmartPointer<vtkCenteredSliderWidget> _native)
{ native = _native; }

VtkCenteredSliderWidgetWrap::~VtkCenteredSliderWidgetWrap()
{ }

void VtkCenteredSliderWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCenteredSliderWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CenteredSliderWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkCenteredSliderWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCenteredSliderWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCenteredSliderWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSliderRepresentation", GetSliderRepresentation);
	Nan::SetPrototypeMethod(tpl, "getSliderRepresentation", GetSliderRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

	ptpl.Reset( tpl );
}

void VtkCenteredSliderWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCenteredSliderWidget> native = vtkSmartPointer<vtkCenteredSliderWidget>::New();
		VtkCenteredSliderWidgetWrap* obj = new VtkCenteredSliderWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCenteredSliderWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderWidgetWrap>(info.Holder());
	vtkCenteredSliderWidget *native = (vtkCenteredSliderWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkCenteredSliderWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderWidgetWrap>(info.Holder());
	vtkCenteredSliderWidget *native = (vtkCenteredSliderWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCenteredSliderWidgetWrap::GetSliderRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderWidgetWrap>(info.Holder());
	vtkCenteredSliderWidget *native = (vtkCenteredSliderWidget *)wrapper->native.GetPointer();
	vtkSliderRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliderRepresentation();
		VtkSliderRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSliderRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSliderRepresentationWrap *w = new VtkSliderRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCenteredSliderWidgetWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderWidgetWrap>(info.Holder());
	vtkCenteredSliderWidget *native = (vtkCenteredSliderWidget *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCenteredSliderWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderWidgetWrap>(info.Holder());
	vtkCenteredSliderWidget *native = (vtkCenteredSliderWidget *)wrapper->native.GetPointer();
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

void VtkCenteredSliderWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderWidgetWrap>(info.Holder());
	vtkCenteredSliderWidget *native = (vtkCenteredSliderWidget *)wrapper->native.GetPointer();
	vtkCenteredSliderWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCenteredSliderWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCenteredSliderWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCenteredSliderWidgetWrap *w = new VtkCenteredSliderWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCenteredSliderWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderWidgetWrap>(info.Holder());
	vtkCenteredSliderWidget *native = (vtkCenteredSliderWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCenteredSliderWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCenteredSliderWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCenteredSliderWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCenteredSliderWidgetWrap *w = new VtkCenteredSliderWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCenteredSliderWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCenteredSliderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCenteredSliderWidgetWrap>(info.Holder());
	vtkCenteredSliderWidget *native = (vtkCenteredSliderWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSliderRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSliderRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkSliderRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkSliderRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

