/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkVoxelModellerWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkVoxelModellerWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkVoxelModellerWrap::ptpl;

VtkVoxelModellerWrap::VtkVoxelModellerWrap()
{ }

VtkVoxelModellerWrap::VtkVoxelModellerWrap(vtkSmartPointer<vtkVoxelModeller> _native)
{ native = _native; }

VtkVoxelModellerWrap::~VtkVoxelModellerWrap()
{ }

void VtkVoxelModellerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVoxelModeller").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VoxelModeller").ToLocalChecked(), ConstructorGetter);
}

void VtkVoxelModellerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVoxelModellerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVoxelModellerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBackgroundValue", GetBackgroundValue);
	Nan::SetPrototypeMethod(tpl, "getBackgroundValue", GetBackgroundValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetForegroundValue", GetForegroundValue);
	Nan::SetPrototypeMethod(tpl, "getForegroundValue", GetForegroundValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumDistance", GetMaximumDistance);
	Nan::SetPrototypeMethod(tpl, "getMaximumDistance", GetMaximumDistance);

	Nan::SetPrototypeMethod(tpl, "GetMaximumDistanceMaxValue", GetMaximumDistanceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumDistanceMaxValue", GetMaximumDistanceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumDistanceMinValue", GetMaximumDistanceMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumDistanceMinValue", GetMaximumDistanceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetScalarType", GetScalarType);
	Nan::SetPrototypeMethod(tpl, "getScalarType", GetScalarType);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBackgroundValue", SetBackgroundValue);
	Nan::SetPrototypeMethod(tpl, "setBackgroundValue", SetBackgroundValue);

	Nan::SetPrototypeMethod(tpl, "SetForegroundValue", SetForegroundValue);
	Nan::SetPrototypeMethod(tpl, "setForegroundValue", SetForegroundValue);

	Nan::SetPrototypeMethod(tpl, "SetMaximumDistance", SetMaximumDistance);
	Nan::SetPrototypeMethod(tpl, "setMaximumDistance", SetMaximumDistance);

	Nan::SetPrototypeMethod(tpl, "SetModelBounds", SetModelBounds);
	Nan::SetPrototypeMethod(tpl, "setModelBounds", SetModelBounds);

	Nan::SetPrototypeMethod(tpl, "SetSampleDimensions", SetSampleDimensions);
	Nan::SetPrototypeMethod(tpl, "setSampleDimensions", SetSampleDimensions);

	Nan::SetPrototypeMethod(tpl, "SetScalarType", SetScalarType);
	Nan::SetPrototypeMethod(tpl, "setScalarType", SetScalarType);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToBit", SetScalarTypeToBit);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToBit", SetScalarTypeToBit);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToChar", SetScalarTypeToChar);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToChar", SetScalarTypeToChar);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToDouble", SetScalarTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToDouble", SetScalarTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToFloat", SetScalarTypeToFloat);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToFloat", SetScalarTypeToFloat);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToInt", SetScalarTypeToInt);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToInt", SetScalarTypeToInt);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToLong", SetScalarTypeToLong);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToLong", SetScalarTypeToLong);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToShort", SetScalarTypeToShort);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToShort", SetScalarTypeToShort);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedChar", SetScalarTypeToUnsignedChar);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedChar", SetScalarTypeToUnsignedChar);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedInt", SetScalarTypeToUnsignedInt);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedInt", SetScalarTypeToUnsignedInt);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedLong", SetScalarTypeToUnsignedLong);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedLong", SetScalarTypeToUnsignedLong);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedShort", SetScalarTypeToUnsignedShort);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedShort", SetScalarTypeToUnsignedShort);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkVoxelModellerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVoxelModeller> native = vtkSmartPointer<vtkVoxelModeller>::New();
		VtkVoxelModellerWrap* obj = new VtkVoxelModellerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkVoxelModellerWrap::GetBackgroundValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBackgroundValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVoxelModellerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVoxelModellerWrap::GetForegroundValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetForegroundValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVoxelModellerWrap::GetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVoxelModellerWrap::GetMaximumDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumDistanceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVoxelModellerWrap::GetMaximumDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumDistanceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVoxelModellerWrap::GetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVoxelModellerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
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

void VtkVoxelModellerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	vtkVoxelModeller * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkVoxelModellerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkVoxelModellerWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVoxelModellerWrap *w = new VtkVoxelModellerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVoxelModellerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVoxelModeller * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkVoxelModellerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkVoxelModellerWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVoxelModellerWrap *w = new VtkVoxelModellerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVoxelModellerWrap::SetBackgroundValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBackgroundValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVoxelModellerWrap::SetForegroundValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetForegroundValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVoxelModellerWrap::SetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVoxelModellerWrap::SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
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

void VtkVoxelModellerWrap::SetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkVoxelModellerWrap::SetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVoxelModellerWrap::SetScalarTypeToBit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToBit();
}

void VtkVoxelModellerWrap::SetScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToChar();
}

void VtkVoxelModellerWrap::SetScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToDouble();
}

void VtkVoxelModellerWrap::SetScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToFloat();
}

void VtkVoxelModellerWrap::SetScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToInt();
}

void VtkVoxelModellerWrap::SetScalarTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToLong();
}

void VtkVoxelModellerWrap::SetScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToShort();
}

void VtkVoxelModellerWrap::SetScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedChar();
}

void VtkVoxelModellerWrap::SetScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedInt();
}

void VtkVoxelModellerWrap::SetScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedLong();
}

void VtkVoxelModellerWrap::SetScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelModellerWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelModellerWrap>(info.Holder());
	vtkVoxelModeller *native = (vtkVoxelModeller *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedShort();
}

