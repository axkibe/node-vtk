/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleWrap.h"
#include "vtkContextInteractorStyleWrap.h"
#include "vtkObjectWrap.h"
#include "vtkContextSceneWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkContextInteractorStyleWrap::ptpl;

VtkContextInteractorStyleWrap::VtkContextInteractorStyleWrap()
{ }

VtkContextInteractorStyleWrap::VtkContextInteractorStyleWrap(vtkSmartPointer<vtkContextInteractorStyle> _native)
{ native = _native; }

VtkContextInteractorStyleWrap::~VtkContextInteractorStyleWrap()
{ }

void VtkContextInteractorStyleWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkContextInteractorStyle").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ContextInteractorStyle").ToLocalChecked(), ConstructorGetter);
}

void VtkContextInteractorStyleWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkContextInteractorStyleWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkContextInteractorStyleWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetScene", GetScene);
	Nan::SetPrototypeMethod(tpl, "getScene", GetScene);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnChar", OnChar);
	Nan::SetPrototypeMethod(tpl, "onChar", OnChar);

	Nan::SetPrototypeMethod(tpl, "OnKeyPress", OnKeyPress);
	Nan::SetPrototypeMethod(tpl, "onKeyPress", OnKeyPress);

	Nan::SetPrototypeMethod(tpl, "OnKeyRelease", OnKeyRelease);
	Nan::SetPrototypeMethod(tpl, "onKeyRelease", OnKeyRelease);

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

	Nan::SetPrototypeMethod(tpl, "OnSceneModified", OnSceneModified);
	Nan::SetPrototypeMethod(tpl, "onSceneModified", OnSceneModified);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetScene", SetScene);
	Nan::SetPrototypeMethod(tpl, "setScene", SetScene);

	ptpl.Reset( tpl );
}

void VtkContextInteractorStyleWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkContextInteractorStyle> native = vtkSmartPointer<vtkContextInteractorStyle>::New();
		VtkContextInteractorStyleWrap* obj = new VtkContextInteractorStyleWrap(native);
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

void VtkContextInteractorStyleWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkContextInteractorStyleWrap::GetScene(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	vtkContextScene * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScene();
		VtkContextSceneWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkContextSceneWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContextSceneWrap *w = new VtkContextSceneWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContextInteractorStyleWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
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

void VtkContextInteractorStyleWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	vtkContextInteractorStyle * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkContextInteractorStyleWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkContextInteractorStyleWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContextInteractorStyleWrap *w = new VtkContextInteractorStyleWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContextInteractorStyleWrap::OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnChar();
}

void VtkContextInteractorStyleWrap::OnKeyPress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnKeyPress();
}

void VtkContextInteractorStyleWrap::OnKeyRelease(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnKeyRelease();
}

void VtkContextInteractorStyleWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkContextInteractorStyleWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkContextInteractorStyleWrap::OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonDown();
}

void VtkContextInteractorStyleWrap::OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonUp();
}

void VtkContextInteractorStyleWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkContextInteractorStyleWrap::OnMouseWheelBackward(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseWheelBackward();
}

void VtkContextInteractorStyleWrap::OnMouseWheelForward(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseWheelForward();
}

void VtkContextInteractorStyleWrap::OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonDown();
}

void VtkContextInteractorStyleWrap::OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonUp();
}

void VtkContextInteractorStyleWrap::OnSceneModified(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnSceneModified();
}

void VtkContextInteractorStyleWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkContextInteractorStyle * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkContextInteractorStyleWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkContextInteractorStyleWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkContextInteractorStyleWrap *w = new VtkContextInteractorStyleWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextInteractorStyleWrap::SetScene(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextInteractorStyleWrap *wrapper = ObjectWrap::Unwrap<VtkContextInteractorStyleWrap>(info.Holder());
	vtkContextInteractorStyle *native = (vtkContextInteractorStyle *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContextSceneWrap::ptpl))->HasInstance(info[0]))
	{
		VtkContextSceneWrap *a0 = ObjectWrap::Unwrap<VtkContextSceneWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScene(
			(vtkContextScene *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
