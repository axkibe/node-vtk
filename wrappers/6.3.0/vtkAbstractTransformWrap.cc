/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkAbstractTransformWrap.h"
#include "vtkPointsWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractTransformWrap::ptpl;

VtkAbstractTransformWrap::VtkAbstractTransformWrap()
{ }

VtkAbstractTransformWrap::VtkAbstractTransformWrap(vtkSmartPointer<vtkAbstractTransform> _native)
{ native = _native; }

VtkAbstractTransformWrap::~VtkAbstractTransformWrap()
{ }

void VtkAbstractTransformWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractTransform").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractTransform").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractTransformWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractTransformWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CircuitCheck", CircuitCheck);
	Nan::SetPrototypeMethod(tpl, "circuitCheck", CircuitCheck);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInverse", GetInverse);
	Nan::SetPrototypeMethod(tpl, "getInverse", GetInverse);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInverse", SetInverse);
	Nan::SetPrototypeMethod(tpl, "setInverse", SetInverse);

	Nan::SetPrototypeMethod(tpl, "TransformNormalAtPoint", TransformNormalAtPoint);
	Nan::SetPrototypeMethod(tpl, "transformNormalAtPoint", TransformNormalAtPoint);

	Nan::SetPrototypeMethod(tpl, "TransformPoint", TransformPoint);
	Nan::SetPrototypeMethod(tpl, "transformPoint", TransformPoint);

	Nan::SetPrototypeMethod(tpl, "TransformPoints", TransformPoints);
	Nan::SetPrototypeMethod(tpl, "transformPoints", TransformPoints);

	Nan::SetPrototypeMethod(tpl, "TransformPointsNormalsVectors", TransformPointsNormalsVectors);
	Nan::SetPrototypeMethod(tpl, "transformPointsNormalsVectors", TransformPointsNormalsVectors);

	Nan::SetPrototypeMethod(tpl, "TransformVectorAtPoint", TransformVectorAtPoint);
	Nan::SetPrototypeMethod(tpl, "transformVectorAtPoint", TransformVectorAtPoint);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkAbstractTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkAbstractTransformWrap::CircuitCheck(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractTransformWrap *a0 = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CircuitCheck(
			(vtkAbstractTransform *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractTransformWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractTransformWrap *a0 = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkAbstractTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractTransformWrap::GetInverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInverse();
		VtkAbstractTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
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

void VtkAbstractTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAbstractTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAbstractTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAbstractTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAbstractTransformWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractTransformWrap::SetInverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractTransformWrap *a0 = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInverse(
			(vtkAbstractTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractTransformWrap::TransformNormalAtPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
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
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->TransformNormalAtPoint(
					(double *)(a0->Buffer()->GetContents().Data()),
					(double *)(a1->Buffer()->GetContents().Data()),
					(double *)(a2->Buffer()->GetContents().Data())
				);
				return;
			}
			else if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
				double b2[3];
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 3; i++ )
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
				native->TransformNormalAtPoint(
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
				double b2[3];
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 3; i++ )
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
				native->TransformNormalAtPoint(
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
				double b2[3];
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 3; i++ )
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
				native->TransformNormalAtPoint(
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
				double b2[3];
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 3; i++ )
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
				native->TransformNormalAtPoint(
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
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->TransformNormalAtPoint(
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
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->TransformNormalAtPoint(
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
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->TransformNormalAtPoint(
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

void VtkAbstractTransformWrap::TransformPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
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

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->TransformPoint(
				(double *)(a0->Buffer()->GetContents().Data()),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
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
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->TransformPoint(
				(double *)(a0->Buffer()->GetContents().Data()),
				b1
			);
			return;
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
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->TransformPoint(
				b0,
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->TransformPoint(
				b0,
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractTransformWrap::TransformPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPointsWrap *a1 = ObjectWrap::Unwrap<VtkPointsWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->TransformPoints(
				(vtkPoints *) a0->native.GetPointer(),
				(vtkPoints *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractTransformWrap::TransformPointsNormalsVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPointsWrap *a1 = ObjectWrap::Unwrap<VtkPointsWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkDataArrayWrap *a2 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkDataArrayWrap *a3 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkDataArrayWrap *a4 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[5]))
						{
							VtkDataArrayWrap *a5 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[5]->ToObject());
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->TransformPointsNormalsVectors(
								(vtkPoints *) a0->native.GetPointer(),
								(vtkPoints *) a1->native.GetPointer(),
								(vtkDataArray *) a2->native.GetPointer(),
								(vtkDataArray *) a3->native.GetPointer(),
								(vtkDataArray *) a4->native.GetPointer(),
								(vtkDataArray *) a5->native.GetPointer()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractTransformWrap::TransformVectorAtPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
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
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->TransformVectorAtPoint(
					(double *)(a0->Buffer()->GetContents().Data()),
					(double *)(a1->Buffer()->GetContents().Data()),
					(double *)(a2->Buffer()->GetContents().Data())
				);
				return;
			}
			else if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
				double b2[3];
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 3; i++ )
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
				native->TransformVectorAtPoint(
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
				double b2[3];
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 3; i++ )
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
				native->TransformVectorAtPoint(
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
				double b2[3];
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 3; i++ )
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
				native->TransformVectorAtPoint(
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
				double b2[3];
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 3; i++ )
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
				native->TransformVectorAtPoint(
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
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->TransformVectorAtPoint(
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
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->TransformVectorAtPoint(
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
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->TransformVectorAtPoint(
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

void VtkAbstractTransformWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractTransformWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info.Holder());
	vtkAbstractTransform *native = (vtkAbstractTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

