/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkLinearTransformWrap.h"
#include "vtkTransformWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMatrix4x4Wrap.h"
#include "vtkAbstractTransformWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTransformWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTransformWrap::ptpl;

VtkTransformWrap::VtkTransformWrap()
{ }

VtkTransformWrap::VtkTransformWrap(vtkSmartPointer<vtkTransform> _native)
{ native = _native; }

VtkTransformWrap::~VtkTransformWrap()
{ }

void VtkTransformWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkLinearTransformWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkLinearTransformWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkTransform").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Transform").ToLocalChecked(),tpl->GetFunction());
}

void VtkTransformWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CircuitCheck", CircuitCheck);
	Nan::SetPrototypeMethod(tpl, "circuitCheck", CircuitCheck);

	Nan::SetPrototypeMethod(tpl, "Concatenate", Concatenate);
	Nan::SetPrototypeMethod(tpl, "concatenate", Concatenate);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetConcatenatedTransform", GetConcatenatedTransform);
	Nan::SetPrototypeMethod(tpl, "getConcatenatedTransform", GetConcatenatedTransform);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetInverse", GetInverse);
	Nan::SetPrototypeMethod(tpl, "getInverse", GetInverse);

	Nan::SetPrototypeMethod(tpl, "GetInverseFlag", GetInverseFlag);
	Nan::SetPrototypeMethod(tpl, "getInverseFlag", GetInverseFlag);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfConcatenatedTransforms", GetNumberOfConcatenatedTransforms);
	Nan::SetPrototypeMethod(tpl, "getNumberOfConcatenatedTransforms", GetNumberOfConcatenatedTransforms);

	Nan::SetPrototypeMethod(tpl, "GetTranspose", GetTranspose);
	Nan::SetPrototypeMethod(tpl, "getTranspose", GetTranspose);

	Nan::SetPrototypeMethod(tpl, "Identity", Identity);
	Nan::SetPrototypeMethod(tpl, "identity", Identity);

	Nan::SetPrototypeMethod(tpl, "Inverse", Inverse);
	Nan::SetPrototypeMethod(tpl, "inverse", Inverse);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MakeTransform", MakeTransform);
	Nan::SetPrototypeMethod(tpl, "makeTransform", MakeTransform);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Pop", Pop);
	Nan::SetPrototypeMethod(tpl, "pop", Pop);

	Nan::SetPrototypeMethod(tpl, "PostMultiply", PostMultiply);
	Nan::SetPrototypeMethod(tpl, "postMultiply", PostMultiply);

	Nan::SetPrototypeMethod(tpl, "PreMultiply", PreMultiply);
	Nan::SetPrototypeMethod(tpl, "preMultiply", PreMultiply);

	Nan::SetPrototypeMethod(tpl, "Push", Push);
	Nan::SetPrototypeMethod(tpl, "push", Push);

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

	Nan::SetPrototypeMethod(tpl, "Scale", Scale);
	Nan::SetPrototypeMethod(tpl, "scale", Scale);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	Nan::SetPrototypeMethod(tpl, "SetMatrix", SetMatrix);
	Nan::SetPrototypeMethod(tpl, "setMatrix", SetMatrix);

	Nan::SetPrototypeMethod(tpl, "Translate", Translate);
	Nan::SetPrototypeMethod(tpl, "translate", Translate);

}

void VtkTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTransform> native = vtkSmartPointer<vtkTransform>::New();
		VtkTransformWrap* obj = new VtkTransformWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTransformWrap::CircuitCheck(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAbstractTransformWrap *a0 = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CircuitCheck(
			(vtkAbstractTransform *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformWrap::Concatenate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkLinearTransformWrap *a0 = ObjectWrap::Unwrap<VtkLinearTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Concatenate(
			(vtkLinearTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTransformWrap::GetConcatenatedTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkLinearTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetConcatenatedTransform(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkLinearTransformWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLinearTransformWrap *w = new VtkLinearTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	vtkLinearTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLinearTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLinearTransformWrap *w = new VtkLinearTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformWrap::GetInverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetInverse(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInverse();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAbstractTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformWrap::GetInverseFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInverseFlag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformWrap::GetNumberOfConcatenatedTransforms(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfConcatenatedTransforms();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformWrap::GetTranspose(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetTranspose(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformWrap::Identity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Identity();
}

void VtkTransformWrap::Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Inverse();
}

void VtkTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
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

void VtkTransformWrap::MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->MakeTransform();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAbstractTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	vtkTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransformWrap *w = new VtkTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformWrap::Pop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Pop();
}

void VtkTransformWrap::PostMultiply(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PostMultiply();
}

void VtkTransformWrap::PreMultiply(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreMultiply();
}

void VtkTransformWrap::Push(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Push();
}

void VtkTransformWrap::RotateWXYZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
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

void VtkTransformWrap::RotateX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
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

void VtkTransformWrap::RotateY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
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

void VtkTransformWrap::RotateZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
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

void VtkTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTransform * r;
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
			Nan::New<v8::Function>(VtkTransformWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTransformWrap *w = new VtkTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformWrap::Scale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
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
				native->Scale(
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

void VtkTransformWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkLinearTransformWrap *a0 = ObjectWrap::Unwrap<VtkLinearTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			(vtkLinearTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformWrap::SetMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMatrix(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformWrap::Translate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformWrap *wrapper = ObjectWrap::Unwrap<VtkTransformWrap>(info.Holder());
	vtkTransform *native = (vtkTransform *)wrapper->native.GetPointer();
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
				native->Translate(
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

