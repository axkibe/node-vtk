/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageSlabWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageSlabWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageSlabWrap::ptpl;

VtkImageSlabWrap::VtkImageSlabWrap()
{ }

VtkImageSlabWrap::VtkImageSlabWrap(vtkSmartPointer<vtkImageSlab> _native)
{ native = _native; }

VtkImageSlabWrap::~VtkImageSlabWrap()
{ }

void VtkImageSlabWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkImageSlabWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkImageSlab").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageSlab").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageSlabWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMultiSliceOutput", GetMultiSliceOutput);
	Nan::SetPrototypeMethod(tpl, "getMultiSliceOutput", GetMultiSliceOutput);

	Nan::SetPrototypeMethod(tpl, "GetOperation", GetOperation);
	Nan::SetPrototypeMethod(tpl, "getOperation", GetOperation);

	Nan::SetPrototypeMethod(tpl, "GetOperationAsString", GetOperationAsString);
	Nan::SetPrototypeMethod(tpl, "getOperationAsString", GetOperationAsString);

	Nan::SetPrototypeMethod(tpl, "GetOperationMaxValue", GetOperationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOperationMaxValue", GetOperationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOperationMinValue", GetOperationMinValue);
	Nan::SetPrototypeMethod(tpl, "getOperationMinValue", GetOperationMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetOrientationMaxValue", GetOrientationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOrientationMaxValue", GetOrientationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOrientationMinValue", GetOrientationMinValue);
	Nan::SetPrototypeMethod(tpl, "getOrientationMinValue", GetOrientationMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputScalarType", GetOutputScalarType);
	Nan::SetPrototypeMethod(tpl, "getOutputScalarType", GetOutputScalarType);

	Nan::SetPrototypeMethod(tpl, "GetTrapezoidIntegration", GetTrapezoidIntegration);
	Nan::SetPrototypeMethod(tpl, "getTrapezoidIntegration", GetTrapezoidIntegration);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MultiSliceOutputOff", MultiSliceOutputOff);
	Nan::SetPrototypeMethod(tpl, "multiSliceOutputOff", MultiSliceOutputOff);

	Nan::SetPrototypeMethod(tpl, "MultiSliceOutputOn", MultiSliceOutputOn);
	Nan::SetPrototypeMethod(tpl, "multiSliceOutputOn", MultiSliceOutputOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMultiSliceOutput", SetMultiSliceOutput);
	Nan::SetPrototypeMethod(tpl, "setMultiSliceOutput", SetMultiSliceOutput);

	Nan::SetPrototypeMethod(tpl, "SetOperation", SetOperation);
	Nan::SetPrototypeMethod(tpl, "setOperation", SetOperation);

	Nan::SetPrototypeMethod(tpl, "SetOperationToMax", SetOperationToMax);
	Nan::SetPrototypeMethod(tpl, "setOperationToMax", SetOperationToMax);

	Nan::SetPrototypeMethod(tpl, "SetOperationToMean", SetOperationToMean);
	Nan::SetPrototypeMethod(tpl, "setOperationToMean", SetOperationToMean);

	Nan::SetPrototypeMethod(tpl, "SetOperationToMin", SetOperationToMin);
	Nan::SetPrototypeMethod(tpl, "setOperationToMin", SetOperationToMin);

	Nan::SetPrototypeMethod(tpl, "SetOperationToSum", SetOperationToSum);
	Nan::SetPrototypeMethod(tpl, "setOperationToSum", SetOperationToSum);

	Nan::SetPrototypeMethod(tpl, "SetOrientation", SetOrientation);
	Nan::SetPrototypeMethod(tpl, "setOrientation", SetOrientation);

	Nan::SetPrototypeMethod(tpl, "SetOrientationToX", SetOrientationToX);
	Nan::SetPrototypeMethod(tpl, "setOrientationToX", SetOrientationToX);

	Nan::SetPrototypeMethod(tpl, "SetOrientationToY", SetOrientationToY);
	Nan::SetPrototypeMethod(tpl, "setOrientationToY", SetOrientationToY);

	Nan::SetPrototypeMethod(tpl, "SetOrientationToZ", SetOrientationToZ);
	Nan::SetPrototypeMethod(tpl, "setOrientationToZ", SetOrientationToZ);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToDouble", SetOutputScalarTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToDouble", SetOutputScalarTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToFloat", SetOutputScalarTypeToFloat);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToFloat", SetOutputScalarTypeToFloat);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToInputScalarType", SetOutputScalarTypeToInputScalarType);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToInputScalarType", SetOutputScalarTypeToInputScalarType);

	Nan::SetPrototypeMethod(tpl, "SetSliceRange", SetSliceRange);
	Nan::SetPrototypeMethod(tpl, "setSliceRange", SetSliceRange);

	Nan::SetPrototypeMethod(tpl, "SetTrapezoidIntegration", SetTrapezoidIntegration);
	Nan::SetPrototypeMethod(tpl, "setTrapezoidIntegration", SetTrapezoidIntegration);

	Nan::SetPrototypeMethod(tpl, "TrapezoidIntegrationOff", TrapezoidIntegrationOff);
	Nan::SetPrototypeMethod(tpl, "trapezoidIntegrationOff", TrapezoidIntegrationOff);

	Nan::SetPrototypeMethod(tpl, "TrapezoidIntegrationOn", TrapezoidIntegrationOn);
	Nan::SetPrototypeMethod(tpl, "trapezoidIntegrationOn", TrapezoidIntegrationOn);

}

void VtkImageSlabWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageSlab> native = vtkSmartPointer<vtkImageSlab>::New();
		VtkImageSlabWrap* obj = new VtkImageSlabWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageSlabWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageSlabWrap::GetMultiSliceOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMultiSliceOutput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSlabWrap::GetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOperation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSlabWrap::GetOperationAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOperationAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageSlabWrap::GetOperationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOperationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSlabWrap::GetOperationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOperationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSlabWrap::GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSlabWrap::GetOrientationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSlabWrap::GetOrientationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSlabWrap::GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSlabWrap::GetTrapezoidIntegration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTrapezoidIntegration();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSlabWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
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

void VtkImageSlabWrap::MultiSliceOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MultiSliceOutputOff();
}

void VtkImageSlabWrap::MultiSliceOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MultiSliceOutputOn();
}

void VtkImageSlabWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	vtkImageSlab * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageSlabWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageSlabWrap *w = new VtkImageSlabWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSlabWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageSlab * r;
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
			Nan::New<v8::Function>(VtkImageSlabWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageSlabWrap *w = new VtkImageSlabWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSlabWrap::SetMultiSliceOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMultiSliceOutput(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSlabWrap::SetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOperation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSlabWrap::SetOperationToMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToMax();
}

void VtkImageSlabWrap::SetOperationToMean(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToMean();
}

void VtkImageSlabWrap::SetOperationToMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToMin();
}

void VtkImageSlabWrap::SetOperationToSum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationToSum();
}

void VtkImageSlabWrap::SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSlabWrap::SetOrientationToX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOrientationToX();
}

void VtkImageSlabWrap::SetOrientationToY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOrientationToY();
}

void VtkImageSlabWrap::SetOrientationToZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOrientationToZ();
}

void VtkImageSlabWrap::SetOutputScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToDouble();
}

void VtkImageSlabWrap::SetOutputScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToFloat();
}

void VtkImageSlabWrap::SetOutputScalarTypeToInputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToInputScalarType();
}

void VtkImageSlabWrap::SetSliceRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetSliceRange(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSlabWrap::SetTrapezoidIntegration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTrapezoidIntegration(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSlabWrap::TrapezoidIntegrationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TrapezoidIntegrationOff();
}

void VtkImageSlabWrap::TrapezoidIntegrationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabWrap>(info.Holder());
	vtkImageSlab *native = (vtkImageSlab *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TrapezoidIntegrationOn();
}
