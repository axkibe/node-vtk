/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageBSplineCoefficientsWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageBSplineCoefficientsWrap::ptpl;

VtkImageBSplineCoefficientsWrap::VtkImageBSplineCoefficientsWrap()
{ }

VtkImageBSplineCoefficientsWrap::VtkImageBSplineCoefficientsWrap(vtkSmartPointer<vtkImageBSplineCoefficients> _native)
{ native = _native; }

VtkImageBSplineCoefficientsWrap::~VtkImageBSplineCoefficientsWrap()
{ }

void VtkImageBSplineCoefficientsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageBSplineCoefficients").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageBSplineCoefficients").ToLocalChecked(), ConstructorGetter);
}

void VtkImageBSplineCoefficientsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageBSplineCoefficientsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageBSplineCoefficientsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BypassOff", BypassOff);
	Nan::SetPrototypeMethod(tpl, "bypassOff", BypassOff);

	Nan::SetPrototypeMethod(tpl, "BypassOn", BypassOn);
	Nan::SetPrototypeMethod(tpl, "bypassOn", BypassOn);

	Nan::SetPrototypeMethod(tpl, "CheckBounds", CheckBounds);
	Nan::SetPrototypeMethod(tpl, "checkBounds", CheckBounds);

	Nan::SetPrototypeMethod(tpl, "Evaluate", Evaluate);
	Nan::SetPrototypeMethod(tpl, "evaluate", Evaluate);

	Nan::SetPrototypeMethod(tpl, "GetBorderMode", GetBorderMode);
	Nan::SetPrototypeMethod(tpl, "getBorderMode", GetBorderMode);

	Nan::SetPrototypeMethod(tpl, "GetBorderModeAsString", GetBorderModeAsString);
	Nan::SetPrototypeMethod(tpl, "getBorderModeAsString", GetBorderModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetBorderModeMaxValue", GetBorderModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getBorderModeMaxValue", GetBorderModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetBorderModeMinValue", GetBorderModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getBorderModeMinValue", GetBorderModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetBypass", GetBypass);
	Nan::SetPrototypeMethod(tpl, "getBypass", GetBypass);

	Nan::SetPrototypeMethod(tpl, "GetOutputScalarType", GetOutputScalarType);
	Nan::SetPrototypeMethod(tpl, "getOutputScalarType", GetOutputScalarType);

	Nan::SetPrototypeMethod(tpl, "GetOutputScalarTypeAsString", GetOutputScalarTypeAsString);
	Nan::SetPrototypeMethod(tpl, "getOutputScalarTypeAsString", GetOutputScalarTypeAsString);

	Nan::SetPrototypeMethod(tpl, "GetOutputScalarTypeMaxValue", GetOutputScalarTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOutputScalarTypeMaxValue", GetOutputScalarTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputScalarTypeMinValue", GetOutputScalarTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getOutputScalarTypeMinValue", GetOutputScalarTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSplineDegree", GetSplineDegree);
	Nan::SetPrototypeMethod(tpl, "getSplineDegree", GetSplineDegree);

	Nan::SetPrototypeMethod(tpl, "GetSplineDegreeMaxValue", GetSplineDegreeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSplineDegreeMaxValue", GetSplineDegreeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSplineDegreeMinValue", GetSplineDegreeMinValue);
	Nan::SetPrototypeMethod(tpl, "getSplineDegreeMinValue", GetSplineDegreeMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBorderMode", SetBorderMode);
	Nan::SetPrototypeMethod(tpl, "setBorderMode", SetBorderMode);

	Nan::SetPrototypeMethod(tpl, "SetBorderModeToClamp", SetBorderModeToClamp);
	Nan::SetPrototypeMethod(tpl, "setBorderModeToClamp", SetBorderModeToClamp);

	Nan::SetPrototypeMethod(tpl, "SetBorderModeToMirror", SetBorderModeToMirror);
	Nan::SetPrototypeMethod(tpl, "setBorderModeToMirror", SetBorderModeToMirror);

	Nan::SetPrototypeMethod(tpl, "SetBorderModeToRepeat", SetBorderModeToRepeat);
	Nan::SetPrototypeMethod(tpl, "setBorderModeToRepeat", SetBorderModeToRepeat);

	Nan::SetPrototypeMethod(tpl, "SetBypass", SetBypass);
	Nan::SetPrototypeMethod(tpl, "setBypass", SetBypass);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarType", SetOutputScalarType);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarType", SetOutputScalarType);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToDouble", SetOutputScalarTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToDouble", SetOutputScalarTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToFloat", SetOutputScalarTypeToFloat);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToFloat", SetOutputScalarTypeToFloat);

	Nan::SetPrototypeMethod(tpl, "SetSplineDegree", SetSplineDegree);
	Nan::SetPrototypeMethod(tpl, "setSplineDegree", SetSplineDegree);

