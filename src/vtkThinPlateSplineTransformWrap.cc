/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWarpTransformWrap.h"
#include "vtkThinPlateSplineTransformWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPointsWrap.h"
#include "vtkAbstractTransformWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkThinPlateSplineTransformWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkThinPlateSplineTransformWrap::ptpl;

VtkThinPlateSplineTransformWrap::VtkThinPlateSplineTransformWrap()
{ }

VtkThinPlateSplineTransformWrap::VtkThinPlateSplineTransformWrap(vtkSmartPointer<vtkThinPlateSplineTransform> _native)
{ native = _native; }

VtkThinPlateSplineTransformWrap::~VtkThinPlateSplineTransformWrap()
{ }

void VtkThinPlateSplineTransformWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkThinPlateSplineTransform").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ThinPlateSplineTransform").ToLocalChecked(), ConstructorGetter);
}

void VtkThinPlateSplineTransformWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkThinPlateSplineTransformWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWarpTransformWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWarpTransformWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkThinPlateSplineTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBasis", GetBasis);
	Nan::SetPrototypeMethod(tpl, "getBasis", GetBasis);

	Nan::SetPrototypeMethod(tpl, "GetBasisAsString", GetBasisAsString);
	Nan::SetPrototypeMethod(tpl, "getBasisAsString", GetBasisAsString);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSigma", GetSigma);
	Nan::SetPrototypeMethod(tpl, "getSigma", GetSigma);

	Nan::SetPrototypeMethod(tpl, "GetSourceLandmarks", GetSourceLandmarks);
	Nan::SetPrototypeMethod(tpl, "getSourceLandmarks", GetSourceLandmarks);

	Nan::SetPrototypeMethod(tpl, "GetTargetLandmarks", GetTargetLandmarks);
	Nan::SetPrototypeMethod(tpl, "getTargetLandmarks", GetTargetLandmarks);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MakeTransform", MakeTransform);
	Nan::SetPrototypeMethod(tpl, "makeTransform", MakeTransform);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBasis", SetBasis);
	Nan::SetPrototypeMethod(tpl, "setBasis", SetBasis);

	Nan::SetPrototypeMethod(tpl, "SetBasisToR", SetBasisToR);
	Nan::SetPrototypeMethod(tpl, "setBasisToR", SetBasisToR);

	Nan::SetPrototypeMethod(tpl, "SetBasisToR2LogR", SetBasisToR2LogR);
	Nan::SetPrototypeMethod(tpl, "setBasisToR2LogR", SetBasisToR2LogR);

	Nan::SetPrototypeMethod(tpl, "SetSigma", SetSigma);
	Nan::SetPrototypeMethod(tpl, "setSigma", SetSigma);

	Nan::SetPrototypeMethod(tpl, "SetSourceLandmarks", SetSourceLandmarks);
	Nan::SetPrototypeMethod(tpl, "setSourceLandmarks", SetSourceLandmarks);

	Nan::SetPrototypeMethod(tpl, "SetTargetLandmarks", SetTargetLandmarks);
	Nan::SetPrototypeMethod(tpl, "setTargetLandmarks", SetTargetLandmarks);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkThinPlateSplineTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkThinPlateSplineTransform> native = vtkSmartPointer<vtkThinPlateSplineTransform>::New();
		VtkThinPlateSplineTransformWrap* obj = new VtkThinPlateSplineTransformWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkThinPlateSplineTransformWrap::GetBasis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBasis();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThinPlateSplineTransformWrap::GetBasisAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBasisAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkThinPlateSplineTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkThinPlateSplineTransformWrap::GetSigma(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSigma();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThinPlateSplineTransformWrap::GetSourceLandmarks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
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

void VtkThinPlateSplineTransformWrap::GetTargetLandmarks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
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

void VtkThinPlateSplineTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
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

void VtkThinPlateSplineTransformWrap::MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
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

void VtkThinPlateSplineTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
	vtkThinPlateSplineTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkThinPlateSplineTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkThinPlateSplineTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkThinPlateSplineTransformWrap *w = new VtkThinPlateSplineTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkThinPlateSplineTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkThinPlateSplineTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkThinPlateSplineTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkThinPlateSplineTransformWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkThinPlateSplineTransformWrap *w = new VtkThinPlateSplineTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThinPlateSplineTransformWrap::SetBasis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBasis(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThinPlateSplineTransformWrap::SetBasisToR(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBasisToR();
}

void VtkThinPlateSplineTransformWrap::SetBasisToR2LogR(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBasisToR2LogR();
}

void VtkThinPlateSplineTransformWrap::SetSigma(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSigma(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThinPlateSplineTransformWrap::SetSourceLandmarks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
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

void VtkThinPlateSplineTransformWrap::SetTargetLandmarks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThinPlateSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkThinPlateSplineTransformWrap>(info.Holder());
	vtkThinPlateSplineTransform *native = (vtkThinPlateSplineTransform *)wrapper->native.GetPointer();
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

