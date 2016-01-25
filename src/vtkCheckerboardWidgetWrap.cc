/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractWidgetWrap.h"
#include "vtkCheckerboardWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCheckerboardRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCheckerboardWidgetWrap::constructor;

VtkCheckerboardWidgetWrap::VtkCheckerboardWidgetWrap()
{ }

VtkCheckerboardWidgetWrap::VtkCheckerboardWidgetWrap(vtkSmartPointer<vtkCheckerboardWidget> _native)
{ native = _native; }

VtkCheckerboardWidgetWrap::~VtkCheckerboardWidgetWrap()
{ }

void VtkCheckerboardWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkCheckerboardWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkInteractorObserverWrap::InitTpl(tpl);
	VtkAbstractWidgetWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkCheckerboardWidget").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CheckerboardWidget").ToLocalChecked(),tpl->GetFunction());
}

void VtkCheckerboardWidgetWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetCheckerboardRepresentation", GetCheckerboardRepresentation);
	Nan::SetPrototypeMethod(tpl, "getCheckerboardRepresentation", GetCheckerboardRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

}

void VtkCheckerboardWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCheckerboardWidget> native = vtkSmartPointer<vtkCheckerboardWidget>::New();
		VtkCheckerboardWidgetWrap* obj = new VtkCheckerboardWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCheckerboardWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardWidgetWrap>(info.Holder());
	vtkCheckerboardWidget *native = (vtkCheckerboardWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkCheckerboardWidgetWrap::GetCheckerboardRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardWidgetWrap>(info.Holder());
	vtkCheckerboardWidget *native = (vtkCheckerboardWidget *)wrapper->native.GetPointer();
	vtkCheckerboardRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCheckerboardRepresentation();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCheckerboardRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCheckerboardRepresentationWrap *w = new VtkCheckerboardRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCheckerboardWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardWidgetWrap>(info.Holder());
	vtkCheckerboardWidget *native = (vtkCheckerboardWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCheckerboardWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardWidgetWrap>(info.Holder());
	vtkCheckerboardWidget *native = (vtkCheckerboardWidget *)wrapper->native.GetPointer();
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

void VtkCheckerboardWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardWidgetWrap>(info.Holder());
	vtkCheckerboardWidget *native = (vtkCheckerboardWidget *)wrapper->native.GetPointer();
	vtkCheckerboardWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCheckerboardWidgetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCheckerboardWidgetWrap *w = new VtkCheckerboardWidgetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCheckerboardWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardWidgetWrap>(info.Holder());
	vtkCheckerboardWidget *native = (vtkCheckerboardWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCheckerboardWidget * r;
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
			Nan::New<v8::Function>(VtkCheckerboardWidgetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCheckerboardWidgetWrap *w = new VtkCheckerboardWidgetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCheckerboardWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardWidgetWrap>(info.Holder());
	vtkCheckerboardWidget *native = (vtkCheckerboardWidget *)wrapper->native.GetPointer();
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

void VtkCheckerboardWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCheckerboardWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCheckerboardWidgetWrap>(info.Holder());
	vtkCheckerboardWidget *native = (vtkCheckerboardWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkCheckerboardRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkCheckerboardRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkCheckerboardRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

