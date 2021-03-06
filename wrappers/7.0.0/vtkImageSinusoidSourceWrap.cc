/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageAlgorithmWrap.h"
#include "vtkImageSinusoidSourceWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageSinusoidSourceWrap::ptpl;

VtkImageSinusoidSourceWrap::VtkImageSinusoidSourceWrap()
{ }

VtkImageSinusoidSourceWrap::VtkImageSinusoidSourceWrap(vtkSmartPointer<vtkImageSinusoidSource> _native)
{ native = _native; }

VtkImageSinusoidSourceWrap::~VtkImageSinusoidSourceWrap()
{ }

void VtkImageSinusoidSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageSinusoidSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageSinusoidSource").ToLocalChecked(), ConstructorGetter);
}

void VtkImageSinusoidSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageSinusoidSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageSinusoidSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAmplitude", GetAmplitude);
	Nan::SetPrototypeMethod(tpl, "getAmplitude", GetAmplitude);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDirection", GetDirection);
	Nan::SetPrototypeMethod(tpl, "getDirection", GetDirection);

	Nan::SetPrototypeMethod(tpl, "GetPeriod", GetPeriod);
	Nan::SetPrototypeMethod(tpl, "getPeriod", GetPeriod);

	Nan::SetPrototypeMethod(tpl, "GetPhase", GetPhase);
	Nan::SetPrototypeMethod(tpl, "getPhase", GetPhase);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAmplitude", SetAmplitude);
	Nan::SetPrototypeMethod(tpl, "setAmplitude", SetAmplitude);

	Nan::SetPrototypeMethod(tpl, "SetDirection", SetDirection);
	Nan::SetPrototypeMethod(tpl, "setDirection", SetDirection);

	Nan::SetPrototypeMethod(tpl, "SetPeriod", SetPeriod);
	Nan::SetPrototypeMethod(tpl, "setPeriod", SetPeriod);

	Nan::SetPrototypeMethod(tpl, "SetPhase", SetPhase);
	Nan::SetPrototypeMethod(tpl, "setPhase", SetPhase);

	Nan::SetPrototypeMethod(tpl, "SetWholeExtent", SetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setWholeExtent", SetWholeExtent);

#ifdef VTK_NODE_PLUS_VTKIMAGESINUSOIDSOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGESINUSOIDSOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageSinusoidSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageSinusoidSource> native = vtkSmartPointer<vtkImageSinusoidSource>::New();
		VtkImageSinusoidSourceWrap* obj = new VtkImageSinusoidSourceWrap(native);
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

void VtkImageSinusoidSourceWrap::GetAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSinusoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSinusoidSourceWrap>(info.Holder());
	vtkImageSinusoidSource *native = (vtkImageSinusoidSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAmplitude();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSinusoidSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSinusoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSinusoidSourceWrap>(info.Holder());
	vtkImageSinusoidSource *native = (vtkImageSinusoidSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageSinusoidSourceWrap::GetDirection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSinusoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSinusoidSourceWrap>(info.Holder());
	vtkImageSinusoidSource *native = (vtkImageSinusoidSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDirection();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkImageSinusoidSourceWrap::GetPeriod(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSinusoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSinusoidSourceWrap>(info.Holder());
	vtkImageSinusoidSource *native = (vtkImageSinusoidSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPeriod();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSinusoidSourceWrap::GetPhase(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSinusoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSinusoidSourceWrap>(info.Holder());
	vtkImageSinusoidSource *native = (vtkImageSinusoidSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPhase();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSinusoidSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSinusoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSinusoidSourceWrap>(info.Holder());
	vtkImageSinusoidSource *native = (vtkImageSinusoidSource *)wrapper->native.GetPointer();
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

void VtkImageSinusoidSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSinusoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSinusoidSourceWrap>(info.Holder());
	vtkImageSinusoidSource *native = (vtkImageSinusoidSource *)wrapper->native.GetPointer();
	vtkImageSinusoidSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageSinusoidSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageSinusoidSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageSinusoidSourceWrap *w = new VtkImageSinusoidSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSinusoidSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSinusoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSinusoidSourceWrap>(info.Holder());
	vtkImageSinusoidSource *native = (vtkImageSinusoidSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageSinusoidSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImageSinusoidSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageSinusoidSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageSinusoidSourceWrap *w = new VtkImageSinusoidSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSinusoidSourceWrap::SetAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSinusoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSinusoidSourceWrap>(info.Holder());
	vtkImageSinusoidSource *native = (vtkImageSinusoidSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAmplitude(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSinusoidSourceWrap::SetDirection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSinusoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSinusoidSourceWrap>(info.Holder());
	vtkImageSinusoidSource *native = (vtkImageSinusoidSource *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDirection(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->SetDirection(
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
				native->SetDirection(
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

void VtkImageSinusoidSourceWrap::SetPeriod(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSinusoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSinusoidSourceWrap>(info.Holder());
	vtkImageSinusoidSource *native = (vtkImageSinusoidSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPeriod(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSinusoidSourceWrap::SetPhase(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSinusoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSinusoidSourceWrap>(info.Holder());
	vtkImageSinusoidSource *native = (vtkImageSinusoidSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPhase(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSinusoidSourceWrap::SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSinusoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSinusoidSourceWrap>(info.Holder());
	vtkImageSinusoidSource *native = (vtkImageSinusoidSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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
							native->SetWholeExtent(
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

