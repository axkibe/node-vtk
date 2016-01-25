/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractWidgetWrap.h"
#include "vtkLineWidget2Wrap.h"
#include "vtkObjectWrap.h"
#include "vtkLineRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkLineWidget2Wrap::constructor;

VtkLineWidget2Wrap::VtkLineWidget2Wrap()
{ }

VtkLineWidget2Wrap::VtkLineWidget2Wrap(vtkSmartPointer<vtkLineWidget2> _native)
{ native = _native; }

VtkLineWidget2Wrap::~VtkLineWidget2Wrap()
{ }

void VtkLineWidget2Wrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkLineWidget2Wrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkInteractorObserverWrap::InitTpl(tpl);
	VtkAbstractWidgetWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkLineWidget2").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("LineWidget2").ToLocalChecked(),tpl->GetFunction());
}

void VtkLineWidget2Wrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLineRepresentation", GetLineRepresentation);
	Nan::SetPrototypeMethod(tpl, "getLineRepresentation", GetLineRepresentation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetProcessEvents", SetProcessEvents);
	Nan::SetPrototypeMethod(tpl, "setProcessEvents", SetProcessEvents);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

}

void VtkLineWidget2Wrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLineWidget2> native = vtkSmartPointer<vtkLineWidget2>::New();
		VtkLineWidget2Wrap* obj = new VtkLineWidget2Wrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLineWidget2Wrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkLineWidget2Wrap>(info.Holder());
	vtkLineWidget2 *native = (vtkLineWidget2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkLineWidget2Wrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkLineWidget2Wrap>(info.Holder());
	vtkLineWidget2 *native = (vtkLineWidget2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLineWidget2Wrap::GetLineRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkLineWidget2Wrap>(info.Holder());
	vtkLineWidget2 *native = (vtkLineWidget2 *)wrapper->native.GetPointer();
	vtkLineRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineRepresentation();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLineRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLineRepresentationWrap *w = new VtkLineRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLineWidget2Wrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkLineWidget2Wrap>(info.Holder());
	vtkLineWidget2 *native = (vtkLineWidget2 *)wrapper->native.GetPointer();
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

void VtkLineWidget2Wrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkLineWidget2Wrap>(info.Holder());
	vtkLineWidget2 *native = (vtkLineWidget2 *)wrapper->native.GetPointer();
	vtkLineWidget2 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLineWidget2Wrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLineWidget2Wrap *w = new VtkLineWidget2Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLineWidget2Wrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkLineWidget2Wrap>(info.Holder());
	vtkLineWidget2 *native = (vtkLineWidget2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLineWidget2 * r;
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
			Nan::New<v8::Function>(VtkLineWidget2Wrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLineWidget2Wrap *w = new VtkLineWidget2Wrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLineWidget2Wrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkLineWidget2Wrap>(info.Holder());
	vtkLineWidget2 *native = (vtkLineWidget2 *)wrapper->native.GetPointer();
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

void VtkLineWidget2Wrap::SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkLineWidget2Wrap>(info.Holder());
	vtkLineWidget2 *native = (vtkLineWidget2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProcessEvents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLineWidget2Wrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidget2Wrap *wrapper = ObjectWrap::Unwrap<VtkLineWidget2Wrap>(info.Holder());
	vtkLineWidget2 *native = (vtkLineWidget2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkLineRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkLineRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkLineRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

