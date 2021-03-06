/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkClipVolumeWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkImplicitFunctionWrap.h"
#include "vtkUnstructuredGridWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkClipVolumeWrap::ptpl;

VtkClipVolumeWrap::VtkClipVolumeWrap()
{ }

VtkClipVolumeWrap::VtkClipVolumeWrap(vtkSmartPointer<vtkClipVolume> _native)
{ native = _native; }

VtkClipVolumeWrap::~VtkClipVolumeWrap()
{ }

void VtkClipVolumeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkClipVolume").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ClipVolume").ToLocalChecked(), ConstructorGetter);
}

void VtkClipVolumeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkClipVolumeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkClipVolumeWrap").ToLocalChecked());
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

	Nan::SetPrototypeMethod(tpl, "GetMixed3DCellGeneration", GetMixed3DCellGeneration);
	Nan::SetPrototypeMethod(tpl, "getMixed3DCellGeneration", GetMixed3DCellGeneration);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "InsideOutOff", InsideOutOff);
	Nan::SetPrototypeMethod(tpl, "insideOutOff", InsideOutOff);

	Nan::SetPrototypeMethod(tpl, "InsideOutOn", InsideOutOn);
	Nan::SetPrototypeMethod(tpl, "insideOutOn", InsideOutOn);

	Nan::SetPrototypeMethod(tpl, "Mixed3DCellGenerationOff", Mixed3DCellGenerationOff);
	Nan::SetPrototypeMethod(tpl, "mixed3DCellGenerationOff", Mixed3DCellGenerationOff);

	Nan::SetPrototypeMethod(tpl, "Mixed3DCellGenerationOn", Mixed3DCellGenerationOn);
	Nan::SetPrototypeMethod(tpl, "mixed3DCellGenerationOn", Mixed3DCellGenerationOn);

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

	Nan::SetPrototypeMethod(tpl, "SetMixed3DCellGeneration", SetMixed3DCellGeneration);
	Nan::SetPrototypeMethod(tpl, "setMixed3DCellGeneration", SetMixed3DCellGeneration);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

#ifdef VTK_NODE_PLUS_VTKCLIPVOLUMEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCLIPVOLUMEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkClipVolumeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkClipVolume> native = vtkSmartPointer<vtkClipVolume>::New();
		VtkClipVolumeWrap* obj = new VtkClipVolumeWrap(native);
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

void VtkClipVolumeWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkClipVolumeWrap::GenerateClipScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClipScalarsOff();
}

void VtkClipVolumeWrap::GenerateClipScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClipScalarsOn();
}

void VtkClipVolumeWrap::GenerateClippedOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClippedOutputOff();
}

void VtkClipVolumeWrap::GenerateClippedOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClippedOutputOn();
}

void VtkClipVolumeWrap::GetClipFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
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

void VtkClipVolumeWrap::GetClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
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

void VtkClipVolumeWrap::GetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateClipScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipVolumeWrap::GetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateClippedOutput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipVolumeWrap::GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInsideOut();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipVolumeWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
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

void VtkClipVolumeWrap::GetMergeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergeTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipVolumeWrap::GetMergeToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergeToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipVolumeWrap::GetMergeToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergeToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipVolumeWrap::GetMixed3DCellGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMixed3DCellGeneration();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipVolumeWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipVolumeWrap::InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOff();
}

void VtkClipVolumeWrap::InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOn();
}

void VtkClipVolumeWrap::Mixed3DCellGenerationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Mixed3DCellGenerationOff();
}

void VtkClipVolumeWrap::Mixed3DCellGenerationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Mixed3DCellGenerationOn();
}

void VtkClipVolumeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
	vtkClipVolume * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkClipVolumeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkClipVolumeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkClipVolumeWrap *w = new VtkClipVolumeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkClipVolumeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkClipVolume * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkClipVolumeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkClipVolumeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkClipVolumeWrap *w = new VtkClipVolumeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClipVolumeWrap::SetClipFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
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

void VtkClipVolumeWrap::SetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
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

void VtkClipVolumeWrap::SetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
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

void VtkClipVolumeWrap::SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
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

void VtkClipVolumeWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
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

void VtkClipVolumeWrap::SetMergeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
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

void VtkClipVolumeWrap::SetMixed3DCellGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMixed3DCellGeneration(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClipVolumeWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkClipVolumeWrap>(info.Holder());
	vtkClipVolume *native = (vtkClipVolume *)wrapper->native.GetPointer();
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

