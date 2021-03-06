/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkInteractorStyleTrackballCameraWrap.h"
#include "vtkInteractorStyleMultiTouchCameraWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleMultiTouchCameraWrap::ptpl;

VtkInteractorStyleMultiTouchCameraWrap::VtkInteractorStyleMultiTouchCameraWrap()
{ }

VtkInteractorStyleMultiTouchCameraWrap::VtkInteractorStyleMultiTouchCameraWrap(vtkSmartPointer<vtkInteractorStyleMultiTouchCamera> _native)
{ native = _native; }

VtkInteractorStyleMultiTouchCameraWrap::~VtkInteractorStyleMultiTouchCameraWrap()
{ }

void VtkInteractorStyleMultiTouchCameraWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleMultiTouchCamera").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleMultiTouchCamera").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleMultiTouchCameraWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleMultiTouchCameraWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleTrackballCameraWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleTrackballCameraWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleMultiTouchCameraWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AdjustCamera", AdjustCamera);
	Nan::SetPrototypeMethod(tpl, "adjustCamera", AdjustCamera);

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

	Nan::SetPrototypeMethod(tpl, "OnMouseMove", OnMouseMove);
	Nan::SetPrototypeMethod(tpl, "onMouseMove", OnMouseMove);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMotionFactor", SetMotionFactor);
	Nan::SetPrototypeMethod(tpl, "setMotionFactor", SetMotionFactor);

#ifdef VTK_NODE_PLUS_VTKINTERACTORSTYLEMULTITOUCHCAMERAWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINTERACTORSTYLEMULTITOUCHCAMERAWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkInteractorStyleMultiTouchCameraWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleMultiTouchCamera> native = vtkSmartPointer<vtkInteractorStyleMultiTouchCamera>::New();
		VtkInteractorStyleMultiTouchCameraWrap* obj = new VtkInteractorStyleMultiTouchCameraWrap(native);
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

void VtkInteractorStyleMultiTouchCameraWrap::AdjustCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleMultiTouchCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleMultiTouchCameraWrap>(info.Holder());
	vtkInteractorStyleMultiTouchCamera *native = (vtkInteractorStyleMultiTouchCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AdjustCamera();
}

void VtkInteractorStyleMultiTouchCameraWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleMultiTouchCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleMultiTouchCameraWrap>(info.Holder());
	vtkInteractorStyleMultiTouchCamera *native = (vtkInteractorStyleMultiTouchCamera *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleMultiTouchCameraWrap::GetMotionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleMultiTouchCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleMultiTouchCameraWrap>(info.Holder());
	vtkInteractorStyleMultiTouchCamera *native = (vtkInteractorStyleMultiTouchCamera *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMotionFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleMultiTouchCameraWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleMultiTouchCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleMultiTouchCameraWrap>(info.Holder());
	vtkInteractorStyleMultiTouchCamera *native = (vtkInteractorStyleMultiTouchCamera *)wrapper->native.GetPointer();
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

void VtkInteractorStyleMultiTouchCameraWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleMultiTouchCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleMultiTouchCameraWrap>(info.Holder());
	vtkInteractorStyleMultiTouchCamera *native = (vtkInteractorStyleMultiTouchCamera *)wrapper->native.GetPointer();
	vtkInteractorStyleMultiTouchCamera * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInteractorStyleMultiTouchCameraWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorStyleMultiTouchCameraWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleMultiTouchCameraWrap *w = new VtkInteractorStyleMultiTouchCameraWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleMultiTouchCameraWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleMultiTouchCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleMultiTouchCameraWrap>(info.Holder());
	vtkInteractorStyleMultiTouchCamera *native = (vtkInteractorStyleMultiTouchCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkInteractorStyleMultiTouchCameraWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleMultiTouchCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleMultiTouchCameraWrap>(info.Holder());
	vtkInteractorStyleMultiTouchCamera *native = (vtkInteractorStyleMultiTouchCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleMultiTouchCameraWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleMultiTouchCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleMultiTouchCameraWrap>(info.Holder());
	vtkInteractorStyleMultiTouchCamera *native = (vtkInteractorStyleMultiTouchCamera *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleMultiTouchCameraWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleMultiTouchCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleMultiTouchCameraWrap>(info.Holder());
	vtkInteractorStyleMultiTouchCamera *native = (vtkInteractorStyleMultiTouchCamera *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleMultiTouchCamera * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkInteractorStyleMultiTouchCameraWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInteractorStyleMultiTouchCameraWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleMultiTouchCameraWrap *w = new VtkInteractorStyleMultiTouchCameraWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleMultiTouchCameraWrap::SetMotionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleMultiTouchCameraWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleMultiTouchCameraWrap>(info.Holder());
	vtkInteractorStyleMultiTouchCamera *native = (vtkInteractorStyleMultiTouchCamera *)wrapper->native.GetPointer();
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

