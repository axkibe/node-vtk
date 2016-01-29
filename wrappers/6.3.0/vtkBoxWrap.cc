/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImplicitFunctionWrap.h"
#include "vtkBoxWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBoxWrap::ptpl;

VtkBoxWrap::VtkBoxWrap()
{ }

VtkBoxWrap::VtkBoxWrap(vtkSmartPointer<vtkBox> _native)
{ native = _native; }

VtkBoxWrap::~VtkBoxWrap()
{ }

void VtkBoxWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBox").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Box").ToLocalChecked(), ConstructorGetter);
}

void VtkBoxWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBoxWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImplicitFunctionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImplicitFunctionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBoxWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddBounds", AddBounds);
	Nan::SetPrototypeMethod(tpl, "addBounds", AddBounds);

	Nan::SetPrototypeMethod(tpl, "EvaluateFunction", EvaluateFunction);
	Nan::SetPrototypeMethod(tpl, "evaluateFunction", EvaluateFunction);

	Nan::SetPrototypeMethod(tpl, "EvaluateGradient", EvaluateGradient);
	Nan::SetPrototypeMethod(tpl, "evaluateGradient", EvaluateGradient);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetXMax", GetXMax);
	Nan::SetPrototypeMethod(tpl, "getXMax", GetXMax);

	Nan::SetPrototypeMethod(tpl, "GetXMin", GetXMin);
	Nan::SetPrototypeMethod(tpl, "getXMin", GetXMin);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBounds", SetBounds);
	Nan::SetPrototypeMethod(tpl, "setBounds", SetBounds);

	Nan::SetPrototypeMethod(tpl, "SetXMax", SetXMax);
	Nan::SetPrototypeMethod(tpl, "setXMax", SetXMax);

	Nan::SetPrototypeMethod(tpl, "SetXMin", SetXMin);
	Nan::SetPrototypeMethod(tpl, "setXMin", SetXMin);

	ptpl.Reset( tpl );
}

void VtkBoxWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBox> native = vtkSmartPointer<vtkBox>::New();
		VtkBoxWrap* obj = new VtkBoxWrap(native);
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

void VtkBoxWrap::AddBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWrap>(info.Holder());
	vtkBox *native = (vtkBox *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->AddBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWrap::EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWrap>(info.Holder());
	vtkBox *native = (vtkBox *)wrapper->native.GetPointer();
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
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->EvaluateFunction(
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
				r = native->EvaluateFunction(
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

void VtkBoxWrap::EvaluateGradient(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWrap>(info.Holder());
	vtkBox *native = (vtkBox *)wrapper->native.GetPointer();
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
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->EvaluateGradient(
				b0,
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWrap>(info.Holder());
	vtkBox *native = (vtkBox *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWrap>(info.Holder());
	vtkBox *native = (vtkBox *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBoxWrap::GetXMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWrap>(info.Holder());
	vtkBox *native = (vtkBox *)wrapper->native.GetPointer();
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
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetXMax(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWrap::GetXMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWrap>(info.Holder());
	vtkBox *native = (vtkBox *)wrapper->native.GetPointer();
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
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetXMin(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWrap>(info.Holder());
	vtkBox *native = (vtkBox *)wrapper->native.GetPointer();
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

void VtkBoxWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWrap>(info.Holder());
	vtkBox *native = (vtkBox *)wrapper->native.GetPointer();
	vtkBox * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBoxWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBoxWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBoxWrap *w = new VtkBoxWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWrap>(info.Holder());
	vtkBox *native = (vtkBox *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBox * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBoxWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBoxWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBoxWrap *w = new VtkBoxWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWrap::SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWrap>(info.Holder());
	vtkBox *native = (vtkBox *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->SetBounds(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
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

void VtkBoxWrap::SetXMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWrap>(info.Holder());
	vtkBox *native = (vtkBox *)wrapper->native.GetPointer();
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
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXMax(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetXMax(
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

void VtkBoxWrap::SetXMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWrap>(info.Holder());
	vtkBox *native = (vtkBox *)wrapper->native.GetPointer();
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
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXMin(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetXMin(
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

