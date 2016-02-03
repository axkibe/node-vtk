/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWidgetRepresentationWrap.h"
#include "vtkHandleRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkPropWrap.h"
#include "vtkPointPlacerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHandleRepresentationWrap::ptpl;

VtkHandleRepresentationWrap::VtkHandleRepresentationWrap()
{ }

VtkHandleRepresentationWrap::VtkHandleRepresentationWrap(vtkSmartPointer<vtkHandleRepresentation> _native)
{ native = _native; }

VtkHandleRepresentationWrap::~VtkHandleRepresentationWrap()
{ }

void VtkHandleRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHandleRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HandleRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkHandleRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHandleRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWidgetRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHandleRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ActiveRepresentationOff", ActiveRepresentationOff);
	Nan::SetPrototypeMethod(tpl, "activeRepresentationOff", ActiveRepresentationOff);

	Nan::SetPrototypeMethod(tpl, "ActiveRepresentationOn", ActiveRepresentationOn);
	Nan::SetPrototypeMethod(tpl, "activeRepresentationOn", ActiveRepresentationOn);

	Nan::SetPrototypeMethod(tpl, "CheckConstraint", CheckConstraint);
	Nan::SetPrototypeMethod(tpl, "checkConstraint", CheckConstraint);

	Nan::SetPrototypeMethod(tpl, "ConstrainedOff", ConstrainedOff);
	Nan::SetPrototypeMethod(tpl, "constrainedOff", ConstrainedOff);

	Nan::SetPrototypeMethod(tpl, "ConstrainedOn", ConstrainedOn);
	Nan::SetPrototypeMethod(tpl, "constrainedOn", ConstrainedOn);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetActiveRepresentation", GetActiveRepresentation);
	Nan::SetPrototypeMethod(tpl, "getActiveRepresentation", GetActiveRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetConstrained", GetConstrained);
	Nan::SetPrototypeMethod(tpl, "getConstrained", GetConstrained);

	Nan::SetPrototypeMethod(tpl, "GetDisplayPosition", GetDisplayPosition);
	Nan::SetPrototypeMethod(tpl, "getDisplayPosition", GetDisplayPosition);

	Nan::SetPrototypeMethod(tpl, "GetInteractionStateMaxValue", GetInteractionStateMaxValue);
	Nan::SetPrototypeMethod(tpl, "getInteractionStateMaxValue", GetInteractionStateMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetInteractionStateMinValue", GetInteractionStateMinValue);
	Nan::SetPrototypeMethod(tpl, "getInteractionStateMinValue", GetInteractionStateMinValue);

	Nan::SetPrototypeMethod(tpl, "GetPointPlacer", GetPointPlacer);
	Nan::SetPrototypeMethod(tpl, "getPointPlacer", GetPointPlacer);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetWorldPosition", GetWorldPosition);
	Nan::SetPrototypeMethod(tpl, "getWorldPosition", GetWorldPosition);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetActiveRepresentation", SetActiveRepresentation);
	Nan::SetPrototypeMethod(tpl, "setActiveRepresentation", SetActiveRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetConstrained", SetConstrained);
	Nan::SetPrototypeMethod(tpl, "setConstrained", SetConstrained);

	Nan::SetPrototypeMethod(tpl, "SetDisplayPosition", SetDisplayPosition);
	Nan::SetPrototypeMethod(tpl, "setDisplayPosition", SetDisplayPosition);

	Nan::SetPrototypeMethod(tpl, "SetInteractionState", SetInteractionState);
	Nan::SetPrototypeMethod(tpl, "setInteractionState", SetInteractionState);

	Nan::SetPrototypeMethod(tpl, "SetPointPlacer", SetPointPlacer);
	Nan::SetPrototypeMethod(tpl, "setPointPlacer", SetPointPlacer);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	Nan::SetPrototypeMethod(tpl, "SetWorldPosition", SetWorldPosition);
	Nan::SetPrototypeMethod(tpl, "setWorldPosition", SetWorldPosition);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkHandleRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkHandleRepresentationWrap::ActiveRepresentationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ActiveRepresentationOff();
}

void VtkHandleRepresentationWrap::ActiveRepresentationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ActiveRepresentationOn();
}

void VtkHandleRepresentationWrap::CheckConstraint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->CheckConstraint(
				(vtkRenderer *) a0->native.GetPointer(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[2];
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 2; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->CheckConstraint(
				(vtkRenderer *) a0->native.GetPointer(),
				b1
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHandleRepresentationWrap::ConstrainedOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConstrainedOff();
}

void VtkHandleRepresentationWrap::ConstrainedOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConstrainedOn();
}

void VtkHandleRepresentationWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHandleRepresentationWrap::GetActiveRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveRepresentation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHandleRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHandleRepresentationWrap::GetConstrained(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetConstrained();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHandleRepresentationWrap::GetDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetDisplayPosition(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetDisplayPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHandleRepresentationWrap::GetInteractionStateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractionStateMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHandleRepresentationWrap::GetInteractionStateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractionStateMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHandleRepresentationWrap::GetPointPlacer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	vtkPointPlacer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointPlacer();
		VtkPointPlacerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointPlacerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointPlacerWrap *w = new VtkPointPlacerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHandleRepresentationWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHandleRepresentationWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHandleRepresentationWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHandleRepresentationWrap::GetWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetWorldPosition(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetWorldPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHandleRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
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

void VtkHandleRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	vtkHandleRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHandleRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHandleRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHandleRepresentationWrap *w = new VtkHandleRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHandleRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHandleRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHandleRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHandleRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHandleRepresentationWrap *w = new VtkHandleRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHandleRepresentationWrap::SetActiveRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetActiveRepresentation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHandleRepresentationWrap::SetConstrained(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetConstrained(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHandleRepresentationWrap::SetDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplayPosition(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplayPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHandleRepresentationWrap::SetInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractionState(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHandleRepresentationWrap::SetPointPlacer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointPlacerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointPlacerWrap *a0 = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointPlacer(
			(vtkPointPlacer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHandleRepresentationWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHandleRepresentationWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHandleRepresentationWrap::SetWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWorldPosition(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWorldPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHandleRepresentationWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info.Holder());
	vtkHandleRepresentation *native = (vtkHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

