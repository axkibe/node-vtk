/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageAlgorithmWrap.h"
#include "vtkPResampleFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPResampleFilterWrap::ptpl;

VtkPResampleFilterWrap::VtkPResampleFilterWrap()
{ }

VtkPResampleFilterWrap::VtkPResampleFilterWrap(vtkSmartPointer<vtkPResampleFilter> _native)
{ native = _native; }

VtkPResampleFilterWrap::~VtkPResampleFilterWrap()
{ }

void VtkPResampleFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPResampleFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PResampleFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkPResampleFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPResampleFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPResampleFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "GetCustomSamplingBounds", GetCustomSamplingBounds);
	Nan::SetPrototypeMethod(tpl, "getCustomSamplingBounds", GetCustomSamplingBounds);

	Nan::SetPrototypeMethod(tpl, "GetSamplingDimension", GetSamplingDimension);
	Nan::SetPrototypeMethod(tpl, "getSamplingDimension", GetSamplingDimension);

	Nan::SetPrototypeMethod(tpl, "GetUseInputBounds", GetUseInputBounds);
	Nan::SetPrototypeMethod(tpl, "getUseInputBounds", GetUseInputBounds);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

	Nan::SetPrototypeMethod(tpl, "SetCustomSamplingBounds", SetCustomSamplingBounds);
	Nan::SetPrototypeMethod(tpl, "setCustomSamplingBounds", SetCustomSamplingBounds);

	Nan::SetPrototypeMethod(tpl, "SetSamplingDimension", SetSamplingDimension);
	Nan::SetPrototypeMethod(tpl, "setSamplingDimension", SetSamplingDimension);

	Nan::SetPrototypeMethod(tpl, "SetUseInputBounds", SetUseInputBounds);
	Nan::SetPrototypeMethod(tpl, "setUseInputBounds", SetUseInputBounds);

	Nan::SetPrototypeMethod(tpl, "UseInputBoundsOff", UseInputBoundsOff);
	Nan::SetPrototypeMethod(tpl, "useInputBoundsOff", UseInputBoundsOff);

	Nan::SetPrototypeMethod(tpl, "UseInputBoundsOn", UseInputBoundsOn);
	Nan::SetPrototypeMethod(tpl, "useInputBoundsOn", UseInputBoundsOn);

#ifdef VTK_NODE_PLUS_VTKPRESAMPLEFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPRESAMPLEFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPResampleFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPResampleFilter> native = vtkSmartPointer<vtkPResampleFilter>::New();
		VtkPResampleFilterWrap* obj = new VtkPResampleFilterWrap(native);
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

void VtkPResampleFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPResampleFilterWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
	VtkMultiProcessControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPResampleFilterWrap::GetCustomSamplingBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCustomSamplingBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkPResampleFilterWrap::GetSamplingDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSamplingDimension();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkPResampleFilterWrap::GetUseInputBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseInputBounds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPResampleFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
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

void VtkPResampleFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
	vtkPResampleFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPResampleFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPResampleFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPResampleFilterWrap *w = new VtkPResampleFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPResampleFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPResampleFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkPResampleFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPResampleFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPResampleFilterWrap *w = new VtkPResampleFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPResampleFilterWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMultiProcessControllerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetController(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPResampleFilterWrap::SetCustomSamplingBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
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
		native->SetCustomSamplingBounds(
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
		native->SetCustomSamplingBounds(
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
							native->SetCustomSamplingBounds(
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

void VtkPResampleFilterWrap::SetSamplingDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
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
		native->SetSamplingDimension(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->SetSamplingDimension(
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
				native->SetSamplingDimension(
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

void VtkPResampleFilterWrap::SetUseInputBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseInputBounds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPResampleFilterWrap::UseInputBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseInputBoundsOff();
}

void VtkPResampleFilterWrap::UseInputBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPResampleFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPResampleFilterWrap>(info.Holder());
	vtkPResampleFilter *native = (vtkPResampleFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseInputBoundsOn();
}

