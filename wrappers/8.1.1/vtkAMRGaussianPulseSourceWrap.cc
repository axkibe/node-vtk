/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkOverlappingAMRAlgorithmWrap.h"
#include "vtkAMRGaussianPulseSourceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAMRGaussianPulseSourceWrap::ptpl;

VtkAMRGaussianPulseSourceWrap::VtkAMRGaussianPulseSourceWrap()
{ }

VtkAMRGaussianPulseSourceWrap::VtkAMRGaussianPulseSourceWrap(vtkSmartPointer<vtkAMRGaussianPulseSource> _native)
{ native = _native; }

VtkAMRGaussianPulseSourceWrap::~VtkAMRGaussianPulseSourceWrap()
{ }

void VtkAMRGaussianPulseSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAMRGaussianPulseSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AMRGaussianPulseSource").ToLocalChecked(), ConstructorGetter);
}

void VtkAMRGaussianPulseSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAMRGaussianPulseSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkOverlappingAMRAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkOverlappingAMRAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAMRGaussianPulseSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetPulseAmplitude", GetPulseAmplitude);
	Nan::SetPrototypeMethod(tpl, "getPulseAmplitude", GetPulseAmplitude);

	Nan::SetPrototypeMethod(tpl, "GetPulseOrigin", GetPulseOrigin);
	Nan::SetPrototypeMethod(tpl, "getPulseOrigin", GetPulseOrigin);

	Nan::SetPrototypeMethod(tpl, "GetPulseWidth", GetPulseWidth);
	Nan::SetPrototypeMethod(tpl, "getPulseWidth", GetPulseWidth);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDimension", SetDimension);
	Nan::SetPrototypeMethod(tpl, "setDimension", SetDimension);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfLevels", SetNumberOfLevels);
	Nan::SetPrototypeMethod(tpl, "setNumberOfLevels", SetNumberOfLevels);

	Nan::SetPrototypeMethod(tpl, "SetPulseAmplitude", SetPulseAmplitude);
	Nan::SetPrototypeMethod(tpl, "setPulseAmplitude", SetPulseAmplitude);

	Nan::SetPrototypeMethod(tpl, "SetPulseOrigin", SetPulseOrigin);
	Nan::SetPrototypeMethod(tpl, "setPulseOrigin", SetPulseOrigin);

	Nan::SetPrototypeMethod(tpl, "SetPulseWidth", SetPulseWidth);
	Nan::SetPrototypeMethod(tpl, "setPulseWidth", SetPulseWidth);

	Nan::SetPrototypeMethod(tpl, "SetRefinementRatio", SetRefinementRatio);
	Nan::SetPrototypeMethod(tpl, "setRefinementRatio", SetRefinementRatio);

	Nan::SetPrototypeMethod(tpl, "SetRootSpacing", SetRootSpacing);
	Nan::SetPrototypeMethod(tpl, "setRootSpacing", SetRootSpacing);

	Nan::SetPrototypeMethod(tpl, "SetXPulseOrigin", SetXPulseOrigin);
	Nan::SetPrototypeMethod(tpl, "setXPulseOrigin", SetXPulseOrigin);

	Nan::SetPrototypeMethod(tpl, "SetXPulseWidth", SetXPulseWidth);
	Nan::SetPrototypeMethod(tpl, "setXPulseWidth", SetXPulseWidth);

	Nan::SetPrototypeMethod(tpl, "SetYPulseOrigin", SetYPulseOrigin);
	Nan::SetPrototypeMethod(tpl, "setYPulseOrigin", SetYPulseOrigin);

	Nan::SetPrototypeMethod(tpl, "SetYPulseWidth", SetYPulseWidth);
	Nan::SetPrototypeMethod(tpl, "setYPulseWidth", SetYPulseWidth);

	Nan::SetPrototypeMethod(tpl, "SetZPulseOrigin", SetZPulseOrigin);
	Nan::SetPrototypeMethod(tpl, "setZPulseOrigin", SetZPulseOrigin);

	Nan::SetPrototypeMethod(tpl, "SetZPulseWidth", SetZPulseWidth);
	Nan::SetPrototypeMethod(tpl, "setZPulseWidth", SetZPulseWidth);

#ifdef VTK_NODE_PLUS_VTKAMRGAUSSIANPULSESOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKAMRGAUSSIANPULSESOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAMRGaussianPulseSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAMRGaussianPulseSource> native = vtkSmartPointer<vtkAMRGaussianPulseSource>::New();
		VtkAMRGaussianPulseSourceWrap* obj = new VtkAMRGaussianPulseSourceWrap(native);
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

void VtkAMRGaussianPulseSourceWrap::GetPulseAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPulseAmplitude();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRGaussianPulseSourceWrap::GetPulseOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPulseOrigin();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkAMRGaussianPulseSourceWrap::GetPulseWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPulseWidth();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkAMRGaussianPulseSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	vtkAMRGaussianPulseSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAMRGaussianPulseSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAMRGaussianPulseSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMRGaussianPulseSourceWrap *w = new VtkAMRGaussianPulseSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRGaussianPulseSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkAMRGaussianPulseSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkAMRGaussianPulseSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAMRGaussianPulseSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMRGaussianPulseSourceWrap *w = new VtkAMRGaussianPulseSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRGaussianPulseSourceWrap::SetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDimension(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRGaussianPulseSourceWrap::SetNumberOfLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfLevels(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRGaussianPulseSourceWrap::SetPulseAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPulseAmplitude(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRGaussianPulseSourceWrap::SetPulseOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
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
		native->SetPulseOrigin(
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
		native->SetPulseOrigin(
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
				native->SetPulseOrigin(
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

void VtkAMRGaussianPulseSourceWrap::SetPulseWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
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
		native->SetPulseWidth(
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
		native->SetPulseWidth(
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
				native->SetPulseWidth(
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

void VtkAMRGaussianPulseSourceWrap::SetRefinementRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRefinementRatio(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRGaussianPulseSourceWrap::SetRootSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRootSpacing(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRGaussianPulseSourceWrap::SetXPulseOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXPulseOrigin(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRGaussianPulseSourceWrap::SetXPulseWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXPulseWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRGaussianPulseSourceWrap::SetYPulseOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYPulseOrigin(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRGaussianPulseSourceWrap::SetYPulseWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYPulseWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRGaussianPulseSourceWrap::SetZPulseOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZPulseOrigin(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRGaussianPulseSourceWrap::SetZPulseWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRGaussianPulseSourceWrap *wrapper = ObjectWrap::Unwrap<VtkAMRGaussianPulseSourceWrap>(info.Holder());
	vtkAMRGaussianPulseSource *native = (vtkAMRGaussianPulseSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZPulseWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

