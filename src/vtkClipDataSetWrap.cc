/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkClipDataSetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImplicitFunctionWrap.h"
#include "vtkUnstructuredGridWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkClipDataSetWrap::constructor;

VtkClipDataSetWrap::VtkClipDataSetWrap()
{ }

VtkClipDataSetWrap::VtkClipDataSetWrap(vtkSmartPointer<vtkClipDataSet> _native)
{ native = _native; }

VtkClipDataSetWrap::~VtkClipDataSetWrap()
{ }

void VtkClipDataSetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkClipDataSetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkUnstructuredGridAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkClipDataSet").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ClipDataSet").ToLocalChecked(),tpl->GetFunction());
}

void VtkClipDataSetWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CreateDefaultLocator", CreateDefaultLocator);
	Nan::SetPrototypeMethod(tpl, "createDefaultLocator", CreateDefaultLocator);

	Nan::SetPrototypeMethod(tpl, "GenerateClipScalarsOff", GenerateClipScalarsOff);
	Nan::SetPrototypeMethod(tpl, "generateClipScalarsOff", GenerateClipScalarsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateClipScalarsOn", GenerateClipScalarsOn);
	Nan::SetPrototypeMethod(tpl, "generateClipScalarsOn", GenerateClipScalarsOn);

	Nan::SetPrototypeMethod(tpl, "GenerateClippedOutputOff", GenerateClippedOutputOff);
	Nan::SetPrototypeMethod(tpl, "generateClippedOutputOff", GenerateClippedOutputOff);

	Nan::SetPrototypeMethod(tpl, "GenerateClippedOutputOn", GenerateClippedOutputOn);
	Nan::SetPrototypeMethod(tpl, "generateClippedOutputOn", GenerateClippedOutputOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClipFunction", GetClipFunction);
	Nan::SetPrototypeMethod(tpl, "getClipFunction", GetClipFunction);

	Nan::SetPrototypeMethod(tpl, "GetClippedOutput", GetClippedOutput);
	Nan::SetPrototypeMethod(tpl, "getClippedOutput", GetClippedOutput);

	Nan::SetPrototypeMethod(tpl, "GetGenerateClipScalars", GetGenerateClipScalars);
	Nan::SetPrototypeMethod(tpl, "getGenerateClipScalars", GetGenerateClipScalars);

	Nan::SetPrototypeMethod(tpl, "GetGenerateClippedOutput", GetGenerateClippedOutput);
	Nan::SetPrototypeMethod(tpl, "getGenerateClippedOutput", GetGenerateClippedOutput);

	Nan::SetPrototypeMethod(tpl, "GetInsideOut", GetInsideOut);
	Nan::SetPrototypeMethod(tpl, "getInsideOut", GetInsideOut);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetMergeTolerance", GetMergeTolerance);
	Nan::SetPrototypeMethod(tpl, "getMergeTolerance", GetMergeTolerance);

	Nan::SetPrototypeMethod(tpl, "GetMergeToleranceMaxValue", GetMergeToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMergeToleranceMaxValue", GetMergeToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMergeToleranceMinValue", GetMergeToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getMergeToleranceMinValue", GetMergeToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecisionMaxValue", GetOutputPointsPrecisionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecisionMaxValue", GetOutputPointsPrecisionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecisionMinValue", GetOutputPointsPrecisionMinValue);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecisionMinValue", GetOutputPointsPrecisionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "InsideOutOff", InsideOutOff);
	Nan::SetPrototypeMethod(tpl, "insideOutOff", InsideOutOff);

	Nan::SetPrototypeMethod(tpl, "InsideOutOn", InsideOutOn);
	Nan::SetPrototypeMethod(tpl, "insideOutOn", InsideOutOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetClipFunction", SetClipFunction);
	Nan::SetPrototypeMethod(tpl, "setClipFunction", SetClipFunction);

	Nan::SetPrototypeMethod(tpl, "SetGenerateClipScalars", SetGenerateClipScalars);
	Nan::SetPrototypeMethod(tpl, "setGenerateClipScalars", SetGenerateClipScalars);

	Nan::SetPrototypeMethod(tpl, "SetGenerateClippedOutput", SetGenerateClippedOutput);
	Nan::SetPrototypeMethod(tpl, "setGenerateClippedOutput", SetGenerateClippedOutput);

	Nan::SetPrototypeMethod(tpl, "SetInsideOut", SetInsideOut);
	Nan::SetPrototypeMethod(tpl, "setInsideOut", SetInsideOut);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetMergeTolerance", SetMergeTolerance);
	Nan::SetPrototypeMethod(tpl, "setMergeTolerance", SetMergeTolerance);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	Nan::SetPrototypeMethod(tpl, "UseValueAsOffsetOff", UseValueAsOffsetOff);
	Nan::SetPrototypeMethod(tpl, "useValueAsOffsetOff", UseValueAsOffsetOff);

	Nan::SetPrototypeMethod(tpl, "UseValueAsOffsetOn", UseValueAsOffsetOn);
	Nan::SetPrototypeMethod(tpl, "useValueAsOffsetOn", UseValueAsOffsetOn);

}

void VtkClipDataSetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkClipDataSet> native = vtkSmartPointer<vtkClipDataSet>::New();
		VtkClipDataSetWrap* obj = new VtkClipDataSetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkClipDataSetWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkClipDataSetWrap::GenerateClipScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClipScalarsOff();
}

void VtkClipDataSetWrap::GenerateClipScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClipScalarsOn();
}

