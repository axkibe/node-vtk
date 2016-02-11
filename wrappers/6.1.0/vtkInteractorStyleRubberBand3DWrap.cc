/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleTrackballCameraWrap.h"
#include "vtkInteractorStyleRubberBand3DWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleRubberBand3DWrap::ptpl;

VtkInteractorStyleRubberBand3DWrap::VtkInteractorStyleRubberBand3DWrap()
{ }

VtkInteractorStyleRubberBand3DWrap::VtkInteractorStyleRubberBand3DWrap(vtkSmartPointer<vtkInteractorStyleRubberBand3D> _native)
{ native = _native; }

VtkInteractorStyleRubberBand3DWrap::~VtkInteractorStyleRubberBand3DWrap()
{ }

void VtkInteractorStyleRubberBand3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleRubberBand3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleRubberBand3D").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleRubberBand3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleRubberBand3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleTrackballCameraWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleTrackballCameraWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleRubberBand3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEndPosition", GetEndPosition);
	Nan::SetPrototypeMethod(tpl, "getEndPosition", GetEndPosition);

	Nan::SetPrototypeMethod(tpl, "GetInteraction", GetInteraction);
	Nan::SetPrototypeMethod(tpl, "getInteraction", GetInteraction);

	Nan::SetPrototypeMethod(tpl, "GetRenderOnMouseMove", GetRenderOnMouseMove);
	Nan::SetPrototypeMethod(tpl, "getRenderOnMouseMove", GetRenderOnMouseMove);

	Nan::SetPrototypeMethod(tpl, "GetStartPosition", GetStartPosition);
	Nan::SetPrototypeMethod(tpl, "getStartPosition", GetStartPosition);

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

	Nan::SetPrototypeMethod(tpl, "SetRenderOnMouseMove", SetRenderOnMouseMove);
	Nan::SetPrototypeMethod(tpl, "setRenderOnMouseMove", SetRenderOnMouseMove);

	ptpl.Reset( tpl );
}

void VtkInteractorStyleRubberBand3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleRubberBand3D> native = vtkSmartPointer<vtkInteractorStyleRubberBand3D>::New();
		VtkInteractorStyleRubberBand3DWrap* obj = new VtkInteractorStyleRubberBand3DWrap(native);
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

void VtkInteractorStyleRubberBand3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleRubberBand3DWrap::GetEndPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndPosition();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkInteractorStyleRubberBand3DWrap::GetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteraction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleRubberBand3DWrap::GetRenderOnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderOnMouseMove();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleRubberBand3DWrap::GetStartPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartPosition();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkInteractorStyleRubberBand3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
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

void VtkInteractorStyleRubberBand3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
	vtkInteractorStyleRubberBand3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInteractorStyleRubberBand3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorStyleRubberBand3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleRubberBand3DWrap *w = new VtkInteractorStyleRubberBand3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleRubberBand3DWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkInteractorStyleRubberBand3DWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleRubberBand3DWrap::OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonDown();
}

void VtkInteractorStyleRubberBand3DWrap::OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonUp();
}

void VtkInteractorStyleRubberBand3DWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleRubberBand3DWrap::OnMouseWheelBackward(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseWheelBackward();
}

void VtkInteractorStyleRubberBand3DWrap::OnMouseWheelForward(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseWheelForward();
}

void VtkInteractorStyleRubberBand3DWrap::OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonDown();
}

void VtkInteractorStyleRubberBand3DWrap::OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonUp();
}

void VtkInteractorStyleRubberBand3DWrap::RenderOnMouseMoveOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RenderOnMouseMoveOff();
}

void VtkInteractorStyleRubberBand3DWrap::RenderOnMouseMoveOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RenderOnMouseMoveOn();
}

void VtkInteractorStyleRubberBand3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleRubberBand3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkInteractorStyleRubberBand3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInteractorStyleRubberBand3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleRubberBand3DWrap *w = new VtkInteractorStyleRubberBand3DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleRubberBand3DWrap::SetRenderOnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleRubberBand3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleRubberBand3DWrap>(info.Holder());
	vtkInteractorStyleRubberBand3D *native = (vtkInteractorStyleRubberBand3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderOnMouseMove(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

