/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPropWrap.h"
#include "vtkProp3DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkLinearTransformWrap.h"
#include "vtkMatrix4x4Wrap.h"

using namespace v8;

Nan::Persistent<v8::Function> VtkProp3DWrap::constructor;

VtkProp3DWrap::VtkProp3DWrap()
{ }

VtkProp3DWrap::VtkProp3DWrap(vtkSmartPointer<vtkProp3D> _native)
{ native = _native; }

VtkProp3DWrap::~VtkProp3DWrap()
{ }

void VtkProp3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkProp3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkPropWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkProp3D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("prop3D").ToLocalChecked(),tpl->GetFunction());
}

void VtkProp3DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddOrientation", AddOrientation);
	Nan::SetPrototypeMethod(tpl, "addOrientation", AddOrientation);

	Nan::SetPrototypeMethod(tpl, "AddPosition", AddPosition);
	Nan::SetPrototypeMethod(tpl, "addPosition", AddPosition);

	Nan::SetPrototypeMethod(tpl, "ComputeMatrix", ComputeMatrix);
	Nan::SetPrototypeMethod(tpl, "computeMatrix", ComputeMatrix);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetIsIdentity", GetIsIdentity);
	Nan::SetPrototypeMethod(tpl, "getIsIdentity", GetIsIdentity);

	Nan::SetPrototypeMethod(tpl, "GetLength", GetLength);
	Nan::SetPrototypeMethod(tpl, "getLength", GetLength);

	Nan::SetPrototypeMethod(tpl, "GetMatrix", GetMatrix);
	Nan::SetPrototypeMethod(tpl, "getMatrix", GetMatrix);

	Nan::SetPrototypeMethod(tpl, "GetUserMatrix", GetUserMatrix);
	Nan::SetPrototypeMethod(tpl, "getUserMatrix", GetUserMatrix);

	Nan::SetPrototypeMethod(tpl, "GetUserTransform", GetUserTransform);
	Nan::SetPrototypeMethod(tpl, "getUserTransform", GetUserTransform);

	Nan::SetPrototypeMethod(tpl, "InitPathTraversal", InitPathTraversal);
	Nan::SetPrototypeMethod(tpl, "initPathTraversal", InitPathTraversal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PokeMatrix", PokeMatrix);
	Nan::SetPrototypeMethod(tpl, "pokeMatrix", PokeMatrix);

	Nan::SetPrototypeMethod(tpl, "RotateWXYZ", RotateWXYZ);
	Nan::SetPrototypeMethod(tpl, "rotateWXYZ", RotateWXYZ);

	Nan::SetPrototypeMethod(tpl, "RotateX", RotateX);
	Nan::SetPrototypeMethod(tpl, "rotateX", RotateX);

	Nan::SetPrototypeMethod(tpl, "RotateY", RotateY);
	Nan::SetPrototypeMethod(tpl, "rotateY", RotateY);

	Nan::SetPrototypeMethod(tpl, "RotateZ", RotateZ);
	Nan::SetPrototypeMethod(tpl, "rotateZ", RotateZ);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOrientation", SetOrientation);
	Nan::SetPrototypeMethod(tpl, "setOrientation", SetOrientation);

	Nan::SetPrototypeMethod(tpl, "SetOrigin", SetOrigin);
	Nan::SetPrototypeMethod(tpl, "setOrigin", SetOrigin);

	Nan::SetPrototypeMethod(tpl, "SetPosition", SetPosition);
	Nan::SetPrototypeMethod(tpl, "setPosition", SetPosition);

	Nan::SetPrototypeMethod(tpl, "SetScale", SetScale);
	Nan::SetPrototypeMethod(tpl, "setScale", SetScale);

	Nan::SetPrototypeMethod(tpl, "SetUserMatrix", SetUserMatrix);
	Nan::SetPrototypeMethod(tpl, "setUserMatrix", SetUserMatrix);

	Nan::SetPrototypeMethod(tpl, "SetUserTransform", SetUserTransform);
	Nan::SetPrototypeMethod(tpl, "setUserTransform", SetUserTransform);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

}

void VtkProp3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		Nan::Utf8String s(info[0]);
		if(strcmp(*s, "__nowrap" ))
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkProp3DWrap::AddOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
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
				native->AddOrientation(
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

void VtkProp3DWrap::AddPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
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
				native->AddPosition(
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

void VtkProp3DWrap::ComputeMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeMatrix();
}

void VtkProp3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProp3DWrap::GetIsIdentity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIsIdentity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DWrap::GetLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProp3DWrap::GetMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetMatrix(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	vtkMatrix4x4 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMatrix();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMatrix4x4Wrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProp3DWrap::GetUserMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	vtkMatrix4x4 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUserMatrix();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMatrix4x4Wrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProp3DWrap::GetUserTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	vtkLinearTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUserTransform();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLinearTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkLinearTransformWrap *w = new VtkLinearTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProp3DWrap::InitPathTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitPathTraversal();
}

void VtkProp3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
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

void VtkProp3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	vtkProp3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkProp3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkProp3DWrap *w = new VtkProp3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProp3DWrap::PokeMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PokeMatrix(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DWrap::RotateWXYZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->RotateWXYZ(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DWrap::RotateX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RotateX(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DWrap::RotateY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RotateY(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DWrap::RotateZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RotateZ(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProp3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		const int argc = 1;
		v8::Local<v8::Value> argv[argc] =
			{ Nan::New("__nowrap").ToLocalChecked() };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkProp3DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
		VtkProp3DWrap *w = new VtkProp3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DWrap::SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
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
				native->SetOrientation(
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

void VtkProp3DWrap::SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
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
				native->SetOrigin(
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

void VtkProp3DWrap::SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
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
				native->SetPosition(
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

void VtkProp3DWrap::SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
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
				native->SetScale(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DWrap::SetUserMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUserMatrix(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DWrap::SetUserTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkLinearTransformWrap *a0 = ObjectWrap::Unwrap<VtkLinearTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUserTransform(
			(vtkLinearTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProp3DWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkProp3DWrap>(info.Holder());
	vtkProp3D *native = (vtkProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