void VtkClipDataSetWrap::GenerateClippedOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClippedOutputOff();
}

void VtkClipDataSetWrap::GenerateClippedOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClippedOutputOn();
}

void VtkClipDataSetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkClipDataSetWrap::GetClipFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	vtkImplicitFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipFunction();
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

void VtkClipDataSetWrap::GetClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	vtkUnstructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClippedOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkUnstructuredGridWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkClipDataSetWrap::GetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateClipScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipDataSetWrap::GetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateClippedOutput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipDataSetWrap::GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInsideOut();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipDataSetWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	vtkIncrementalPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocator();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkIncrementalPointLocatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalPointLocatorWrap *w = new VtkIncrementalPointLocatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkClipDataSetWrap::GetMergeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergeTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipDataSetWrap::GetMergeToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergeToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipDataSetWrap::GetMergeToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergeToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipDataSetWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipDataSetWrap::GetOutputPointsPrecisionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecisionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipDataSetWrap::GetOutputPointsPrecisionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecisionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipDataSetWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipDataSetWrap::InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOff();
}

void VtkClipDataSetWrap::InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOn();
}

void VtkClipDataSetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
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

void VtkClipDataSetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	vtkClipDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkClipDataSetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkClipDataSetWrap *w = new VtkClipDataSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkClipDataSetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkClipDataSet * r;
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
			Nan::New<v8::Function>(VtkClipDataSetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkClipDataSetWrap *w = new VtkClipDataSetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClipDataSetWrap::SetClipFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkImplicitFunctionWrap *a0 = ObjectWrap::Unwrap<VtkImplicitFunctionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClipFunction(
			(vtkImplicitFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClipDataSetWrap::SetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateClipScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClipDataSetWrap::SetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateClippedOutput(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClipDataSetWrap::SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInsideOut(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClipDataSetWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkIncrementalPointLocatorWrap *a0 = ObjectWrap::Unwrap<VtkIncrementalPointLocatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocator(
			(vtkIncrementalPointLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClipDataSetWrap::SetMergeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMergeTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClipDataSetWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClipDataSetWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClipDataSetWrap::UseValueAsOffsetOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseValueAsOffsetOff();
}

void VtkClipDataSetWrap::UseValueAsOffsetOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkClipDataSetWrap>(info.Holder());
	vtkClipDataSet *native = (vtkClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseValueAsOffsetOn();
}

