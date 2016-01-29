/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleTrackballCameraWrap.h"
#include "vtkInteractorStyleImageWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImagePropertyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleImageWrap::ptpl;

VtkInteractorStyleImageWrap::VtkInteractorStyleImageWrap()
{ }

VtkInteractorStyleImageWrap::VtkInteractorStyleImageWrap(vtkSmartPointer<vtkInteractorStyleImage> _native)
{ native = _native; }

VtkInteractorStyleImageWrap::~VtkInteractorStyleImageWrap()
{ }

void VtkInteractorStyleImageWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleImage").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleImage").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleImageWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleImageWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleTrackballCameraWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleTrackballCameraWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleImageWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EndPick", EndPick);
	Nan::SetPrototypeMethod(tpl, "endPick", EndPick);

	Nan::SetPrototypeMethod(tpl, "EndSlice", EndSlice);
	Nan::SetPrototypeMethod(tpl, "endSlice", EndSlice);

	Nan::SetPrototypeMethod(tpl, "EndWindowLevel", EndWindowLevel);
	Nan::SetPrototypeMethod(tpl, "endWindowLevel", EndWindowLevel);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentImageProperty", GetCurrentImageProperty);
	Nan::SetPrototypeMethod(tpl, "getCurrentImageProperty", GetCurrentImageProperty);

	Nan::SetPrototypeMethod(tpl, "GetInteractionMode", GetInteractionMode);
	Nan::SetPrototypeMethod(tpl, "getInteractionMode", GetInteractionMode);

	Nan::SetPrototypeMethod(tpl, "GetInteractionModeMaxValue", GetInteractionModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getInteractionModeMaxValue", GetInteractionModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetInteractionModeMinValue", GetInteractionModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getInteractionModeMinValue", GetInteractionModeMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnChar", OnChar);
	Nan::SetPrototypeMethod(tpl, "onChar", OnChar);

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

	Nan::SetPrototypeMethod(tpl, "Pick", Pick);
	Nan::SetPrototypeMethod(tpl, "pick", Pick);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInteractionMode", SetInteractionMode);
	Nan::SetPrototypeMethod(tpl, "setInteractionMode", SetInteractionMode);

	Nan::SetPrototypeMethod(tpl, "SetInteractionModeToImage2D", SetInteractionModeToImage2D);
	Nan::SetPrototypeMethod(tpl, "setInteractionModeToImage2D", SetInteractionModeToImage2D);

	Nan::SetPrototypeMethod(tpl, "SetInteractionModeToImage3D", SetInteractionModeToImage3D);
	Nan::SetPrototypeMethod(tpl, "setInteractionModeToImage3D", SetInteractionModeToImage3D);

	Nan::SetPrototypeMethod(tpl, "SetInteractionModeToImageSlicing", SetInteractionModeToImageSlicing);
	Nan::SetPrototypeMethod(tpl, "setInteractionModeToImageSlicing", SetInteractionModeToImageSlicing);

	Nan::SetPrototypeMethod(tpl, "SetXViewRightVector", SetXViewRightVector);
	Nan::SetPrototypeMethod(tpl, "setXViewRightVector", SetXViewRightVector);

	Nan::SetPrototypeMethod(tpl, "SetXViewUpVector", SetXViewUpVector);
	Nan::SetPrototypeMethod(tpl, "setXViewUpVector", SetXViewUpVector);

	Nan::SetPrototypeMethod(tpl, "SetYViewRightVector", SetYViewRightVector);
	Nan::SetPrototypeMethod(tpl, "setYViewRightVector", SetYViewRightVector);

	Nan::SetPrototypeMethod(tpl, "SetYViewUpVector", SetYViewUpVector);
	Nan::SetPrototypeMethod(tpl, "setYViewUpVector", SetYViewUpVector);

	Nan::SetPrototypeMethod(tpl, "SetZViewRightVector", SetZViewRightVector);
	Nan::SetPrototypeMethod(tpl, "setZViewRightVector", SetZViewRightVector);

	Nan::SetPrototypeMethod(tpl, "SetZViewUpVector", SetZViewUpVector);
	Nan::SetPrototypeMethod(tpl, "setZViewUpVector", SetZViewUpVector);

	Nan::SetPrototypeMethod(tpl, "Slice", Slice);
	Nan::SetPrototypeMethod(tpl, "slice", Slice);

	Nan::SetPrototypeMethod(tpl, "StartPick", StartPick);
	Nan::SetPrototypeMethod(tpl, "startPick", StartPick);

	Nan::SetPrototypeMethod(tpl, "StartSlice", StartSlice);
	Nan::SetPrototypeMethod(tpl, "startSlice", StartSlice);

	Nan::SetPrototypeMethod(tpl, "StartWindowLevel", StartWindowLevel);
	Nan::SetPrototypeMethod(tpl, "startWindowLevel", StartWindowLevel);

	Nan::SetPrototypeMethod(tpl, "WindowLevel", WindowLevel);
	Nan::SetPrototypeMethod(tpl, "windowLevel", WindowLevel);

	ptpl.Reset( tpl );
}

void VtkInteractorStyleImageWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleImage> native = vtkSmartPointer<vtkInteractorStyleImage>::New();
		VtkInteractorStyleImageWrap* obj = new VtkInteractorStyleImageWrap(native);
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

void VtkInteractorStyleImageWrap::EndPick(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndPick();
}

void VtkInteractorStyleImageWrap::EndSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndSlice();
}

void VtkInteractorStyleImageWrap::EndWindowLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndWindowLevel();
}

void VtkInteractorStyleImageWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleImageWrap::GetCurrentImageProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	vtkImageProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentImageProperty();
		VtkImagePropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImagePropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImagePropertyWrap *w = new VtkImagePropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleImageWrap::GetInteractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractionMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleImageWrap::GetInteractionModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractionModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleImageWrap::GetInteractionModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractionModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleImageWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
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

void VtkInteractorStyleImageWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	vtkInteractorStyleImage * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInteractorStyleImageWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorStyleImageWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleImageWrap *w = new VtkInteractorStyleImageWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleImageWrap::OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnChar();
}

void VtkInteractorStyleImageWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkInteractorStyleImageWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleImageWrap::OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonDown();
}

void VtkInteractorStyleImageWrap::OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonUp();
}

void VtkInteractorStyleImageWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleImageWrap::OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonDown();
}

void VtkInteractorStyleImageWrap::OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonUp();
}

void VtkInteractorStyleImageWrap::Pick(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Pick();
}

void VtkInteractorStyleImageWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleImage * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInteractorStyleImageWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInteractorStyleImageWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleImageWrap *w = new VtkInteractorStyleImageWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleImageWrap::SetInteractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractionMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleImageWrap::SetInteractionModeToImage2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInteractionModeToImage2D();
}

void VtkInteractorStyleImageWrap::SetInteractionModeToImage3D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInteractionModeToImage3D();
}

void VtkInteractorStyleImageWrap::SetInteractionModeToImageSlicing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInteractionModeToImageSlicing();
}

void VtkInteractorStyleImageWrap::SetXViewRightVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
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
				native->SetXViewRightVector(
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

void VtkInteractorStyleImageWrap::SetXViewUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
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
				native->SetXViewUpVector(
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

void VtkInteractorStyleImageWrap::SetYViewRightVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
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
				native->SetYViewRightVector(
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

void VtkInteractorStyleImageWrap::SetYViewUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
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
				native->SetYViewUpVector(
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

void VtkInteractorStyleImageWrap::SetZViewRightVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
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
				native->SetZViewRightVector(
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

void VtkInteractorStyleImageWrap::SetZViewUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
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
				native->SetZViewUpVector(
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

void VtkInteractorStyleImageWrap::Slice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Slice();
}

void VtkInteractorStyleImageWrap::StartPick(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartPick();
}

void VtkInteractorStyleImageWrap::StartSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartSlice();
}

void VtkInteractorStyleImageWrap::StartWindowLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartWindowLevel();
}

void VtkInteractorStyleImageWrap::WindowLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleImageWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleImageWrap>(info.Holder());
	vtkInteractorStyleImage *native = (vtkInteractorStyleImage *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WindowLevel();
}

