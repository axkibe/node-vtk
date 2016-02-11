/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkSplineWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSplineWrap::ptpl;

VtkSplineWrap::VtkSplineWrap()
{ }

VtkSplineWrap::VtkSplineWrap(vtkSmartPointer<vtkSpline> _native)
{ native = _native; }

VtkSplineWrap::~VtkSplineWrap()
{ }

void VtkSplineWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSpline").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Spline").ToLocalChecked(), ConstructorGetter);
}

void VtkSplineWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSplineWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSplineWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddPoint", AddPoint);
	Nan::SetPrototypeMethod(tpl, "addPoint", AddPoint);

	Nan::SetPrototypeMethod(tpl, "ClampValueOff", ClampValueOff);
	Nan::SetPrototypeMethod(tpl, "clampValueOff", ClampValueOff);

	Nan::SetPrototypeMethod(tpl, "ClampValueOn", ClampValueOn);
	Nan::SetPrototypeMethod(tpl, "clampValueOn", ClampValueOn);

	Nan::SetPrototypeMethod(tpl, "ClosedOff", ClosedOff);
	Nan::SetPrototypeMethod(tpl, "closedOff", ClosedOff);

	Nan::SetPrototypeMethod(tpl, "ClosedOn", ClosedOn);
	Nan::SetPrototypeMethod(tpl, "closedOn", ClosedOn);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClampValue", GetClampValue);
	Nan::SetPrototypeMethod(tpl, "getClampValue", GetClampValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClosed", GetClosed);
	Nan::SetPrototypeMethod(tpl, "getClosed", GetClosed);

	Nan::SetPrototypeMethod(tpl, "GetLeftConstraint", GetLeftConstraint);
	Nan::SetPrototypeMethod(tpl, "getLeftConstraint", GetLeftConstraint);

	Nan::SetPrototypeMethod(tpl, "GetLeftConstraintMaxValue", GetLeftConstraintMaxValue);
	Nan::SetPrototypeMethod(tpl, "getLeftConstraintMaxValue", GetLeftConstraintMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetLeftConstraintMinValue", GetLeftConstraintMinValue);
	Nan::SetPrototypeMethod(tpl, "getLeftConstraintMinValue", GetLeftConstraintMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLeftValue", GetLeftValue);
	Nan::SetPrototypeMethod(tpl, "getLeftValue", GetLeftValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPoints", GetNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPoints", GetNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "GetParametricRange", GetParametricRange);
	Nan::SetPrototypeMethod(tpl, "getParametricRange", GetParametricRange);

	Nan::SetPrototypeMethod(tpl, "GetRightConstraint", GetRightConstraint);
	Nan::SetPrototypeMethod(tpl, "getRightConstraint", GetRightConstraint);

	Nan::SetPrototypeMethod(tpl, "GetRightConstraintMaxValue", GetRightConstraintMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRightConstraintMaxValue", GetRightConstraintMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRightConstraintMinValue", GetRightConstraintMinValue);
	Nan::SetPrototypeMethod(tpl, "getRightConstraintMinValue", GetRightConstraintMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRightValue", GetRightValue);
	Nan::SetPrototypeMethod(tpl, "getRightValue", GetRightValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllPoints", RemoveAllPoints);
	Nan::SetPrototypeMethod(tpl, "removeAllPoints", RemoveAllPoints);

	Nan::SetPrototypeMethod(tpl, "RemovePoint", RemovePoint);
	Nan::SetPrototypeMethod(tpl, "removePoint", RemovePoint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetClampValue", SetClampValue);
	Nan::SetPrototypeMethod(tpl, "setClampValue", SetClampValue);

	Nan::SetPrototypeMethod(tpl, "SetClosed", SetClosed);
	Nan::SetPrototypeMethod(tpl, "setClosed", SetClosed);

	Nan::SetPrototypeMethod(tpl, "SetLeftConstraint", SetLeftConstraint);
	Nan::SetPrototypeMethod(tpl, "setLeftConstraint", SetLeftConstraint);

	Nan::SetPrototypeMethod(tpl, "SetLeftValue", SetLeftValue);
	Nan::SetPrototypeMethod(tpl, "setLeftValue", SetLeftValue);

	Nan::SetPrototypeMethod(tpl, "SetParametricRange", SetParametricRange);
	Nan::SetPrototypeMethod(tpl, "setParametricRange", SetParametricRange);

	Nan::SetPrototypeMethod(tpl, "SetRightConstraint", SetRightConstraint);
	Nan::SetPrototypeMethod(tpl, "setRightConstraint", SetRightConstraint);

	Nan::SetPrototypeMethod(tpl, "SetRightValue", SetRightValue);
	Nan::SetPrototypeMethod(tpl, "setRightValue", SetRightValue);

	ptpl.Reset( tpl );
}

void VtkSplineWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkSplineWrap::AddPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddPoint(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWrap::ClampValueOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClampValueOff();
}

void VtkSplineWrap::ClampValueOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClampValueOn();
}

void VtkSplineWrap::ClosedOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClosedOff();
}

void VtkSplineWrap::ClosedOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClosedOn();
}

void VtkSplineWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSplineWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSplineWrap *a0 = ObjectWrap::Unwrap<VtkSplineWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkSpline *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWrap::GetClampValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClampValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSplineWrap::GetClosed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClosed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWrap::GetLeftConstraint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeftConstraint();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWrap::GetLeftConstraintMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeftConstraintMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWrap::GetLeftConstraintMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeftConstraintMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWrap::GetLeftValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeftValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWrap::GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWrap::GetParametricRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetParametricRange(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->GetParametricRange(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWrap::GetRightConstraint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRightConstraint();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWrap::GetRightConstraintMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRightConstraintMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWrap::GetRightConstraintMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRightConstraintMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWrap::GetRightValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRightValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
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

void VtkSplineWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	vtkSpline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSplineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSplineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSplineWrap *w = new VtkSplineWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineWrap::RemoveAllPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllPoints();
}

void VtkSplineWrap::RemovePoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemovePoint(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSpline * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSplineWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSplineWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSplineWrap *w = new VtkSplineWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWrap::SetClampValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClampValue(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWrap::SetClosed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClosed(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWrap::SetLeftConstraint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLeftConstraint(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWrap::SetLeftValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLeftValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWrap::SetParametricRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParametricRange(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetParametricRange(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetParametricRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWrap::SetRightConstraint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRightConstraint(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWrap::SetRightValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWrap>(info.Holder());
	vtkSpline *native = (vtkSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRightValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