#ifdef VTK_NODE_PLUS_VTKIMAGEBSPLINECOEFFICIENTSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGEBSPLINECOEFFICIENTSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageBSplineCoefficientsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageBSplineCoefficients> native = vtkSmartPointer<vtkImageBSplineCoefficients>::New();
		VtkImageBSplineCoefficientsWrap* obj = new VtkImageBSplineCoefficientsWrap(native);
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

void VtkImageBSplineCoefficientsWrap::BypassOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BypassOff();
}

void VtkImageBSplineCoefficientsWrap::BypassOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BypassOn();
}

void VtkImageBSplineCoefficientsWrap::CheckBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CheckBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		info.GetReturnValue().Set(Nan::New(r));
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
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CheckBounds(
			b0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBSplineCoefficientsWrap::Evaluate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Evaluate(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		info.GetReturnValue().Set(Nan::New(r));
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
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Evaluate(
			b0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->Evaluate(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBSplineCoefficientsWrap::GetBorderMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBorderMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBSplineCoefficientsWrap::GetBorderModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBorderModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageBSplineCoefficientsWrap::GetBorderModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBorderModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBSplineCoefficientsWrap::GetBorderModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBorderModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBSplineCoefficientsWrap::GetBypass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBypass();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBSplineCoefficientsWrap::GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBSplineCoefficientsWrap::GetOutputScalarTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputScalarTypeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageBSplineCoefficientsWrap::GetOutputScalarTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputScalarTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBSplineCoefficientsWrap::GetOutputScalarTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputScalarTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBSplineCoefficientsWrap::GetSplineDegree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplineDegree();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBSplineCoefficientsWrap::GetSplineDegreeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplineDegreeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBSplineCoefficientsWrap::GetSplineDegreeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplineDegreeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageBSplineCoefficientsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	vtkImageBSplineCoefficients * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageBSplineCoefficientsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageBSplineCoefficientsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageBSplineCoefficientsWrap *w = new VtkImageBSplineCoefficientsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageBSplineCoefficientsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkImageBSplineCoefficients * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkImageBSplineCoefficientsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageBSplineCoefficientsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageBSplineCoefficientsWrap *w = new VtkImageBSplineCoefficientsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBSplineCoefficientsWrap::SetBorderMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBorderMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBSplineCoefficientsWrap::SetBorderModeToClamp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBorderModeToClamp();
}

void VtkImageBSplineCoefficientsWrap::SetBorderModeToMirror(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBorderModeToMirror();
}

void VtkImageBSplineCoefficientsWrap::SetBorderModeToRepeat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBorderModeToRepeat();
}

void VtkImageBSplineCoefficientsWrap::SetBypass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBypass(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBSplineCoefficientsWrap::SetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputScalarType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageBSplineCoefficientsWrap::SetOutputScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToDouble();
}

void VtkImageBSplineCoefficientsWrap::SetOutputScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToFloat();
}

void VtkImageBSplineCoefficientsWrap::SetSplineDegree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageBSplineCoefficientsWrap *wrapper = ObjectWrap::Unwrap<VtkImageBSplineCoefficientsWrap>(info.Holder());
	vtkImageBSplineCoefficients *native = (vtkImageBSplineCoefficients *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSplineDegree(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

