/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkMatrix3x3Wrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkMatrix3x3Wrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkMatrix3x3Wrap::ptpl;

VtkMatrix3x3Wrap::VtkMatrix3x3Wrap()
{ }

VtkMatrix3x3Wrap::VtkMatrix3x3Wrap(vtkSmartPointer<vtkMatrix3x3> _native)
{ native = _native; }

VtkMatrix3x3Wrap::~VtkMatrix3x3Wrap()
{ }

void VtkMatrix3x3Wrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkMatrix3x3Wrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkMatrix3x3").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Matrix3x3").ToLocalChecked(),tpl->GetFunction());
}

void VtkMatrix3x3Wrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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

	Nan::SetPrototypeMethod(tpl, "Multiply3x3", Multiply3x3);
	Nan::SetPrototypeMethod(tpl, "multiply3x3", Multiply3x3);

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

}

void VtkMatrix3x3Wrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMatrix3x3> native = vtkSmartPointer<vtkMatrix3x3>::New();
		VtkMatrix3x3Wrap* obj = new VtkMatrix3x3Wrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMatrix3x3Wrap::Adjoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix3x3Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkMatrix3x3Wrap *a1 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Adjoint(
				(vtkMatrix3x3 *) a0->native.GetPointer(),
				(vtkMatrix3x3 *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMatrix3x3Wrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix3x3Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkMatrix3x3 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMatrix3x3Wrap::Determinant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix3x3Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[0]->ToObject());
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Determinant(
			(vtkMatrix3x3 *) a0->native.GetPointer()
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

void VtkMatrix3x3Wrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMatrix3x3Wrap::GetElement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
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

void VtkMatrix3x3Wrap::Identity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Identity();
}

void VtkMatrix3x3Wrap::Invert(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix3x3Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkMatrix3x3Wrap *a1 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Invert(
				(vtkMatrix3x3 *) a0->native.GetPointer(),
				(vtkMatrix3x3 *) a1->native.GetPointer()
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

void VtkMatrix3x3Wrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
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

void VtkMatrix3x3Wrap::Multiply3x3(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix3x3Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkMatrix3x3Wrap *a1 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject())
			{
				VtkMatrix3x3Wrap *a2 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Multiply3x3(
					(vtkMatrix3x3 *) a0->native.GetPointer(),
					(vtkMatrix3x3 *) a1->native.GetPointer(),
					(vtkMatrix3x3 *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMatrix3x3Wrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
	vtkMatrix3x3 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMatrix3x3Wrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrix3x3Wrap *w = new VtkMatrix3x3Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMatrix3x3Wrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMatrix3x3 * r;
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
			Nan::New<v8::Function>(VtkMatrix3x3Wrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMatrix3x3Wrap *w = new VtkMatrix3x3Wrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMatrix3x3Wrap::SetElement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
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

void VtkMatrix3x3Wrap::Transpose(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix3x3Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkMatrix3x3Wrap *a1 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Transpose(
				(vtkMatrix3x3 *) a0->native.GetPointer(),
				(vtkMatrix3x3 *) a1->native.GetPointer()
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

void VtkMatrix3x3Wrap::Zero(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrix3x3Wrap *wrapper = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info.Holder());
	vtkMatrix3x3 *native = (vtkMatrix3x3 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Zero();
}

