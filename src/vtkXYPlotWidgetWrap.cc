/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorObserverWrap.h"
#include "vtkXYPlotWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkXYPlotActorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkXYPlotWidgetWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkXYPlotWidgetWrap::ptpl;

VtkXYPlotWidgetWrap::VtkXYPlotWidgetWrap()
{ }

VtkXYPlotWidgetWrap::VtkXYPlotWidgetWrap(vtkSmartPointer<vtkXYPlotWidget> _native)
{ native = _native; }

VtkXYPlotWidgetWrap::~VtkXYPlotWidgetWrap()
{ }

void VtkXYPlotWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXYPlotWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XYPlotWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkXYPlotWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXYPlotWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorObserverWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorObserverWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXYPlotWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetXYPlotActor", GetXYPlotActor);
	Nan::SetPrototypeMethod(tpl, "getXYPlotActor", GetXYPlotActor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetXYPlotActor", SetXYPlotActor);
	Nan::SetPrototypeMethod(tpl, "setXYPlotActor", SetXYPlotActor);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkXYPlotWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXYPlotWidget> native = vtkSmartPointer<vtkXYPlotWidget>::New();
		VtkXYPlotWidgetWrap* obj = new VtkXYPlotWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXYPlotWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXYPlotWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkXYPlotWidgetWrap>(info.Holder());
	vtkXYPlotWidget *native = (vtkXYPlotWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXYPlotWidgetWrap::GetXYPlotActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXYPlotWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkXYPlotWidgetWrap>(info.Holder());
	vtkXYPlotWidget *native = (vtkXYPlotWidget *)wrapper->native.GetPointer();
	vtkXYPlotActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXYPlotActor();
		VtkXYPlotActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkXYPlotActorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXYPlotActorWrap *w = new VtkXYPlotActorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXYPlotWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXYPlotWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkXYPlotWidgetWrap>(info.Holder());
	vtkXYPlotWidget *native = (vtkXYPlotWidget *)wrapper->native.GetPointer();
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

void VtkXYPlotWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXYPlotWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkXYPlotWidgetWrap>(info.Holder());
	vtkXYPlotWidget *native = (vtkXYPlotWidget *)wrapper->native.GetPointer();
	vtkXYPlotWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkXYPlotWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkXYPlotWidgetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXYPlotWidgetWrap *w = new VtkXYPlotWidgetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXYPlotWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXYPlotWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkXYPlotWidgetWrap>(info.Holder());
	vtkXYPlotWidget *native = (vtkXYPlotWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXYPlotWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkXYPlotWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkXYPlotWidgetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXYPlotWidgetWrap *w = new VtkXYPlotWidgetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXYPlotWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXYPlotWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkXYPlotWidgetWrap>(info.Holder());
	vtkXYPlotWidget *native = (vtkXYPlotWidget *)wrapper->native.GetPointer();
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

void VtkXYPlotWidgetWrap::SetXYPlotActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXYPlotWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkXYPlotWidgetWrap>(info.Holder());
	vtkXYPlotWidget *native = (vtkXYPlotWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkXYPlotActorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkXYPlotActorWrap *a0 = ObjectWrap::Unwrap<VtkXYPlotActorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXYPlotActor(
			(vtkXYPlotActor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

