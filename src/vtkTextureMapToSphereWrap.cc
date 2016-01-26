/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkTextureMapToSphereWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTextureMapToSphereWrap::ptpl;

VtkTextureMapToSphereWrap::VtkTextureMapToSphereWrap()
{ }

VtkTextureMapToSphereWrap::VtkTextureMapToSphereWrap(vtkSmartPointer<vtkTextureMapToSphere> _native)
{ native = _native; }

VtkTextureMapToSphereWrap::~VtkTextureMapToSphereWrap()
{ }

void VtkTextureMapToSphereWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTextureMapToSphere").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TextureMapToSphere").ToLocalChecked(), ConstructorGetter);
}

void VtkTextureMapToSphereWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTextureMapToSphereWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTextureMapToSphereWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AutomaticSphereGenerationOff", AutomaticSphereGenerationOff);
	Nan::SetPrototypeMethod(tpl, "automaticSphereGenerationOff", AutomaticSphereGenerationOff);

	Nan::SetPrototypeMethod(tpl, "AutomaticSphereGenerationOn", AutomaticSphereGenerationOn);
	Nan::SetPrototypeMethod(tpl, "automaticSphereGenerationOn", AutomaticSphereGenerationOn);

	Nan::SetPrototypeMethod(tpl, "GetAutomaticSphereGeneration", GetAutomaticSphereGeneration);
	Nan::SetPrototypeMethod(tpl, "getAutomaticSphereGeneration", GetAutomaticSphereGeneration);

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

	Nan::SetPrototypeMethod(tpl, "SetAutomaticSphereGeneration", SetAutomaticSphereGeneration);
	Nan::SetPrototypeMethod(tpl, "setAutomaticSphereGeneration", SetAutomaticSphereGeneration);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetPreventSeam", SetPreventSeam);
	Nan::SetPrototypeMethod(tpl, "setPreventSeam", SetPreventSeam);

	ptpl.Reset( tpl );
}

void VtkTextureMapToSphereWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTextureMapToSphere> native = vtkSmartPointer<vtkTextureMapToSphere>::New();
		VtkTextureMapToSphereWrap* obj = new VtkTextureMapToSphereWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTextureMapToSphereWrap::AutomaticSphereGenerationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToSphereWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToSphereWrap>(info.Holder());
	vtkTextureMapToSphere *native = (vtkTextureMapToSphere *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticSphereGenerationOff();
}

void VtkTextureMapToSphereWrap::AutomaticSphereGenerationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToSphereWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToSphereWrap>(info.Holder());
	vtkTextureMapToSphere *native = (vtkTextureMapToSphere *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticSphereGenerationOn();
}

void VtkTextureMapToSphereWrap::GetAutomaticSphereGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToSphereWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToSphereWrap>(info.Holder());
	vtkTextureMapToSphere *native = (vtkTextureMapToSphere *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutomaticSphereGeneration();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureMapToSphereWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToSphereWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToSphereWrap>(info.Holder());
	vtkTextureMapToSphere *native = (vtkTextureMapToSphere *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextureMapToSphereWrap::GetPreventSeam(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToSphereWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToSphereWrap>(info.Holder());
	vtkTextureMapToSphere *native = (vtkTextureMapToSphere *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreventSeam();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextureMapToSphereWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToSphereWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToSphereWrap>(info.Holder());
	vtkTextureMapToSphere *native = (vtkTextureMapToSphere *)wrapper->native.GetPointer();
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

void VtkTextureMapToSphereWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToSphereWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToSphereWrap>(info.Holder());
	vtkTextureMapToSphere *native = (vtkTextureMapToSphere *)wrapper->native.GetPointer();
	vtkTextureMapToSphere * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTextureMapToSphereWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextureMapToSphereWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextureMapToSphereWrap *w = new VtkTextureMapToSphereWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextureMapToSphereWrap::PreventSeamOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToSphereWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToSphereWrap>(info.Holder());
	vtkTextureMapToSphere *native = (vtkTextureMapToSphere *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreventSeamOff();
}

void VtkTextureMapToSphereWrap::PreventSeamOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToSphereWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToSphereWrap>(info.Holder());
	vtkTextureMapToSphere *native = (vtkTextureMapToSphere *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreventSeamOn();
}

void VtkTextureMapToSphereWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToSphereWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToSphereWrap>(info.Holder());
	vtkTextureMapToSphere *native = (vtkTextureMapToSphere *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTextureMapToSphere * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTextureMapToSphereWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTextureMapToSphereWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTextureMapToSphereWrap *w = new VtkTextureMapToSphereWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureMapToSphereWrap::SetAutomaticSphereGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToSphereWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToSphereWrap>(info.Holder());
	vtkTextureMapToSphere *native = (vtkTextureMapToSphere *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutomaticSphereGeneration(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextureMapToSphereWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToSphereWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToSphereWrap>(info.Holder());
	vtkTextureMapToSphere *native = (vtkTextureMapToSphere *)wrapper->native.GetPointer();
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
				native->SetCenter(
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

void VtkTextureMapToSphereWrap::SetPreventSeam(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextureMapToSphereWrap *wrapper = ObjectWrap::Unwrap<VtkTextureMapToSphereWrap>(info.Holder());
	vtkTextureMapToSphere *native = (vtkTextureMapToSphere *)wrapper->native.GetPointer();
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

