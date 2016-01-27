/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkGenericClipWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImplicitFunctionWrap.h"
#include "vtkUnstructuredGridWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGenericClipWrap::ptpl;

VtkGenericClipWrap::VtkGenericClipWrap()
{ }

VtkGenericClipWrap::VtkGenericClipWrap(vtkSmartPointer<vtkGenericClip> _native)
{ native = _native; }

VtkGenericClipWrap::~VtkGenericClipWrap()
{ }

void VtkGenericClipWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGenericClip").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GenericClip").ToLocalChecked(), ConstructorGetter);
}

void VtkGenericClipWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGenericClipWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGenericClipWrap").ToLocalChecked());
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

	Nan::SetPrototypeMethod(tpl, "GetInputScalarsSelection", GetInputScalarsSelection);
	Nan::SetPrototypeMethod(tpl, "getInputScalarsSelection", GetInputScalarsSelection);

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

	Nan::SetPrototypeMethod(tpl, "GetNumberOfOutputs", GetNumberOfOutputs);
	Nan::SetPrototypeMethod(tpl, "getNumberOfOutputs", GetNumberOfOutputs);

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

	Nan::SetPrototypeMethod(tpl, "SelectInputScalars", SelectInputScalars);
	Nan::SetPrototypeMethod(tpl, "selectInputScalars", SelectInputScalars);

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

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	ptpl.Reset( tpl );
}

void VtkGenericClipWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGenericClip> native = vtkSmartPointer<vtkGenericClip>::New();
		VtkGenericClipWrap* obj = new VtkGenericClipWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGenericClipWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkGenericClipWrap::GenerateClipScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClipScalarsOff();
}

void VtkGenericClipWrap::GenerateClipScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClipScalarsOn();
}

void VtkGenericClipWrap::GenerateClippedOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClippedOutputOff();
}

void VtkGenericClipWrap::GenerateClippedOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClippedOutputOn();
}

void VtkGenericClipWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericClipWrap::GetClipFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
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

void VtkGenericClipWrap::GetClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
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

void VtkGenericClipWrap::GetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateClipScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericClipWrap::GetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateClippedOutput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericClipWrap::GetInputScalarsSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputScalarsSelection();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericClipWrap::GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInsideOut();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericClipWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
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

void VtkGenericClipWrap::GetMergeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergeTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericClipWrap::GetMergeToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergeToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericClipWrap::GetMergeToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergeToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericClipWrap::GetNumberOfOutputs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfOutputs();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericClipWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericClipWrap::InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOff();
}

void VtkGenericClipWrap::InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOn();
}

void VtkGenericClipWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
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

void VtkGenericClipWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	vtkGenericClip * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGenericClipWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericClipWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericClipWrap *w = new VtkGenericClipWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericClipWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericClip * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGenericClipWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericClipWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericClipWrap *w = new VtkGenericClipWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericClipWrap::SelectInputScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SelectInputScalars(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericClipWrap::SetClipFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
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

void VtkGenericClipWrap::SetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
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

void VtkGenericClipWrap::SetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
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

void VtkGenericClipWrap::SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
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

void VtkGenericClipWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
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

void VtkGenericClipWrap::SetMergeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
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

void VtkGenericClipWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericClipWrap *wrapper = ObjectWrap::Unwrap<VtkGenericClipWrap>(info.Holder());
	vtkGenericClip *native = (vtkGenericClip *)wrapper->native.GetPointer();
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

