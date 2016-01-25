/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkSampleFunctionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImplicitFunctionWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSampleFunctionWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkSampleFunctionWrap::ptpl;

VtkSampleFunctionWrap::VtkSampleFunctionWrap()
{ }

VtkSampleFunctionWrap::VtkSampleFunctionWrap(vtkSmartPointer<vtkSampleFunction> _native)
{ native = _native; }

VtkSampleFunctionWrap::~VtkSampleFunctionWrap()
{ }

void VtkSampleFunctionWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkSampleFunctionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkSampleFunction").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("SampleFunction").ToLocalChecked(),tpl->GetFunction());
}

void VtkSampleFunctionWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CappingOff", CappingOff);
	Nan::SetPrototypeMethod(tpl, "cappingOff", CappingOff);

	Nan::SetPrototypeMethod(tpl, "CappingOn", CappingOn);
	Nan::SetPrototypeMethod(tpl, "cappingOn", CappingOn);

	Nan::SetPrototypeMethod(tpl, "ComputeNormalsOff", ComputeNormalsOff);
	Nan::SetPrototypeMethod(tpl, "computeNormalsOff", ComputeNormalsOff);

	Nan::SetPrototypeMethod(tpl, "ComputeNormalsOn", ComputeNormalsOn);
	Nan::SetPrototypeMethod(tpl, "computeNormalsOn", ComputeNormalsOn);

	Nan::SetPrototypeMethod(tpl, "GetCapValue", GetCapValue);
	Nan::SetPrototypeMethod(tpl, "getCapValue", GetCapValue);

	Nan::SetPrototypeMethod(tpl, "GetCapping", GetCapping);
	Nan::SetPrototypeMethod(tpl, "getCapping", GetCapping);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComputeNormals", GetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "getComputeNormals", GetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "GetImplicitFunction", GetImplicitFunction);
	Nan::SetPrototypeMethod(tpl, "getImplicitFunction", GetImplicitFunction);

	Nan::SetPrototypeMethod(tpl, "GetNormalArrayName", GetNormalArrayName);
	Nan::SetPrototypeMethod(tpl, "getNormalArrayName", GetNormalArrayName);

	Nan::SetPrototypeMethod(tpl, "GetOutputScalarType", GetOutputScalarType);
	Nan::SetPrototypeMethod(tpl, "getOutputScalarType", GetOutputScalarType);

	Nan::SetPrototypeMethod(tpl, "GetScalarArrayName", GetScalarArrayName);
	Nan::SetPrototypeMethod(tpl, "getScalarArrayName", GetScalarArrayName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCapValue", SetCapValue);
	Nan::SetPrototypeMethod(tpl, "setCapValue", SetCapValue);

	Nan::SetPrototypeMethod(tpl, "SetCapping", SetCapping);
	Nan::SetPrototypeMethod(tpl, "setCapping", SetCapping);

	Nan::SetPrototypeMethod(tpl, "SetComputeNormals", SetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "setComputeNormals", SetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "SetImplicitFunction", SetImplicitFunction);
	Nan::SetPrototypeMethod(tpl, "setImplicitFunction", SetImplicitFunction);

	Nan::SetPrototypeMethod(tpl, "SetModelBounds", SetModelBounds);
	Nan::SetPrototypeMethod(tpl, "setModelBounds", SetModelBounds);

	Nan::SetPrototypeMethod(tpl, "SetNormalArrayName", SetNormalArrayName);
	Nan::SetPrototypeMethod(tpl, "setNormalArrayName", SetNormalArrayName);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarType", SetOutputScalarType);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarType", SetOutputScalarType);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToChar", SetOutputScalarTypeToChar);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToChar", SetOutputScalarTypeToChar);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToDouble", SetOutputScalarTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToDouble", SetOutputScalarTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToFloat", SetOutputScalarTypeToFloat);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToFloat", SetOutputScalarTypeToFloat);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToInt", SetOutputScalarTypeToInt);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToInt", SetOutputScalarTypeToInt);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToLong", SetOutputScalarTypeToLong);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToLong", SetOutputScalarTypeToLong);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToShort", SetOutputScalarTypeToShort);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToShort", SetOutputScalarTypeToShort);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedChar", SetOutputScalarTypeToUnsignedChar);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedChar", SetOutputScalarTypeToUnsignedChar);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedInt", SetOutputScalarTypeToUnsignedInt);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedInt", SetOutputScalarTypeToUnsignedInt);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedLong", SetOutputScalarTypeToUnsignedLong);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedLong", SetOutputScalarTypeToUnsignedLong);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedShort", SetOutputScalarTypeToUnsignedShort);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedShort", SetOutputScalarTypeToUnsignedShort);

	Nan::SetPrototypeMethod(tpl, "SetSampleDimensions", SetSampleDimensions);
	Nan::SetPrototypeMethod(tpl, "setSampleDimensions", SetSampleDimensions);

	Nan::SetPrototypeMethod(tpl, "SetScalarArrayName", SetScalarArrayName);
	Nan::SetPrototypeMethod(tpl, "setScalarArrayName", SetScalarArrayName);

	Nan::SetPrototypeMethod(tpl, "SetScalars", SetScalars);
	Nan::SetPrototypeMethod(tpl, "setScalars", SetScalars);

}

void VtkSampleFunctionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSampleFunction> native = vtkSmartPointer<vtkSampleFunction>::New();
		VtkSampleFunctionWrap* obj = new VtkSampleFunctionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSampleFunctionWrap::CappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOff();
}

void VtkSampleFunctionWrap::CappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOn();
}

void VtkSampleFunctionWrap::ComputeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOff();
}

void VtkSampleFunctionWrap::ComputeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOn();
}

void VtkSampleFunctionWrap::GetCapValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCapValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSampleFunctionWrap::GetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCapping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSampleFunctionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSampleFunctionWrap::GetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSampleFunctionWrap::GetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	vtkImplicitFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImplicitFunction();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImplicitFunctionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImplicitFunctionWrap *w = new VtkImplicitFunctionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSampleFunctionWrap::GetNormalArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSampleFunctionWrap::GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSampleFunctionWrap::GetScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSampleFunctionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
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

void VtkSampleFunctionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	vtkSampleFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSampleFunctionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSampleFunctionWrap *w = new VtkSampleFunctionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSampleFunctionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSampleFunction * r;
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
			Nan::New<v8::Function>(VtkSampleFunctionWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSampleFunctionWrap *w = new VtkSampleFunctionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSampleFunctionWrap::SetCapValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCapValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSampleFunctionWrap::SetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCapping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSampleFunctionWrap::SetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeNormals(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSampleFunctionWrap::SetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkImplicitFunctionWrap *a0 = ObjectWrap::Unwrap<VtkImplicitFunctionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImplicitFunction(
			(vtkImplicitFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSampleFunctionWrap::SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
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

void VtkSampleFunctionWrap::SetNormalArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSampleFunctionWrap::SetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
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

void VtkSampleFunctionWrap::SetOutputScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToChar();
}

void VtkSampleFunctionWrap::SetOutputScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToDouble();
}

void VtkSampleFunctionWrap::SetOutputScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToFloat();
}

void VtkSampleFunctionWrap::SetOutputScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToInt();
}

void VtkSampleFunctionWrap::SetOutputScalarTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToLong();
}

void VtkSampleFunctionWrap::SetOutputScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToShort();
}

void VtkSampleFunctionWrap::SetOutputScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedChar();
}

void VtkSampleFunctionWrap::SetOutputScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedInt();
}

void VtkSampleFunctionWrap::SetOutputScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedLong();
}

void VtkSampleFunctionWrap::SetOutputScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedShort();
}

void VtkSampleFunctionWrap::SetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
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

void VtkSampleFunctionWrap::SetScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSampleFunctionWrap::SetScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkSampleFunctionWrap>(info.Holder());
	vtkSampleFunction *native = (vtkSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalars(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

