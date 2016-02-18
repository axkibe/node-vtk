/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkInteractorStyleWrap.h"
#include "vtkInteractorStyleTrackballCameraWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleTrackballCameraWrap::ptpl;

VtkInteractorStyleTrackballCameraWrap::VtkInteractorStyleTrackballCameraWrap()
{ }

VtkInteractorStyleTrackballCameraWrap::VtkInteractorStyleTrackballCameraWrap(vtkSmartPointer<vtkInteractorStyleTrackballCamera> _native)
{ native = _native; }

VtkInteractorStyleTrackballCameraWrap::~VtkInteractorStyleTrackballCameraWrap()
{ }

void VtkInteractorStyleTrackballCameraWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleTrackballCamera").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleTrackballCamera").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleTrackballCameraWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleTrackballCameraWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleTrackballCameraWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Dolly", Dolly);
	Nan::SetPrototypeMethod(tpl, "dolly", Dolly);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMotionFactor", GetMotionFactor);
	Nan::SetPrototypeMethod(tpl, "getMotionFactor", GetMotionFactor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonDown", OnLeftButtonDown);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonDown", OnLeftButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonUp", OnLeftButtonUp);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonUp", OnLeftButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnMiddleButtonDown", OnMiddleButtonDown);
	Nan::SetPrototypeMethod(tpl, "onMiddleButtonDown", OnMiddleButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnMiddleButtonUp", OnMiddleButtonUp);
	Nan::SetPrototypeMethod(tpl, "onMiddleButtonUp", OnMiddleButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnMouseMove", OnMouseMove);
	Nan::SetPrototypeMethod(tpl, "onMouseMove", OnMouseMove);

	Nan::SetPrototypeMethod(tpl, "OnMouseWheelBackward", OnMouseWheelBackward);
	Nan::SetPrototypeMethod(tpl, "onMouseWheelBackward", OnMouseWheelBackward);

	Nan::SetPrototypeMethod(tpl, "OnMouseWheelForward", OnMouseWheelForward);
	Nan::SetPrototypeMethod(tpl, "onMouseWheelForward", OnMouseWheelForward);

	Nan::SetPrototypeMethod(tpl, "OnRightButtonDown", OnRightButtonDown);
	Nan::SetPrototypeMethod(tpl, "onRightButtonDown", OnRightButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnRightButtonUp", OnRightButtonUp);
	Nan::SetPrototypeMethod(tpl, "onRightButtonUp", OnRightButtonUp);

	Nan::SetPrototypeMethod(tpl, "Pan", Pan);
	Nan::SetPrototypeMethod(tpl, "pan", Pan);

	Nan::SetPrototypeMethod(tpl, "Rotate", Rotate);
	Nan::SetPrototypeMethod(tpl, "rotate", Rotate);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMotionFactor", SetMotionFactor);
	Nan::SetPrototypeMethod(tpl, "setMotionFactor", SetMotionFactor);

	Nan::SetPrototypeMethod(tpl, "Spin", Spin);
	Nan::SetPrototypeMethod(tpl, "spin", Spin);

#ifdef VTK_NODE_PLUS_VTKINTERACTORSTYLETRACKBALLCAMERAWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINTERACTORSTYLETRACKBALLCAMERAWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkInteractorStyleTrackballCameraWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleTrackballCamera> native = vtkSmartPointer<vtkInteractorStyleTrackballCamera>::New();
		VtkInteractorStyleTrackballCameraWrap* obj = new VtkInteractorStyleTrackballCameraWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInteractorStyleTrackballCameraWrap::Dolly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Dolly();
}

void VtkInteractorStyleTrackballCameraWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleTrackballCameraWrap::GetMotionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMotionFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleTrackballCameraWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
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

void VtkInteractorStyleTrackballCameraWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
	vtkInteractorStyleTrackballCamera * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInteractorStyleTrackballCameraWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorStyleTrackballCameraWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleTrackballCameraWrap *w = new VtkInteractorStyleTrackballCameraWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleTrackballCameraWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkInteractorStyleTrackballCameraWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleTrackballCameraWrap::OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonDown();
}

void VtkInteractorStyleTrackballCameraWrap::OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonUp();
}

void VtkInteractorStyleTrackballCameraWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleTrackballCameraWrap::OnMouseWheelBackward(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseWheelBackward();
}

void VtkInteractorStyleTrackballCameraWrap::OnMouseWheelForward(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseWheelForward();
}

void VtkInteractorStyleTrackballCameraWrap::OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonDown();
}

void VtkInteractorStyleTrackballCameraWrap::OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonUp();
}

void VtkInteractorStyleTrackballCameraWrap::Pan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Pan();
}

void VtkInteractorStyleTrackballCameraWrap::Rotate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Rotate();
}

void VtkInteractorStyleTrackballCameraWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleTrackballCamera * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkInteractorStyleTrackballCameraWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInteractorStyleTrackballCameraWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleTrackballCameraWrap *w = new VtkInteractorStyleTrackballCameraWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleTrackballCameraWrap::SetMotionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMotionFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleTrackballCameraWrap::Spin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballCameraWrap>(info.Holder());
	vtkInteractorStyleTrackballCamera *native = (vtkInteractorStyleTrackballCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Spin();
}

