/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkPointLoadWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPointLoadWrap::ptpl;

VtkPointLoadWrap::VtkPointLoadWrap()
{ }

VtkPointLoadWrap::VtkPointLoadWrap(vtkSmartPointer<vtkPointLoad> _native)
{ native = _native; }

VtkPointLoadWrap::~VtkPointLoadWrap()
{ }

void VtkPointLoadWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPointLoad").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PointLoad").ToLocalChecked(), ConstructorGetter);
}

void VtkPointLoadWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPointLoadWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPointLoadWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeEffectiveStressOff", ComputeEffectiveStressOff);
	Nan::SetPrototypeMethod(tpl, "computeEffectiveStressOff", ComputeEffectiveStressOff);

	Nan::SetPrototypeMethod(tpl, "ComputeEffectiveStressOn", ComputeEffectiveStressOn);
	Nan::SetPrototypeMethod(tpl, "computeEffectiveStressOn", ComputeEffectiveStressOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComputeEffectiveStress", GetComputeEffectiveStress);
	Nan::SetPrototypeMethod(tpl, "getComputeEffectiveStress", GetComputeEffectiveStress);

	Nan::SetPrototypeMethod(tpl, "GetLoadValue", GetLoadValue);
	Nan::SetPrototypeMethod(tpl, "getLoadValue", GetLoadValue);

	Nan::SetPrototypeMethod(tpl, "GetPoissonsRatio", GetPoissonsRatio);
	Nan::SetPrototypeMethod(tpl, "getPoissonsRatio", GetPoissonsRatio);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetComputeEffectiveStress", SetComputeEffectiveStress);
	Nan::SetPrototypeMethod(tpl, "setComputeEffectiveStress", SetComputeEffectiveStress);

	Nan::SetPrototypeMethod(tpl, "SetLoadValue", SetLoadValue);
	Nan::SetPrototypeMethod(tpl, "setLoadValue", SetLoadValue);

	Nan::SetPrototypeMethod(tpl, "SetModelBounds", SetModelBounds);
	Nan::SetPrototypeMethod(tpl, "setModelBounds", SetModelBounds);

	Nan::SetPrototypeMethod(tpl, "SetPoissonsRatio", SetPoissonsRatio);
	Nan::SetPrototypeMethod(tpl, "setPoissonsRatio", SetPoissonsRatio);

	Nan::SetPrototypeMethod(tpl, "SetSampleDimensions", SetSampleDimensions);
	Nan::SetPrototypeMethod(tpl, "setSampleDimensions", SetSampleDimensions);

	ptpl.Reset( tpl );
}

void VtkPointLoadWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPointLoad> native = vtkSmartPointer<vtkPointLoad>::New();
		VtkPointLoadWrap* obj = new VtkPointLoadWrap(native);
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

void VtkPointLoadWrap::ComputeEffectiveStressOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeEffectiveStressOff();
}

void VtkPointLoadWrap::ComputeEffectiveStressOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeEffectiveStressOn();
}

void VtkPointLoadWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPointLoadWrap::GetComputeEffectiveStress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeEffectiveStress();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointLoadWrap::GetLoadValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLoadValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointLoadWrap::GetPoissonsRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoissonsRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointLoadWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
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

void VtkPointLoadWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
	vtkPointLoad * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPointLoadWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointLoadWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointLoadWrap *w = new VtkPointLoadWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointLoadWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPointLoad * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPointLoadWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPointLoadWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointLoadWrap *w = new VtkPointLoadWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointLoadWrap::SetComputeEffectiveStress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeEffectiveStress(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointLoadWrap::SetLoadValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLoadValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointLoadWrap::SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
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
		native->SetModelBounds(
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
							native->SetModelBounds(
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

void VtkPointLoadWrap::SetPoissonsRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoissonsRatio(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointLoadWrap::SetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLoadWrap *wrapper = ObjectWrap::Unwrap<VtkPointLoadWrap>(info.Holder());
	vtkPointLoad *native = (vtkPointLoad *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		int b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSampleDimensions(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetSampleDimensions(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

