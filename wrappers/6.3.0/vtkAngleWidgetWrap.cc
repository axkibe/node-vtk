/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractWidgetWrap.h"
#include "vtkAngleWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAngleRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAngleWidgetWrap::ptpl;

VtkAngleWidgetWrap::VtkAngleWidgetWrap()
{ }

VtkAngleWidgetWrap::VtkAngleWidgetWrap(vtkSmartPointer<vtkAngleWidget> _native)
{ native = _native; }

VtkAngleWidgetWrap::~VtkAngleWidgetWrap()
{ }

void VtkAngleWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAngleWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AngleWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkAngleWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAngleWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAngleWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetAngleRepresentation", GetAngleRepresentation);
	Nan::SetPrototypeMethod(tpl, "getAngleRepresentation", GetAngleRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetWidgetState", GetWidgetState);
	Nan::SetPrototypeMethod(tpl, "getWidgetState", GetWidgetState);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsAngleValid", IsAngleValid);
	Nan::SetPrototypeMethod(tpl, "isAngleValid", IsAngleValid);

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

	ptpl.Reset( tpl );
}

void VtkAngleWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAngleWidget> native = vtkSmartPointer<vtkAngleWidget>::New();
		VtkAngleWidgetWrap* obj = new VtkAngleWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAngleWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAngleWidgetWrap>(info.Holder());
	vtkAngleWidget *native = (vtkAngleWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkAngleWidgetWrap::GetAngleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAngleWidgetWrap>(info.Holder());
	vtkAngleWidget *native = (vtkAngleWidget *)wrapper->native.GetPointer();
	vtkAngleRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngleRepresentation();
		VtkAngleRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAngleRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAngleRepresentationWrap *w = new VtkAngleRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAngleWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAngleWidgetWrap>(info.Holder());
	vtkAngleWidget *native = (vtkAngleWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAngleWidgetWrap::GetWidgetState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAngleWidgetWrap>(info.Holder());
	vtkAngleWidget *native = (vtkAngleWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidgetState();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAngleWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAngleWidgetWrap>(info.Holder());
	vtkAngleWidget *native = (vtkAngleWidget *)wrapper->native.GetPointer();
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

void VtkAngleWidgetWrap::IsAngleValid(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAngleWidgetWrap>(info.Holder());
	vtkAngleWidget *native = (vtkAngleWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsAngleValid();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAngleWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAngleWidgetWrap>(info.Holder());
	vtkAngleWidget *native = (vtkAngleWidget *)wrapper->native.GetPointer();
	vtkAngleWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAngleWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAngleWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAngleWidgetWrap *w = new VtkAngleWidgetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAngleWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAngleWidgetWrap>(info.Holder());
	vtkAngleWidget *native = (vtkAngleWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAngleWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAngleWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAngleWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAngleWidgetWrap *w = new VtkAngleWidgetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAngleWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAngleWidgetWrap>(info.Holder());
	vtkAngleWidget *native = (vtkAngleWidget *)wrapper->native.GetPointer();
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

void VtkAngleWidgetWrap::SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAngleWidgetWrap>(info.Holder());
	vtkAngleWidget *native = (vtkAngleWidget *)wrapper->native.GetPointer();
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

void VtkAngleWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAngleWidgetWrap>(info.Holder());
	vtkAngleWidget *native = (vtkAngleWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAngleRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAngleRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkAngleRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkAngleRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAngleWidgetWrap::SetWidgetStateToManipulate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAngleWidgetWrap>(info.Holder());
	vtkAngleWidget *native = (vtkAngleWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWidgetStateToManipulate();
}

void VtkAngleWidgetWrap::SetWidgetStateToStart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAngleWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkAngleWidgetWrap>(info.Holder());
	vtkAngleWidget *native = (vtkAngleWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWidgetStateToStart();
}

