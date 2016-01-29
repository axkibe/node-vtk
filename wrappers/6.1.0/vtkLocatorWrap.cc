/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkLocatorWrap.h"
#include "vtkDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLocatorWrap::ptpl;

VtkLocatorWrap::VtkLocatorWrap()
{ }

VtkLocatorWrap::VtkLocatorWrap(vtkSmartPointer<vtkLocator> _native)
{ native = _native; }

VtkLocatorWrap::~VtkLocatorWrap()
{ }

void VtkLocatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLocator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Locator").ToLocalChecked(), ConstructorGetter);
}

void VtkLocatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLocatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLocatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AutomaticOff", AutomaticOff);
	Nan::SetPrototypeMethod(tpl, "automaticOff", AutomaticOff);

	Nan::SetPrototypeMethod(tpl, "AutomaticOn", AutomaticOn);
	Nan::SetPrototypeMethod(tpl, "automaticOn", AutomaticOn);

	Nan::SetPrototypeMethod(tpl, "GetAutomatic", GetAutomatic);
	Nan::SetPrototypeMethod(tpl, "getAutomatic", GetAutomatic);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataSet", GetDataSet);
	Nan::SetPrototypeMethod(tpl, "getDataSet", GetDataSet);

	Nan::SetPrototypeMethod(tpl, "GetLevel", GetLevel);
	Nan::SetPrototypeMethod(tpl, "getLevel", GetLevel);

	Nan::SetPrototypeMethod(tpl, "GetMaxLevel", GetMaxLevel);
	Nan::SetPrototypeMethod(tpl, "getMaxLevel", GetMaxLevel);

	Nan::SetPrototypeMethod(tpl, "GetMaxLevelMaxValue", GetMaxLevelMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaxLevelMaxValue", GetMaxLevelMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaxLevelMinValue", GetMaxLevelMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaxLevelMinValue", GetMaxLevelMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAutomatic", SetAutomatic);
	Nan::SetPrototypeMethod(tpl, "setAutomatic", SetAutomatic);

	Nan::SetPrototypeMethod(tpl, "SetDataSet", SetDataSet);
	Nan::SetPrototypeMethod(tpl, "setDataSet", SetDataSet);

	Nan::SetPrototypeMethod(tpl, "SetMaxLevel", SetMaxLevel);
	Nan::SetPrototypeMethod(tpl, "setMaxLevel", SetMaxLevel);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkLocatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkLocatorWrap::AutomaticOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticOff();
}

void VtkLocatorWrap::AutomaticOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticOn();
}

void VtkLocatorWrap::GetAutomatic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutomatic();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLocatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLocatorWrap::GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataSet();
		VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLocatorWrap::GetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLocatorWrap::GetMaxLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLocatorWrap::GetMaxLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxLevelMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLocatorWrap::GetMaxLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxLevelMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLocatorWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLocatorWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLocatorWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLocatorWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkLocatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
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

void VtkLocatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	vtkLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLocatorWrap *w = new VtkLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLocatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLocator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkLocatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLocatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLocatorWrap *w = new VtkLocatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLocatorWrap::SetAutomatic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutomatic(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLocatorWrap::SetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataSet(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLocatorWrap::SetMaxLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLocatorWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLocatorWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkLocatorWrap>(info.Holder());
	vtkLocator *native = (vtkLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

