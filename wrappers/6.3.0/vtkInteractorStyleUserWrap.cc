/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleWrap.h"
#include "vtkInteractorStyleUserWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleUserWrap::ptpl;

VtkInteractorStyleUserWrap::VtkInteractorStyleUserWrap()
{ }

VtkInteractorStyleUserWrap::VtkInteractorStyleUserWrap(vtkSmartPointer<vtkInteractorStyleUser> _native)
{ native = _native; }

VtkInteractorStyleUserWrap::~VtkInteractorStyleUserWrap()
{ }

void VtkInteractorStyleUserWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleUser").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleUser").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleUserWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleUserWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleUserWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetButton", GetButton);
	Nan::SetPrototypeMethod(tpl, "getButton", GetButton);

	Nan::SetPrototypeMethod(tpl, "GetChar", GetChar);
	Nan::SetPrototypeMethod(tpl, "getChar", GetChar);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCtrlKey", GetCtrlKey);
	Nan::SetPrototypeMethod(tpl, "getCtrlKey", GetCtrlKey);

	Nan::SetPrototypeMethod(tpl, "GetKeySym", GetKeySym);
	Nan::SetPrototypeMethod(tpl, "getKeySym", GetKeySym);

	Nan::SetPrototypeMethod(tpl, "GetLastPos", GetLastPos);
	Nan::SetPrototypeMethod(tpl, "getLastPos", GetLastPos);

	Nan::SetPrototypeMethod(tpl, "GetOldPos", GetOldPos);
	Nan::SetPrototypeMethod(tpl, "getOldPos", GetOldPos);

	Nan::SetPrototypeMethod(tpl, "GetShiftKey", GetShiftKey);
	Nan::SetPrototypeMethod(tpl, "getShiftKey", GetShiftKey);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnChar", OnChar);
	Nan::SetPrototypeMethod(tpl, "onChar", OnChar);

	Nan::SetPrototypeMethod(tpl, "OnConfigure", OnConfigure);
	Nan::SetPrototypeMethod(tpl, "onConfigure", OnConfigure);

	Nan::SetPrototypeMethod(tpl, "OnEnter", OnEnter);
	Nan::SetPrototypeMethod(tpl, "onEnter", OnEnter);

	Nan::SetPrototypeMethod(tpl, "OnExpose", OnExpose);
	Nan::SetPrototypeMethod(tpl, "onExpose", OnExpose);

	Nan::SetPrototypeMethod(tpl, "OnKeyPress", OnKeyPress);
	Nan::SetPrototypeMethod(tpl, "onKeyPress", OnKeyPress);

	Nan::SetPrototypeMethod(tpl, "OnKeyRelease", OnKeyRelease);
	Nan::SetPrototypeMethod(tpl, "onKeyRelease", OnKeyRelease);

	Nan::SetPrototypeMethod(tpl, "OnLeave", OnLeave);
	Nan::SetPrototypeMethod(tpl, "onLeave", OnLeave);

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

	Nan::SetPrototypeMethod(tpl, "OnTimer", OnTimer);
	Nan::SetPrototypeMethod(tpl, "onTimer", OnTimer);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkInteractorStyleUserWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleUser> native = vtkSmartPointer<vtkInteractorStyleUser>::New();
		VtkInteractorStyleUserWrap* obj = new VtkInteractorStyleUserWrap(native);
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

void VtkInteractorStyleUserWrap::GetButton(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetButton();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleUserWrap::GetChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetChar();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleUserWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleUserWrap::GetCtrlKey(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCtrlKey();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleUserWrap::GetKeySym(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetKeySym();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleUserWrap::GetLastPos(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastPos();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkInteractorStyleUserWrap::GetOldPos(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOldPos();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkInteractorStyleUserWrap::GetShiftKey(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShiftKey();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleUserWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
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

void VtkInteractorStyleUserWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
	vtkInteractorStyleUser * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInteractorStyleUserWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorStyleUserWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleUserWrap *w = new VtkInteractorStyleUserWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleUserWrap::OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnChar();
}

void VtkInteractorStyleUserWrap::OnConfigure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnConfigure();
}

void VtkInteractorStyleUserWrap::OnEnter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnEnter();
}

void VtkInteractorStyleUserWrap::OnExpose(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnExpose();
}

void VtkInteractorStyleUserWrap::OnKeyPress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnKeyPress();
}

void VtkInteractorStyleUserWrap::OnKeyRelease(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnKeyRelease();
}

void VtkInteractorStyleUserWrap::OnLeave(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeave();
}

void VtkInteractorStyleUserWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkInteractorStyleUserWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleUserWrap::OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonDown();
}

void VtkInteractorStyleUserWrap::OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonUp();
}

void VtkInteractorStyleUserWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleUserWrap::OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonDown();
}

void VtkInteractorStyleUserWrap::OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonUp();
}

void VtkInteractorStyleUserWrap::OnTimer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnTimer();
}

void VtkInteractorStyleUserWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleUserWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleUserWrap>(info.Holder());
	vtkInteractorStyleUser *native = (vtkInteractorStyleUser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleUser * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkInteractorStyleUserWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInteractorStyleUserWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleUserWrap *w = new VtkInteractorStyleUserWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

