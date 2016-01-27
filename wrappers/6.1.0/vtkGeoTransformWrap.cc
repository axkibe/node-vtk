/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractTransformWrap.h"
#include "vtkGeoTransformWrap.h"
#include "vtkObjectWrap.h"
#include "vtkGeoProjectionWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGeoTransformWrap::ptpl;

VtkGeoTransformWrap::VtkGeoTransformWrap()
{ }

VtkGeoTransformWrap::VtkGeoTransformWrap(vtkSmartPointer<vtkGeoTransform> _native)
{ native = _native; }

VtkGeoTransformWrap::~VtkGeoTransformWrap()
{ }

void VtkGeoTransformWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoTransform").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoTransform").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoTransformWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoTransformWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractTransformWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractTransformWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDestinationProjection", GetDestinationProjection);
	Nan::SetPrototypeMethod(tpl, "getDestinationProjection", GetDestinationProjection);

	Nan::SetPrototypeMethod(tpl, "GetSourceProjection", GetSourceProjection);
	Nan::SetPrototypeMethod(tpl, "getSourceProjection", GetSourceProjection);

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

	Nan::SetPrototypeMethod(tpl, "SetDestinationProjection", SetDestinationProjection);
	Nan::SetPrototypeMethod(tpl, "setDestinationProjection", SetDestinationProjection);

	Nan::SetPrototypeMethod(tpl, "SetSourceProjection", SetSourceProjection);
	Nan::SetPrototypeMethod(tpl, "setSourceProjection", SetSourceProjection);

	Nan::SetPrototypeMethod(tpl, "TransformPoints", TransformPoints);
	Nan::SetPrototypeMethod(tpl, "transformPoints", TransformPoints);

	ptpl.Reset( tpl );
}

void VtkGeoTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoTransform> native = vtkSmartPointer<vtkGeoTransform>::New();
		VtkGeoTransformWrap* obj = new VtkGeoTransformWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGeoTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTransformWrap>(info.Holder());
	vtkGeoTransform *native = (vtkGeoTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoTransformWrap::GetDestinationProjection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTransformWrap>(info.Holder());
	vtkGeoTransform *native = (vtkGeoTransform *)wrapper->native.GetPointer();
	vtkGeoProjection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDestinationProjection();
		VtkGeoProjectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoProjectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoProjectionWrap *w = new VtkGeoProjectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoTransformWrap::GetSourceProjection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTransformWrap>(info.Holder());
	vtkGeoTransform *native = (vtkGeoTransform *)wrapper->native.GetPointer();
	vtkGeoProjection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSourceProjection();
		VtkGeoProjectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoProjectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoProjectionWrap *w = new VtkGeoProjectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoTransformWrap::Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTransformWrap>(info.Holder());
	vtkGeoTransform *native = (vtkGeoTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Inverse();
}

void VtkGeoTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTransformWrap>(info.Holder());
	vtkGeoTransform *native = (vtkGeoTransform *)wrapper->native.GetPointer();
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

void VtkGeoTransformWrap::MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTransformWrap>(info.Holder());
	vtkGeoTransform *native = (vtkGeoTransform *)wrapper->native.GetPointer();
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

void VtkGeoTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTransformWrap>(info.Holder());
	vtkGeoTransform *native = (vtkGeoTransform *)wrapper->native.GetPointer();
	vtkGeoTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGeoTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoTransformWrap *w = new VtkGeoTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTransformWrap>(info.Holder());
	vtkGeoTransform *native = (vtkGeoTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGeoTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoTransformWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoTransformWrap *w = new VtkGeoTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTransformWrap::SetDestinationProjection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTransformWrap>(info.Holder());
	vtkGeoTransform *native = (vtkGeoTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoProjectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoProjectionWrap *a0 = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDestinationProjection(
			(vtkGeoProjection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTransformWrap::SetSourceProjection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTransformWrap>(info.Holder());
	vtkGeoTransform *native = (vtkGeoTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoProjectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoProjectionWrap *a0 = ObjectWrap::Unwrap<VtkGeoProjectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceProjection(
			(vtkGeoProjection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTransformWrap::TransformPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTransformWrap>(info.Holder());
	vtkGeoTransform *native = (vtkGeoTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPointsWrap *a1 = ObjectWrap::Unwrap<VtkPointsWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->TransformPoints(
				(vtkPoints *) a0->native.GetPointer(),
				(vtkPoints *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}
