/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkMathWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkMathWrap::constructor;

VtkMathWrap::VtkMathWrap()
{ }

VtkMathWrap::VtkMathWrap(vtkSmartPointer<vtkMath> _native)
{ native = _native; }

VtkMathWrap::~VtkMathWrap()
{ }

void VtkMathWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkMathWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkMath").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Math").ToLocalChecked(),tpl->GetFunction());
}

void VtkMathWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "Ceil", Ceil);
	Nan::SetPrototypeMethod(tpl, "ceil", Ceil);

	Nan::SetPrototypeMethod(tpl, "DegreesFromRadians", DegreesFromRadians);
	Nan::SetPrototypeMethod(tpl, "degreesFromRadians", DegreesFromRadians);

	Nan::SetPrototypeMethod(tpl, "Determinant2x2", Determinant2x2);
	Nan::SetPrototypeMethod(tpl, "determinant2x2", Determinant2x2);

	Nan::SetPrototypeMethod(tpl, "Determinant3x3", Determinant3x3);
	Nan::SetPrototypeMethod(tpl, "determinant3x3", Determinant3x3);

	Nan::SetPrototypeMethod(tpl, "DoublePi", DoublePi);
	Nan::SetPrototypeMethod(tpl, "doublePi", DoublePi);

	Nan::SetPrototypeMethod(tpl, "DoubleTwoPi", DoubleTwoPi);
	Nan::SetPrototypeMethod(tpl, "doubleTwoPi", DoubleTwoPi);

	Nan::SetPrototypeMethod(tpl, "Floor", Floor);
	Nan::SetPrototypeMethod(tpl, "floor", Floor);

	Nan::SetPrototypeMethod(tpl, "Gaussian", Gaussian);
	Nan::SetPrototypeMethod(tpl, "gaussian", Gaussian);

	Nan::SetPrototypeMethod(tpl, "GaussianAmplitude", GaussianAmplitude);
	Nan::SetPrototypeMethod(tpl, "gaussianAmplitude", GaussianAmplitude);

	Nan::SetPrototypeMethod(tpl, "GaussianWeight", GaussianWeight);
	Nan::SetPrototypeMethod(tpl, "gaussianWeight", GaussianWeight);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetScalarTypeFittingRange", GetScalarTypeFittingRange);
	Nan::SetPrototypeMethod(tpl, "getScalarTypeFittingRange", GetScalarTypeFittingRange);

	Nan::SetPrototypeMethod(tpl, "GetSeed", GetSeed);
	Nan::SetPrototypeMethod(tpl, "getSeed", GetSeed);

	Nan::SetPrototypeMethod(tpl, "Inf", Inf);
	Nan::SetPrototypeMethod(tpl, "inf", Inf);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsInf", IsInf);
	Nan::SetPrototypeMethod(tpl, "isInf", IsInf);

	Nan::SetPrototypeMethod(tpl, "IsNan", IsNan);
	Nan::SetPrototypeMethod(tpl, "isNan", IsNan);

	Nan::SetPrototypeMethod(tpl, "Nan", Nan);
	Nan::SetPrototypeMethod(tpl, "nan", Nan);

	Nan::SetPrototypeMethod(tpl, "NearestPowerOfTwo", NearestPowerOfTwo);
	Nan::SetPrototypeMethod(tpl, "nearestPowerOfTwo", NearestPowerOfTwo);

	Nan::SetPrototypeMethod(tpl, "NegInf", NegInf);
	Nan::SetPrototypeMethod(tpl, "negInf", NegInf);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Pi", Pi);
	Nan::SetPrototypeMethod(tpl, "pi", Pi);

	Nan::SetPrototypeMethod(tpl, "RadiansFromDegrees", RadiansFromDegrees);
	Nan::SetPrototypeMethod(tpl, "radiansFromDegrees", RadiansFromDegrees);

	Nan::SetPrototypeMethod(tpl, "Random", Random);
	Nan::SetPrototypeMethod(tpl, "random", Random);

	Nan::SetPrototypeMethod(tpl, "RandomSeed", RandomSeed);
	Nan::SetPrototypeMethod(tpl, "randomSeed", RandomSeed);

	Nan::SetPrototypeMethod(tpl, "Round", Round);
	Nan::SetPrototypeMethod(tpl, "round", Round);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkMathWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMath> native = vtkSmartPointer<vtkMath>::New();
		VtkMathWrap* obj = new VtkMathWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMathWrap::Ceil(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Ceil(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::DegreesFromRadians(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->DegreesFromRadians(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::Determinant2x2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					double r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->Determinant2x2(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::Determinant3x3(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() > 6 && info[6]->IsNumber())
							{
								if(info.Length() > 7 && info[7]->IsNumber())
								{
									if(info.Length() > 8 && info[8]->IsNumber())
									{
										double r;
										if(info.Length() != 9)
										{
											Nan::ThrowError("Too many parameters.");
											return;
										}
										r = native->Determinant3x3(
											info[0]->NumberValue(),
											info[1]->NumberValue(),
											info[2]->NumberValue(),
											info[3]->NumberValue(),
											info[4]->NumberValue(),
											info[5]->NumberValue(),
											info[6]->NumberValue(),
											info[7]->NumberValue(),
											info[8]->NumberValue()
										);
										info.GetReturnValue().Set(Nan::New(r));
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::DoublePi(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DoublePi();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMathWrap::DoubleTwoPi(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DoubleTwoPi();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMathWrap::Floor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Floor(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::Gaussian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			double r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Gaussian(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Gaussian();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMathWrap::GaussianAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				r = native->GaussianAmplitude(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
			double r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GaussianAmplitude(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::GaussianWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				r = native->GaussianWeight(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
			double r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GaussianWeight(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMathWrap::GetScalarTypeFittingRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->GetScalarTypeFittingRange(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::GetSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSeed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMathWrap::Inf(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Inf();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMathWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
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

void VtkMathWrap::IsInf(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsInf(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::IsNan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsNan(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::Nan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Nan();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMathWrap::NearestPowerOfTwo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->NearestPowerOfTwo(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::NegInf(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NegInf();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMathWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	vtkMath * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMathWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMathWrap *w = new VtkMathWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMathWrap::Pi(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Pi();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMathWrap::RadiansFromDegrees(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RadiansFromDegrees(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::Random(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			double r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Random(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Random();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMathWrap::RandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RandomSeed(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::Round(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Round(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMathWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMathWrap *wrapper = ObjectWrap::Unwrap<VtkMathWrap>(info.Holder());
	vtkMath *native = (vtkMath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMath * r;
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
			Nan::New<v8::Function>(VtkMathWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMathWrap *w = new VtkMathWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

