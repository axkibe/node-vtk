/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkParametricFunctionWrap.h"
#include "vtkParametricRandomHillsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkParametricRandomHillsWrap::ptpl;

VtkParametricRandomHillsWrap::VtkParametricRandomHillsWrap()
{ }

VtkParametricRandomHillsWrap::VtkParametricRandomHillsWrap(vtkSmartPointer<vtkParametricRandomHills> _native)
{ native = _native; }

VtkParametricRandomHillsWrap::~VtkParametricRandomHillsWrap()
{ }

void VtkParametricRandomHillsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkParametricRandomHills").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ParametricRandomHills").ToLocalChecked(), ConstructorGetter);
}

void VtkParametricRandomHillsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkParametricRandomHillsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkParametricFunctionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkParametricFunctionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkParametricRandomHillsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AllowRandomGenerationOff", AllowRandomGenerationOff);
	Nan::SetPrototypeMethod(tpl, "allowRandomGenerationOff", AllowRandomGenerationOff);

	Nan::SetPrototypeMethod(tpl, "AllowRandomGenerationOn", AllowRandomGenerationOn);
	Nan::SetPrototypeMethod(tpl, "allowRandomGenerationOn", AllowRandomGenerationOn);

	Nan::SetPrototypeMethod(tpl, "Evaluate", Evaluate);
	Nan::SetPrototypeMethod(tpl, "evaluate", Evaluate);

	Nan::SetPrototypeMethod(tpl, "EvaluateScalar", EvaluateScalar);
	Nan::SetPrototypeMethod(tpl, "evaluateScalar", EvaluateScalar);

	Nan::SetPrototypeMethod(tpl, "GenerateTheHills", GenerateTheHills);
	Nan::SetPrototypeMethod(tpl, "generateTheHills", GenerateTheHills);

	Nan::SetPrototypeMethod(tpl, "GetAllowRandomGeneration", GetAllowRandomGeneration);
	Nan::SetPrototypeMethod(tpl, "getAllowRandomGeneration", GetAllowRandomGeneration);

	Nan::SetPrototypeMethod(tpl, "GetAmplitudeScaleFactor", GetAmplitudeScaleFactor);
	Nan::SetPrototypeMethod(tpl, "getAmplitudeScaleFactor", GetAmplitudeScaleFactor);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "GetHillAmplitude", GetHillAmplitude);
	Nan::SetPrototypeMethod(tpl, "getHillAmplitude", GetHillAmplitude);

	Nan::SetPrototypeMethod(tpl, "GetHillXVariance", GetHillXVariance);
	Nan::SetPrototypeMethod(tpl, "getHillXVariance", GetHillXVariance);

	Nan::SetPrototypeMethod(tpl, "GetHillYVariance", GetHillYVariance);
	Nan::SetPrototypeMethod(tpl, "getHillYVariance", GetHillYVariance);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfHills", GetNumberOfHills);
	Nan::SetPrototypeMethod(tpl, "getNumberOfHills", GetNumberOfHills);

	Nan::SetPrototypeMethod(tpl, "GetRandomSeed", GetRandomSeed);
	Nan::SetPrototypeMethod(tpl, "getRandomSeed", GetRandomSeed);

	Nan::SetPrototypeMethod(tpl, "GetXVarianceScaleFactor", GetXVarianceScaleFactor);
	Nan::SetPrototypeMethod(tpl, "getXVarianceScaleFactor", GetXVarianceScaleFactor);

	Nan::SetPrototypeMethod(tpl, "GetYVarianceScaleFactor", GetYVarianceScaleFactor);
	Nan::SetPrototypeMethod(tpl, "getYVarianceScaleFactor", GetYVarianceScaleFactor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAllowRandomGeneration", SetAllowRandomGeneration);
	Nan::SetPrototypeMethod(tpl, "setAllowRandomGeneration", SetAllowRandomGeneration);

	Nan::SetPrototypeMethod(tpl, "SetAmplitudeScaleFactor", SetAmplitudeScaleFactor);
	Nan::SetPrototypeMethod(tpl, "setAmplitudeScaleFactor", SetAmplitudeScaleFactor);

	Nan::SetPrototypeMethod(tpl, "SetHillAmplitude", SetHillAmplitude);
	Nan::SetPrototypeMethod(tpl, "setHillAmplitude", SetHillAmplitude);

	Nan::SetPrototypeMethod(tpl, "SetHillXVariance", SetHillXVariance);
	Nan::SetPrototypeMethod(tpl, "setHillXVariance", SetHillXVariance);

	Nan::SetPrototypeMethod(tpl, "SetHillYVariance", SetHillYVariance);
	Nan::SetPrototypeMethod(tpl, "setHillYVariance", SetHillYVariance);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfHills", SetNumberOfHills);
	Nan::SetPrototypeMethod(tpl, "setNumberOfHills", SetNumberOfHills);

	Nan::SetPrototypeMethod(tpl, "SetRandomSeed", SetRandomSeed);
	Nan::SetPrototypeMethod(tpl, "setRandomSeed", SetRandomSeed);

	Nan::SetPrototypeMethod(tpl, "SetXVarianceScaleFactor", SetXVarianceScaleFactor);
	Nan::SetPrototypeMethod(tpl, "setXVarianceScaleFactor", SetXVarianceScaleFactor);

	Nan::SetPrototypeMethod(tpl, "SetYVarianceScaleFactor", SetYVarianceScaleFactor);
	Nan::SetPrototypeMethod(tpl, "setYVarianceScaleFactor", SetYVarianceScaleFactor);

	ptpl.Reset( tpl );
}

void VtkParametricRandomHillsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkParametricRandomHills> native = vtkSmartPointer<vtkParametricRandomHills>::New();
		VtkParametricRandomHillsWrap* obj = new VtkParametricRandomHillsWrap(native);
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

