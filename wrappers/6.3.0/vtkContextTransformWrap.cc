/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAbstractContextItemWrap.h"
#include "vtkContextTransformWrap.h"
#include "vtkObjectWrap.h"
#include "vtkContext2DWrap.h"
#include "vtkTransform2DWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkContextTransformWrap::ptpl;

VtkContextTransformWrap::VtkContextTransformWrap()
{ }

VtkContextTransformWrap::VtkContextTransformWrap(vtkSmartPointer<vtkContextTransform> _native)
{ native = _native; }

VtkContextTransformWrap::~VtkContextTransformWrap()
{ }

void VtkContextTransformWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkContextTransform").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ContextTransform").ToLocalChecked(), ConstructorGetter);
}

void VtkContextTransformWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkContextTransformWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractContextItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractContextItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkContextTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPanModifier", GetPanModifier);
	Nan::SetPrototypeMethod(tpl, "getPanModifier", GetPanModifier);

	Nan::SetPrototypeMethod(tpl, "GetPanMouseButton", GetPanMouseButton);
	Nan::SetPrototypeMethod(tpl, "getPanMouseButton", GetPanMouseButton);

	Nan::SetPrototypeMethod(tpl, "GetPanYOnMouseWheel", GetPanYOnMouseWheel);
	Nan::SetPrototypeMethod(tpl, "getPanYOnMouseWheel", GetPanYOnMouseWheel);

	Nan::SetPrototypeMethod(tpl, "GetSecondaryPanModifier", GetSecondaryPanModifier);
	Nan::SetPrototypeMethod(tpl, "getSecondaryPanModifier", GetSecondaryPanModifier);

	Nan::SetPrototypeMethod(tpl, "GetSecondaryPanMouseButton", GetSecondaryPanMouseButton);
	Nan::SetPrototypeMethod(tpl, "getSecondaryPanMouseButton", GetSecondaryPanMouseButton);

	Nan::SetPrototypeMethod(tpl, "GetSecondaryZoomModifier", GetSecondaryZoomModifier);
	Nan::SetPrototypeMethod(tpl, "getSecondaryZoomModifier", GetSecondaryZoomModifier);

	Nan::SetPrototypeMethod(tpl, "GetSecondaryZoomMouseButton", GetSecondaryZoomMouseButton);
	Nan::SetPrototypeMethod(tpl, "getSecondaryZoomMouseButton", GetSecondaryZoomMouseButton);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "GetZoomModifier", GetZoomModifier);
	Nan::SetPrototypeMethod(tpl, "getZoomModifier", GetZoomModifier);

	Nan::SetPrototypeMethod(tpl, "GetZoomMouseButton", GetZoomMouseButton);
	Nan::SetPrototypeMethod(tpl, "getZoomMouseButton", GetZoomMouseButton);

	Nan::SetPrototypeMethod(tpl, "GetZoomOnMouseWheel", GetZoomOnMouseWheel);
	Nan::SetPrototypeMethod(tpl, "getZoomOnMouseWheel", GetZoomOnMouseWheel);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "PanYOnMouseWheelOff", PanYOnMouseWheelOff);
	Nan::SetPrototypeMethod(tpl, "panYOnMouseWheelOff", PanYOnMouseWheelOff);

	Nan::SetPrototypeMethod(tpl, "PanYOnMouseWheelOn", PanYOnMouseWheelOn);
	Nan::SetPrototypeMethod(tpl, "panYOnMouseWheelOn", PanYOnMouseWheelOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPanModifier", SetPanModifier);
	Nan::SetPrototypeMethod(tpl, "setPanModifier", SetPanModifier);

	Nan::SetPrototypeMethod(tpl, "SetPanMouseButton", SetPanMouseButton);
	Nan::SetPrototypeMethod(tpl, "setPanMouseButton", SetPanMouseButton);

	Nan::SetPrototypeMethod(tpl, "SetPanYOnMouseWheel", SetPanYOnMouseWheel);
	Nan::SetPrototypeMethod(tpl, "setPanYOnMouseWheel", SetPanYOnMouseWheel);

	Nan::SetPrototypeMethod(tpl, "SetSecondaryPanModifier", SetSecondaryPanModifier);
	Nan::SetPrototypeMethod(tpl, "setSecondaryPanModifier", SetSecondaryPanModifier);

	Nan::SetPrototypeMethod(tpl, "SetSecondaryPanMouseButton", SetSecondaryPanMouseButton);
	Nan::SetPrototypeMethod(tpl, "setSecondaryPanMouseButton", SetSecondaryPanMouseButton);

	Nan::SetPrototypeMethod(tpl, "SetSecondaryZoomModifier", SetSecondaryZoomModifier);
	Nan::SetPrototypeMethod(tpl, "setSecondaryZoomModifier", SetSecondaryZoomModifier);

	Nan::SetPrototypeMethod(tpl, "SetSecondaryZoomMouseButton", SetSecondaryZoomMouseButton);
	Nan::SetPrototypeMethod(tpl, "setSecondaryZoomMouseButton", SetSecondaryZoomMouseButton);

	Nan::SetPrototypeMethod(tpl, "SetZoomModifier", SetZoomModifier);
	Nan::SetPrototypeMethod(tpl, "setZoomModifier", SetZoomModifier);

	Nan::SetPrototypeMethod(tpl, "SetZoomMouseButton", SetZoomMouseButton);
	Nan::SetPrototypeMethod(tpl, "setZoomMouseButton", SetZoomMouseButton);

	Nan::SetPrototypeMethod(tpl, "SetZoomOnMouseWheel", SetZoomOnMouseWheel);
	Nan::SetPrototypeMethod(tpl, "setZoomOnMouseWheel", SetZoomOnMouseWheel);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	Nan::SetPrototypeMethod(tpl, "ZoomOnMouseWheelOff", ZoomOnMouseWheelOff);
	Nan::SetPrototypeMethod(tpl, "zoomOnMouseWheelOff", ZoomOnMouseWheelOff);

	Nan::SetPrototypeMethod(tpl, "ZoomOnMouseWheelOn", ZoomOnMouseWheelOn);
	Nan::SetPrototypeMethod(tpl, "zoomOnMouseWheelOn", ZoomOnMouseWheelOn);

#ifdef VTK_NODE_PLUS_VTKCONTEXTTRANSFORMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCONTEXTTRANSFORMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkContextTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkContextTransform> native = vtkSmartPointer<vtkContextTransform>::New();
		VtkContextTransformWrap* obj = new VtkContextTransformWrap(native);
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

void VtkContextTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkContextTransformWrap::GetPanModifier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPanModifier();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContextTransformWrap::GetPanMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPanMouseButton();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContextTransformWrap::GetPanYOnMouseWheel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPanYOnMouseWheel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContextTransformWrap::GetSecondaryPanModifier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSecondaryPanModifier();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContextTransformWrap::GetSecondaryPanMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSecondaryPanMouseButton();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContextTransformWrap::GetSecondaryZoomModifier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSecondaryZoomModifier();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContextTransformWrap::GetSecondaryZoomMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSecondaryZoomMouseButton();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContextTransformWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	vtkTransform2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransform();
	VtkTransform2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTransform2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransform2DWrap *w = new VtkTransform2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContextTransformWrap::GetZoomModifier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZoomModifier();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContextTransformWrap::GetZoomMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZoomMouseButton();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContextTransformWrap::GetZoomOnMouseWheel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZoomOnMouseWheel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContextTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
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

void VtkContextTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	vtkContextTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkContextTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkContextTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContextTransformWrap *w = new VtkContextTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContextTransformWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContext2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkContext2DWrap *a0 = ObjectWrap::Unwrap<VtkContext2DWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Paint(
			(vtkContext2D *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextTransformWrap::PanYOnMouseWheelOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PanYOnMouseWheelOff();
}

void VtkContextTransformWrap::PanYOnMouseWheelOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PanYOnMouseWheelOn();
}

void VtkContextTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkContextTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkContextTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkContextTransformWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkContextTransformWrap *w = new VtkContextTransformWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextTransformWrap::SetPanModifier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPanModifier(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextTransformWrap::SetPanMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPanMouseButton(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextTransformWrap::SetPanYOnMouseWheel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPanYOnMouseWheel(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextTransformWrap::SetSecondaryPanModifier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSecondaryPanModifier(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextTransformWrap::SetSecondaryPanMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSecondaryPanMouseButton(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextTransformWrap::SetSecondaryZoomModifier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSecondaryZoomModifier(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextTransformWrap::SetSecondaryZoomMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSecondaryZoomMouseButton(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextTransformWrap::SetZoomModifier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZoomModifier(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextTransformWrap::SetZoomMouseButton(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZoomMouseButton(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextTransformWrap::SetZoomOnMouseWheel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZoomOnMouseWheel(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContextTransformWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

void VtkContextTransformWrap::ZoomOnMouseWheelOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ZoomOnMouseWheelOff();
}

void VtkContextTransformWrap::ZoomOnMouseWheelOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContextTransformWrap *wrapper = ObjectWrap::Unwrap<VtkContextTransformWrap>(info.Holder());
	vtkContextTransform *native = (vtkContextTransform *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ZoomOnMouseWheelOn();
}

