/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageResizeWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAbstractImageInterpolatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageResizeWrap::ptpl;

VtkImageResizeWrap::VtkImageResizeWrap()
{ }

VtkImageResizeWrap::VtkImageResizeWrap(vtkSmartPointer<vtkImageResize> _native)
{ native = _native; }

VtkImageResizeWrap::~VtkImageResizeWrap()
{ }

void VtkImageResizeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageResize").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageResize").ToLocalChecked(), ConstructorGetter);
}

void VtkImageResizeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageResizeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageResizeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BorderOff", BorderOff);
	Nan::SetPrototypeMethod(tpl, "borderOff", BorderOff);

	Nan::SetPrototypeMethod(tpl, "BorderOn", BorderOn);
	Nan::SetPrototypeMethod(tpl, "borderOn", BorderOn);

	Nan::SetPrototypeMethod(tpl, "CroppingOff", CroppingOff);
	Nan::SetPrototypeMethod(tpl, "croppingOff", CroppingOff);

	Nan::SetPrototypeMethod(tpl, "CroppingOn", CroppingOn);
	Nan::SetPrototypeMethod(tpl, "croppingOn", CroppingOn);

	Nan::SetPrototypeMethod(tpl, "GetBorder", GetBorder);
	Nan::SetPrototypeMethod(tpl, "getBorder", GetBorder);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCropping", GetCropping);
	Nan::SetPrototypeMethod(tpl, "getCropping", GetCropping);

	Nan::SetPrototypeMethod(tpl, "GetInterpolate", GetInterpolate);
	Nan::SetPrototypeMethod(tpl, "getInterpolate", GetInterpolate);

	Nan::SetPrototypeMethod(tpl, "GetInterpolator", GetInterpolator);
	Nan::SetPrototypeMethod(tpl, "getInterpolator", GetInterpolator);

	Nan::SetPrototypeMethod(tpl, "GetResizeMethod", GetResizeMethod);
	Nan::SetPrototypeMethod(tpl, "getResizeMethod", GetResizeMethod);

	Nan::SetPrototypeMethod(tpl, "GetResizeMethodAsString", GetResizeMethodAsString);
	Nan::SetPrototypeMethod(tpl, "getResizeMethodAsString", GetResizeMethodAsString);

	Nan::SetPrototypeMethod(tpl, "GetResizeMethodMaxValue", GetResizeMethodMaxValue);
	Nan::SetPrototypeMethod(tpl, "getResizeMethodMaxValue", GetResizeMethodMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetResizeMethodMinValue", GetResizeMethodMinValue);
	Nan::SetPrototypeMethod(tpl, "getResizeMethodMinValue", GetResizeMethodMinValue);

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

	Nan::SetPrototypeMethod(tpl, "SetBorder", SetBorder);
	Nan::SetPrototypeMethod(tpl, "setBorder", SetBorder);

	Nan::SetPrototypeMethod(tpl, "SetCropping", SetCropping);
	Nan::SetPrototypeMethod(tpl, "setCropping", SetCropping);

	Nan::SetPrototypeMethod(tpl, "SetCroppingRegion", SetCroppingRegion);
	Nan::SetPrototypeMethod(tpl, "setCroppingRegion", SetCroppingRegion);

	Nan::SetPrototypeMethod(tpl, "SetInterpolate", SetInterpolate);
	Nan::SetPrototypeMethod(tpl, "setInterpolate", SetInterpolate);

	Nan::SetPrototypeMethod(tpl, "SetInterpolator", SetInterpolator);
	Nan::SetPrototypeMethod(tpl, "setInterpolator", SetInterpolator);

	Nan::SetPrototypeMethod(tpl, "SetMagnificationFactors", SetMagnificationFactors);
	Nan::SetPrototypeMethod(tpl, "setMagnificationFactors", SetMagnificationFactors);

	Nan::SetPrototypeMethod(tpl, "SetOutputDimensions", SetOutputDimensions);
	Nan::SetPrototypeMethod(tpl, "setOutputDimensions", SetOutputDimensions);

	Nan::SetPrototypeMethod(tpl, "SetOutputSpacing", SetOutputSpacing);
	Nan::SetPrototypeMethod(tpl, "setOutputSpacing", SetOutputSpacing);

	Nan::SetPrototypeMethod(tpl, "SetResizeMethod", SetResizeMethod);
	Nan::SetPrototypeMethod(tpl, "setResizeMethod", SetResizeMethod);

	Nan::SetPrototypeMethod(tpl, "SetResizeMethodToMagnificationFactors", SetResizeMethodToMagnificationFactors);
	Nan::SetPrototypeMethod(tpl, "setResizeMethodToMagnificationFactors", SetResizeMethodToMagnificationFactors);

	Nan::SetPrototypeMethod(tpl, "SetResizeMethodToOutputDimensions", SetResizeMethodToOutputDimensions);
	Nan::SetPrototypeMethod(tpl, "setResizeMethodToOutputDimensions", SetResizeMethodToOutputDimensions);

	Nan::SetPrototypeMethod(tpl, "SetResizeMethodToOutputSpacing", SetResizeMethodToOutputSpacing);
	Nan::SetPrototypeMethod(tpl, "setResizeMethodToOutputSpacing", SetResizeMethodToOutputSpacing);

	ptpl.Reset( tpl );
}

void VtkImageResizeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageResize> native = vtkSmartPointer<vtkImageResize>::New();
		VtkImageResizeWrap* obj = new VtkImageResizeWrap(native);
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

void VtkImageResizeWrap::BorderOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BorderOff();
}

void VtkImageResizeWrap::BorderOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BorderOn();
}

void VtkImageResizeWrap::CroppingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CroppingOff();
}

void VtkImageResizeWrap::CroppingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CroppingOn();
}

void VtkImageResizeWrap::GetBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBorder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResizeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageResizeWrap::GetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCropping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResizeWrap::GetInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResizeWrap::GetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	vtkAbstractImageInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolator();
		VtkAbstractImageInterpolatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractImageInterpolatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractImageInterpolatorWrap *w = new VtkAbstractImageInterpolatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageResizeWrap::GetResizeMethod(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResizeMethod();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResizeWrap::GetResizeMethodAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResizeMethodAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageResizeWrap::GetResizeMethodMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResizeMethodMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResizeWrap::GetResizeMethodMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResizeMethodMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResizeWrap::InterpolateOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InterpolateOff();
}

void VtkImageResizeWrap::InterpolateOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InterpolateOn();
}

void VtkImageResizeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
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

void VtkImageResizeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	vtkImageResize * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageResizeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageResizeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageResizeWrap *w = new VtkImageResizeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageResizeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageResize * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageResizeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageResizeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageResizeWrap *w = new VtkImageResizeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResizeWrap::SetBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBorder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResizeWrap::SetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCropping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResizeWrap::SetCroppingRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
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
		native->SetCroppingRegion(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetCroppingRegion(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
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

void VtkImageResizeWrap::SetInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
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

void VtkImageResizeWrap::SetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractImageInterpolatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractImageInterpolatorWrap *a0 = ObjectWrap::Unwrap<VtkAbstractImageInterpolatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolator(
			(vtkAbstractImageInterpolator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResizeWrap::SetMagnificationFactors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetMagnificationFactors(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetMagnificationFactors(
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

void VtkImageResizeWrap::SetOutputDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		int b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetOutputDimensions(
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
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOutputDimensions(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResizeWrap::SetOutputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetOutputSpacing(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetOutputSpacing(
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

void VtkImageResizeWrap::SetResizeMethod(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResizeMethod(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResizeWrap::SetResizeMethodToMagnificationFactors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetResizeMethodToMagnificationFactors();
}

void VtkImageResizeWrap::SetResizeMethodToOutputDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetResizeMethodToOutputDimensions();
}

void VtkImageResizeWrap::SetResizeMethodToOutputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResizeWrap *wrapper = ObjectWrap::Unwrap<VtkImageResizeWrap>(info.Holder());
	vtkImageResize *native = (vtkImageResize *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetResizeMethodToOutputSpacing();
}

