/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkInteractorObserverWrap.h"
#include "vtkAbstractWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkWidgetEventTranslatorWrap.h"
#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractWidgetWrap::ptpl;

VtkAbstractWidgetWrap::VtkAbstractWidgetWrap()
{ }

VtkAbstractWidgetWrap::VtkAbstractWidgetWrap(vtkSmartPointer<vtkAbstractWidget> _native)
{ native = _native; }

VtkAbstractWidgetWrap::~VtkAbstractWidgetWrap()
{ }

void VtkAbstractWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorObserverWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorObserverWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEventTranslator", GetEventTranslator);
	Nan::SetPrototypeMethod(tpl, "getEventTranslator", GetEventTranslator);

	Nan::SetPrototypeMethod(tpl, "GetManagesCursor", GetManagesCursor);
	Nan::SetPrototypeMethod(tpl, "getManagesCursor", GetManagesCursor);

	Nan::SetPrototypeMethod(tpl, "GetParent", GetParent);
	Nan::SetPrototypeMethod(tpl, "getParent", GetParent);

	Nan::SetPrototypeMethod(tpl, "GetProcessEvents", GetProcessEvents);
	Nan::SetPrototypeMethod(tpl, "getProcessEvents", GetProcessEvents);

	Nan::SetPrototypeMethod(tpl, "GetProcessEventsMaxValue", GetProcessEventsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getProcessEventsMaxValue", GetProcessEventsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetProcessEventsMinValue", GetProcessEventsMinValue);
	Nan::SetPrototypeMethod(tpl, "getProcessEventsMinValue", GetProcessEventsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRepresentation", GetRepresentation);
	Nan::SetPrototypeMethod(tpl, "getRepresentation", GetRepresentation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "ManagesCursorOff", ManagesCursorOff);
	Nan::SetPrototypeMethod(tpl, "managesCursorOff", ManagesCursorOff);

	Nan::SetPrototypeMethod(tpl, "ManagesCursorOn", ManagesCursorOn);
	Nan::SetPrototypeMethod(tpl, "managesCursorOn", ManagesCursorOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ProcessEventsOff", ProcessEventsOff);
	Nan::SetPrototypeMethod(tpl, "processEventsOff", ProcessEventsOff);

	Nan::SetPrototypeMethod(tpl, "ProcessEventsOn", ProcessEventsOn);
	Nan::SetPrototypeMethod(tpl, "processEventsOn", ProcessEventsOn);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetManagesCursor", SetManagesCursor);
	Nan::SetPrototypeMethod(tpl, "setManagesCursor", SetManagesCursor);

	Nan::SetPrototypeMethod(tpl, "SetParent", SetParent);
	Nan::SetPrototypeMethod(tpl, "setParent", SetParent);

	Nan::SetPrototypeMethod(tpl, "SetPriority", SetPriority);
	Nan::SetPrototypeMethod(tpl, "setPriority", SetPriority);

	Nan::SetPrototypeMethod(tpl, "SetProcessEvents", SetProcessEvents);
	Nan::SetPrototypeMethod(tpl, "setProcessEvents", SetProcessEvents);

#ifdef VTK_NODE_PLUS_VTKABSTRACTWIDGETWRAP_INITPTPL
	VTK_NODE_PLUS_VTKABSTRACTWIDGETWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAbstractWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkAbstractWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractWidgetWrap::GetEventTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
	vtkWidgetEventTranslator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEventTranslator();
	VtkWidgetEventTranslatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkWidgetEventTranslatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWidgetEventTranslatorWrap *w = new VtkWidgetEventTranslatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractWidgetWrap::GetManagesCursor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetManagesCursor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractWidgetWrap::GetParent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
	vtkAbstractWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParent();
	VtkAbstractWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractWidgetWrap *w = new VtkAbstractWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractWidgetWrap::GetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessEvents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractWidgetWrap::GetProcessEventsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessEventsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractWidgetWrap::GetProcessEventsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessEventsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractWidgetWrap::GetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
	vtkWidgetRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRepresentation();
	VtkWidgetRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWidgetRepresentationWrap *w = new VtkWidgetRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
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

void VtkAbstractWidgetWrap::ManagesCursorOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ManagesCursorOff();
}

void VtkAbstractWidgetWrap::ManagesCursorOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ManagesCursorOn();
}

void VtkAbstractWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
	vtkAbstractWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAbstractWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractWidgetWrap *w = new VtkAbstractWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractWidgetWrap::ProcessEventsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProcessEventsOff();
}

void VtkAbstractWidgetWrap::ProcessEventsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProcessEventsOn();
}

void VtkAbstractWidgetWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Render();
}

void VtkAbstractWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAbstractWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkAbstractWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAbstractWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractWidgetWrap *w = new VtkAbstractWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
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

void VtkAbstractWidgetWrap::SetManagesCursor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetManagesCursor(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractWidgetWrap::SetParent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractWidgetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractWidgetWrap *a0 = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParent(
			(vtkAbstractWidget *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractWidgetWrap::SetPriority(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPriority(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractWidgetWrap::SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractWidgetWrap>(info.Holder());
	vtkAbstractWidget *native = (vtkAbstractWidget *)wrapper->native.GetPointer();
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

