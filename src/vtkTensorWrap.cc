/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkTensorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTensorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTensorWrap::ptpl;

VtkTensorWrap::VtkTensorWrap()
{ }

VtkTensorWrap::VtkTensorWrap(vtkSmartPointer<vtkTensor> _native)
{ native = _native; }

VtkTensorWrap::~VtkTensorWrap()
{ }

void VtkTensorWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkTensorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkTensor").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Tensor").ToLocalChecked(),tpl->GetFunction());
}

void VtkTensorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddComponent", AddComponent);
	Nan::SetPrototypeMethod(tpl, "addComponent", AddComponent);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComponent", GetComponent);
	Nan::SetPrototypeMethod(tpl, "getComponent", GetComponent);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetComponent", SetComponent);
	Nan::SetPrototypeMethod(tpl, "setComponent", SetComponent);

}

void VtkTensorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTensor> native = vtkSmartPointer<vtkTensor>::New();
		VtkTensorWrap* obj = new VtkTensorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTensorWrap::AddComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorWrap *wrapper = ObjectWrap::Unwrap<VtkTensorWrap>(info.Holder());
	vtkTensor *native = (vtkTensor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->AddComponent(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTensorWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorWrap *wrapper = ObjectWrap::Unwrap<VtkTensorWrap>(info.Holder());
	vtkTensor *native = (vtkTensor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTensorWrap *a0 = ObjectWrap::Unwrap<VtkTensorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkTensor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTensorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorWrap *wrapper = ObjectWrap::Unwrap<VtkTensorWrap>(info.Holder());
	vtkTensor *native = (vtkTensor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTensorWrap::GetComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorWrap *wrapper = ObjectWrap::Unwrap<VtkTensorWrap>(info.Holder());
	vtkTensor *native = (vtkTensor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			double r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetComponent(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTensorWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorWrap *wrapper = ObjectWrap::Unwrap<VtkTensorWrap>(info.Holder());
	vtkTensor *native = (vtkTensor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkTensorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorWrap *wrapper = ObjectWrap::Unwrap<VtkTensorWrap>(info.Holder());
	vtkTensor *native = (vtkTensor *)wrapper->native.GetPointer();
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

void VtkTensorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorWrap *wrapper = ObjectWrap::Unwrap<VtkTensorWrap>(info.Holder());
	vtkTensor *native = (vtkTensor *)wrapper->native.GetPointer();
	vtkTensor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTensorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTensorWrap *w = new VtkTensorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTensorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorWrap *wrapper = ObjectWrap::Unwrap<VtkTensorWrap>(info.Holder());
	vtkTensor *native = (vtkTensor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTensor * r;
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
			Nan::New<v8::Function>(VtkTensorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTensorWrap *w = new VtkTensorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTensorWrap::SetComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTensorWrap *wrapper = ObjectWrap::Unwrap<VtkTensorWrap>(info.Holder());
	vtkTensor *native = (vtkTensor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetComponent(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

