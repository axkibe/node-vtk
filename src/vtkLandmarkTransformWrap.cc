/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkLinearTransformWrap.h"
#include "vtkLandmarkTransformWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPointsWrap.h"
#include "vtkAbstractTransformWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkLandmarkTransformWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkLandmarkTransformWrap::ptpl;

VtkLandmarkTransformWrap::VtkLandmarkTransformWrap()
{ }

VtkLandmarkTransformWrap::VtkLandmarkTransformWrap(vtkSmartPointer<vtkLandmarkTransform> _native)
{ native = _native; }

VtkLandmarkTransformWrap::~VtkLandmarkTransformWrap()
{ }

void VtkLandmarkTransformWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLandmarkTransform").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LandmarkTransform").ToLocalChecked(), ConstructorGetter);
}

void VtkLandmarkTransformWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLandmarkTransformWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkLinearTransformWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkLinearTransformWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLandmarkTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMode", GetMode);
	Nan::SetPrototypeMethod(tpl, "getMode", GetMode);

	Nan::SetPrototypeMethod(tpl, "GetModeAsString", GetModeAsString);
	Nan::SetPrototypeMethod(tpl, "getModeAsString", GetModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetSourceLandmarks", GetSourceLandmarks);
	Nan::SetPrototypeMethod(tpl, "getSourceLandmarks", GetSourceLandmarks);

	Nan::SetPrototypeMethod(tpl, "GetTargetLandmarks", GetTargetLandmarks);
	Nan::SetPrototypeMethod(tpl, "getTargetLandmarks", GetTargetLandmarks);

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

	Nan::SetPrototypeMethod(tpl, "SetMode", SetMode);
	Nan::SetPrototypeMethod(tpl, "setMode", SetMode);

	Nan::SetPrototypeMethod(tpl, "SetModeToAffine", SetModeToAffine);
	Nan::SetPrototypeMethod(tpl, "setModeToAffine", SetModeToAffine);

	Nan::SetPrototypeMethod(tpl, "SetModeToRigidBody", SetModeToRigidBody);
	Nan::SetPrototypeMethod(tpl, "setModeToRigidBody", SetModeToRigidBody);

	Nan::SetPrototypeMethod(tpl, "SetModeToSimilarity", SetModeToSimilarity);
	Nan::SetPrototypeMethod(tpl, "setModeToSimilarity", SetModeToSimilarity);

	Nan::SetPrototypeMethod(tpl, "SetSourceLandmarks", SetSourceLandmarks);
	Nan::SetPrototypeMethod(tpl, "setSourceLandmarks", SetSourceLandmarks);

	Nan::SetPrototypeMethod(tpl, "SetTargetLandmarks", SetTargetLandmarks);
	Nan::SetPrototypeMethod(tpl, "setTargetLandmarks", SetTargetLandmarks);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkLandmarkTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLandmarkTransform> native = vtkSmartPointer<vtkLandmarkTransform>::New();
		VtkLandmarkTransformWrap* obj = new VtkLandmarkTransformWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLandmarkTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLandmarkTransformWrap::GetMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLandmarkTransformWrap::GetModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLandmarkTransformWrap::GetSourceLandmarks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSourceLandmarks();
		VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPointsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLandmarkTransformWrap::GetTargetLandmarks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetLandmarks();
		VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPointsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLandmarkTransformWrap::Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Inverse();
}

void VtkLandmarkTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
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

void VtkLandmarkTransformWrap::MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
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
		Nan::New<v8::Function>(VtkAbstractTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLandmarkTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	vtkLandmarkTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkLandmarkTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLandmarkTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLandmarkTransformWrap *w = new VtkLandmarkTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLandmarkTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLandmarkTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkLandmarkTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkLandmarkTransformWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLandmarkTransformWrap *w = new VtkLandmarkTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLandmarkTransformWrap::SetMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLandmarkTransformWrap::SetModeToAffine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetModeToAffine();
}

void VtkLandmarkTransformWrap::SetModeToRigidBody(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetModeToRigidBody();
}

void VtkLandmarkTransformWrap::SetModeToSimilarity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetModeToSimilarity();
}

void VtkLandmarkTransformWrap::SetSourceLandmarks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceLandmarks(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLandmarkTransformWrap::SetTargetLandmarks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLandmarkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLandmarkTransformWrap>(info.Holder());
	vtkLandmarkTransform *native = (vtkLandmarkTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTargetLandmarks(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

