/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractWidgetWrap.h"
#include "vtkBorderWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkBorderRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBorderWidgetWrap::ptpl;

VtkBorderWidgetWrap::VtkBorderWidgetWrap()
{ }

VtkBorderWidgetWrap::VtkBorderWidgetWrap(vtkSmartPointer<vtkBorderWidget> _native)
{ native = _native; }

VtkBorderWidgetWrap::~VtkBorderWidgetWrap()
{ }

void VtkBorderWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBorderWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BorderWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkBorderWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBorderWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBorderWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetBorderRepresentation", GetBorderRepresentation);
	Nan::SetPrototypeMethod(tpl, "getBorderRepresentation", GetBorderRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetResizable", GetResizable);
	Nan::SetPrototypeMethod(tpl, "getResizable", GetResizable);

	Nan::SetPrototypeMethod(tpl, "GetSelectable", GetSelectable);
	Nan::SetPrototypeMethod(tpl, "getSelectable", GetSelectable);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ResizableOff", ResizableOff);
	Nan::SetPrototypeMethod(tpl, "resizableOff", ResizableOff);

	Nan::SetPrototypeMethod(tpl, "ResizableOn", ResizableOn);
	Nan::SetPrototypeMethod(tpl, "resizableOn", ResizableOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SelectableOff", SelectableOff);
	Nan::SetPrototypeMethod(tpl, "selectableOff", SelectableOff);

	Nan::SetPrototypeMethod(tpl, "SelectableOn", SelectableOn);
	Nan::SetPrototypeMethod(tpl, "selectableOn", SelectableOn);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetResizable", SetResizable);
	Nan::SetPrototypeMethod(tpl, "setResizable", SetResizable);

	Nan::SetPrototypeMethod(tpl, "SetSelectable", SetSelectable);
	Nan::SetPrototypeMethod(tpl, "setSelectable", SetSelectable);

	ptpl.Reset( tpl );
}

void VtkBorderWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBorderWidget> native = vtkSmartPointer<vtkBorderWidget>::New();
		VtkBorderWidgetWrap* obj = new VtkBorderWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBorderWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkBorderWidgetWrap::GetBorderRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	vtkBorderRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBorderRepresentation();
		VtkBorderRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBorderRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBorderRepresentationWrap *w = new VtkBorderRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBorderWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBorderWidgetWrap::GetResizable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResizable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderWidgetWrap::GetSelectable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBorderWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
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

void VtkBorderWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	vtkBorderWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBorderWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBorderWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBorderWidgetWrap *w = new VtkBorderWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBorderWidgetWrap::ResizableOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResizableOff();
}

void VtkBorderWidgetWrap::ResizableOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResizableOn();
}

void VtkBorderWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBorderWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBorderWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBorderWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBorderWidgetWrap *w = new VtkBorderWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBorderWidgetWrap::SelectableOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SelectableOff();
}

void VtkBorderWidgetWrap::SelectableOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SelectableOn();
}

void VtkBorderWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkBorderRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkBorderRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkBorderRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkBorderRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBorderWidgetWrap::SetResizable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResizable(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBorderWidgetWrap::SetSelectable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBorderWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBorderWidgetWrap>(info.Holder());
	vtkBorderWidget *native = (vtkBorderWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectable(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

