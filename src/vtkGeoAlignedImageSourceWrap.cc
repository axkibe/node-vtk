/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGeoSourceWrap.h"
#include "vtkGeoAlignedImageSourceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGeoAlignedImageSourceWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkGeoAlignedImageSourceWrap::ptpl;

VtkGeoAlignedImageSourceWrap::VtkGeoAlignedImageSourceWrap()
{ }

VtkGeoAlignedImageSourceWrap::VtkGeoAlignedImageSourceWrap(vtkSmartPointer<vtkGeoAlignedImageSource> _native)
{ native = _native; }

VtkGeoAlignedImageSourceWrap::~VtkGeoAlignedImageSourceWrap()
{ }

void VtkGeoAlignedImageSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoAlignedImageSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoAlignedImageSource").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoAlignedImageSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoAlignedImageSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGeoSourceWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGeoSourceWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoAlignedImageSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetImage", GetImage);
	Nan::SetPrototypeMethod(tpl, "getImage", GetImage);

	Nan::SetPrototypeMethod(tpl, "GetOverlap", GetOverlap);
	Nan::SetPrototypeMethod(tpl, "getOverlap", GetOverlap);

	Nan::SetPrototypeMethod(tpl, "GetOverlapMaxValue", GetOverlapMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOverlapMaxValue", GetOverlapMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOverlapMinValue", GetOverlapMinValue);
	Nan::SetPrototypeMethod(tpl, "getOverlapMinValue", GetOverlapMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PowerOfTwoSizeOff", PowerOfTwoSizeOff);
	Nan::SetPrototypeMethod(tpl, "powerOfTwoSizeOff", PowerOfTwoSizeOff);

	Nan::SetPrototypeMethod(tpl, "PowerOfTwoSizeOn", PowerOfTwoSizeOn);
	Nan::SetPrototypeMethod(tpl, "powerOfTwoSizeOn", PowerOfTwoSizeOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetImage", SetImage);
	Nan::SetPrototypeMethod(tpl, "setImage", SetImage);

	Nan::SetPrototypeMethod(tpl, "SetLatitudeRange", SetLatitudeRange);
	Nan::SetPrototypeMethod(tpl, "setLatitudeRange", SetLatitudeRange);

	Nan::SetPrototypeMethod(tpl, "SetLongitudeRange", SetLongitudeRange);
	Nan::SetPrototypeMethod(tpl, "setLongitudeRange", SetLongitudeRange);

	Nan::SetPrototypeMethod(tpl, "SetOverlap", SetOverlap);
	Nan::SetPrototypeMethod(tpl, "setOverlap", SetOverlap);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkGeoAlignedImageSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoAlignedImageSource> native = vtkSmartPointer<vtkGeoAlignedImageSource>::New();
		VtkGeoAlignedImageSourceWrap* obj = new VtkGeoAlignedImageSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGeoAlignedImageSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoAlignedImageSourceWrap::GetImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImage();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoAlignedImageSourceWrap::GetOverlap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOverlap();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoAlignedImageSourceWrap::GetOverlapMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOverlapMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoAlignedImageSourceWrap::GetOverlapMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOverlapMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoAlignedImageSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
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

void VtkGeoAlignedImageSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	vtkGeoAlignedImageSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGeoAlignedImageSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGeoAlignedImageSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoAlignedImageSourceWrap *w = new VtkGeoAlignedImageSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoAlignedImageSourceWrap::PowerOfTwoSizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PowerOfTwoSizeOff();
}

void VtkGeoAlignedImageSourceWrap::PowerOfTwoSizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PowerOfTwoSizeOn();
}

void VtkGeoAlignedImageSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoAlignedImageSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGeoAlignedImageSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkGeoAlignedImageSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoAlignedImageSourceWrap *w = new VtkGeoAlignedImageSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAlignedImageSourceWrap::SetImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImage(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAlignedImageSourceWrap::SetLatitudeRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetLatitudeRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAlignedImageSourceWrap::SetLongitudeRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetLongitudeRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAlignedImageSourceWrap::SetOverlap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOverlap(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

