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
Nan::Persistent<v8::Function> VtkParametricSplineWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkParametricSplineWrap::ptpl;

VtkParametricSplineWrap::VtkParametricSplineWrap()
{ }

VtkParametricSplineWrap::VtkParametricSplineWrap(vtkSmartPointer<vtkParametricSpline> _native)
{ native = _native; }

VtkParametricSplineWrap::~VtkParametricSplineWrap()
{ }

void VtkParametricSplineWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkParametricFunctionWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkParametricFunctionWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkParametricSplineWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkParametricSpline").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ParametricSpline").ToLocalChecked(),tpl->GetFunction());
}

void VtkParametricSplineWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "ClosedOff", ClosedOff);
	Nan::SetPrototypeMethod(tpl, "closedOff", ClosedOff);

	Nan::SetPrototypeMethod(tpl, "ClosedOn", ClosedOn);
	Nan::SetPrototypeMethod(tpl, "closedOn", ClosedOn);

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
		VtkParametricSplineWrap* obj = new VtkParametricSplineWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSplineWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSplineWrap *w = new VtkSplineWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSplineWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSplineWrap *w = new VtkSplineWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSplineWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSplineWrap *w = new VtkSplineWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParametricSplineWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSplineWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info.Holder());
	vtkParametricSpline *native = (vtkParametricSpline *)wrapper->native.GetPointer();
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkParametricSplineWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParametricSplineWrap *w = new VtkParametricSplineWrap();
	w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsObject())
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkParametricSplineWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParametricSplineWrap *w = new VtkParametricSplineWrap();
		w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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

