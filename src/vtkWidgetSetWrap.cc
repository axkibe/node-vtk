/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkWidgetSetWrap.h"
#include "vtkAbstractWidgetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkWidgetSetWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkWidgetSetWrap::ptpl;

VtkWidgetSetWrap::VtkWidgetSetWrap()
{ }

VtkWidgetSetWrap::VtkWidgetSetWrap(vtkSmartPointer<vtkWidgetSet> _native)
{ native = _native; }

VtkWidgetSetWrap::~VtkWidgetSetWrap()
{ }

void VtkWidgetSetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkWidgetSet").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("WidgetSet").ToLocalChecked(), ConstructorGetter);
}

void VtkWidgetSetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkWidgetSetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkWidgetSetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddWidget", AddWidget);
	Nan::SetPrototypeMethod(tpl, "addWidget", AddWidget);

	Nan::SetPrototypeMethod(tpl, "EnabledOff", EnabledOff);
	Nan::SetPrototypeMethod(tpl, "enabledOff", EnabledOff);

	Nan::SetPrototypeMethod(tpl, "EnabledOn", EnabledOn);
	Nan::SetPrototypeMethod(tpl, "enabledOn", EnabledOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveWidget", RemoveWidget);
	Nan::SetPrototypeMethod(tpl, "removeWidget", RemoveWidget);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkWidgetSetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkWidgetSet> native = vtkSmartPointer<vtkWidgetSet>::New();
		VtkWidgetSetWrap* obj = new VtkWidgetSetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkWidgetSetWrap::AddWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetSetWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetSetWrap>(info.Holder());
	vtkWidgetSet *native = (vtkWidgetSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractWidgetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractWidgetWrap *a0 = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddWidget(
			(vtkAbstractWidget *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetSetWrap::EnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetSetWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetSetWrap>(info.Holder());
	vtkWidgetSet *native = (vtkWidgetSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnabledOff();
}

void VtkWidgetSetWrap::EnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetSetWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetSetWrap>(info.Holder());
	vtkWidgetSet *native = (vtkWidgetSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnabledOn();
}

void VtkWidgetSetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetSetWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetSetWrap>(info.Holder());
	vtkWidgetSet *native = (vtkWidgetSet *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWidgetSetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetSetWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetSetWrap>(info.Holder());
	vtkWidgetSet *native = (vtkWidgetSet *)wrapper->native.GetPointer();
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

void VtkWidgetSetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetSetWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetSetWrap>(info.Holder());
	vtkWidgetSet *native = (vtkWidgetSet *)wrapper->native.GetPointer();
	vtkWidgetSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkWidgetSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkWidgetSetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWidgetSetWrap *w = new VtkWidgetSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWidgetSetWrap::RemoveWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetSetWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetSetWrap>(info.Holder());
	vtkWidgetSet *native = (vtkWidgetSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractWidgetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractWidgetWrap *a0 = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveWidget(
			(vtkAbstractWidget *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetSetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetSetWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetSetWrap>(info.Holder());
	vtkWidgetSet *native = (vtkWidgetSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkWidgetSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkWidgetSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkWidgetSetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkWidgetSetWrap *w = new VtkWidgetSetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWidgetSetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWidgetSetWrap *wrapper = ObjectWrap::Unwrap<VtkWidgetSetWrap>(info.Holder());
	vtkWidgetSet *native = (vtkWidgetSet *)wrapper->native.GetPointer();
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

