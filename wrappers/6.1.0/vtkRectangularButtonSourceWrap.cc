/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkButtonSourceWrap.h"
#include "vtkRectangularButtonSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRectangularButtonSourceWrap::ptpl;

VtkRectangularButtonSourceWrap::VtkRectangularButtonSourceWrap()
{ }

VtkRectangularButtonSourceWrap::VtkRectangularButtonSourceWrap(vtkSmartPointer<vtkRectangularButtonSource> _native)
{ native = _native; }

VtkRectangularButtonSourceWrap::~VtkRectangularButtonSourceWrap()
{ }

void VtkRectangularButtonSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRectangularButtonSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RectangularButtonSource").ToLocalChecked(), ConstructorGetter);
}

void VtkRectangularButtonSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRectangularButtonSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkButtonSourceWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkButtonSourceWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRectangularButtonSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBoxRatio", GetBoxRatio);
	Nan::SetPrototypeMethod(tpl, "getBoxRatio", GetBoxRatio);

	Nan::SetPrototypeMethod(tpl, "GetBoxRatioMaxValue", GetBoxRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getBoxRatioMaxValue", GetBoxRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetBoxRatioMinValue", GetBoxRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getBoxRatioMinValue", GetBoxRatioMinValue);

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

	Nan::SetPrototypeMethod(tpl, "GetTextureHeightRatio", GetTextureHeightRatio);
	Nan::SetPrototypeMethod(tpl, "getTextureHeightRatio", GetTextureHeightRatio);

	Nan::SetPrototypeMethod(tpl, "GetTextureHeightRatioMaxValue", GetTextureHeightRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTextureHeightRatioMaxValue", GetTextureHeightRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTextureHeightRatioMinValue", GetTextureHeightRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getTextureHeightRatioMinValue", GetTextureHeightRatioMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTextureRatio", GetTextureRatio);
	Nan::SetPrototypeMethod(tpl, "getTextureRatio", GetTextureRatio);

	Nan::SetPrototypeMethod(tpl, "GetTextureRatioMaxValue", GetTextureRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTextureRatioMaxValue", GetTextureRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTextureRatioMinValue", GetTextureRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getTextureRatioMinValue", GetTextureRatioMinValue);

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

	Nan::SetPrototypeMethod(tpl, "SetBoxRatio", SetBoxRatio);
	Nan::SetPrototypeMethod(tpl, "setBoxRatio", SetBoxRatio);

	Nan::SetPrototypeMethod(tpl, "SetDepth", SetDepth);
	Nan::SetPrototypeMethod(tpl, "setDepth", SetDepth);

	Nan::SetPrototypeMethod(tpl, "SetHeight", SetHeight);
	Nan::SetPrototypeMethod(tpl, "setHeight", SetHeight);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetTextureHeightRatio", SetTextureHeightRatio);
	Nan::SetPrototypeMethod(tpl, "setTextureHeightRatio", SetTextureHeightRatio);

	Nan::SetPrototypeMethod(tpl, "SetTextureRatio", SetTextureRatio);
	Nan::SetPrototypeMethod(tpl, "setTextureRatio", SetTextureRatio);

	Nan::SetPrototypeMethod(tpl, "SetWidth", SetWidth);
	Nan::SetPrototypeMethod(tpl, "setWidth", SetWidth);

	ptpl.Reset( tpl );
}

void VtkRectangularButtonSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRectangularButtonSource> native = vtkSmartPointer<vtkRectangularButtonSource>::New();
		VtkRectangularButtonSourceWrap* obj = new VtkRectangularButtonSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRectangularButtonSourceWrap::GetBoxRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoxRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetBoxRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoxRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetBoxRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoxRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRectangularButtonSourceWrap::GetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetDepthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetDepthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetHeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeightMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetHeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeightMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetTextureHeightRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureHeightRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetTextureHeightRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureHeightRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetTextureHeightRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureHeightRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetTextureRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetTextureRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetTextureRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::GetWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectangularButtonSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
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

void VtkRectangularButtonSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	vtkRectangularButtonSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRectangularButtonSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRectangularButtonSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRectangularButtonSourceWrap *w = new VtkRectangularButtonSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRectangularButtonSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRectangularButtonSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRectangularButtonSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRectangularButtonSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRectangularButtonSourceWrap *w = new VtkRectangularButtonSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRectangularButtonSourceWrap::SetBoxRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBoxRatio(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRectangularButtonSourceWrap::SetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
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

void VtkRectangularButtonSourceWrap::SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
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

void VtkRectangularButtonSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
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

void VtkRectangularButtonSourceWrap::SetTextureHeightRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextureHeightRatio(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRectangularButtonSourceWrap::SetTextureRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextureRatio(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRectangularButtonSourceWrap::SetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectangularButtonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRectangularButtonSourceWrap>(info.Holder());
	vtkRectangularButtonSource *native = (vtkRectangularButtonSource *)wrapper->native.GetPointer();
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

