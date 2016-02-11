/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkTableBasedClipDataSetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImplicitFunctionWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"
#include "vtkUnstructuredGridWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTableBasedClipDataSetWrap::ptpl;

VtkTableBasedClipDataSetWrap::VtkTableBasedClipDataSetWrap()
{ }

VtkTableBasedClipDataSetWrap::VtkTableBasedClipDataSetWrap(vtkSmartPointer<vtkTableBasedClipDataSet> _native)
{ native = _native; }

VtkTableBasedClipDataSetWrap::~VtkTableBasedClipDataSetWrap()
{ }

void VtkTableBasedClipDataSetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTableBasedClipDataSet").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TableBasedClipDataSet").ToLocalChecked(), ConstructorGetter);
}

void VtkTableBasedClipDataSetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTableBasedClipDataSetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTableBasedClipDataSetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

	Nan::SetPrototypeMethod(tpl, "GetUseValueAsOffset", GetUseValueAsOffset);
	Nan::SetPrototypeMethod(tpl, "getUseValueAsOffset", GetUseValueAsOffset);

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

	Nan::SetPrototypeMethod(tpl, "SetUseValueAsOffset", SetUseValueAsOffset);
	Nan::SetPrototypeMethod(tpl, "setUseValueAsOffset", SetUseValueAsOffset);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	Nan::SetPrototypeMethod(tpl, "UseValueAsOffsetOff", UseValueAsOffsetOff);
	Nan::SetPrototypeMethod(tpl, "useValueAsOffsetOff", UseValueAsOffsetOff);

	Nan::SetPrototypeMethod(tpl, "UseValueAsOffsetOn", UseValueAsOffsetOn);
	Nan::SetPrototypeMethod(tpl, "useValueAsOffsetOn", UseValueAsOffsetOn);

	ptpl.Reset( tpl );
}

void VtkTableBasedClipDataSetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTableBasedClipDataSet> native = vtkSmartPointer<vtkTableBasedClipDataSet>::New();
		VtkTableBasedClipDataSetWrap* obj = new VtkTableBasedClipDataSetWrap(native);
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

void VtkTableBasedClipDataSetWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkTableBasedClipDataSetWrap::GenerateClipScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClipScalarsOff();
}

void VtkTableBasedClipDataSetWrap::GenerateClipScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClipScalarsOn();
}

void VtkTableBasedClipDataSetWrap::GenerateClippedOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClippedOutputOff();
}

void VtkTableBasedClipDataSetWrap::GenerateClippedOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClippedOutputOn();
}

void VtkTableBasedClipDataSetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableBasedClipDataSetWrap::GetClipFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	vtkImplicitFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipFunction();
	VtkImplicitFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImplicitFunctionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImplicitFunctionWrap *w = new VtkImplicitFunctionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTableBasedClipDataSetWrap::GetClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	vtkUnstructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClippedOutput();
	VtkUnstructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTableBasedClipDataSetWrap::GetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateClipScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableBasedClipDataSetWrap::GetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateClippedOutput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableBasedClipDataSetWrap::GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInsideOut();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableBasedClipDataSetWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	vtkIncrementalPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocator();
	VtkIncrementalPointLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIncrementalPointLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalPointLocatorWrap *w = new VtkIncrementalPointLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTableBasedClipDataSetWrap::GetMergeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergeTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableBasedClipDataSetWrap::GetMergeToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergeToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableBasedClipDataSetWrap::GetMergeToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergeToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableBasedClipDataSetWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableBasedClipDataSetWrap::GetOutputPointsPrecisionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecisionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableBasedClipDataSetWrap::GetOutputPointsPrecisionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecisionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableBasedClipDataSetWrap::GetUseValueAsOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseValueAsOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableBasedClipDataSetWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableBasedClipDataSetWrap::InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOff();
}

void VtkTableBasedClipDataSetWrap::InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOn();
}

void VtkTableBasedClipDataSetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
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

void VtkTableBasedClipDataSetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	vtkTableBasedClipDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTableBasedClipDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTableBasedClipDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableBasedClipDataSetWrap *w = new VtkTableBasedClipDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTableBasedClipDataSetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTableBasedClipDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTableBasedClipDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTableBasedClipDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTableBasedClipDataSetWrap *w = new VtkTableBasedClipDataSetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableBasedClipDataSetWrap::SetClipFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImplicitFunctionWrap::ptpl))->HasInstance(info[0]))
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

void VtkTableBasedClipDataSetWrap::SetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
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

void VtkTableBasedClipDataSetWrap::SetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
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

void VtkTableBasedClipDataSetWrap::SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
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

void VtkTableBasedClipDataSetWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIncrementalPointLocatorWrap::ptpl))->HasInstance(info[0]))
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

void VtkTableBasedClipDataSetWrap::SetMergeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
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

void VtkTableBasedClipDataSetWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
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

void VtkTableBasedClipDataSetWrap::SetUseValueAsOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseValueAsOffset(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableBasedClipDataSetWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
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

void VtkTableBasedClipDataSetWrap::UseValueAsOffsetOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseValueAsOffsetOff();
}

void VtkTableBasedClipDataSetWrap::UseValueAsOffsetOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableBasedClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkTableBasedClipDataSetWrap>(info.Holder());
	vtkTableBasedClipDataSet *native = (vtkTableBasedClipDataSet *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseValueAsOffsetOn();
}

