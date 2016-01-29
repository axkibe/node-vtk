/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkParametricFunctionWrap.h"
#include "vtkParametricSplineWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSplineWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkParametricSplineWrap::ptpl;

VtkParametricSplineWrap::VtkParametricSplineWrap()
{ }

VtkParametricSplineWrap::VtkParametricSplineWrap(vtkSmartPointer<vtkParametricSpline> _native)
{ native = _native; }

VtkParametricSplineWrap::~VtkParametricSplineWrap()
{ }

void VtkParametricSplineWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkParametricSpline").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ParametricSpline").ToLocalChecked(), ConstructorGetter);
}

void VtkParametricSplineWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkParametricSplineWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkParametricFunctionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkParametricFunctionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkParametricSplineWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClosedOff", ClosedOff);
	Nan::SetPrototypeMethod(tpl, "closedOff", ClosedOff);

	Nan::SetPrototypeMethod(tpl, "ClosedOn", ClosedOn);
	Nan::SetPrototypeMethod(tpl, "closedOn", ClosedOn);

	Nan::SetPrototypeMethod(tpl, "Evaluate", Evaluate);
	Nan::SetPrototypeMethod(tpl, "evaluate", Evaluate);

	Nan::SetPrototypeMethod(tpl, "EvaluateScalar", EvaluateScalar);
	Nan::SetPrototypeMethod(tpl, "evaluateScalar", EvaluateScalar);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClosed", GetClosed);
	Nan::SetPrototypeMethod(tpl, "getClosed", GetClosed);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "GetLeftConstraint", GetLeftConstraint);
	Nan::SetPrototypeMethod(tpl, "getLeftConstraint", GetLeftConstraint);

	Nan::SetPrototypeMethod(tpl, "GetLeftConstraintMaxValue", GetLeftConstraintMaxValue);
	Nan::SetPrototypeMethod(tpl, "getLeftConstraintMaxValue", GetLeftConstraintMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetLeftConstraintMinValue", GetLeftConstraintMinValue);
	Nan::SetPrototypeMethod(tpl, "getLeftConstraintMinValue", GetLeftConstraintMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLeftValue", GetLeftValue);
	Nan::SetPrototypeMethod(tpl, "getLeftValue", GetLeftValue);

	Nan::SetPrototypeMethod(tpl, "GetParameterizeByLength", GetParameterizeByLength);
	Nan::SetPrototypeMethod(tpl, "getParameterizeByLength", GetParameterizeByLength);

	Nan::SetPrototypeMethod(tpl, "GetPoints", GetPoints);
	Nan::SetPrototypeMethod(tpl, "getPoints", GetPoints);

	Nan::SetPrototypeMethod(tpl, "GetRightConstraint", GetRightConstraint);
	Nan::SetPrototypeMethod(tpl, "getRightConstraint", GetRightConstraint);

	Nan::SetPrototypeMethod(tpl, "GetRightConstraintMaxValue", GetRightConstraintMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRightConstraintMaxValue", GetRightConstraintMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRightConstraintMinValue", GetRightConstraintMinValue);
	Nan::SetPrototypeMethod(tpl, "getRightConstraintMinValue", GetRightConstraintMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRightValue", GetRightValue);
	Nan::SetPrototypeMethod(tpl, "getRightValue", GetRightValue);

	Nan::SetPrototypeMethod(tpl, "GetXSpline", GetXSpline);
	Nan::SetPrototypeMethod(tpl, "getXSpline", GetXSpline);

	Nan::SetPrototypeMethod(tpl, "GetYSpline", GetYSpline);
	Nan::SetPrototypeMethod(tpl, "getYSpline", GetYSpline);

	Nan::SetPrototypeMethod(tpl, "GetZSpline", GetZSpline);
	Nan::SetPrototypeMethod(tpl, "getZSpline", GetZSpline);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ParameterizeByLengthOff", ParameterizeByLengthOff);
	Nan::SetPrototypeMethod(tpl, "parameterizeByLengthOff", ParameterizeByLengthOff);

	Nan::SetPrototypeMethod(tpl, "ParameterizeByLengthOn", ParameterizeByLengthOn);
	Nan::SetPrototypeMethod(tpl, "parameterizeByLengthOn", ParameterizeByLengthOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetClosed", SetClosed);
	Nan::SetPrototypeMethod(tpl, "setClosed", SetClosed);

	Nan::SetPrototypeMethod(tpl, "SetLeftConstraint", SetLeftConstraint);
	Nan::SetPrototypeMethod(tpl, "setLeftConstraint", SetLeftConstraint);

	Nan::SetPrototypeMethod(tpl, "SetLeftValue", SetLeftValue);
	Nan::SetPrototypeMethod(tpl, "setLeftValue", SetLeftValue);

	Nan::SetPrototypeMethod(tpl, "SetParameterizeByLength", SetParameterizeByLength);
	Nan::SetPrototypeMethod(tpl, "setParameterizeByLength", SetParameterizeByLength);

	Nan::SetPrototypeMethod(tpl, "SetPoints", SetPoints);
	Nan::SetPrototypeMethod(tpl, "setPoints", SetPoints);

	Nan::SetPrototypeMethod(tpl, "SetRightConstraint", SetRightConstraint);
	Nan::SetPrototypeMethod(tpl, "setRightConstraint", SetRightConstraint);

	Nan::SetPrototypeMethod(tpl, "SetRightValue", SetRightValue);
	Nan::SetPrototypeMethod(tpl, "setRightValue", SetRightValue);

	Nan::SetPrototypeMethod(tpl, "SetXSpline", SetXSpline);
	Nan::SetPrototypeMethod(tpl, "setXSpline", SetXSpline);

	Nan::SetPrototypeMethod(tpl, "SetYSpline", SetYSpline);
	Nan::SetPrototypeMethod(tpl, "setYSpline", SetYSpline);

	Nan::SetPrototypeMethod(tpl, "SetZSpline", SetZSpline);
	Nan::SetPrototypeMethod(tpl, "setZSpline", SetZSpline);

	ptpl.Reset( tpl );
}

void VtkParametricSplineWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkParametricSpline> native = vtkSmartPointer<vtkParametricSpline>::New();
		VtkParametricSplineWrap* obj = new VtkParametricSplineWrap(native);
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

void VtkParametricSplineWrap::ClosedOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClosedOff();
}

void VtkParametricSplineWrap::ClosedOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClosedOn();
}

void VtkParametricSplineWrap::Evaluate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1( v8::Local<v8::Array>::Cast( info[1]->ToObject() ) );
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2( v8::Local<v8::Array>::Cast( info[2]->ToObject() ) );
				double b2[9];
				if( a2->Length() < 9 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 9; i++ )
				{
					if( !a2->Get(i)->IsNumber() )
					{
						Nan::ThrowError("Array contents invalid.");
						return;
					}
					b2[i] = a2->Get(i)->NumberValue();
				}
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Evaluate(
					b0,
					b1,
					b2
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSplineWrap::EvaluateScalar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1( v8::Local<v8::Array>::Cast( info[1]->ToObject() ) );
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2( v8::Local<v8::Array>::Cast( info[2]->ToObject() ) );
				double b2[9];
				if( a2->Length() < 9 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 9; i++ )
				{
					if( !a2->Get(i)->IsNumber() )
					{
						Nan::ThrowError("Array contents invalid.");
						return;
					}
					b2[i] = a2->Get(i)->NumberValue();
				}
				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->EvaluateScalar(
					b0,
					b1,
					b2
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSplineWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkParametricSplineWrap::GetClosed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClosed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSplineWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSplineWrap::GetLeftConstraint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeftConstraint();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSplineWrap::GetLeftConstraintMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeftConstraintMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSplineWrap::GetLeftConstraintMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeftConstraintMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSplineWrap::GetLeftValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeftValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSplineWrap::GetParameterizeByLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParameterizeByLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSplineWrap::GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoints();
		VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParametricSplineWrap::GetRightConstraint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRightConstraint();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSplineWrap::GetRightConstraintMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRightConstraintMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSplineWrap::GetRightConstraintMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRightConstraintMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSplineWrap::GetRightValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRightValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSplineWrap::GetXSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	vtkSpline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXSpline();
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

void VtkParametricSplineWrap::GetYSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	vtkSpline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYSpline();
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

void VtkParametricSplineWrap::GetZSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	vtkSpline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZSpline();
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

void VtkParametricSplineWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
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

void VtkParametricSplineWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	vtkParametricSpline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkParametricSplineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParametricSplineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParametricSplineWrap *w = new VtkParametricSplineWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParametricSplineWrap::ParameterizeByLengthOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ParameterizeByLengthOff();
}

void VtkParametricSplineWrap::ParameterizeByLengthOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ParameterizeByLengthOn();
}

void VtkParametricSplineWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkParametricSpline * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkParametricSplineWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkParametricSplineWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParametricSplineWrap *w = new VtkParametricSplineWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSplineWrap::SetClosed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
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

void VtkParametricSplineWrap::SetLeftConstraint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
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

void VtkParametricSplineWrap::SetLeftValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
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

void VtkParametricSplineWrap::SetParameterizeByLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParameterizeByLength(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSplineWrap::SetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoints(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSplineWrap::SetRightConstraint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
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

void VtkParametricSplineWrap::SetRightValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
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

void VtkParametricSplineWrap::SetXSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSplineWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSplineWrap *a0 = ObjectWrap::Unwrap<VtkSplineWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXSpline(
			(vtkSpline *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSplineWrap::SetYSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSplineWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSplineWrap *a0 = ObjectWrap::Unwrap<VtkSplineWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYSpline(
			(vtkSpline *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSplineWrap::SetZSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSplineWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSplineWrap *a0 = ObjectWrap::Unwrap<VtkSplineWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZSpline(
			(vtkSpline *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

