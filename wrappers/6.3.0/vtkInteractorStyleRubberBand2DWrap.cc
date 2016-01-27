/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleWrap.h"
#include "vtkInteractorStyleRubberBand2DWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleRubberBand2DWrap::ptpl;

VtkInteractorStyleRubberBand2DWrap::VtkInteractorStyleRubberBand2DWrap()
{ }

VtkInteractorStyleRubberBand2DWrap::VtkInteractorStyleRubberBand2DWrap(vtkSmartPointer<vtkInteractorStyleRubberBand2D> _native)
{ native = _native; }

VtkInteractorStyleRubberBand2DWrap::~VtkInteractorStyleRubberBand2DWrap()
{ }

void VtkInteractorStyleRubberBand2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleRubberBand2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleRubberBand2D").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleRubberBand2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleRubberBand2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleRubberBand2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInteraction", GetInteraction);
	Nan::SetPrototypeMethod(tpl, "getInteraction", GetInteraction);

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

	Nan::SetPrototypeMethod(tpl, "RenderOnMouseMoveOff", RenderOnMouseMoveOff);
	Nan::SetPrototypeMethod(tpl, "renderOnMouseMoveOff", RenderOnMouseMoveOff);

	Nan::SetPrototypeMethod(tpl, "RenderOnMouseMoveOn", RenderOnMouseMoveOn);
	Nan::SetPrototypeMethod(tpl, "renderOnMouseMoveOn", RenderOnMouseMoveOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkInteractorStyleRubberBand2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleRubberBand2D> native = vtkSmartPointer<vtkInteractorStyleRubberBand2D>::New();
		VtkInteractorStyleRubberBand2DWrap* obj = new VtkInteractorStyleRubberBand2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInteractorStyleRubberBand2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleRubberBand2DWrap::GetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteraction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleRubberBand2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
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

void VtkInteractorStyleRubberBand2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	vtkInteractorStyleRubberBand2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInteractorStyleRubberBand2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorStyleRubberBand2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleRubberBand2DWrap *w = new VtkInteractorStyleRubberBand2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleRubberBand2DWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkInteractorStyleRubberBand2DWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleRubberBand2DWrap::OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonDown();
}

void VtkInteractorStyleRubberBand2DWrap::OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonUp();
}

void VtkInteractorStyleRubberBand2DWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleRubberBand2DWrap::OnMouseWheelBackward(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseWheelBackward();
}

void VtkInteractorStyleRubberBand2DWrap::OnMouseWheelForward(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseWheelForward();
}

void VtkInteractorStyleRubberBand2DWrap::OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonDown();
}

void VtkInteractorStyleRubberBand2DWrap::OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonUp();
}

void VtkInteractorStyleRubberBand2DWrap::RenderOnMouseMoveOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RenderOnMouseMoveOff();
}

void VtkInteractorStyleRubberBand2DWrap::RenderOnMouseMoveOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RenderOnMouseMoveOn();
}

void VtkInteractorStyleRubberBand2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand2DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand2DWrap>(info.Holder());
	vtkInteractorStyleRubberBand2D *native = (vtkInteractorStyleRubberBand2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleRubberBand2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInteractorStyleRubberBand2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInteractorStyleRubberBand2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleRubberBand2DWrap *w = new VtkInteractorStyleRubberBand2DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

