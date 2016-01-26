/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkHomogeneousTransformWrap.h"
#include "vtkPerspectiveTransformWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMatrix4x4Wrap.h"
#include "vtkAbstractTransformWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPerspectiveTransformWrap::ptpl;

VtkPerspectiveTransformWrap::VtkPerspectiveTransformWrap()
{ }

VtkPerspectiveTransformWrap::VtkPerspectiveTransformWrap(vtkSmartPointer<vtkPerspectiveTransform> _native)
{ native = _native; }

VtkPerspectiveTransformWrap::~VtkPerspectiveTransformWrap()
{ }

void VtkPerspectiveTransformWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPerspectiveTransform").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PerspectiveTransform").ToLocalChecked(), ConstructorGetter);
}

void VtkPerspectiveTransformWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPerspectiveTransformWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHomogeneousTransformWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHomogeneousTransformWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPerspectiveTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AdjustViewport", AdjustViewport);
	Nan::SetPrototypeMethod(tpl, "adjustViewport", AdjustViewport);

	Nan::SetPrototypeMethod(tpl, "AdjustZBuffer", AdjustZBuffer);
	Nan::SetPrototypeMethod(tpl, "adjustZBuffer", AdjustZBuffer);

	Nan::SetPrototypeMethod(tpl, "CircuitCheck", CircuitCheck);
	Nan::SetPrototypeMethod(tpl, "circuitCheck", CircuitCheck);

	Nan::SetPrototypeMethod(tpl, "Concatenate", Concatenate);
	Nan::SetPrototypeMethod(tpl, "concatenate", Concatenate);

	Nan::SetPrototypeMethod(tpl, "Frustum", Frustum);
	Nan::SetPrototypeMethod(tpl, "frustum", Frustum);

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

	Nan::SetPrototypeMethod(tpl, "Ortho", Ortho);
	Nan::SetPrototypeMethod(tpl, "ortho", Ortho);

	Nan::SetPrototypeMethod(tpl, "Perspective", Perspective);
	Nan::SetPrototypeMethod(tpl, "perspective", Perspective);

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

	Nan::SetPrototypeMethod(tpl, "SetupCamera", SetupCamera);
	Nan::SetPrototypeMethod(tpl, "setupCamera", SetupCamera);

	Nan::SetPrototypeMethod(tpl, "Shear", Shear);
	Nan::SetPrototypeMethod(tpl, "shear", Shear);

	Nan::SetPrototypeMethod(tpl, "Stereo", Stereo);
	Nan::SetPrototypeMethod(tpl, "stereo", Stereo);

	Nan::SetPrototypeMethod(tpl, "Translate", Translate);
	Nan::SetPrototypeMethod(tpl, "translate", Translate);

	ptpl.Reset( tpl );
}

void VtkPerspectiveTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPerspectiveTransform> native = vtkSmartPointer<vtkPerspectiveTransform>::New();
		VtkPerspectiveTransformWrap* obj = new VtkPerspectiveTransformWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPerspectiveTransformWrap::AdjustViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() > 6 && info[6]->IsNumber())
							{
								if(info.Length() > 7 && info[7]->IsNumber())
								{
									if(info.Length() != 8)
									{
										Nan::ThrowError("Too many parameters.");
										return;
									}
									native->AdjustViewport(
										info[0]->NumberValue(),
										info[1]->NumberValue(),
										info[2]->NumberValue(),
										info[3]->NumberValue(),
										info[4]->NumberValue(),
										info[5]->NumberValue(),
										info[6]->NumberValue(),
										info[7]->NumberValue()
									);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPerspectiveTransformWrap::AdjustZBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
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
					native->AdjustZBuffer(
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

void VtkPerspectiveTransformWrap::CircuitCheck(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
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

void VtkPerspectiveTransformWrap::Concatenate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHomogeneousTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHomogeneousTransformWrap *a0 = ObjectWrap::Unwrap<VtkHomogeneousTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Concatenate(
			(vtkHomogeneousTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPerspectiveTransformWrap::Frustum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->Frustum(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPerspectiveTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPerspectiveTransformWrap::GetConcatenatedTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkHomogeneousTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetConcatenatedTransform(
			info[0]->Int32Value()
		);
			VtkHomogeneousTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHomogeneousTransformWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHomogeneousTransformWrap *w = new VtkHomogeneousTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPerspectiveTransformWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	vtkHomogeneousTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkHomogeneousTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHomogeneousTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHomogeneousTransformWrap *w = new VtkHomogeneousTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPerspectiveTransformWrap::GetInverseFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInverseFlag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPerspectiveTransformWrap::GetNumberOfConcatenatedTransforms(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfConcatenatedTransforms();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPerspectiveTransformWrap::Identity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Identity();
}

void VtkPerspectiveTransformWrap::Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Inverse();
}

void VtkPerspectiveTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
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

void VtkPerspectiveTransformWrap::MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
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
		Nan::New<v8::FunctionTemplate>(VtkAbstractTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPerspectiveTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	vtkPerspectiveTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPerspectiveTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPerspectiveTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPerspectiveTransformWrap *w = new VtkPerspectiveTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPerspectiveTransformWrap::Ortho(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->Ortho(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPerspectiveTransformWrap::Perspective(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
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
					native->Perspective(
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

void VtkPerspectiveTransformWrap::Pop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Pop();
}

void VtkPerspectiveTransformWrap::PostMultiply(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PostMultiply();
}

void VtkPerspectiveTransformWrap::PreMultiply(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreMultiply();
}

void VtkPerspectiveTransformWrap::Push(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Push();
}

void VtkPerspectiveTransformWrap::RotateWXYZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
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

void VtkPerspectiveTransformWrap::RotateX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
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

void VtkPerspectiveTransformWrap::RotateY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
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

void VtkPerspectiveTransformWrap::RotateZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
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

void VtkPerspectiveTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPerspectiveTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPerspectiveTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPerspectiveTransformWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPerspectiveTransformWrap *w = new VtkPerspectiveTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPerspectiveTransformWrap::Scale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
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

void VtkPerspectiveTransformWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHomogeneousTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHomogeneousTransformWrap *a0 = ObjectWrap::Unwrap<VtkHomogeneousTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			(vtkHomogeneousTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPerspectiveTransformWrap::SetMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
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

void VtkPerspectiveTransformWrap::SetupCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() > 6 && info[6]->IsNumber())
							{
								if(info.Length() > 7 && info[7]->IsNumber())
								{
									if(info.Length() > 8 && info[8]->IsNumber())
									{
										if(info.Length() != 9)
										{
											Nan::ThrowError("Too many parameters.");
											return;
										}
										native->SetupCamera(
											info[0]->NumberValue(),
											info[1]->NumberValue(),
											info[2]->NumberValue(),
											info[3]->NumberValue(),
											info[4]->NumberValue(),
											info[5]->NumberValue(),
											info[6]->NumberValue(),
											info[7]->NumberValue(),
											info[8]->NumberValue()
										);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPerspectiveTransformWrap::Shear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
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
				native->Shear(
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

void VtkPerspectiveTransformWrap::Stereo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Stereo(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPerspectiveTransformWrap::Translate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPerspectiveTransformWrap *wrapper = ObjectWrap::Unwrap<VtkPerspectiveTransformWrap>(info.Holder());
	vtkPerspectiveTransform *native = (vtkPerspectiveTransform *)wrapper->native.GetPointer();
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

