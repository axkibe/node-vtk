/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkBorderWidgetWrap.h"
#include "vtkTextWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTextRepresentationWrap.h"
#include "vtkTextActorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTextWidgetWrap::ptpl;

VtkTextWidgetWrap::VtkTextWidgetWrap()
{ }

VtkTextWidgetWrap::VtkTextWidgetWrap(vtkSmartPointer<vtkTextWidget> _native)
{ native = _native; }

VtkTextWidgetWrap::~VtkTextWidgetWrap()
{ }

void VtkTextWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTextWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TextWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkTextWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTextWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkBorderWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkBorderWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTextWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetTextActor", GetTextActor);
	Nan::SetPrototypeMethod(tpl, "getTextActor", GetTextActor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetTextActor", SetTextActor);
	Nan::SetPrototypeMethod(tpl, "setTextActor", SetTextActor);

#ifdef VTK_NODE_PLUS_VTKTEXTWIDGETWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTEXTWIDGETWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTextWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTextWidget> native = vtkSmartPointer<vtkTextWidget>::New();
		VtkTextWidgetWrap* obj = new VtkTextWidgetWrap(native);
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

void VtkTextWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTextWidgetWrap>(info.Holder());
	vtkTextWidget *native = (vtkTextWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkTextWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTextWidgetWrap>(info.Holder());
	vtkTextWidget *native = (vtkTextWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextWidgetWrap::GetTextActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTextWidgetWrap>(info.Holder());
	vtkTextWidget *native = (vtkTextWidget *)wrapper->native.GetPointer();
	vtkTextActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextActor();
	VtkTextActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextActorWrap *w = new VtkTextActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTextWidgetWrap>(info.Holder());
	vtkTextWidget *native = (vtkTextWidget *)wrapper->native.GetPointer();
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

void VtkTextWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTextWidgetWrap>(info.Holder());
	vtkTextWidget *native = (vtkTextWidget *)wrapper->native.GetPointer();
	vtkTextWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTextWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextWidgetWrap *w = new VtkTextWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTextWidgetWrap>(info.Holder());
	vtkTextWidget *native = (vtkTextWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTextWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTextWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTextWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTextWidgetWrap *w = new VtkTextWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTextWidgetWrap>(info.Holder());
	vtkTextWidget *native = (vtkTextWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkTextRepresentationWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkTextRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextWidgetWrap::SetTextActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkTextWidgetWrap>(info.Holder());
	vtkTextWidget *native = (vtkTextWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextActorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextActorWrap *a0 = ObjectWrap::Unwrap<VtkTextActorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextActor(
			(vtkTextActor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

