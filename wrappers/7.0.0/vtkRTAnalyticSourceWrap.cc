/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageAlgorithmWrap.h"
#include "vtkRTAnalyticSourceWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRTAnalyticSourceWrap::ptpl;

VtkRTAnalyticSourceWrap::VtkRTAnalyticSourceWrap()
{ }

VtkRTAnalyticSourceWrap::VtkRTAnalyticSourceWrap(vtkSmartPointer<vtkRTAnalyticSource> _native)
{ native = _native; }

VtkRTAnalyticSourceWrap::~VtkRTAnalyticSourceWrap()
{ }

void VtkRTAnalyticSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRTAnalyticSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RTAnalyticSource").ToLocalChecked(), ConstructorGetter);
}

void VtkRTAnalyticSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRTAnalyticSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRTAnalyticSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCenter", GetCenter);
	Nan::SetPrototypeMethod(tpl, "getCenter", GetCenter);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaximum", GetMaximum);
	Nan::SetPrototypeMethod(tpl, "getMaximum", GetMaximum);

	Nan::SetPrototypeMethod(tpl, "GetStandardDeviation", GetStandardDeviation);
	Nan::SetPrototypeMethod(tpl, "getStandardDeviation", GetStandardDeviation);

	Nan::SetPrototypeMethod(tpl, "GetSubsampleRate", GetSubsampleRate);
	Nan::SetPrototypeMethod(tpl, "getSubsampleRate", GetSubsampleRate);

	Nan::SetPrototypeMethod(tpl, "GetWholeExtent", GetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "getWholeExtent", GetWholeExtent);

	Nan::SetPrototypeMethod(tpl, "GetXFreq", GetXFreq);
	Nan::SetPrototypeMethod(tpl, "getXFreq", GetXFreq);

	Nan::SetPrototypeMethod(tpl, "GetXMag", GetXMag);
	Nan::SetPrototypeMethod(tpl, "getXMag", GetXMag);

	Nan::SetPrototypeMethod(tpl, "GetYFreq", GetYFreq);
	Nan::SetPrototypeMethod(tpl, "getYFreq", GetYFreq);

	Nan::SetPrototypeMethod(tpl, "GetYMag", GetYMag);
	Nan::SetPrototypeMethod(tpl, "getYMag", GetYMag);

	Nan::SetPrototypeMethod(tpl, "GetZFreq", GetZFreq);
	Nan::SetPrototypeMethod(tpl, "getZFreq", GetZFreq);

	Nan::SetPrototypeMethod(tpl, "GetZMag", GetZMag);
	Nan::SetPrototypeMethod(tpl, "getZMag", GetZMag);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetMaximum", SetMaximum);
	Nan::SetPrototypeMethod(tpl, "setMaximum", SetMaximum);

	Nan::SetPrototypeMethod(tpl, "SetStandardDeviation", SetStandardDeviation);
	Nan::SetPrototypeMethod(tpl, "setStandardDeviation", SetStandardDeviation);

	Nan::SetPrototypeMethod(tpl, "SetSubsampleRate", SetSubsampleRate);
	Nan::SetPrototypeMethod(tpl, "setSubsampleRate", SetSubsampleRate);

	Nan::SetPrototypeMethod(tpl, "SetWholeExtent", SetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setWholeExtent", SetWholeExtent);

	Nan::SetPrototypeMethod(tpl, "SetXFreq", SetXFreq);
	Nan::SetPrototypeMethod(tpl, "setXFreq", SetXFreq);

	Nan::SetPrototypeMethod(tpl, "SetXMag", SetXMag);
	Nan::SetPrototypeMethod(tpl, "setXMag", SetXMag);

	Nan::SetPrototypeMethod(tpl, "SetYFreq", SetYFreq);
	Nan::SetPrototypeMethod(tpl, "setYFreq", SetYFreq);

	Nan::SetPrototypeMethod(tpl, "SetYMag", SetYMag);
	Nan::SetPrototypeMethod(tpl, "setYMag", SetYMag);

	Nan::SetPrototypeMethod(tpl, "SetZFreq", SetZFreq);
	Nan::SetPrototypeMethod(tpl, "setZFreq", SetZFreq);

	Nan::SetPrototypeMethod(tpl, "SetZMag", SetZMag);
	Nan::SetPrototypeMethod(tpl, "setZMag", SetZMag);

#ifdef VTK_NODE_PLUS_VTKRTANALYTICSOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKRTANALYTICSOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkRTAnalyticSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRTAnalyticSource> native = vtkSmartPointer<vtkRTAnalyticSource>::New();
		VtkRTAnalyticSourceWrap* obj = new VtkRTAnalyticSourceWrap(native);
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

void VtkRTAnalyticSourceWrap::GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCenter();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkRTAnalyticSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRTAnalyticSourceWrap::GetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRTAnalyticSourceWrap::GetStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStandardDeviation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRTAnalyticSourceWrap::GetSubsampleRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubsampleRate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRTAnalyticSourceWrap::GetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWholeExtent();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkRTAnalyticSourceWrap::GetXFreq(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXFreq();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRTAnalyticSourceWrap::GetXMag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXMag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRTAnalyticSourceWrap::GetYFreq(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYFreq();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRTAnalyticSourceWrap::GetYMag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYMag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRTAnalyticSourceWrap::GetZFreq(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZFreq();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRTAnalyticSourceWrap::GetZMag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZMag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRTAnalyticSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
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

void VtkRTAnalyticSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	vtkRTAnalyticSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkRTAnalyticSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRTAnalyticSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRTAnalyticSourceWrap *w = new VtkRTAnalyticSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRTAnalyticSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRTAnalyticSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkRTAnalyticSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRTAnalyticSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRTAnalyticSourceWrap *w = new VtkRTAnalyticSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRTAnalyticSourceWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
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
		native->SetCenter(
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
		native->SetCenter(
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
				native->SetCenter(
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

void VtkRTAnalyticSourceWrap::SetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximum(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRTAnalyticSourceWrap::SetStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStandardDeviation(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRTAnalyticSourceWrap::SetSubsampleRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSubsampleRate(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRTAnalyticSourceWrap::SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
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

void VtkRTAnalyticSourceWrap::SetXFreq(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXFreq(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRTAnalyticSourceWrap::SetXMag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXMag(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRTAnalyticSourceWrap::SetYFreq(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYFreq(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRTAnalyticSourceWrap::SetYMag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYMag(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRTAnalyticSourceWrap::SetZFreq(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZFreq(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRTAnalyticSourceWrap::SetZMag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTAnalyticSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRTAnalyticSourceWrap>(info.Holder());
	vtkRTAnalyticSource *native = (vtkRTAnalyticSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZMag(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

