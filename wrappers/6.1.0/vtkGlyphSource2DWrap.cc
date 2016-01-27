/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkGlyphSource2DWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGlyphSource2DWrap::ptpl;

VtkGlyphSource2DWrap::VtkGlyphSource2DWrap()
{ }

VtkGlyphSource2DWrap::VtkGlyphSource2DWrap(vtkSmartPointer<vtkGlyphSource2D> _native)
{ native = _native; }

VtkGlyphSource2DWrap::~VtkGlyphSource2DWrap()
{ }

void VtkGlyphSource2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGlyphSource2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GlyphSource2D").ToLocalChecked(), ConstructorGetter);
}

void VtkGlyphSource2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGlyphSource2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGlyphSource2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CrossOff", CrossOff);
	Nan::SetPrototypeMethod(tpl, "crossOff", CrossOff);

	Nan::SetPrototypeMethod(tpl, "CrossOn", CrossOn);
	Nan::SetPrototypeMethod(tpl, "crossOn", CrossOn);

	Nan::SetPrototypeMethod(tpl, "DashOff", DashOff);
	Nan::SetPrototypeMethod(tpl, "dashOff", DashOff);

	Nan::SetPrototypeMethod(tpl, "DashOn", DashOn);
	Nan::SetPrototypeMethod(tpl, "dashOn", DashOn);

	Nan::SetPrototypeMethod(tpl, "FilledOff", FilledOff);
	Nan::SetPrototypeMethod(tpl, "filledOff", FilledOff);

	Nan::SetPrototypeMethod(tpl, "FilledOn", FilledOn);
	Nan::SetPrototypeMethod(tpl, "filledOn", FilledOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCross", GetCross);
	Nan::SetPrototypeMethod(tpl, "getCross", GetCross);

	Nan::SetPrototypeMethod(tpl, "GetDash", GetDash);
	Nan::SetPrototypeMethod(tpl, "getDash", GetDash);

	Nan::SetPrototypeMethod(tpl, "GetFilled", GetFilled);
	Nan::SetPrototypeMethod(tpl, "getFilled", GetFilled);

	Nan::SetPrototypeMethod(tpl, "GetGlyphType", GetGlyphType);
	Nan::SetPrototypeMethod(tpl, "getGlyphType", GetGlyphType);

	Nan::SetPrototypeMethod(tpl, "GetGlyphTypeMaxValue", GetGlyphTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getGlyphTypeMaxValue", GetGlyphTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetGlyphTypeMinValue", GetGlyphTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getGlyphTypeMinValue", GetGlyphTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetRotationAngle", GetRotationAngle);
	Nan::SetPrototypeMethod(tpl, "getRotationAngle", GetRotationAngle);

	Nan::SetPrototypeMethod(tpl, "GetScale", GetScale);
	Nan::SetPrototypeMethod(tpl, "getScale", GetScale);

	Nan::SetPrototypeMethod(tpl, "GetScale2", GetScale2);
	Nan::SetPrototypeMethod(tpl, "getScale2", GetScale2);

	Nan::SetPrototypeMethod(tpl, "GetScale2MaxValue", GetScale2MaxValue);
	Nan::SetPrototypeMethod(tpl, "getScale2MaxValue", GetScale2MaxValue);

	Nan::SetPrototypeMethod(tpl, "GetScale2MinValue", GetScale2MinValue);
	Nan::SetPrototypeMethod(tpl, "getScale2MinValue", GetScale2MinValue);

	Nan::SetPrototypeMethod(tpl, "GetScaleMaxValue", GetScaleMaxValue);
	Nan::SetPrototypeMethod(tpl, "getScaleMaxValue", GetScaleMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetScaleMinValue", GetScaleMinValue);
	Nan::SetPrototypeMethod(tpl, "getScaleMinValue", GetScaleMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetColor", SetColor);
	Nan::SetPrototypeMethod(tpl, "setColor", SetColor);

	Nan::SetPrototypeMethod(tpl, "SetCross", SetCross);
	Nan::SetPrototypeMethod(tpl, "setCross", SetCross);

	Nan::SetPrototypeMethod(tpl, "SetDash", SetDash);
	Nan::SetPrototypeMethod(tpl, "setDash", SetDash);

	Nan::SetPrototypeMethod(tpl, "SetFilled", SetFilled);
	Nan::SetPrototypeMethod(tpl, "setFilled", SetFilled);

	Nan::SetPrototypeMethod(tpl, "SetGlyphType", SetGlyphType);
	Nan::SetPrototypeMethod(tpl, "setGlyphType", SetGlyphType);

	Nan::SetPrototypeMethod(tpl, "SetGlyphTypeToArrow", SetGlyphTypeToArrow);
	Nan::SetPrototypeMethod(tpl, "setGlyphTypeToArrow", SetGlyphTypeToArrow);

	Nan::SetPrototypeMethod(tpl, "SetGlyphTypeToCircle", SetGlyphTypeToCircle);
	Nan::SetPrototypeMethod(tpl, "setGlyphTypeToCircle", SetGlyphTypeToCircle);

	Nan::SetPrototypeMethod(tpl, "SetGlyphTypeToCross", SetGlyphTypeToCross);
	Nan::SetPrototypeMethod(tpl, "setGlyphTypeToCross", SetGlyphTypeToCross);

	Nan::SetPrototypeMethod(tpl, "SetGlyphTypeToDash", SetGlyphTypeToDash);
	Nan::SetPrototypeMethod(tpl, "setGlyphTypeToDash", SetGlyphTypeToDash);

	Nan::SetPrototypeMethod(tpl, "SetGlyphTypeToDiamond", SetGlyphTypeToDiamond);
	Nan::SetPrototypeMethod(tpl, "setGlyphTypeToDiamond", SetGlyphTypeToDiamond);

	Nan::SetPrototypeMethod(tpl, "SetGlyphTypeToEdgeArrow", SetGlyphTypeToEdgeArrow);
	Nan::SetPrototypeMethod(tpl, "setGlyphTypeToEdgeArrow", SetGlyphTypeToEdgeArrow);

	Nan::SetPrototypeMethod(tpl, "SetGlyphTypeToHookedArrow", SetGlyphTypeToHookedArrow);
	Nan::SetPrototypeMethod(tpl, "setGlyphTypeToHookedArrow", SetGlyphTypeToHookedArrow);

	Nan::SetPrototypeMethod(tpl, "SetGlyphTypeToNone", SetGlyphTypeToNone);
	Nan::SetPrototypeMethod(tpl, "setGlyphTypeToNone", SetGlyphTypeToNone);

	Nan::SetPrototypeMethod(tpl, "SetGlyphTypeToSquare", SetGlyphTypeToSquare);
	Nan::SetPrototypeMethod(tpl, "setGlyphTypeToSquare", SetGlyphTypeToSquare);

	Nan::SetPrototypeMethod(tpl, "SetGlyphTypeToThickArrow", SetGlyphTypeToThickArrow);
	Nan::SetPrototypeMethod(tpl, "setGlyphTypeToThickArrow", SetGlyphTypeToThickArrow);

	Nan::SetPrototypeMethod(tpl, "SetGlyphTypeToThickCross", SetGlyphTypeToThickCross);
	Nan::SetPrototypeMethod(tpl, "setGlyphTypeToThickCross", SetGlyphTypeToThickCross);

	Nan::SetPrototypeMethod(tpl, "SetGlyphTypeToTriangle", SetGlyphTypeToTriangle);
	Nan::SetPrototypeMethod(tpl, "setGlyphTypeToTriangle", SetGlyphTypeToTriangle);

	Nan::SetPrototypeMethod(tpl, "SetGlyphTypeToVertex", SetGlyphTypeToVertex);
	Nan::SetPrototypeMethod(tpl, "setGlyphTypeToVertex", SetGlyphTypeToVertex);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetRotationAngle", SetRotationAngle);
	Nan::SetPrototypeMethod(tpl, "setRotationAngle", SetRotationAngle);

	Nan::SetPrototypeMethod(tpl, "SetScale", SetScale);
	Nan::SetPrototypeMethod(tpl, "setScale", SetScale);

	Nan::SetPrototypeMethod(tpl, "SetScale2", SetScale2);
	Nan::SetPrototypeMethod(tpl, "setScale2", SetScale2);

	ptpl.Reset( tpl );
}

void VtkGlyphSource2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGlyphSource2D> native = vtkSmartPointer<vtkGlyphSource2D>::New();
		VtkGlyphSource2DWrap* obj = new VtkGlyphSource2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGlyphSource2DWrap::CrossOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CrossOff();
}

void VtkGlyphSource2DWrap::CrossOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CrossOn();
}

