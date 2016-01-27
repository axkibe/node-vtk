/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkBorderWidgetWrap.h"
#include "vtkScalarBarWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkScalarBarRepresentationWrap.h"
#include "vtkScalarBarActorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkScalarBarWidgetWrap::ptpl;

VtkScalarBarWidgetWrap::VtkScalarBarWidgetWrap()
{ }

VtkScalarBarWidgetWrap::VtkScalarBarWidgetWrap(vtkSmartPointer<vtkScalarBarWidget> _native)
{ native = _native; }

VtkScalarBarWidgetWrap::~VtkScalarBarWidgetWrap()
{ }

void VtkScalarBarWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkScalarBarWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ScalarBarWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkScalarBarWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkScalarBarWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkBorderWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkBorderWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkScalarBarWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetRepositionable", GetRepositionable);
	Nan::SetPrototypeMethod(tpl, "getRepositionable", GetRepositionable);

	Nan::SetPrototypeMethod(tpl, "GetScalarBarActor", GetScalarBarActor);
	Nan::SetPrototypeMethod(tpl, "getScalarBarActor", GetScalarBarActor);

	Nan::SetPrototypeMethod(tpl, "GetScalarBarRepresentation", GetScalarBarRepresentation);
	Nan::SetPrototypeMethod(tpl, "getScalarBarRepresentation", GetScalarBarRepresentation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RepositionableOff", RepositionableOff);
	Nan::SetPrototypeMethod(tpl, "repositionableOff", RepositionableOff);

	Nan::SetPrototypeMethod(tpl, "RepositionableOn", RepositionableOn);
	Nan::SetPrototypeMethod(tpl, "repositionableOn", RepositionableOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRepositionable", SetRepositionable);
	Nan::SetPrototypeMethod(tpl, "setRepositionable", SetRepositionable);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetScalarBarActor", SetScalarBarActor);
	Nan::SetPrototypeMethod(tpl, "setScalarBarActor", SetScalarBarActor);

	ptpl.Reset( tpl );
}

void VtkScalarBarWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkScalarBarWidget> native = vtkSmartPointer<vtkScalarBarWidget>::New();
		VtkScalarBarWidgetWrap* obj = new VtkScalarBarWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkScalarBarWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarWidgetWrap>(info.Holder());
	vtkScalarBarWidget *native = (vtkScalarBarWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkScalarBarWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarWidgetWrap>(info.Holder());
	vtkScalarBarWidget *native = (vtkScalarBarWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkScalarBarWidgetWrap::GetRepositionable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarWidgetWrap>(info.Holder());
	vtkScalarBarWidget *native = (vtkScalarBarWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRepositionable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScalarBarWidgetWrap::GetScalarBarActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarWidgetWrap>(info.Holder());
	vtkScalarBarWidget *native = (vtkScalarBarWidget *)wrapper->native.GetPointer();
	vtkScalarBarActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarBarActor();
		VtkScalarBarActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarBarActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarBarActorWrap *w = new VtkScalarBarActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarBarWidgetWrap::GetScalarBarRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarWidgetWrap>(info.Holder());
	vtkScalarBarWidget *native = (vtkScalarBarWidget *)wrapper->native.GetPointer();
	vtkScalarBarRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarBarRepresentation();
		VtkScalarBarRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarBarRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarBarRepresentationWrap *w = new VtkScalarBarRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarBarWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarWidgetWrap>(info.Holder());
	vtkScalarBarWidget *native = (vtkScalarBarWidget *)wrapper->native.GetPointer();
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

void VtkScalarBarWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarWidgetWrap>(info.Holder());
	vtkScalarBarWidget *native = (vtkScalarBarWidget *)wrapper->native.GetPointer();
	vtkScalarBarWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkScalarBarWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarBarWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarBarWidgetWrap *w = new VtkScalarBarWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarBarWidgetWrap::RepositionableOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarWidgetWrap>(info.Holder());
	vtkScalarBarWidget *native = (vtkScalarBarWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RepositionableOff();
}

void VtkScalarBarWidgetWrap::RepositionableOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarWidgetWrap>(info.Holder());
	vtkScalarBarWidget *native = (vtkScalarBarWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RepositionableOn();
}

void VtkScalarBarWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarWidgetWrap>(info.Holder());
	vtkScalarBarWidget *native = (vtkScalarBarWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkScalarBarWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkScalarBarWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkScalarBarWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkScalarBarWidgetWrap *w = new VtkScalarBarWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarBarWidgetWrap::SetRepositionable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarWidgetWrap>(info.Holder());
	vtkScalarBarWidget *native = (vtkScalarBarWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepositionable(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarBarWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarWidgetWrap>(info.Holder());
	vtkScalarBarWidget *native = (vtkScalarBarWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarBarRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarBarRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkScalarBarRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkScalarBarRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarBarWidgetWrap::SetScalarBarActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarBarWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkScalarBarWidgetWrap>(info.Holder());
	vtkScalarBarWidget *native = (vtkScalarBarWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarBarActorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarBarActorWrap *a0 = ObjectWrap::Unwrap<VtkScalarBarActorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarBarActor(
			(vtkScalarBarActor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

