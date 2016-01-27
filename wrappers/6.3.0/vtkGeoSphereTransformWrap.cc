/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractTransformWrap.h"
#include "vtkGeoSphereTransformWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGeoSphereTransformWrap::ptpl;

VtkGeoSphereTransformWrap::VtkGeoSphereTransformWrap()
{ }

VtkGeoSphereTransformWrap::VtkGeoSphereTransformWrap(vtkSmartPointer<vtkGeoSphereTransform> _native)
{ native = _native; }

VtkGeoSphereTransformWrap::~VtkGeoSphereTransformWrap()
{ }

void VtkGeoSphereTransformWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoSphereTransform").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoSphereTransform").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoSphereTransformWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoSphereTransformWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractTransformWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractTransformWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoSphereTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBaseAltitude", GetBaseAltitude);
	Nan::SetPrototypeMethod(tpl, "getBaseAltitude", GetBaseAltitude);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "Inverse", Inverse);
	Nan::SetPrototypeMethod(tpl, "inverse", Inverse);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MakeTransform", MakeTransform);
	Nan::SetPrototypeMethod(tpl, "makeTransform", MakeTransform);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBaseAltitude", SetBaseAltitude);
	Nan::SetPrototypeMethod(tpl, "setBaseAltitude", SetBaseAltitude);

	Nan::SetPrototypeMethod(tpl, "ToRectangularOff", ToRectangularOff);
	Nan::SetPrototypeMethod(tpl, "toRectangularOff", ToRectangularOff);

	Nan::SetPrototypeMethod(tpl, "ToRectangularOn", ToRectangularOn);
	Nan::SetPrototypeMethod(tpl, "toRectangularOn", ToRectangularOn);

	ptpl.Reset( tpl );
}

void VtkGeoSphereTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoSphereTransform> native = vtkSmartPointer<vtkGeoSphereTransform>::New();
		VtkGeoSphereTransformWrap* obj = new VtkGeoSphereTransformWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGeoSphereTransformWrap::GetBaseAltitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSphereTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSphereTransformWrap>(info.Holder());
	vtkGeoSphereTransform *native = (vtkGeoSphereTransform *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBaseAltitude();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoSphereTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSphereTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSphereTransformWrap>(info.Holder());
	vtkGeoSphereTransform *native = (vtkGeoSphereTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoSphereTransformWrap::Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSphereTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSphereTransformWrap>(info.Holder());
	vtkGeoSphereTransform *native = (vtkGeoSphereTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Inverse();
}

void VtkGeoSphereTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSphereTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSphereTransformWrap>(info.Holder());
	vtkGeoSphereTransform *native = (vtkGeoSphereTransform *)wrapper->native.GetPointer();
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

void VtkGeoSphereTransformWrap::MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSphereTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSphereTransformWrap>(info.Holder());
	vtkGeoSphereTransform *native = (vtkGeoSphereTransform *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->MakeTransform();
		VtkAbstractTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoSphereTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSphereTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSphereTransformWrap>(info.Holder());
	vtkGeoSphereTransform *native = (vtkGeoSphereTransform *)wrapper->native.GetPointer();
	vtkGeoSphereTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGeoSphereTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoSphereTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoSphereTransformWrap *w = new VtkGeoSphereTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoSphereTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSphereTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSphereTransformWrap>(info.Holder());
	vtkGeoSphereTransform *native = (vtkGeoSphereTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoSphereTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGeoSphereTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoSphereTransformWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoSphereTransformWrap *w = new VtkGeoSphereTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoSphereTransformWrap::SetBaseAltitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSphereTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSphereTransformWrap>(info.Holder());
	vtkGeoSphereTransform *native = (vtkGeoSphereTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBaseAltitude(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoSphereTransformWrap::ToRectangularOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSphereTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSphereTransformWrap>(info.Holder());
	vtkGeoSphereTransform *native = (vtkGeoSphereTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ToRectangularOff();
}

void VtkGeoSphereTransformWrap::ToRectangularOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSphereTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSphereTransformWrap>(info.Holder());
	vtkGeoSphereTransform *native = (vtkGeoSphereTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ToRectangularOn();
}

