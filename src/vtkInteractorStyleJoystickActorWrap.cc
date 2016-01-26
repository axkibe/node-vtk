/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleWrap.h"
#include "vtkInteractorStyleJoystickActorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInteractorStyleJoystickActorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleJoystickActorWrap::ptpl;

VtkInteractorStyleJoystickActorWrap::VtkInteractorStyleJoystickActorWrap()
{ }

VtkInteractorStyleJoystickActorWrap::VtkInteractorStyleJoystickActorWrap(vtkSmartPointer<vtkInteractorStyleJoystickActor> _native)
{ native = _native; }

VtkInteractorStyleJoystickActorWrap::~VtkInteractorStyleJoystickActorWrap()
{ }

void VtkInteractorStyleJoystickActorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleJoystickActor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleJoystickActor").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleJoystickActorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleJoystickActorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleJoystickActorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Dolly", Dolly);
	Nan::SetPrototypeMethod(tpl, "dolly", Dolly);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

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

	Nan::SetPrototypeMethod(tpl, "Spin", Spin);
	Nan::SetPrototypeMethod(tpl, "spin", Spin);

	Nan::SetPrototypeMethod(tpl, "UniformScale", UniformScale);
	Nan::SetPrototypeMethod(tpl, "uniformScale", UniformScale);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkInteractorStyleJoystickActorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleJoystickActor> native = vtkSmartPointer<vtkInteractorStyleJoystickActor>::New();
		VtkInteractorStyleJoystickActorWrap* obj = new VtkInteractorStyleJoystickActorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInteractorStyleJoystickActorWrap::Dolly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Dolly();
}

void VtkInteractorStyleJoystickActorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleJoystickActorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
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

void VtkInteractorStyleJoystickActorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	vtkInteractorStyleJoystickActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInteractorStyleJoystickActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInteractorStyleJoystickActorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleJoystickActorWrap *w = new VtkInteractorStyleJoystickActorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleJoystickActorWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkInteractorStyleJoystickActorWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleJoystickActorWrap::OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonDown();
}

void VtkInteractorStyleJoystickActorWrap::OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonUp();
}

void VtkInteractorStyleJoystickActorWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleJoystickActorWrap::OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonDown();
}

void VtkInteractorStyleJoystickActorWrap::OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonUp();
}

void VtkInteractorStyleJoystickActorWrap::Pan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Pan();
}

void VtkInteractorStyleJoystickActorWrap::Rotate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Rotate();
}

void VtkInteractorStyleJoystickActorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleJoystickActor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInteractorStyleJoystickActorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkInteractorStyleJoystickActorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleJoystickActorWrap *w = new VtkInteractorStyleJoystickActorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleJoystickActorWrap::Spin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Spin();
}

void VtkInteractorStyleJoystickActorWrap::UniformScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleJoystickActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleJoystickActorWrap>(info.Holder());
	vtkInteractorStyleJoystickActor *native = (vtkInteractorStyleJoystickActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UniformScale();
}

