/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageSliceWrap.h"
#include "vtkImageActorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageActorWrap::ptpl;

VtkImageActorWrap::VtkImageActorWrap()
{ }

VtkImageActorWrap::VtkImageActorWrap(vtkSmartPointer<vtkImageActor> _native)
{ native = _native; }

VtkImageActorWrap::~VtkImageActorWrap()
{ }

void VtkImageActorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageActor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageActor").ToLocalChecked(), ConstructorGetter);
}

void VtkImageActorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageActorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageSliceWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageSliceWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageActorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDisplayBounds", GetDisplayBounds);
	Nan::SetPrototypeMethod(tpl, "getDisplayBounds", GetDisplayBounds);

	Nan::SetPrototypeMethod(tpl, "GetDisplayExtent", GetDisplayExtent);
	Nan::SetPrototypeMethod(tpl, "getDisplayExtent", GetDisplayExtent);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetInterpolate", GetInterpolate);
	Nan::SetPrototypeMethod(tpl, "getInterpolate", GetInterpolate);

	Nan::SetPrototypeMethod(tpl, "GetOpacity", GetOpacity);
	Nan::SetPrototypeMethod(tpl, "getOpacity", GetOpacity);

	Nan::SetPrototypeMethod(tpl, "GetOpacityMaxValue", GetOpacityMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOpacityMaxValue", GetOpacityMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOpacityMinValue", GetOpacityMinValue);
	Nan::SetPrototypeMethod(tpl, "getOpacityMinValue", GetOpacityMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSliceNumber", GetSliceNumber);
	Nan::SetPrototypeMethod(tpl, "getSliceNumber", GetSliceNumber);

	Nan::SetPrototypeMethod(tpl, "GetSliceNumberMax", GetSliceNumberMax);
	Nan::SetPrototypeMethod(tpl, "getSliceNumberMax", GetSliceNumberMax);

	Nan::SetPrototypeMethod(tpl, "GetSliceNumberMin", GetSliceNumberMin);
	Nan::SetPrototypeMethod(tpl, "getSliceNumberMin", GetSliceNumberMin);

	Nan::SetPrototypeMethod(tpl, "GetWholeZMax", GetWholeZMax);
	Nan::SetPrototypeMethod(tpl, "getWholeZMax", GetWholeZMax);

	Nan::SetPrototypeMethod(tpl, "GetWholeZMin", GetWholeZMin);
	Nan::SetPrototypeMethod(tpl, "getWholeZMin", GetWholeZMin);

	Nan::SetPrototypeMethod(tpl, "GetZSlice", GetZSlice);
	Nan::SetPrototypeMethod(tpl, "getZSlice", GetZSlice);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "InterpolateOff", InterpolateOff);
	Nan::SetPrototypeMethod(tpl, "interpolateOff", InterpolateOff);

	Nan::SetPrototypeMethod(tpl, "InterpolateOn", InterpolateOn);
	Nan::SetPrototypeMethod(tpl, "interpolateOn", InterpolateOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDisplayExtent", SetDisplayExtent);
	Nan::SetPrototypeMethod(tpl, "setDisplayExtent", SetDisplayExtent);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetInterpolate", SetInterpolate);
	Nan::SetPrototypeMethod(tpl, "setInterpolate", SetInterpolate);

	Nan::SetPrototypeMethod(tpl, "SetOpacity", SetOpacity);
	Nan::SetPrototypeMethod(tpl, "setOpacity", SetOpacity);

	Nan::SetPrototypeMethod(tpl, "SetZSlice", SetZSlice);
	Nan::SetPrototypeMethod(tpl, "setZSlice", SetZSlice);

	ptpl.Reset( tpl );
}

void VtkImageActorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageActor> native = vtkSmartPointer<vtkImageActor>::New();
		VtkImageActorWrap* obj = new VtkImageActorWrap(native);
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

void VtkImageActorWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageActorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageActorWrap::GetDisplayBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetDisplayBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->GetDisplayBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageActorWrap::GetDisplayExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetDisplayExtent(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetDisplayExtent(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageActorWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
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

void VtkImageActorWrap::GetInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageActorWrap::GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageActorWrap::GetOpacityMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpacityMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageActorWrap::GetOpacityMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpacityMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageActorWrap::GetSliceNumber(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceNumber();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageActorWrap::GetSliceNumberMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceNumberMax();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageActorWrap::GetSliceNumberMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceNumberMin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageActorWrap::GetWholeZMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWholeZMax();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageActorWrap::GetWholeZMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWholeZMin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageActorWrap::GetZSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZSlice();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageActorWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageActorWrap::InterpolateOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InterpolateOff();
}

void VtkImageActorWrap::InterpolateOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InterpolateOn();
}

void VtkImageActorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
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

void VtkImageActorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	vtkImageActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageActorWrap *w = new VtkImageActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageActorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageActor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageActorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageActorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageActorWrap *w = new VtkImageActorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageActorWrap::SetDisplayExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplayExtent(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplayExtent(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetDisplayExtent(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageActorWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageActorWrap::SetInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolate(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageActorWrap::SetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
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

void VtkImageActorWrap::SetZSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorWrap>(info.Holder());
	vtkImageActor *native = (vtkImageActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZSlice(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

