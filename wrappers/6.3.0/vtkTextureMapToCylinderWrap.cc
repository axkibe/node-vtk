/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkTextureMapToCylinderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTextureMapToCylinderWrap::ptpl;

VtkTextureMapToCylinderWrap::VtkTextureMapToCylinderWrap()
{ }

VtkTextureMapToCylinderWrap::VtkTextureMapToCylinderWrap(vtkSmartPointer<vtkTextureMapToCylinder> _native)
{ native = _native; }

VtkTextureMapToCylinderWrap::~VtkTextureMapToCylinderWrap()
{ }

void VtkTextureMapToCylinderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTextureMapToCylinder").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TextureMapToCylinder").ToLocalChecked(), ConstructorGetter);
}

void VtkTextureMapToCylinderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTextureMapToCylinderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTextureMapToCylinderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AutomaticCylinderGenerationOff", AutomaticCylinderGenerationOff);
	Nan::SetPrototypeMethod(tpl, "automaticCylinderGenerationOff", AutomaticCylinderGenerationOff);

	Nan::SetPrototypeMethod(tpl, "AutomaticCylinderGenerationOn", AutomaticCylinderGenerationOn);
	Nan::SetPrototypeMethod(tpl, "automaticCylinderGenerationOn", AutomaticCylinderGenerationOn);

	Nan::SetPrototypeMethod(tpl, "GetAutomaticCylinderGeneration", GetAutomaticCylinderGeneration);
	Nan::SetPrototypeMethod(tpl, "getAutomaticCylinderGeneration", GetAutomaticCylinderGeneration);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPreventSeam", GetPreventSeam);
	Nan::SetPrototypeMethod(tpl, "getPreventSeam", GetPreventSeam);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PreventSeamOff", PreventSeamOff);
	Nan::SetPrototypeMethod(tpl, "preventSeamOff", PreventSeamOff);

	Nan::SetPrototypeMethod(tpl, "PreventSeamOn", PreventSeamOn);
	Nan::SetPrototypeMethod(tpl, "preventSeamOn", PreventSeamOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAutomaticCylinderGeneration", SetAutomaticCylinderGeneration);
	Nan::SetPrototypeMethod(tpl, "setAutomaticCylinderGeneration", SetAutomaticCylinderGeneration);

	Nan::SetPrototypeMethod(tpl, "SetPoint1", SetPoint1);
	Nan::SetPrototypeMethod(tpl, "setPoint1", SetPoint1);

	Nan::SetPrototypeMethod(tpl, "SetPoint2", SetPoint2);
	Nan::SetPrototypeMethod(tpl, "setPoint2", SetPoint2);

	Nan::SetPrototypeMethod(tpl, "SetPreventSeam", SetPreventSeam);
	Nan::SetPrototypeMethod(tpl, "setPreventSeam", SetPreventSeam);

	ptpl.Reset( tpl );
}

void VtkTextureMapToCylinderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTextureMapToCylinder> native = vtkSmartPointer<vtkTextureMapToCylinder>::New();
		VtkTextureMapToCylinderWrap* obj = new VtkTextureMapToCylinderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTextureMapToCylinderWrap::AutomaticCylinderGenerationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticCylinderGenerationOff();
}

void VtkTextureMapToCylinderWrap::AutomaticCylinderGenerationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticCylinderGenerationOn();
}

void VtkTextureMapToCylinderWrap::GetAutomaticCylinderGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutomaticCylinderGeneration();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureMapToCylinderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextureMapToCylinderWrap::GetPreventSeam(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreventSeam();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureMapToCylinderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
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

void VtkTextureMapToCylinderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
	vtkTextureMapToCylinder * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTextureMapToCylinderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextureMapToCylinderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextureMapToCylinderWrap *w = new VtkTextureMapToCylinderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextureMapToCylinderWrap::PreventSeamOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreventSeamOff();
}

void VtkTextureMapToCylinderWrap::PreventSeamOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreventSeamOn();
}

void VtkTextureMapToCylinderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTextureMapToCylinder * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTextureMapToCylinderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTextureMapToCylinderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTextureMapToCylinderWrap *w = new VtkTextureMapToCylinderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureMapToCylinderWrap::SetAutomaticCylinderGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutomaticCylinderGeneration(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureMapToCylinderWrap::SetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetPoint1(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureMapToCylinderWrap::SetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetPoint2(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureMapToCylinderWrap::SetPreventSeam(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToCylinderWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToCylinderWrap>(info.Holder());
	vtkTextureMapToCylinder *native = (vtkTextureMapToCylinder *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPreventSeam(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

