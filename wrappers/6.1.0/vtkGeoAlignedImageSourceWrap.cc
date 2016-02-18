/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGeoSourceWrap.h"
#include "vtkGeoAlignedImageSourceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkGeoTreeNodeWrap.h"
#include "vtkImageDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
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

	Nan::SetPrototypeMethod(tpl, "FetchChild", FetchChild);
	Nan::SetPrototypeMethod(tpl, "fetchChild", FetchChild);

	Nan::SetPrototypeMethod(tpl, "FetchRoot", FetchRoot);
	Nan::SetPrototypeMethod(tpl, "fetchRoot", FetchRoot);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetImage", GetImage);
	Nan::SetPrototypeMethod(tpl, "getImage", GetImage);

	Nan::SetPrototypeMethod(tpl, "GetLatitudeRange", GetLatitudeRange);
	Nan::SetPrototypeMethod(tpl, "getLatitudeRange", GetLatitudeRange);

	Nan::SetPrototypeMethod(tpl, "GetLongitudeRange", GetLongitudeRange);
	Nan::SetPrototypeMethod(tpl, "getLongitudeRange", GetLongitudeRange);

	Nan::SetPrototypeMethod(tpl, "GetOverlap", GetOverlap);
	Nan::SetPrototypeMethod(tpl, "getOverlap", GetOverlap);

	Nan::SetPrototypeMethod(tpl, "GetOverlapMaxValue", GetOverlapMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOverlapMaxValue", GetOverlapMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOverlapMinValue", GetOverlapMinValue);
	Nan::SetPrototypeMethod(tpl, "getOverlapMinValue", GetOverlapMinValue);

	Nan::SetPrototypeMethod(tpl, "GetPowerOfTwoSize", GetPowerOfTwoSize);
	Nan::SetPrototypeMethod(tpl, "getPowerOfTwoSize", GetPowerOfTwoSize);

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

	Nan::SetPrototypeMethod(tpl, "SetPowerOfTwoSize", SetPowerOfTwoSize);
	Nan::SetPrototypeMethod(tpl, "setPowerOfTwoSize", SetPowerOfTwoSize);

#ifdef VTK_NODE_PLUS_VTKGEOALIGNEDIMAGESOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGEOALIGNEDIMAGESOURCEWRAP_INITPTPL
#endif
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
		VtkGeoAlignedImageSourceWrap* obj = new VtkGeoAlignedImageSourceWrap(native);
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

void VtkGeoAlignedImageSourceWrap::FetchChild(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoTreeNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkGeoTreeNodeWrap::ptpl))->HasInstance(info[2]))
			{
				VtkGeoTreeNodeWrap *a2 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[2]->ToObject());
				bool r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->FetchChild(
					(vtkGeoTreeNode *) a0->native.GetPointer(),
					info[1]->Int32Value(),
					(vtkGeoTreeNode *) a2->native.GetPointer()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAlignedImageSourceWrap::FetchRoot(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoTreeNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->FetchRoot(
			(vtkGeoTreeNode *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
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
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoAlignedImageSourceWrap::GetLatitudeRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLatitudeRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkGeoAlignedImageSourceWrap::GetLongitudeRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLongitudeRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(double));
	info.GetReturnValue().Set(at);
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

void VtkGeoAlignedImageSourceWrap::GetPowerOfTwoSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPowerOfTwoSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoAlignedImageSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
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
		Nan::New<v8::FunctionTemplate>(VtkGeoAlignedImageSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoAlignedImageSourceWrap *w = new VtkGeoAlignedImageSourceWrap();
	w->native = r;
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
			Nan::New<v8::FunctionTemplate>(VtkGeoAlignedImageSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoAlignedImageSourceWrap *w = new VtkGeoAlignedImageSourceWrap();
		w->native = r;
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
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLatitudeRange(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLatitudeRange(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLongitudeRange(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLongitudeRange(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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

void VtkGeoAlignedImageSourceWrap::SetPowerOfTwoSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAlignedImageSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAlignedImageSourceWrap>(info.Holder());
	vtkGeoAlignedImageSource *native = (vtkGeoAlignedImageSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPowerOfTwoSize(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

