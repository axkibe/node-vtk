/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAbstractWidgetWrap.h"
#include "vtkHoverWidgetWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHoverWidgetWrap::ptpl;

VtkHoverWidgetWrap::VtkHoverWidgetWrap()
{ }

VtkHoverWidgetWrap::VtkHoverWidgetWrap(vtkSmartPointer<vtkHoverWidget> _native)
{ native = _native; }

VtkHoverWidgetWrap::~VtkHoverWidgetWrap()
{ }

void VtkHoverWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHoverWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HoverWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkHoverWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHoverWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHoverWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetTimerDuration", GetTimerDuration);
	Nan::SetPrototypeMethod(tpl, "getTimerDuration", GetTimerDuration);

	Nan::SetPrototypeMethod(tpl, "GetTimerDurationMaxValue", GetTimerDurationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTimerDurationMaxValue", GetTimerDurationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTimerDurationMinValue", GetTimerDurationMinValue);
	Nan::SetPrototypeMethod(tpl, "getTimerDurationMinValue", GetTimerDurationMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetTimerDuration", SetTimerDuration);
	Nan::SetPrototypeMethod(tpl, "setTimerDuration", SetTimerDuration);

#ifdef VTK_NODE_PLUS_VTKHOVERWIDGETWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHOVERWIDGETWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHoverWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHoverWidget> native = vtkSmartPointer<vtkHoverWidget>::New();
		VtkHoverWidgetWrap* obj = new VtkHoverWidgetWrap(native);
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

void VtkHoverWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHoverWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkHoverWidgetWrap>(info.Holder());
	vtkHoverWidget *native = (vtkHoverWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkHoverWidgetWrap::GetTimerDuration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHoverWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkHoverWidgetWrap>(info.Holder());
	vtkHoverWidget *native = (vtkHoverWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimerDuration();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHoverWidgetWrap::GetTimerDurationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHoverWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkHoverWidgetWrap>(info.Holder());
	vtkHoverWidget *native = (vtkHoverWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimerDurationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHoverWidgetWrap::GetTimerDurationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHoverWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkHoverWidgetWrap>(info.Holder());
	vtkHoverWidget *native = (vtkHoverWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimerDurationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHoverWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHoverWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkHoverWidgetWrap>(info.Holder());
	vtkHoverWidget *native = (vtkHoverWidget *)wrapper->native.GetPointer();
	vtkHoverWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHoverWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHoverWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHoverWidgetWrap *w = new VtkHoverWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHoverWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHoverWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkHoverWidgetWrap>(info.Holder());
	vtkHoverWidget *native = (vtkHoverWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkHoverWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkHoverWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHoverWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHoverWidgetWrap *w = new VtkHoverWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHoverWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHoverWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkHoverWidgetWrap>(info.Holder());
	vtkHoverWidget *native = (vtkHoverWidget *)wrapper->native.GetPointer();
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

void VtkHoverWidgetWrap::SetTimerDuration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHoverWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkHoverWidgetWrap>(info.Holder());
	vtkHoverWidget *native = (vtkHoverWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTimerDuration(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

