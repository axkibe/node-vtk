/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAbstractWidgetWrap.h"
#include "vtkParallelopipedWidgetWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkParallelopipedRepresentationWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkParallelopipedWidgetWrap::ptpl;

VtkParallelopipedWidgetWrap::VtkParallelopipedWidgetWrap()
{ }

VtkParallelopipedWidgetWrap::VtkParallelopipedWidgetWrap(vtkSmartPointer<vtkParallelopipedWidget> _native)
{ native = _native; }

VtkParallelopipedWidgetWrap::~VtkParallelopipedWidgetWrap()
{ }

void VtkParallelopipedWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkParallelopipedWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ParallelopipedWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkParallelopipedWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkParallelopipedWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkParallelopipedWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "EnableChairCreationOff", EnableChairCreationOff);
	Nan::SetPrototypeMethod(tpl, "enableChairCreationOff", EnableChairCreationOff);

	Nan::SetPrototypeMethod(tpl, "EnableChairCreationOn", EnableChairCreationOn);
	Nan::SetPrototypeMethod(tpl, "enableChairCreationOn", EnableChairCreationOn);

	Nan::SetPrototypeMethod(tpl, "GetEnableChairCreation", GetEnableChairCreation);
	Nan::SetPrototypeMethod(tpl, "getEnableChairCreation", GetEnableChairCreation);

	Nan::SetPrototypeMethod(tpl, "GetParallelopipedRepresentation", GetParallelopipedRepresentation);
	Nan::SetPrototypeMethod(tpl, "getParallelopipedRepresentation", GetParallelopipedRepresentation);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnableChairCreation", SetEnableChairCreation);
	Nan::SetPrototypeMethod(tpl, "setEnableChairCreation", SetEnableChairCreation);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetProcessEvents", SetProcessEvents);
	Nan::SetPrototypeMethod(tpl, "setProcessEvents", SetProcessEvents);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

#ifdef VTK_NODE_PLUS_VTKPARALLELOPIPEDWIDGETWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPARALLELOPIPEDWIDGETWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkParallelopipedWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkParallelopipedWidget> native = vtkSmartPointer<vtkParallelopipedWidget>::New();
		VtkParallelopipedWidgetWrap* obj = new VtkParallelopipedWidgetWrap(native);
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

void VtkParallelopipedWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelopipedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkParallelopipedWidgetWrap>(info.Holder());
	vtkParallelopipedWidget *native = (vtkParallelopipedWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkParallelopipedWidgetWrap::EnableChairCreationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelopipedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkParallelopipedWidgetWrap>(info.Holder());
	vtkParallelopipedWidget *native = (vtkParallelopipedWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableChairCreationOff();
}

void VtkParallelopipedWidgetWrap::EnableChairCreationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelopipedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkParallelopipedWidgetWrap>(info.Holder());
	vtkParallelopipedWidget *native = (vtkParallelopipedWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableChairCreationOn();
}

void VtkParallelopipedWidgetWrap::GetEnableChairCreation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelopipedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkParallelopipedWidgetWrap>(info.Holder());
	vtkParallelopipedWidget *native = (vtkParallelopipedWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnableChairCreation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParallelopipedWidgetWrap::GetParallelopipedRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelopipedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkParallelopipedWidgetWrap>(info.Holder());
	vtkParallelopipedWidget *native = (vtkParallelopipedWidget *)wrapper->native.GetPointer();
	vtkParallelopipedRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParallelopipedRepresentation();
	VtkParallelopipedRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParallelopipedRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParallelopipedRepresentationWrap *w = new VtkParallelopipedRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParallelopipedWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelopipedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkParallelopipedWidgetWrap>(info.Holder());
	vtkParallelopipedWidget *native = (vtkParallelopipedWidget *)wrapper->native.GetPointer();
	vtkParallelopipedWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkParallelopipedWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParallelopipedWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParallelopipedWidgetWrap *w = new VtkParallelopipedWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParallelopipedWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelopipedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkParallelopipedWidgetWrap>(info.Holder());
	vtkParallelopipedWidget *native = (vtkParallelopipedWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkParallelopipedWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkParallelopipedWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkParallelopipedWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParallelopipedWidgetWrap *w = new VtkParallelopipedWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelopipedWidgetWrap::SetEnableChairCreation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelopipedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkParallelopipedWidgetWrap>(info.Holder());
	vtkParallelopipedWidget *native = (vtkParallelopipedWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnableChairCreation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParallelopipedWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelopipedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkParallelopipedWidgetWrap>(info.Holder());
	vtkParallelopipedWidget *native = (vtkParallelopipedWidget *)wrapper->native.GetPointer();
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

void VtkParallelopipedWidgetWrap::SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelopipedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkParallelopipedWidgetWrap>(info.Holder());
	vtkParallelopipedWidget *native = (vtkParallelopipedWidget *)wrapper->native.GetPointer();
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

void VtkParallelopipedWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParallelopipedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkParallelopipedWidgetWrap>(info.Holder());
	vtkParallelopipedWidget *native = (vtkParallelopipedWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkParallelopipedRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkParallelopipedRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkParallelopipedRepresentationWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkParallelopipedRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