void VtkParametricRandomHillsWrap::AllowRandomGenerationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AllowRandomGenerationOff();
}

void VtkParametricRandomHillsWrap::AllowRandomGenerationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AllowRandomGenerationOn();
}

void VtkParametricRandomHillsWrap::Evaluate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsFloat64Array())
			{
				v8::Local<v8::Float64Array>a2(v8::Local<v8::Float64Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 9 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Evaluate(
					(double *)(a0->Buffer()->GetContents().Data()),
					(double *)(a1->Buffer()->GetContents().Data()),
					(double *)(a2->Buffer()->GetContents().Data())
				);
				return;
			}
			else if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
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
					(double *)(a0->Buffer()->GetContents().Data()),
					(double *)(a1->Buffer()->GetContents().Data()),
					b2
				);
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
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
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
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
					(double *)(a0->Buffer()->GetContents().Data()),
					b1,
					b2
				);
				return;
			}
		}
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
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
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
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
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
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
					(double *)(a1->Buffer()->GetContents().Data()),
					b2
				);
				return;
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
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
			if(info.Length() > 2 && info[2]->IsFloat64Array())
			{
				v8::Local<v8::Float64Array>a2(v8::Local<v8::Float64Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 9 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Evaluate(
					(double *)(a0->Buffer()->GetContents().Data()),
					b1,
					(double *)(a2->Buffer()->GetContents().Data())
				);
				return;
			}
		}
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
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
			if(info.Length() > 2 && info[2]->IsFloat64Array())
			{
				v8::Local<v8::Float64Array>a2(v8::Local<v8::Float64Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 9 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Evaluate(
					b0,
					b1,
					(double *)(a2->Buffer()->GetContents().Data())
				);
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsFloat64Array())
			{
				v8::Local<v8::Float64Array>a2(v8::Local<v8::Float64Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 9 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Evaluate(
					b0,
					(double *)(a1->Buffer()->GetContents().Data()),
					(double *)(a2->Buffer()->GetContents().Data())
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricRandomHillsWrap::EvaluateScalar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsFloat64Array())
			{
				v8::Local<v8::Float64Array>a2(v8::Local<v8::Float64Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 9 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->EvaluateScalar(
					(double *)(a0->Buffer()->GetContents().Data()),
					(double *)(a1->Buffer()->GetContents().Data()),
					(double *)(a2->Buffer()->GetContents().Data())
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
			else if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
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
					(double *)(a0->Buffer()->GetContents().Data()),
					(double *)(a1->Buffer()->GetContents().Data()),
					b2
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
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
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
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
					(double *)(a0->Buffer()->GetContents().Data()),
					b1,
					b2
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
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
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
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
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
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
					(double *)(a1->Buffer()->GetContents().Data()),
					b2
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
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
			if(info.Length() > 2 && info[2]->IsFloat64Array())
			{
				v8::Local<v8::Float64Array>a2(v8::Local<v8::Float64Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 9 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->EvaluateScalar(
					(double *)(a0->Buffer()->GetContents().Data()),
					b1,
					(double *)(a2->Buffer()->GetContents().Data())
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
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
			if(info.Length() > 2 && info[2]->IsFloat64Array())
			{
				v8::Local<v8::Float64Array>a2(v8::Local<v8::Float64Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 9 )
				{
					Nan::ThrowError("Array too short.");
					return;
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
					(double *)(a2->Buffer()->GetContents().Data())
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsFloat64Array())
			{
				v8::Local<v8::Float64Array>a2(v8::Local<v8::Float64Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 9 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->EvaluateScalar(
					b0,
					(double *)(a1->Buffer()->GetContents().Data()),
					(double *)(a2->Buffer()->GetContents().Data())
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricRandomHillsWrap::GenerateTheHills(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTheHills();
}

void VtkParametricRandomHillsWrap::GetAllowRandomGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAllowRandomGeneration();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricRandomHillsWrap::GetAmplitudeScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAmplitudeScaleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricRandomHillsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkParametricRandomHillsWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricRandomHillsWrap::GetHillAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHillAmplitude();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricRandomHillsWrap::GetHillXVariance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHillXVariance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricRandomHillsWrap::GetHillYVariance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHillYVariance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricRandomHillsWrap::GetNumberOfHills(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfHills();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricRandomHillsWrap::GetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomSeed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricRandomHillsWrap::GetXVarianceScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXVarianceScaleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricRandomHillsWrap::GetYVarianceScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYVarianceScaleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricRandomHillsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
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

void VtkParametricRandomHillsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	vtkParametricRandomHills * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkParametricRandomHillsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParametricRandomHillsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParametricRandomHillsWrap *w = new VtkParametricRandomHillsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParametricRandomHillsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkParametricRandomHills * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkParametricRandomHillsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkParametricRandomHillsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParametricRandomHillsWrap *w = new VtkParametricRandomHillsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricRandomHillsWrap::SetAllowRandomGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAllowRandomGeneration(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricRandomHillsWrap::SetAmplitudeScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAmplitudeScaleFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricRandomHillsWrap::SetHillAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHillAmplitude(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricRandomHillsWrap::SetHillXVariance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHillXVariance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricRandomHillsWrap::SetHillYVariance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHillYVariance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricRandomHillsWrap::SetNumberOfHills(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfHills(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricRandomHillsWrap::SetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRandomSeed(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricRandomHillsWrap::SetXVarianceScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXVarianceScaleFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricRandomHillsWrap::SetYVarianceScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricRandomHillsWrap *wrapper = ObjectWrap::Unwrap<VtkParametricRandomHillsWrap>(info.Holder());
	vtkParametricRandomHills *native = (vtkParametricRandomHills *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYVarianceScaleFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

