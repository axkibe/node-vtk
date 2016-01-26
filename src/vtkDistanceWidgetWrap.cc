/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractWidgetWrap.h"
#include "vtkDistanceWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDistanceRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDistanceWidgetWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkDistanceWidgetWrap::ptpl;

VtkDistanceWidgetWrap::VtkDistanceWidgetWrap()
{ }

VtkDistanceWidgetWrap::VtkDistanceWidgetWrap(vtkSmartPointer<vtkDistanceWidget> _native)
{ native = _native; }

VtkDistanceWidgetWrap::~VtkDistanceWidgetWrap()
{ }

void VtkDistanceWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDistanceWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DistanceWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkDistanceWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDistanceWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDistanceWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDistanceRepresentation", GetDistanceRepresentation);
	Nan::SetPrototypeMethod(tpl, "getDistanceRepresentation", GetDistanceRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetWidgetState", GetWidgetState);
	Nan::SetPrototypeMethod(tpl, "getWidgetState", GetWidgetState);

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

	Nan::SetPrototypeMethod(tpl, "SetWidgetStateToManipulate", SetWidgetStateToManipulate);
	Nan::SetPrototypeMethod(tpl, "setWidgetStateToManipulate", SetWidgetStateToManipulate);

	Nan::SetPrototypeMethod(tpl, "SetWidgetStateToStart", SetWidgetStateToStart);
	Nan::SetPrototypeMethod(tpl, "setWidgetStateToStart", SetWidgetStateToStart);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkDistanceWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDistanceWidget> native = vtkSmartPointer<vtkDistanceWidget>::New();
		VtkDistanceWidgetWrap* obj = new VtkDistanceWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDistanceWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceWidgetWrap>(info.Holder());
	vtkDistanceWidget *native = (vtkDistanceWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkDistanceWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceWidgetWrap>(info.Holder());
	vtkDistanceWidget *native = (vtkDistanceWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDistanceWidgetWrap::GetDistanceRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceWidgetWrap>(info.Holder());
	vtkDistanceWidget *native = (vtkDistanceWidget *)wrapper->native.GetPointer();
	vtkDistanceRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceRepresentation();
		VtkDistanceRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDistanceRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDistanceRepresentationWrap *w = new VtkDistanceRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDistanceWidgetWrap::GetWidgetState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceWidgetWrap>(info.Holder());
	vtkDistanceWidget *native = (vtkDistanceWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidgetState();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistanceWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceWidgetWrap>(info.Holder());
	vtkDistanceWidget *native = (vtkDistanceWidget *)wrapper->native.GetPointer();
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

void VtkDistanceWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceWidgetWrap>(info.Holder());
	vtkDistanceWidget *native = (vtkDistanceWidget *)wrapper->native.GetPointer();
	vtkDistanceWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDistanceWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDistanceWidgetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDistanceWidgetWrap *w = new VtkDistanceWidgetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDistanceWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceWidgetWrap>(info.Holder());
	vtkDistanceWidget *native = (vtkDistanceWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDistanceWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDistanceWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkDistanceWidgetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDistanceWidgetWrap *w = new VtkDistanceWidgetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceWidgetWrap>(info.Holder());
	vtkDistanceWidget *native = (vtkDistanceWidget *)wrapper->native.GetPointer();
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

void VtkDistanceWidgetWrap::SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceWidgetWrap>(info.Holder());
	vtkDistanceWidget *native = (vtkDistanceWidget *)wrapper->native.GetPointer();
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

void VtkDistanceWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceWidgetWrap>(info.Holder());
	vtkDistanceWidget *native = (vtkDistanceWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDistanceRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDistanceRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkDistanceRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkDistanceRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistanceWidgetWrap::SetWidgetStateToManipulate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceWidgetWrap>(info.Holder());
	vtkDistanceWidget *native = (vtkDistanceWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWidgetStateToManipulate();
}

void VtkDistanceWidgetWrap::SetWidgetStateToStart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistanceWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkDistanceWidgetWrap>(info.Holder());
	vtkDistanceWidget *native = (vtkDistanceWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWidgetStateToStart();
}

