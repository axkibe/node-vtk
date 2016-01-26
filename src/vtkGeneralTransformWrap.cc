/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractTransformWrap.h"
#include "vtkGeneralTransformWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMatrix4x4Wrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGeneralTransformWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkGeneralTransformWrap::ptpl;

VtkGeneralTransformWrap::VtkGeneralTransformWrap()
{ }

VtkGeneralTransformWrap::VtkGeneralTransformWrap(vtkSmartPointer<vtkGeneralTransform> _native)
{ native = _native; }

VtkGeneralTransformWrap::~VtkGeneralTransformWrap()
{ }

void VtkGeneralTransformWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeneralTransform").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeneralTransform").ToLocalChecked(), ConstructorGetter);
}

void VtkGeneralTransformWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeneralTransformWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractTransformWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractTransformWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeneralTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

	Nan::SetPrototypeMethod(tpl, "GetInverseFlag", GetInverseFlag);
	Nan::SetPrototypeMethod(tpl, "getInverseFlag", GetInverseFlag);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfConcatenatedTransforms", GetNumberOfConcatenatedTransforms);
	Nan::SetPrototypeMethod(tpl, "getNumberOfConcatenatedTransforms", GetNumberOfConcatenatedTransforms);

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

	Nan::SetPrototypeMethod(tpl, "Translate", Translate);
	Nan::SetPrototypeMethod(tpl, "translate", Translate);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkGeneralTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeneralTransform> native = vtkSmartPointer<vtkGeneralTransform>::New();
		VtkGeneralTransformWrap* obj = new VtkGeneralTransformWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGeneralTransformWrap::CircuitCheck(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractTransformWrap::ptpl))->HasInstance(info[0]))
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

void VtkGeneralTransformWrap::Concatenate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractTransformWrap *a0 = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Concatenate(
			(vtkAbstractTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeneralTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeneralTransformWrap::GetConcatenatedTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkAbstractTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetConcatenatedTransform(
			info[0]->Int32Value()
		);
			VtkAbstractTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkAbstractTransformWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeneralTransformWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkAbstractTransformWrap::InitPtpl();
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

void VtkGeneralTransformWrap::GetInverseFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInverseFlag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeneralTransformWrap::GetNumberOfConcatenatedTransforms(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfConcatenatedTransforms();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeneralTransformWrap::Identity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Identity();
}

void VtkGeneralTransformWrap::Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Inverse();
}

void VtkGeneralTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
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

void VtkGeneralTransformWrap::MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->MakeTransform();
		VtkAbstractTransformWrap::InitPtpl();
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

void VtkGeneralTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	vtkGeneralTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGeneralTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGeneralTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeneralTransformWrap *w = new VtkGeneralTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeneralTransformWrap::Pop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Pop();
}

void VtkGeneralTransformWrap::PostMultiply(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PostMultiply();
}

void VtkGeneralTransformWrap::PreMultiply(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreMultiply();
}

void VtkGeneralTransformWrap::Push(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Push();
}

void VtkGeneralTransformWrap::RotateWXYZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
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

void VtkGeneralTransformWrap::RotateX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
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

void VtkGeneralTransformWrap::RotateY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
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

void VtkGeneralTransformWrap::RotateZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
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

void VtkGeneralTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeneralTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGeneralTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkGeneralTransformWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeneralTransformWrap *w = new VtkGeneralTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeneralTransformWrap::Scale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
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

void VtkGeneralTransformWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractTransformWrap *a0 = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			(vtkAbstractTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeneralTransformWrap::Translate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeneralTransformWrap *wrapper = ObjectWrap::Unwrap<VtkGeneralTransformWrap>(info.Holder());
	vtkGeneralTransform *native = (vtkGeneralTransform *)wrapper->native.GetPointer();
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

