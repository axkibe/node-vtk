/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageAlgorithmWrap.h"
#include "vtkFastSplatterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFastSplatterWrap::ptpl;

VtkFastSplatterWrap::VtkFastSplatterWrap()
{ }

VtkFastSplatterWrap::VtkFastSplatterWrap(vtkSmartPointer<vtkFastSplatter> _native)
{ native = _native; }

VtkFastSplatterWrap::~VtkFastSplatterWrap()
{ }

void VtkFastSplatterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFastSplatter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FastSplatter").ToLocalChecked(), ConstructorGetter);
}

void VtkFastSplatterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFastSplatterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFastSplatterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetLimitMode", GetLimitMode);
	Nan::SetPrototypeMethod(tpl, "getLimitMode", GetLimitMode);

	Nan::SetPrototypeMethod(tpl, "GetMaxValue", GetMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaxValue", GetMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMinValue", GetMinValue);
	Nan::SetPrototypeMethod(tpl, "getMinValue", GetMinValue);

	Nan::SetPrototypeMethod(tpl, "GetModelBounds", GetModelBounds);
	Nan::SetPrototypeMethod(tpl, "getModelBounds", GetModelBounds);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPointsSplatted", GetNumberOfPointsSplatted);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPointsSplatted", GetNumberOfPointsSplatted);

	Nan::SetPrototypeMethod(tpl, "GetOutputDimensions", GetOutputDimensions);
	Nan::SetPrototypeMethod(tpl, "getOutputDimensions", GetOutputDimensions);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLimitMode", SetLimitMode);
	Nan::SetPrototypeMethod(tpl, "setLimitMode", SetLimitMode);

	Nan::SetPrototypeMethod(tpl, "SetLimitModeToClamp", SetLimitModeToClamp);
	Nan::SetPrototypeMethod(tpl, "setLimitModeToClamp", SetLimitModeToClamp);

	Nan::SetPrototypeMethod(tpl, "SetLimitModeToFreezeScale", SetLimitModeToFreezeScale);
	Nan::SetPrototypeMethod(tpl, "setLimitModeToFreezeScale", SetLimitModeToFreezeScale);

	Nan::SetPrototypeMethod(tpl, "SetLimitModeToNone", SetLimitModeToNone);
	Nan::SetPrototypeMethod(tpl, "setLimitModeToNone", SetLimitModeToNone);

	Nan::SetPrototypeMethod(tpl, "SetLimitModeToScale", SetLimitModeToScale);
	Nan::SetPrototypeMethod(tpl, "setLimitModeToScale", SetLimitModeToScale);

	Nan::SetPrototypeMethod(tpl, "SetMaxValue", SetMaxValue);
	Nan::SetPrototypeMethod(tpl, "setMaxValue", SetMaxValue);

	Nan::SetPrototypeMethod(tpl, "SetMinValue", SetMinValue);
	Nan::SetPrototypeMethod(tpl, "setMinValue", SetMinValue);

	Nan::SetPrototypeMethod(tpl, "SetModelBounds", SetModelBounds);
	Nan::SetPrototypeMethod(tpl, "setModelBounds", SetModelBounds);

	Nan::SetPrototypeMethod(tpl, "SetOutputDimensions", SetOutputDimensions);
	Nan::SetPrototypeMethod(tpl, "setOutputDimensions", SetOutputDimensions);

	Nan::SetPrototypeMethod(tpl, "SetSplatConnection", SetSplatConnection);
	Nan::SetPrototypeMethod(tpl, "setSplatConnection", SetSplatConnection);

#ifdef VTK_NODE_PLUS_VTKFASTSPLATTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKFASTSPLATTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkFastSplatterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFastSplatter> native = vtkSmartPointer<vtkFastSplatter>::New();
		VtkFastSplatterWrap* obj = new VtkFastSplatterWrap(native);
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

void VtkFastSplatterWrap::GetLimitMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLimitMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFastSplatterWrap::GetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFastSplatterWrap::GetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFastSplatterWrap::GetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetModelBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkFastSplatterWrap::GetNumberOfPointsSplatted(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPointsSplatted();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFastSplatterWrap::GetOutputDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputDimensions();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkFastSplatterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
	vtkFastSplatter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkFastSplatterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFastSplatterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFastSplatterWrap *w = new VtkFastSplatterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFastSplatterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkFastSplatter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkFastSplatterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFastSplatterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFastSplatterWrap *w = new VtkFastSplatterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFastSplatterWrap::SetLimitMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLimitMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFastSplatterWrap::SetLimitModeToClamp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLimitModeToClamp();
}

void VtkFastSplatterWrap::SetLimitModeToFreezeScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLimitModeToFreezeScale();
}

void VtkFastSplatterWrap::SetLimitModeToNone(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLimitModeToNone();
}

void VtkFastSplatterWrap::SetLimitModeToScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLimitModeToScale();
}

void VtkFastSplatterWrap::SetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFastSplatterWrap::SetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFastSplatterWrap::SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
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
		native->SetModelBounds(
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
		native->SetModelBounds(
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
							native->SetModelBounds(
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

void VtkFastSplatterWrap::SetOutputDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
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
		native->SetOutputDimensions(
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

void VtkFastSplatterWrap::SetSplatConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFastSplatterWrap *wrapper = ObjectWrap::Unwrap<VtkFastSplatterWrap>(info.Holder());
	vtkFastSplatter *native = (vtkFastSplatter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSplatConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
