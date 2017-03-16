/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkTransformInterpolatorWrap.h"
#include "vtkTransformWrap.h"
#include "vtkMatrix4x4Wrap.h"
#include "vtkProp3DWrap.h"
#include "vtkTupleInterpolatorWrap.h"
#include "vtkQuaternionInterpolatorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTransformInterpolatorWrap::ptpl;

VtkTransformInterpolatorWrap::VtkTransformInterpolatorWrap()
{ }

VtkTransformInterpolatorWrap::VtkTransformInterpolatorWrap(vtkSmartPointer<vtkTransformInterpolator> _native)
{ native = _native; }

VtkTransformInterpolatorWrap::~VtkTransformInterpolatorWrap()
{ }

void VtkTransformInterpolatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTransformInterpolator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TransformInterpolator").ToLocalChecked(), ConstructorGetter);
}

void VtkTransformInterpolatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTransformInterpolatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTransformInterpolatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddTransform", AddTransform);
	Nan::SetPrototypeMethod(tpl, "addTransform", AddTransform);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationType", GetInterpolationType);
	Nan::SetPrototypeMethod(tpl, "getInterpolationType", GetInterpolationType);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationTypeMaxValue", GetInterpolationTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getInterpolationTypeMaxValue", GetInterpolationTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationTypeMinValue", GetInterpolationTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getInterpolationTypeMinValue", GetInterpolationTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMTime", GetMTime);
	Nan::SetPrototypeMethod(tpl, "getMTime", GetMTime);

	Nan::SetPrototypeMethod(tpl, "GetMaximumT", GetMaximumT);
	Nan::SetPrototypeMethod(tpl, "getMaximumT", GetMaximumT);

	Nan::SetPrototypeMethod(tpl, "GetMinimumT", GetMinimumT);
	Nan::SetPrototypeMethod(tpl, "getMinimumT", GetMinimumT);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTransforms", GetNumberOfTransforms);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTransforms", GetNumberOfTransforms);

	Nan::SetPrototypeMethod(tpl, "GetPositionInterpolator", GetPositionInterpolator);
	Nan::SetPrototypeMethod(tpl, "getPositionInterpolator", GetPositionInterpolator);

	Nan::SetPrototypeMethod(tpl, "GetRotationInterpolator", GetRotationInterpolator);
	Nan::SetPrototypeMethod(tpl, "getRotationInterpolator", GetRotationInterpolator);

	Nan::SetPrototypeMethod(tpl, "GetScaleInterpolator", GetScaleInterpolator);
	Nan::SetPrototypeMethod(tpl, "getScaleInterpolator", GetScaleInterpolator);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "InterpolateTransform", InterpolateTransform);
	Nan::SetPrototypeMethod(tpl, "interpolateTransform", InterpolateTransform);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveTransform", RemoveTransform);
	Nan::SetPrototypeMethod(tpl, "removeTransform", RemoveTransform);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationType", SetInterpolationType);
	Nan::SetPrototypeMethod(tpl, "setInterpolationType", SetInterpolationType);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationTypeToLinear", SetInterpolationTypeToLinear);
	Nan::SetPrototypeMethod(tpl, "setInterpolationTypeToLinear", SetInterpolationTypeToLinear);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationTypeToManual", SetInterpolationTypeToManual);
	Nan::SetPrototypeMethod(tpl, "setInterpolationTypeToManual", SetInterpolationTypeToManual);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationTypeToSpline", SetInterpolationTypeToSpline);
	Nan::SetPrototypeMethod(tpl, "setInterpolationTypeToSpline", SetInterpolationTypeToSpline);

	Nan::SetPrototypeMethod(tpl, "SetPositionInterpolator", SetPositionInterpolator);
	Nan::SetPrototypeMethod(tpl, "setPositionInterpolator", SetPositionInterpolator);

	Nan::SetPrototypeMethod(tpl, "SetRotationInterpolator", SetRotationInterpolator);
	Nan::SetPrototypeMethod(tpl, "setRotationInterpolator", SetRotationInterpolator);

	Nan::SetPrototypeMethod(tpl, "SetScaleInterpolator", SetScaleInterpolator);
	Nan::SetPrototypeMethod(tpl, "setScaleInterpolator", SetScaleInterpolator);

