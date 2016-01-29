/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkProperty2DWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProperty2DWrap::ptpl;

VtkProperty2DWrap::VtkProperty2DWrap()
{ }

VtkProperty2DWrap::VtkProperty2DWrap(vtkSmartPointer<vtkProperty2D> _native)
{ native = _native; }

VtkProperty2DWrap::~VtkProperty2DWrap()
{ }

void VtkProperty2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProperty2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Property2D").ToLocalChecked(), ConstructorGetter);
}

void VtkProperty2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProperty2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProperty2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDisplayLocation", GetDisplayLocation);
	Nan::SetPrototypeMethod(tpl, "getDisplayLocation", GetDisplayLocation);

	Nan::SetPrototypeMethod(tpl, "GetDisplayLocationMaxValue", GetDisplayLocationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDisplayLocationMaxValue", GetDisplayLocationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDisplayLocationMinValue", GetDisplayLocationMinValue);
	Nan::SetPrototypeMethod(tpl, "getDisplayLocationMinValue", GetDisplayLocationMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLineStipplePattern", GetLineStipplePattern);
	Nan::SetPrototypeMethod(tpl, "getLineStipplePattern", GetLineStipplePattern);

	Nan::SetPrototypeMethod(tpl, "GetLineStippleRepeatFactor", GetLineStippleRepeatFactor);
	Nan::SetPrototypeMethod(tpl, "getLineStippleRepeatFactor", GetLineStippleRepeatFactor);

	Nan::SetPrototypeMethod(tpl, "GetLineStippleRepeatFactorMaxValue", GetLineStippleRepeatFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getLineStippleRepeatFactorMaxValue", GetLineStippleRepeatFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetLineStippleRepeatFactorMinValue", GetLineStippleRepeatFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getLineStippleRepeatFactorMinValue", GetLineStippleRepeatFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOpacity", GetOpacity);
	Nan::SetPrototypeMethod(tpl, "getOpacity", GetOpacity);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColor", SetColor);
	Nan::SetPrototypeMethod(tpl, "setColor", SetColor);

	Nan::SetPrototypeMethod(tpl, "SetDisplayLocation", SetDisplayLocation);
	Nan::SetPrototypeMethod(tpl, "setDisplayLocation", SetDisplayLocation);

	Nan::SetPrototypeMethod(tpl, "SetDisplayLocationToBackground", SetDisplayLocationToBackground);
	Nan::SetPrototypeMethod(tpl, "setDisplayLocationToBackground", SetDisplayLocationToBackground);

	Nan::SetPrototypeMethod(tpl, "SetDisplayLocationToForeground", SetDisplayLocationToForeground);
	Nan::SetPrototypeMethod(tpl, "setDisplayLocationToForeground", SetDisplayLocationToForeground);

	Nan::SetPrototypeMethod(tpl, "SetLineStipplePattern", SetLineStipplePattern);
	Nan::SetPrototypeMethod(tpl, "setLineStipplePattern", SetLineStipplePattern);

	Nan::SetPrototypeMethod(tpl, "SetLineStippleRepeatFactor", SetLineStippleRepeatFactor);
	Nan::SetPrototypeMethod(tpl, "setLineStippleRepeatFactor", SetLineStippleRepeatFactor);

	Nan::SetPrototypeMethod(tpl, "SetOpacity", SetOpacity);
	Nan::SetPrototypeMethod(tpl, "setOpacity", SetOpacity);

	ptpl.Reset( tpl );
}

void VtkProperty2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProperty2D> native = vtkSmartPointer<vtkProperty2D>::New();
		VtkProperty2DWrap* obj = new VtkProperty2DWrap(native);
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

void VtkProperty2DWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkProperty2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkProperty2DWrap *a0 = ObjectWrap::Unwrap<VtkProperty2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkProperty2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProperty2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProperty2DWrap::GetDisplayLocation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplayLocation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProperty2DWrap::GetDisplayLocationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplayLocationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProperty2DWrap::GetDisplayLocationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplayLocationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProperty2DWrap::GetLineStipplePattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineStipplePattern();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProperty2DWrap::GetLineStippleRepeatFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineStippleRepeatFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProperty2DWrap::GetLineStippleRepeatFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineStippleRepeatFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProperty2DWrap::GetLineStippleRepeatFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineStippleRepeatFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProperty2DWrap::GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProperty2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
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

void VtkProperty2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkProperty2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProperty2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProperty2DWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Render(
			(vtkViewport *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProperty2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProperty2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkProperty2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProperty2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProperty2DWrap *w = new VtkProperty2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProperty2DWrap::SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
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
				native->SetColor(
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

void VtkProperty2DWrap::SetDisplayLocation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplayLocation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProperty2DWrap::SetDisplayLocationToBackground(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDisplayLocationToBackground();
}

void VtkProperty2DWrap::SetDisplayLocationToForeground(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDisplayLocationToForeground();
}

void VtkProperty2DWrap::SetLineStipplePattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLineStipplePattern(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProperty2DWrap::SetLineStippleRepeatFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLineStippleRepeatFactor(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProperty2DWrap::SetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProperty2DWrap *wrapper = ObjectWrap::Unwrap<VtkProperty2DWrap>(info.Holder());
	vtkProperty2D *native = (vtkProperty2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOpacity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

