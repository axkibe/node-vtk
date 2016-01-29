/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageThresholdWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageThresholdWrap::ptpl;

VtkImageThresholdWrap::VtkImageThresholdWrap()
{ }

VtkImageThresholdWrap::VtkImageThresholdWrap(vtkSmartPointer<vtkImageThreshold> _native)
{ native = _native; }

VtkImageThresholdWrap::~VtkImageThresholdWrap()
{ }

void VtkImageThresholdWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageThreshold").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageThreshold").ToLocalChecked(), ConstructorGetter);
}

void VtkImageThresholdWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageThresholdWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageThresholdWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInValue", GetInValue);
	Nan::SetPrototypeMethod(tpl, "getInValue", GetInValue);

	Nan::SetPrototypeMethod(tpl, "GetLowerThreshold", GetLowerThreshold);
	Nan::SetPrototypeMethod(tpl, "getLowerThreshold", GetLowerThreshold);

	Nan::SetPrototypeMethod(tpl, "GetOutValue", GetOutValue);
	Nan::SetPrototypeMethod(tpl, "getOutValue", GetOutValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputScalarType", GetOutputScalarType);
	Nan::SetPrototypeMethod(tpl, "getOutputScalarType", GetOutputScalarType);

	Nan::SetPrototypeMethod(tpl, "GetReplaceIn", GetReplaceIn);
	Nan::SetPrototypeMethod(tpl, "getReplaceIn", GetReplaceIn);

	Nan::SetPrototypeMethod(tpl, "GetReplaceOut", GetReplaceOut);
	Nan::SetPrototypeMethod(tpl, "getReplaceOut", GetReplaceOut);

	Nan::SetPrototypeMethod(tpl, "GetUpperThreshold", GetUpperThreshold);
	Nan::SetPrototypeMethod(tpl, "getUpperThreshold", GetUpperThreshold);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReplaceInOff", ReplaceInOff);
	Nan::SetPrototypeMethod(tpl, "replaceInOff", ReplaceInOff);

	Nan::SetPrototypeMethod(tpl, "ReplaceInOn", ReplaceInOn);
	Nan::SetPrototypeMethod(tpl, "replaceInOn", ReplaceInOn);

	Nan::SetPrototypeMethod(tpl, "ReplaceOutOff", ReplaceOutOff);
	Nan::SetPrototypeMethod(tpl, "replaceOutOff", ReplaceOutOff);

	Nan::SetPrototypeMethod(tpl, "ReplaceOutOn", ReplaceOutOn);
	Nan::SetPrototypeMethod(tpl, "replaceOutOn", ReplaceOutOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInValue", SetInValue);
	Nan::SetPrototypeMethod(tpl, "setInValue", SetInValue);

	Nan::SetPrototypeMethod(tpl, "SetOutValue", SetOutValue);
	Nan::SetPrototypeMethod(tpl, "setOutValue", SetOutValue);

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

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToSignedChar", SetOutputScalarTypeToSignedChar);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToSignedChar", SetOutputScalarTypeToSignedChar);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedChar", SetOutputScalarTypeToUnsignedChar);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedChar", SetOutputScalarTypeToUnsignedChar);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedInt", SetOutputScalarTypeToUnsignedInt);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedInt", SetOutputScalarTypeToUnsignedInt);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedLong", SetOutputScalarTypeToUnsignedLong);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedLong", SetOutputScalarTypeToUnsignedLong);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedShort", SetOutputScalarTypeToUnsignedShort);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedShort", SetOutputScalarTypeToUnsignedShort);

	Nan::SetPrototypeMethod(tpl, "SetReplaceIn", SetReplaceIn);
	Nan::SetPrototypeMethod(tpl, "setReplaceIn", SetReplaceIn);

	Nan::SetPrototypeMethod(tpl, "SetReplaceOut", SetReplaceOut);
	Nan::SetPrototypeMethod(tpl, "setReplaceOut", SetReplaceOut);

	Nan::SetPrototypeMethod(tpl, "ThresholdBetween", ThresholdBetween);
	Nan::SetPrototypeMethod(tpl, "thresholdBetween", ThresholdBetween);

	Nan::SetPrototypeMethod(tpl, "ThresholdByLower", ThresholdByLower);
	Nan::SetPrototypeMethod(tpl, "thresholdByLower", ThresholdByLower);

	Nan::SetPrototypeMethod(tpl, "ThresholdByUpper", ThresholdByUpper);
	Nan::SetPrototypeMethod(tpl, "thresholdByUpper", ThresholdByUpper);

	ptpl.Reset( tpl );
}

void VtkImageThresholdWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageThreshold> native = vtkSmartPointer<vtkImageThreshold>::New();
		VtkImageThresholdWrap* obj = new VtkImageThresholdWrap(native);
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

void VtkImageThresholdWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageThresholdWrap::GetInValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageThresholdWrap::GetLowerThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLowerThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageThresholdWrap::GetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageThresholdWrap::GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageThresholdWrap::GetReplaceIn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReplaceIn();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageThresholdWrap::GetReplaceOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReplaceOut();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageThresholdWrap::GetUpperThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUpperThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageThresholdWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
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

void VtkImageThresholdWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	vtkImageThreshold * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageThresholdWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageThresholdWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageThresholdWrap *w = new VtkImageThresholdWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageThresholdWrap::ReplaceInOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReplaceInOff();
}

void VtkImageThresholdWrap::ReplaceInOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReplaceInOn();
}

void VtkImageThresholdWrap::ReplaceOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReplaceOutOff();
}

void VtkImageThresholdWrap::ReplaceOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReplaceOutOn();
}

void VtkImageThresholdWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageThreshold * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageThresholdWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageThresholdWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageThresholdWrap *w = new VtkImageThresholdWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageThresholdWrap::SetInValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageThresholdWrap::SetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageThresholdWrap::SetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
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

void VtkImageThresholdWrap::SetOutputScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToChar();
}

void VtkImageThresholdWrap::SetOutputScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToDouble();
}

void VtkImageThresholdWrap::SetOutputScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToFloat();
}

void VtkImageThresholdWrap::SetOutputScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToInt();
}

void VtkImageThresholdWrap::SetOutputScalarTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToLong();
}

void VtkImageThresholdWrap::SetOutputScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToShort();
}

void VtkImageThresholdWrap::SetOutputScalarTypeToSignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToSignedChar();
}

void VtkImageThresholdWrap::SetOutputScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedChar();
}

void VtkImageThresholdWrap::SetOutputScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedInt();
}

void VtkImageThresholdWrap::SetOutputScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedLong();
}

void VtkImageThresholdWrap::SetOutputScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedShort();
}

void VtkImageThresholdWrap::SetReplaceIn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReplaceIn(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageThresholdWrap::SetReplaceOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReplaceOut(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageThresholdWrap::ThresholdBetween(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ThresholdBetween(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageThresholdWrap::ThresholdByLower(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ThresholdByLower(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageThresholdWrap::ThresholdByUpper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageThresholdWrap *wrapper = ObjectWrap::Unwrap<VtkImageThresholdWrap>(info.Holder());
	vtkImageThreshold *native = (vtkImageThreshold *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ThresholdByUpper(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