#ifdef VTK_NODE_PLUS_VTKTRANSFORMINTERPOLATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTRANSFORMINTERPOLATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTransformInterpolatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTransformInterpolator> native = vtkSmartPointer<vtkTransformInterpolator>::New();
		VtkTransformInterpolatorWrap* obj = new VtkTransformInterpolatorWrap(native);
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

void VtkTransformInterpolatorWrap::AddTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkProp3DWrap::ptpl))->HasInstance(info[1]))
		{
			VtkProp3DWrap *a1 = ObjectWrap::Unwrap<VtkProp3DWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddTransform(
				info[0]->NumberValue(),
				(vtkProp3D *) a1->native.GetPointer()
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[1]))
		{
			VtkMatrix4x4Wrap *a1 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddTransform(
				info[0]->NumberValue(),
				(vtkMatrix4x4 *) a1->native.GetPointer()
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkTransformWrap::ptpl))->HasInstance(info[1]))
		{
			VtkTransformWrap *a1 = ObjectWrap::Unwrap<VtkTransformWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddTransform(
				info[0]->NumberValue(),
				(vtkTransform *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformInterpolatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTransformInterpolatorWrap::GetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformInterpolatorWrap::GetInterpolationTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformInterpolatorWrap::GetInterpolationTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformInterpolatorWrap::GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformInterpolatorWrap::GetMaximumT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumT();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformInterpolatorWrap::GetMinimumT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinimumT();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformInterpolatorWrap::GetNumberOfTransforms(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTransforms();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformInterpolatorWrap::GetPositionInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	vtkTupleInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPositionInterpolator();
	VtkTupleInterpolatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTupleInterpolatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTupleInterpolatorWrap *w = new VtkTupleInterpolatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformInterpolatorWrap::GetRotationInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	vtkQuaternionInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRotationInterpolator();
	VtkQuaternionInterpolatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkQuaternionInterpolatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkQuaternionInterpolatorWrap *w = new VtkQuaternionInterpolatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformInterpolatorWrap::GetScaleInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	vtkTupleInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleInterpolator();
	VtkTupleInterpolatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTupleInterpolatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTupleInterpolatorWrap *w = new VtkTupleInterpolatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformInterpolatorWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkTransformInterpolatorWrap::InterpolateTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkTransformWrap::ptpl))->HasInstance(info[1]))
		{
			VtkTransformWrap *a1 = ObjectWrap::Unwrap<VtkTransformWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolateTransform(
				info[0]->NumberValue(),
				(vtkTransform *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformInterpolatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
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

void VtkTransformInterpolatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	vtkTransformInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTransformInterpolatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTransformInterpolatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransformInterpolatorWrap *w = new VtkTransformInterpolatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformInterpolatorWrap::RemoveTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveTransform(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformInterpolatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTransformInterpolator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTransformInterpolatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTransformInterpolatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTransformInterpolatorWrap *w = new VtkTransformInterpolatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformInterpolatorWrap::SetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolationType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformInterpolatorWrap::SetInterpolationTypeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationTypeToLinear();
}

void VtkTransformInterpolatorWrap::SetInterpolationTypeToManual(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationTypeToManual();
}

void VtkTransformInterpolatorWrap::SetInterpolationTypeToSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationTypeToSpline();
}

void VtkTransformInterpolatorWrap::SetPositionInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTupleInterpolatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTupleInterpolatorWrap *a0 = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPositionInterpolator(
			(vtkTupleInterpolator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformInterpolatorWrap::SetRotationInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkQuaternionInterpolatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkQuaternionInterpolatorWrap *a0 = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRotationInterpolator(
			(vtkQuaternionInterpolator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformInterpolatorWrap::SetScaleInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTransformInterpolatorWrap>(info.Holder());
	vtkTransformInterpolator *native = (vtkTransformInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTupleInterpolatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTupleInterpolatorWrap *a0 = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleInterpolator(
			(vtkTupleInterpolator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

