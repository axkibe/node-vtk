/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleWrap.h"
#include "vtkInteractorStyleTrackballActorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInteractorStyleTrackballActorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleTrackballActorWrap::ptpl;

VtkInteractorStyleTrackballActorWrap::VtkInteractorStyleTrackballActorWrap()
{ }

VtkInteractorStyleTrackballActorWrap::VtkInteractorStyleTrackballActorWrap(vtkSmartPointer<vtkInteractorStyleTrackballActor> _native)
{ native = _native; }

VtkInteractorStyleTrackballActorWrap::~VtkInteractorStyleTrackballActorWrap()
{ }

void VtkInteractorStyleTrackballActorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleTrackballActor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleTrackballActor").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleTrackballActorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleTrackballActorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleTrackballActorWrap").ToLocalChecked());
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

void VtkInteractorStyleTrackballActorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleTrackballActor> native = vtkSmartPointer<vtkInteractorStyleTrackballActor>::New();
		VtkInteractorStyleTrackballActorWrap* obj = new VtkInteractorStyleTrackballActorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInteractorStyleTrackballActorWrap::Dolly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Dolly();
}

void VtkInteractorStyleTrackballActorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleTrackballActorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
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

void VtkInteractorStyleTrackballActorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	vtkInteractorStyleTrackballActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInteractorStyleTrackballActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInteractorStyleTrackballActorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleTrackballActorWrap *w = new VtkInteractorStyleTrackballActorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleTrackballActorWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkInteractorStyleTrackballActorWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleTrackballActorWrap::OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonDown();
}

void VtkInteractorStyleTrackballActorWrap::OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonUp();
}

void VtkInteractorStyleTrackballActorWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleTrackballActorWrap::OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonDown();
}

void VtkInteractorStyleTrackballActorWrap::OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonUp();
}

void VtkInteractorStyleTrackballActorWrap::Pan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Pan();
}

void VtkInteractorStyleTrackballActorWrap::Rotate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Rotate();
}

void VtkInteractorStyleTrackballActorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleTrackballActor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInteractorStyleTrackballActorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkInteractorStyleTrackballActorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleTrackballActorWrap *w = new VtkInteractorStyleTrackballActorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleTrackballActorWrap::Spin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Spin();
}

void VtkInteractorStyleTrackballActorWrap::UniformScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTrackballActorWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTrackballActorWrap>(info.Holder());
	vtkInteractorStyleTrackballActor *native = (vtkInteractorStyleTrackballActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UniformScale();
}

