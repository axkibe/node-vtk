/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkTransform2DWrap.h"
#include "vtkMatrix3x3Wrap.h"
#include "vtkPoints2DWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTransform2DWrap::ptpl;

VtkTransform2DWrap::VtkTransform2DWrap()
{ }

VtkTransform2DWrap::VtkTransform2DWrap(vtkSmartPointer<vtkTransform2D> _native)
{ native = _native; }

VtkTransform2DWrap::~VtkTransform2DWrap()
{ }

void VtkTransform2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTransform2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Transform2D").ToLocalChecked(), ConstructorGetter);
}

void VtkTransform2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTransform2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTransform2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInverse", GetInverse);
	Nan::SetPrototypeMethod(tpl, "getInverse", GetInverse);

	Nan::SetPrototypeMethod(tpl, "GetMatrix", GetMatrix);
	Nan::SetPrototypeMethod(tpl, "getMatrix", GetMatrix);

	Nan::SetPrototypeMethod(tpl, "GetTranspose", GetTranspose);
	Nan::SetPrototypeMethod(tpl, "getTranspose", GetTranspose);

	Nan::SetPrototypeMethod(tpl, "Identity", Identity);
	Nan::SetPrototypeMethod(tpl, "identity", Identity);

	Nan::SetPrototypeMethod(tpl, "Inverse", Inverse);
	Nan::SetPrototypeMethod(tpl, "inverse", Inverse);

	Nan::SetPrototypeMethod(tpl, "InverseTransformPoints", InverseTransformPoints);
	Nan::SetPrototypeMethod(tpl, "inverseTransformPoints", InverseTransformPoints);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Rotate", Rotate);
	Nan::SetPrototypeMethod(tpl, "rotate", Rotate);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Scale", Scale);
	Nan::SetPrototypeMethod(tpl, "scale", Scale);

	Nan::SetPrototypeMethod(tpl, "SetMatrix", SetMatrix);
	Nan::SetPrototypeMethod(tpl, "setMatrix", SetMatrix);

	Nan::SetPrototypeMethod(tpl, "TransformPoints", TransformPoints);
	Nan::SetPrototypeMethod(tpl, "transformPoints", TransformPoints);

	Nan::SetPrototypeMethod(tpl, "Translate", Translate);
	Nan::SetPrototypeMethod(tpl, "translate", Translate);

	ptpl.Reset( tpl );
}

void VtkTransform2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTransform2D> native = vtkSmartPointer<vtkTransform2D>::New();
		VtkTransform2DWrap* obj = new VtkTransform2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTransform2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTransform2DWrap::GetInverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix3x3Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix3x3Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetInverse(
			(vtkMatrix3x3 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransform2DWrap::GetMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix3x3Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix3x3Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetMatrix(
			(vtkMatrix3x3 *) a0->native.GetPointer()
		);
		return;
	}
	vtkMatrix3x3 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMatrix();
		VtkMatrix3x3Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMatrix3x3Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrix3x3Wrap *w = new VtkMatrix3x3Wrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransform2DWrap::GetTranspose(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix3x3Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix3x3Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetTranspose(
			(vtkMatrix3x3 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransform2DWrap::Identity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Identity();
}

void VtkTransform2DWrap::Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Inverse();
}

void VtkTransform2DWrap::InverseTransformPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPoints2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPoints2DWrap *a0 = ObjectWrap::Unwrap<VtkPoints2DWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPoints2DWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPoints2DWrap *a1 = ObjectWrap::Unwrap<VtkPoints2DWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InverseTransformPoints(
				(vtkPoints2D *) a0->native.GetPointer(),
				(vtkPoints2D *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransform2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
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

void VtkTransform2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	vtkTransform2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTransform2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTransform2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransform2DWrap *w = new VtkTransform2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransform2DWrap::Rotate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Rotate(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransform2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTransform2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTransform2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTransform2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTransform2DWrap *w = new VtkTransform2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransform2DWrap::Scale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Scale(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransform2DWrap::SetMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix3x3Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix3x3Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMatrix(
			(vtkMatrix3x3 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransform2DWrap::TransformPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPoints2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPoints2DWrap *a0 = ObjectWrap::Unwrap<VtkPoints2DWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPoints2DWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPoints2DWrap *a1 = ObjectWrap::Unwrap<VtkPoints2DWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->TransformPoints(
				(vtkPoints2D *) a0->native.GetPointer(),
				(vtkPoints2D *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransform2DWrap::Translate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransform2DWrap *wrapper = ObjectWrap::Unwrap<VtkTransform2DWrap>(info.Holder());
	vtkTransform2D *native = (vtkTransform2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Translate(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}
