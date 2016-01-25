/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkBoxClipDataSetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkUnstructuredGridWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkBoxClipDataSetWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkBoxClipDataSetWrap::ptpl;

VtkBoxClipDataSetWrap::VtkBoxClipDataSetWrap()
{ }

VtkBoxClipDataSetWrap::VtkBoxClipDataSetWrap(vtkSmartPointer<vtkBoxClipDataSet> _native)
{ native = _native; }

VtkBoxClipDataSetWrap::~VtkBoxClipDataSetWrap()
{ }

void VtkBoxClipDataSetWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkBoxClipDataSetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkBoxClipDataSet").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("BoxClipDataSet").ToLocalChecked(),tpl->GetFunction());
}

void VtkBoxClipDataSetWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
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

	Nan::SetPrototypeMethod(tpl, "GetClippedOutput", GetClippedOutput);
	Nan::SetPrototypeMethod(tpl, "getClippedOutput", GetClippedOutput);

	Nan::SetPrototypeMethod(tpl, "GetGenerateClipScalars", GetGenerateClipScalars);
	Nan::SetPrototypeMethod(tpl, "getGenerateClipScalars", GetGenerateClipScalars);

	Nan::SetPrototypeMethod(tpl, "GetGenerateClippedOutput", GetGenerateClippedOutput);
	Nan::SetPrototypeMethod(tpl, "getGenerateClippedOutput", GetGenerateClippedOutput);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfOutputs", GetNumberOfOutputs);
	Nan::SetPrototypeMethod(tpl, "getNumberOfOutputs", GetNumberOfOutputs);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBoxClip", SetBoxClip);
	Nan::SetPrototypeMethod(tpl, "setBoxClip", SetBoxClip);

	Nan::SetPrototypeMethod(tpl, "SetGenerateClipScalars", SetGenerateClipScalars);
	Nan::SetPrototypeMethod(tpl, "setGenerateClipScalars", SetGenerateClipScalars);

	Nan::SetPrototypeMethod(tpl, "SetGenerateClippedOutput", SetGenerateClippedOutput);
	Nan::SetPrototypeMethod(tpl, "setGenerateClippedOutput", SetGenerateClippedOutput);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

}

void VtkBoxClipDataSetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBoxClipDataSet> native = vtkSmartPointer<vtkBoxClipDataSet>::New();
		VtkBoxClipDataSetWrap* obj = new VtkBoxClipDataSetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBoxClipDataSetWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkBoxClipDataSetWrap::GenerateClipScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClipScalarsOff();
}

void VtkBoxClipDataSetWrap::GenerateClipScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClipScalarsOn();
}

void VtkBoxClipDataSetWrap::GenerateClippedOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClippedOutputOff();
}

void VtkBoxClipDataSetWrap::GenerateClippedOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateClippedOutputOn();
}

void VtkBoxClipDataSetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBoxClipDataSetWrap::GetClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
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

void VtkBoxClipDataSetWrap::GetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateClipScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxClipDataSetWrap::GetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateClippedOutput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxClipDataSetWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
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

void VtkBoxClipDataSetWrap::GetNumberOfOutputs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfOutputs();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxClipDataSetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
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

void VtkBoxClipDataSetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
	vtkBoxClipDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkBoxClipDataSetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBoxClipDataSetWrap *w = new VtkBoxClipDataSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxClipDataSetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBoxClipDataSet * r;
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
			Nan::New<v8::Function>(VtkBoxClipDataSetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBoxClipDataSetWrap *w = new VtkBoxClipDataSetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxClipDataSetWrap::SetBoxClip(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
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
							native->SetBoxClip(
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

void VtkBoxClipDataSetWrap::SetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
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

void VtkBoxClipDataSetWrap::SetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
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

void VtkBoxClipDataSetWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxClipDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxClipDataSetWrap>(info.Holder());
	vtkBoxClipDataSet *native = (vtkBoxClipDataSet *)wrapper->native.GetPointer();
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
