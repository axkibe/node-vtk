/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractWidgetWrap.h"
#include "vtkCompassWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCompassRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompassWidgetWrap::ptpl;

VtkCompassWidgetWrap::VtkCompassWidgetWrap()
{ }

VtkCompassWidgetWrap::VtkCompassWidgetWrap(vtkSmartPointer<vtkCompassWidget> _native)
{ native = _native; }

VtkCompassWidgetWrap::~VtkCompassWidgetWrap()
{ }

void VtkCompassWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompassWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompassWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkCompassWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompassWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompassWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDistance", GetDistance);
	Nan::SetPrototypeMethod(tpl, "getDistance", GetDistance);

	Nan::SetPrototypeMethod(tpl, "GetHeading", GetHeading);
	Nan::SetPrototypeMethod(tpl, "getHeading", GetHeading);

	Nan::SetPrototypeMethod(tpl, "GetTilt", GetTilt);
	Nan::SetPrototypeMethod(tpl, "getTilt", GetTilt);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDistance", SetDistance);
	Nan::SetPrototypeMethod(tpl, "setDistance", SetDistance);

	Nan::SetPrototypeMethod(tpl, "SetHeading", SetHeading);
	Nan::SetPrototypeMethod(tpl, "setHeading", SetHeading);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetTilt", SetTilt);
	Nan::SetPrototypeMethod(tpl, "setTilt", SetTilt);

	ptpl.Reset( tpl );
}

void VtkCompassWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCompassWidget> native = vtkSmartPointer<vtkCompassWidget>::New();
		VtkCompassWidgetWrap* obj = new VtkCompassWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCompassWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCompassWidgetWrap>(info.Holder());
	vtkCompassWidget *native = (vtkCompassWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkCompassWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCompassWidgetWrap>(info.Holder());
	vtkCompassWidget *native = (vtkCompassWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompassWidgetWrap::GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCompassWidgetWrap>(info.Holder());
	vtkCompassWidget *native = (vtkCompassWidget *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompassWidgetWrap::GetHeading(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCompassWidgetWrap>(info.Holder());
	vtkCompassWidget *native = (vtkCompassWidget *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeading();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompassWidgetWrap::GetTilt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCompassWidgetWrap>(info.Holder());
	vtkCompassWidget *native = (vtkCompassWidget *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTilt();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompassWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCompassWidgetWrap>(info.Holder());
	vtkCompassWidget *native = (vtkCompassWidget *)wrapper->native.GetPointer();
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

void VtkCompassWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCompassWidgetWrap>(info.Holder());
	vtkCompassWidget *native = (vtkCompassWidget *)wrapper->native.GetPointer();
	vtkCompassWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCompassWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompassWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompassWidgetWrap *w = new VtkCompassWidgetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompassWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCompassWidgetWrap>(info.Holder());
	vtkCompassWidget *native = (vtkCompassWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompassWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCompassWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompassWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompassWidgetWrap *w = new VtkCompassWidgetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompassWidgetWrap::SetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCompassWidgetWrap>(info.Holder());
	vtkCompassWidget *native = (vtkCompassWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompassWidgetWrap::SetHeading(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCompassWidgetWrap>(info.Holder());
	vtkCompassWidget *native = (vtkCompassWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeading(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompassWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCompassWidgetWrap>(info.Holder());
	vtkCompassWidget *native = (vtkCompassWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompassRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompassRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkCompassRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkCompassRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompassWidgetWrap::SetTilt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompassWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkCompassWidgetWrap>(info.Holder());
	vtkCompassWidget *native = (vtkCompassWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTilt(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

