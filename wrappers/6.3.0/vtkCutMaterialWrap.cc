/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkCutMaterialWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCutMaterialWrap::ptpl;

VtkCutMaterialWrap::VtkCutMaterialWrap()
{ }

VtkCutMaterialWrap::VtkCutMaterialWrap(vtkSmartPointer<vtkCutMaterial> _native)
{ native = _native; }

VtkCutMaterialWrap::~VtkCutMaterialWrap()
{ }

void VtkCutMaterialWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCutMaterial").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CutMaterial").ToLocalChecked(), ConstructorGetter);
}

void VtkCutMaterialWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCutMaterialWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCutMaterialWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetArrayName", GetArrayName);
	Nan::SetPrototypeMethod(tpl, "getArrayName", GetArrayName);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaterial", GetMaterial);
	Nan::SetPrototypeMethod(tpl, "getMaterial", GetMaterial);

	Nan::SetPrototypeMethod(tpl, "GetMaterialArrayName", GetMaterialArrayName);
	Nan::SetPrototypeMethod(tpl, "getMaterialArrayName", GetMaterialArrayName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetArrayName", SetArrayName);
	Nan::SetPrototypeMethod(tpl, "setArrayName", SetArrayName);

	Nan::SetPrototypeMethod(tpl, "SetMaterial", SetMaterial);
	Nan::SetPrototypeMethod(tpl, "setMaterial", SetMaterial);

	Nan::SetPrototypeMethod(tpl, "SetMaterialArrayName", SetMaterialArrayName);
	Nan::SetPrototypeMethod(tpl, "setMaterialArrayName", SetMaterialArrayName);

	Nan::SetPrototypeMethod(tpl, "SetUpVector", SetUpVector);
	Nan::SetPrototypeMethod(tpl, "setUpVector", SetUpVector);

	ptpl.Reset( tpl );
}

void VtkCutMaterialWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCutMaterial> native = vtkSmartPointer<vtkCutMaterial>::New();
		VtkCutMaterialWrap* obj = new VtkCutMaterialWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCutMaterialWrap::GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutMaterialWrap *wrapper = ObjectWrap::Unwrap<VtkCutMaterialWrap>(info.Holder());
	vtkCutMaterial *native = (vtkCutMaterial *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCutMaterialWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutMaterialWrap *wrapper = ObjectWrap::Unwrap<VtkCutMaterialWrap>(info.Holder());
	vtkCutMaterial *native = (vtkCutMaterial *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCutMaterialWrap::GetMaterial(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutMaterialWrap *wrapper = ObjectWrap::Unwrap<VtkCutMaterialWrap>(info.Holder());
	vtkCutMaterial *native = (vtkCutMaterial *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaterial();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCutMaterialWrap::GetMaterialArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutMaterialWrap *wrapper = ObjectWrap::Unwrap<VtkCutMaterialWrap>(info.Holder());
	vtkCutMaterial *native = (vtkCutMaterial *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaterialArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCutMaterialWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutMaterialWrap *wrapper = ObjectWrap::Unwrap<VtkCutMaterialWrap>(info.Holder());
	vtkCutMaterial *native = (vtkCutMaterial *)wrapper->native.GetPointer();
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

void VtkCutMaterialWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutMaterialWrap *wrapper = ObjectWrap::Unwrap<VtkCutMaterialWrap>(info.Holder());
	vtkCutMaterial *native = (vtkCutMaterial *)wrapper->native.GetPointer();
	vtkCutMaterial * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCutMaterialWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCutMaterialWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCutMaterialWrap *w = new VtkCutMaterialWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCutMaterialWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutMaterialWrap *wrapper = ObjectWrap::Unwrap<VtkCutMaterialWrap>(info.Holder());
	vtkCutMaterial *native = (vtkCutMaterial *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCutMaterial * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCutMaterialWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCutMaterialWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCutMaterialWrap *w = new VtkCutMaterialWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCutMaterialWrap::SetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutMaterialWrap *wrapper = ObjectWrap::Unwrap<VtkCutMaterialWrap>(info.Holder());
	vtkCutMaterial *native = (vtkCutMaterial *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCutMaterialWrap::SetMaterial(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutMaterialWrap *wrapper = ObjectWrap::Unwrap<VtkCutMaterialWrap>(info.Holder());
	vtkCutMaterial *native = (vtkCutMaterial *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaterial(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCutMaterialWrap::SetMaterialArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutMaterialWrap *wrapper = ObjectWrap::Unwrap<VtkCutMaterialWrap>(info.Holder());
	vtkCutMaterial *native = (vtkCutMaterial *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaterialArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCutMaterialWrap::SetUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutMaterialWrap *wrapper = ObjectWrap::Unwrap<VtkCutMaterialWrap>(info.Holder());
	vtkCutMaterial *native = (vtkCutMaterial *)wrapper->native.GetPointer();
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
				native->SetUpVector(
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