void VtkGlyphSource2DWrap::DashOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DashOff();
}

void VtkGlyphSource2DWrap::DashOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DashOn();
}

void VtkGlyphSource2DWrap::FilledOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FilledOff();
}

void VtkGlyphSource2DWrap::FilledOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FilledOn();
}

void VtkGlyphSource2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGlyphSource2DWrap::GetCross(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCross();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::GetDash(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDash();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::GetFilled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilled();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::GetGlyphType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlyphType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::GetGlyphTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlyphTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::GetGlyphTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlyphTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::GetRotationAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRotationAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::GetScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::GetScale2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScale2();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::GetScale2MaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScale2MaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::GetScale2MinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScale2MinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::GetScaleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::GetScaleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyphSource2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
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

void VtkGlyphSource2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	vtkGlyphSource2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGlyphSource2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGlyphSource2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGlyphSource2DWrap *w = new VtkGlyphSource2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGlyphSource2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGlyphSource2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGlyphSource2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGlyphSource2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGlyphSource2DWrap *w = new VtkGlyphSource2DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyphSource2DWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetCenter(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyphSource2DWrap::SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyphSource2DWrap::SetCross(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCross(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyphSource2DWrap::SetDash(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDash(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyphSource2DWrap::SetFilled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyphSource2DWrap::SetGlyphType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGlyphType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyphSource2DWrap::SetGlyphTypeToArrow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGlyphTypeToArrow();
}

void VtkGlyphSource2DWrap::SetGlyphTypeToCircle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGlyphTypeToCircle();
}

void VtkGlyphSource2DWrap::SetGlyphTypeToCross(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGlyphTypeToCross();
}

void VtkGlyphSource2DWrap::SetGlyphTypeToDash(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGlyphTypeToDash();
}

void VtkGlyphSource2DWrap::SetGlyphTypeToDiamond(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGlyphTypeToDiamond();
}

void VtkGlyphSource2DWrap::SetGlyphTypeToEdgeArrow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGlyphTypeToEdgeArrow();
}

void VtkGlyphSource2DWrap::SetGlyphTypeToHookedArrow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGlyphTypeToHookedArrow();
}

void VtkGlyphSource2DWrap::SetGlyphTypeToNone(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGlyphTypeToNone();
}

void VtkGlyphSource2DWrap::SetGlyphTypeToSquare(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGlyphTypeToSquare();
}

void VtkGlyphSource2DWrap::SetGlyphTypeToThickArrow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGlyphTypeToThickArrow();
}

void VtkGlyphSource2DWrap::SetGlyphTypeToThickCross(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGlyphTypeToThickCross();
}

void VtkGlyphSource2DWrap::SetGlyphTypeToTriangle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGlyphTypeToTriangle();
}

void VtkGlyphSource2DWrap::SetGlyphTypeToVertex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGlyphTypeToVertex();
}

void VtkGlyphSource2DWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyphSource2DWrap::SetRotationAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRotationAngle(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyphSource2DWrap::SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyphSource2DWrap::SetScale2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyphSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkGlyphSource2DWrap>(info.Holder());
	vtkGlyphSource2D *native = (vtkGlyphSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScale2(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

