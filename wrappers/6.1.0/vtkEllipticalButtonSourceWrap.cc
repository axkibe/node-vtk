/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkButtonSourceWrap.h"
#include "vtkEllipticalButtonSourceWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkEllipticalButtonSourceWrap::ptpl;

VtkEllipticalButtonSourceWrap::VtkEllipticalButtonSourceWrap()
{ }

VtkEllipticalButtonSourceWrap::VtkEllipticalButtonSourceWrap(vtkSmartPointer<vtkEllipticalButtonSource> _native)
{ native = _native; }

VtkEllipticalButtonSourceWrap::~VtkEllipticalButtonSourceWrap()
{ }

void VtkEllipticalButtonSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkEllipticalButtonSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("EllipticalButtonSource").ToLocalChecked(), ConstructorGetter);
}

void VtkEllipticalButtonSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkEllipticalButtonSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkButtonSourceWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkButtonSourceWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkEllipticalButtonSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCircumferentialResolution", GetCircumferentialResolution);
	Nan::SetPrototypeMethod(tpl, "getCircumferentialResolution", GetCircumferentialResolution);

	Nan::SetPrototypeMethod(tpl, "GetCircumferentialResolutionMaxValue", GetCircumferentialResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCircumferentialResolutionMaxValue", GetCircumferentialResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCircumferentialResolutionMinValue", GetCircumferentialResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getCircumferentialResolutionMinValue", GetCircumferentialResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDepth", GetDepth);
	Nan::SetPrototypeMethod(tpl, "getDepth", GetDepth);

	Nan::SetPrototypeMethod(tpl, "GetDepthMaxValue", GetDepthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDepthMaxValue", GetDepthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDepthMinValue", GetDepthMinValue);
	Nan::SetPrototypeMethod(tpl, "getDepthMinValue", GetDepthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetHeight", GetHeight);
	Nan::SetPrototypeMethod(tpl, "getHeight", GetHeight);

	Nan::SetPrototypeMethod(tpl, "GetHeightMaxValue", GetHeightMaxValue);
	Nan::SetPrototypeMethod(tpl, "getHeightMaxValue", GetHeightMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetHeightMinValue", GetHeightMinValue);
	Nan::SetPrototypeMethod(tpl, "getHeightMinValue", GetHeightMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetRadialRatio", GetRadialRatio);
	Nan::SetPrototypeMethod(tpl, "getRadialRatio", GetRadialRatio);

	Nan::SetPrototypeMethod(tpl, "GetRadialRatioMaxValue", GetRadialRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRadialRatioMaxValue", GetRadialRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRadialRatioMinValue", GetRadialRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getRadialRatioMinValue", GetRadialRatioMinValue);

	Nan::SetPrototypeMethod(tpl, "GetShoulderResolution", GetShoulderResolution);
	Nan::SetPrototypeMethod(tpl, "getShoulderResolution", GetShoulderResolution);

	Nan::SetPrototypeMethod(tpl, "GetShoulderResolutionMaxValue", GetShoulderResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getShoulderResolutionMaxValue", GetShoulderResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetShoulderResolutionMinValue", GetShoulderResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getShoulderResolutionMinValue", GetShoulderResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTextureResolution", GetTextureResolution);
	Nan::SetPrototypeMethod(tpl, "getTextureResolution", GetTextureResolution);

	Nan::SetPrototypeMethod(tpl, "GetTextureResolutionMaxValue", GetTextureResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTextureResolutionMaxValue", GetTextureResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTextureResolutionMinValue", GetTextureResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getTextureResolutionMinValue", GetTextureResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetWidth", GetWidth);
	Nan::SetPrototypeMethod(tpl, "getWidth", GetWidth);

	Nan::SetPrototypeMethod(tpl, "GetWidthMaxValue", GetWidthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getWidthMaxValue", GetWidthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetWidthMinValue", GetWidthMinValue);
	Nan::SetPrototypeMethod(tpl, "getWidthMinValue", GetWidthMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCircumferentialResolution", SetCircumferentialResolution);
	Nan::SetPrototypeMethod(tpl, "setCircumferentialResolution", SetCircumferentialResolution);

	Nan::SetPrototypeMethod(tpl, "SetDepth", SetDepth);
	Nan::SetPrototypeMethod(tpl, "setDepth", SetDepth);

	Nan::SetPrototypeMethod(tpl, "SetHeight", SetHeight);
	Nan::SetPrototypeMethod(tpl, "setHeight", SetHeight);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetRadialRatio", SetRadialRatio);
	Nan::SetPrototypeMethod(tpl, "setRadialRatio", SetRadialRatio);

	Nan::SetPrototypeMethod(tpl, "SetShoulderResolution", SetShoulderResolution);
	Nan::SetPrototypeMethod(tpl, "setShoulderResolution", SetShoulderResolution);

	Nan::SetPrototypeMethod(tpl, "SetTextureResolution", SetTextureResolution);
	Nan::SetPrototypeMethod(tpl, "setTextureResolution", SetTextureResolution);

	Nan::SetPrototypeMethod(tpl, "SetWidth", SetWidth);
	Nan::SetPrototypeMethod(tpl, "setWidth", SetWidth);

#ifdef VTK_NODE_PLUS_VTKELLIPTICALBUTTONSOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKELLIPTICALBUTTONSOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkEllipticalButtonSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkEllipticalButtonSource> native = vtkSmartPointer<vtkEllipticalButtonSource>::New();
		VtkEllipticalButtonSourceWrap* obj = new VtkEllipticalButtonSourceWrap(native);
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

void VtkEllipticalButtonSourceWrap::GetCircumferentialResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCircumferentialResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetCircumferentialResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCircumferentialResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetCircumferentialResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCircumferentialResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEllipticalButtonSourceWrap::GetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetDepthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetDepthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetHeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeightMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetHeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeightMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetRadialRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadialRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetRadialRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadialRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetRadialRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadialRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetShoulderResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShoulderResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetShoulderResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShoulderResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetShoulderResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShoulderResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetTextureResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetTextureResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetTextureResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::GetWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEllipticalButtonSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
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

void VtkEllipticalButtonSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	vtkEllipticalButtonSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkEllipticalButtonSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkEllipticalButtonSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEllipticalButtonSourceWrap *w = new VtkEllipticalButtonSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEllipticalButtonSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkEllipticalButtonSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkEllipticalButtonSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkEllipticalButtonSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEllipticalButtonSourceWrap *w = new VtkEllipticalButtonSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEllipticalButtonSourceWrap::SetCircumferentialResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCircumferentialResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEllipticalButtonSourceWrap::SetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDepth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEllipticalButtonSourceWrap::SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEllipticalButtonSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEllipticalButtonSourceWrap::SetRadialRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadialRatio(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEllipticalButtonSourceWrap::SetShoulderResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShoulderResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEllipticalButtonSourceWrap::SetTextureResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextureResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEllipticalButtonSourceWrap::SetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEllipticalButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEllipticalButtonSourceWrap>(info.Holder());
	vtkEllipticalButtonSource *native = (vtkEllipticalButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

