/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkParametricFunctionWrap.h"
#include "vtkParametricPluckerConoidWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkParametricPluckerConoidWrap::ptpl;

VtkParametricPluckerConoidWrap::VtkParametricPluckerConoidWrap()
{ }

VtkParametricPluckerConoidWrap::VtkParametricPluckerConoidWrap(vtkSmartPointer<vtkParametricPluckerConoid> _native)
{ native = _native; }

VtkParametricPluckerConoidWrap::~VtkParametricPluckerConoidWrap()
{ }

void VtkParametricPluckerConoidWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkParametricPluckerConoid").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ParametricPluckerConoid").ToLocalChecked(), ConstructorGetter);
}

void VtkParametricPluckerConoidWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkParametricPluckerConoidWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkParametricFunctionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkParametricFunctionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkParametricPluckerConoidWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Evaluate", Evaluate);
	Nan::SetPrototypeMethod(tpl, "evaluate", Evaluate);

	Nan::SetPrototypeMethod(tpl, "EvaluateScalar", EvaluateScalar);
	Nan::SetPrototypeMethod(tpl, "evaluateScalar", EvaluateScalar);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "GetN", GetN);
	Nan::SetPrototypeMethod(tpl, "getN", GetN);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetN", SetN);
	Nan::SetPrototypeMethod(tpl, "setN", SetN);

#ifdef VTK_NODE_PLUS_VTKPARAMETRICPLUCKERCONOIDWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPARAMETRICPLUCKERCONOIDWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkParametricPluckerConoidWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkParametricPluckerConoid> native = vtkSmartPointer<vtkParametricPluckerConoid>::New();
		VtkParametricPluckerConoidWrap* obj = new VtkParametricPluckerConoidWrap(native);
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

void VtkParametricPluckerConoidWrap::Evaluate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricPluckerConoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricPluckerConoidWrap>(info.Holder());
	vtkParametricPluckerConoid *native = (vtkParametricPluckerConoid *)wrapper->native.GetPointer();
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

void VtkParametricPluckerConoidWrap::EvaluateScalar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricPluckerConoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricPluckerConoidWrap>(info.Holder());
	vtkParametricPluckerConoid *native = (vtkParametricPluckerConoid *)wrapper->native.GetPointer();
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

void VtkParametricPluckerConoidWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricPluckerConoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricPluckerConoidWrap>(info.Holder());
	vtkParametricPluckerConoid *native = (vtkParametricPluckerConoid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkParametricPluckerConoidWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricPluckerConoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricPluckerConoidWrap>(info.Holder());
	vtkParametricPluckerConoid *native = (vtkParametricPluckerConoid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricPluckerConoidWrap::GetN(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricPluckerConoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricPluckerConoidWrap>(info.Holder());
	vtkParametricPluckerConoid *native = (vtkParametricPluckerConoid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetN();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricPluckerConoidWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricPluckerConoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricPluckerConoidWrap>(info.Holder());
	vtkParametricPluckerConoid *native = (vtkParametricPluckerConoid *)wrapper->native.GetPointer();
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

void VtkParametricPluckerConoidWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricPluckerConoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricPluckerConoidWrap>(info.Holder());
	vtkParametricPluckerConoid *native = (vtkParametricPluckerConoid *)wrapper->native.GetPointer();
	vtkParametricPluckerConoid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkParametricPluckerConoidWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParametricPluckerConoidWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParametricPluckerConoidWrap *w = new VtkParametricPluckerConoidWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParametricPluckerConoidWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricPluckerConoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricPluckerConoidWrap>(info.Holder());
	vtkParametricPluckerConoid *native = (vtkParametricPluckerConoid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkParametricPluckerConoid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkParametricPluckerConoidWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkParametricPluckerConoidWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParametricPluckerConoidWrap *w = new VtkParametricPluckerConoidWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricPluckerConoidWrap::SetN(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricPluckerConoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricPluckerConoidWrap>(info.Holder());
	vtkParametricPluckerConoid *native = (vtkParametricPluckerConoid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetN(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

