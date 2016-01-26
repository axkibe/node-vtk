/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkHoverWidgetWrap.h"
#include "vtkBalloonWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkBalloonRepresentationWrap.h"
#include "vtkPropWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkAbstractPropPickerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkBalloonWidgetWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkBalloonWidgetWrap::ptpl;

VtkBalloonWidgetWrap::VtkBalloonWidgetWrap()
{ }

VtkBalloonWidgetWrap::VtkBalloonWidgetWrap(vtkSmartPointer<vtkBalloonWidget> _native)
{ native = _native; }

VtkBalloonWidgetWrap::~VtkBalloonWidgetWrap()
{ }

void VtkBalloonWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBalloonWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BalloonWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkBalloonWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBalloonWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHoverWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHoverWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBalloonWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddBalloon", AddBalloon);
	Nan::SetPrototypeMethod(tpl, "addBalloon", AddBalloon);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetBalloonImage", GetBalloonImage);
	Nan::SetPrototypeMethod(tpl, "getBalloonImage", GetBalloonImage);

	Nan::SetPrototypeMethod(tpl, "GetBalloonRepresentation", GetBalloonRepresentation);
	Nan::SetPrototypeMethod(tpl, "getBalloonRepresentation", GetBalloonRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetBalloonString", GetBalloonString);
	Nan::SetPrototypeMethod(tpl, "getBalloonString", GetBalloonString);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentProp", GetCurrentProp);
	Nan::SetPrototypeMethod(tpl, "getCurrentProp", GetCurrentProp);

	Nan::SetPrototypeMethod(tpl, "GetPicker", GetPicker);
	Nan::SetPrototypeMethod(tpl, "getPicker", GetPicker);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveBalloon", RemoveBalloon);
	Nan::SetPrototypeMethod(tpl, "removeBalloon", RemoveBalloon);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetPicker", SetPicker);
	Nan::SetPrototypeMethod(tpl, "setPicker", SetPicker);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

	Nan::SetPrototypeMethod(tpl, "UpdateBalloonImage", UpdateBalloonImage);
	Nan::SetPrototypeMethod(tpl, "updateBalloonImage", UpdateBalloonImage);

	Nan::SetPrototypeMethod(tpl, "UpdateBalloonString", UpdateBalloonString);
	Nan::SetPrototypeMethod(tpl, "updateBalloonString", UpdateBalloonString);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkBalloonWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBalloonWidget> native = vtkSmartPointer<vtkBalloonWidget>::New();
		VtkBalloonWidgetWrap* obj = new VtkBalloonWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBalloonWidgetWrap::AddBalloon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[2]))
			{
				VtkImageDataWrap *a2 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->AddBalloon(
					(vtkProp *) a0->native.GetPointer(),
					*a1,
					(vtkImageData *) a2->native.GetPointer()
				);
				return;
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddBalloon(
				(vtkProp *) a0->native.GetPointer(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkBalloonWidgetWrap::GetBalloonImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		vtkImageData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetBalloonImage(
			(vtkProp *) a0->native.GetPointer()
		);
			VtkImageDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkImageDataWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageDataWrap *w = new VtkImageDataWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonWidgetWrap::GetBalloonRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	vtkBalloonRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBalloonRepresentation();
		VtkBalloonRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkBalloonRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBalloonRepresentationWrap *w = new VtkBalloonRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBalloonWidgetWrap::GetBalloonString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetBalloonString(
			(vtkProp *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBalloonWidgetWrap::GetCurrentProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	vtkProp * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentProp();
		VtkPropWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropWrap *w = new VtkPropWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBalloonWidgetWrap::GetPicker(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	vtkAbstractPropPicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPicker();
		VtkAbstractPropPickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAbstractPropPickerWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractPropPickerWrap *w = new VtkAbstractPropPickerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBalloonWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
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

void VtkBalloonWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	vtkBalloonWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBalloonWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkBalloonWidgetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBalloonWidgetWrap *w = new VtkBalloonWidgetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBalloonWidgetWrap::RemoveBalloon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveBalloon(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBalloonWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBalloonWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkBalloonWidgetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBalloonWidgetWrap *w = new VtkBalloonWidgetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnabled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonWidgetWrap::SetPicker(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractPropPickerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractPropPickerWrap *a0 = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPicker(
			(vtkAbstractPropPicker *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkBalloonRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkBalloonRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkBalloonRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkBalloonRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonWidgetWrap::UpdateBalloonImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkImageDataWrap *a1 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->UpdateBalloonImage(
				(vtkProp *) a0->native.GetPointer(),
				(vtkImageData *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBalloonWidgetWrap::UpdateBalloonString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBalloonWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBalloonWidgetWrap>(info.Holder());
	vtkBalloonWidget *native = (vtkBalloonWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->UpdateBalloonString(
				(vtkProp *) a0->native.GetPointer(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

