/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkClipPolyDataWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImplicitFunctionWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkClipPolyDataWrap::ptpl;

VtkClipPolyDataWrap::VtkClipPolyDataWrap()
{ }

VtkClipPolyDataWrap::VtkClipPolyDataWrap(vtkSmartPointer<vtkClipPolyData> _native)
{ native = _native; }

VtkClipPolyDataWrap::~VtkClipPolyDataWrap()
{ }

void VtkClipPolyDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkClipPolyData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ClipPolyData").ToLocalChecked(), ConstructorGetter);
}

void VtkClipPolyDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkClipPolyDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkClipPolyDataWrap").ToLocalChecked());
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

	Nan::SetPrototypeMethod(tpl, "GetClippedOutputPort", GetClippedOutputPort);
	Nan::SetPrototypeMethod(tpl, "getClippedOutputPort", GetClippedOutputPort);

	Nan::SetPrototypeMethod(tpl, "GetGenerateClipScalars", GetGenerateClipScalars);
	Nan::SetPrototypeMethod(tpl, "getGenerateClipScalars", GetGenerateClipScalars);

	Nan::SetPrototypeMethod(tpl, "GetGenerateClippedOutput", GetGenerateClippedOutput);
	Nan::SetPrototypeMethod(tpl, "getGenerateClippedOutput", GetGenerateClippedOutput);

	Nan::SetPrototypeMethod(tpl, "GetInsideOut", GetInsideOut);
	Nan::SetPrototypeMethod(tpl, "getInsideOut", GetInsideOut);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

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

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	ptpl.Reset( tpl );
}

void VtkClipPolyDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkClipPolyData> native = vtkSmartPointer<vtkClipPolyData>::New();
		VtkClipPolyDataWrap* obj = new VtkClipPolyDataWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkClipPolyDataWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkClipPolyDataWrap::GenerateClipScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClipScalarsOff();
}

void VtkClipPolyDataWrap::GenerateClipScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClipScalarsOn();
}

void VtkClipPolyDataWrap::GenerateClippedOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClippedOutputOff();
}

void VtkClipPolyDataWrap::GenerateClippedOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClippedOutputOn();
}

void VtkClipPolyDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkClipPolyDataWrap::GetClipFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
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
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkClipPolyDataWrap::GetClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClippedOutput();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkClipPolyDataWrap::GetClippedOutputPort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	vtkAlgorithmOutput * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClippedOutputPort();
		VtkAlgorithmOutputWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAlgorithmOutputWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAlgorithmOutputWrap *w = new VtkAlgorithmOutputWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkClipPolyDataWrap::GetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateClipScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipPolyDataWrap::GetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateClippedOutput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipPolyDataWrap::GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInsideOut();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipPolyDataWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
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
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkClipPolyDataWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipPolyDataWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkClipPolyDataWrap::InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOff();
}

void VtkClipPolyDataWrap::InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOn();
}

void VtkClipPolyDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
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

void VtkClipPolyDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	vtkClipPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkClipPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkClipPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkClipPolyDataWrap *w = new VtkClipPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkClipPolyDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkClipPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkClipPolyDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkClipPolyDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkClipPolyDataWrap *w = new VtkClipPolyDataWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkClipPolyDataWrap::SetClipFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
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

void VtkClipPolyDataWrap::SetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
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

void VtkClipPolyDataWrap::SetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
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

void VtkClipPolyDataWrap::SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
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

void VtkClipPolyDataWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
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

void VtkClipPolyDataWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
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

void VtkClipPolyDataWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkClipPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkClipPolyDataWrap>(info.Holder());
	vtkClipPolyData *native = (vtkClipPolyData *)wrapper->native.GetPointer();
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

