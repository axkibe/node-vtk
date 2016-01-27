/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkMatrix4x4Wrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMatrix4x4Wrap::ptpl;

VtkMatrix4x4Wrap::VtkMatrix4x4Wrap()
{ }

VtkMatrix4x4Wrap::VtkMatrix4x4Wrap(vtkSmartPointer<vtkMatrix4x4> _native)
{ native = _native; }

VtkMatrix4x4Wrap::~VtkMatrix4x4Wrap()
{ }

void VtkMatrix4x4Wrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMatrix4x4").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Matrix4x4").ToLocalChecked(), ConstructorGetter);
}

void VtkMatrix4x4Wrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMatrix4x4Wrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMatrix4x4Wrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Adjoint", Adjoint);
	Nan::SetPrototypeMethod(tpl, "adjoint", Adjoint);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "Determinant", Determinant);
	Nan::SetPrototypeMethod(tpl, "determinant", Determinant);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetElement", GetElement);
	Nan::SetPrototypeMethod(tpl, "getElement", GetElement);

	Nan::SetPrototypeMethod(tpl, "Identity", Identity);
	Nan::SetPrototypeMethod(tpl, "identity", Identity);

	Nan::SetPrototypeMethod(tpl, "Invert", Invert);
	Nan::SetPrototypeMethod(tpl, "invert", Invert);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Multiply4x4", Multiply4x4);
	Nan::SetPrototypeMethod(tpl, "multiply4x4", Multiply4x4);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetElement", SetElement);
	Nan::SetPrototypeMethod(tpl, "setElement", SetElement);

	Nan::SetPrototypeMethod(tpl, "Transpose", Transpose);
	Nan::SetPrototypeMethod(tpl, "transpose", Transpose);

	Nan::SetPrototypeMethod(tpl, "Zero", Zero);
	Nan::SetPrototypeMethod(tpl, "zero", Zero);

	ptpl.Reset( tpl );
}

void VtkMatrix4x4Wrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMatrix4x4> native = vtkSmartPointer<vtkMatrix4x4>::New();
		VtkMatrix4x4Wrap* obj = new VtkMatrix4x4Wrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMatrix4x4Wrap::Adjoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[1]))
		{
			VtkMatrix4x4Wrap *a1 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Adjoint(
				(vtkMatrix4x4 *) a0->native.GetPointer(),
				(vtkMatrix4x4 *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMatrix4x4Wrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMatrix4x4Wrap::Determinant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Determinant(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Determinant();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMatrix4x4Wrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMatrix4x4Wrap::GetElement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
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
			r = native->GetElement(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMatrix4x4Wrap::Identity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Identity();
}

void VtkMatrix4x4Wrap::Invert(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[1]))
		{
			VtkMatrix4x4Wrap *a1 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Invert(
				(vtkMatrix4x4 *) a0->native.GetPointer(),
				(vtkMatrix4x4 *) a1->native.GetPointer()
			);
			return;
		}
	}
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Invert();
}

void VtkMatrix4x4Wrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
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

void VtkMatrix4x4Wrap::Multiply4x4(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[1]))
		{
			VtkMatrix4x4Wrap *a1 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[2]))
			{
				VtkMatrix4x4Wrap *a2 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Multiply4x4(
					(vtkMatrix4x4 *) a0->native.GetPointer(),
					(vtkMatrix4x4 *) a1->native.GetPointer(),
					(vtkMatrix4x4 *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMatrix4x4Wrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
	vtkMatrix4x4 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMatrix4x4Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMatrix4x4Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMatrix4x4Wrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMatrix4x4 * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMatrix4x4Wrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMatrix4x4Wrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMatrix4x4Wrap::SetElement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
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
				native->SetElement(
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

void VtkMatrix4x4Wrap::Transpose(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[1]))
		{
			VtkMatrix4x4Wrap *a1 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Transpose(
				(vtkMatrix4x4 *) a0->native.GetPointer(),
				(vtkMatrix4x4 *) a1->native.GetPointer()
			);
			return;
		}
	}
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Transpose();
}

void VtkMatrix4x4Wrap::Zero(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix4x4Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info.Holder());
	vtkMatrix4x4 *native = (vtkMatrix4x4 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Zero();
}

