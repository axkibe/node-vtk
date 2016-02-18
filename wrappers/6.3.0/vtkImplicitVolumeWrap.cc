/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImplicitFunctionWrap.h"
#include "vtkImplicitVolumeWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImplicitVolumeWrap::ptpl;

VtkImplicitVolumeWrap::VtkImplicitVolumeWrap()
{ }

VtkImplicitVolumeWrap::VtkImplicitVolumeWrap(vtkSmartPointer<vtkImplicitVolume> _native)
{ native = _native; }

VtkImplicitVolumeWrap::~VtkImplicitVolumeWrap()
{ }

void VtkImplicitVolumeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImplicitVolume").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImplicitVolume").ToLocalChecked(), ConstructorGetter);
}

void VtkImplicitVolumeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImplicitVolumeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImplicitFunctionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImplicitFunctionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImplicitVolumeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EvaluateFunction", EvaluateFunction);
	Nan::SetPrototypeMethod(tpl, "evaluateFunction", EvaluateFunction);

	Nan::SetPrototypeMethod(tpl, "EvaluateGradient", EvaluateGradient);
	Nan::SetPrototypeMethod(tpl, "evaluateGradient", EvaluateGradient);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutGradient", GetOutGradient);
	Nan::SetPrototypeMethod(tpl, "getOutGradient", GetOutGradient);

	Nan::SetPrototypeMethod(tpl, "GetOutValue", GetOutValue);
	Nan::SetPrototypeMethod(tpl, "getOutValue", GetOutValue);

	Nan::SetPrototypeMethod(tpl, "GetVolume", GetVolume);
	Nan::SetPrototypeMethod(tpl, "getVolume", GetVolume);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOutGradient", SetOutGradient);
	Nan::SetPrototypeMethod(tpl, "setOutGradient", SetOutGradient);

	Nan::SetPrototypeMethod(tpl, "SetOutValue", SetOutValue);
	Nan::SetPrototypeMethod(tpl, "setOutValue", SetOutValue);

	Nan::SetPrototypeMethod(tpl, "SetVolume", SetVolume);
	Nan::SetPrototypeMethod(tpl, "setVolume", SetVolume);

#ifdef VTK_NODE_PLUS_VTKIMPLICITVOLUMEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMPLICITVOLUMEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImplicitVolumeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImplicitVolume> native = vtkSmartPointer<vtkImplicitVolume>::New();
		VtkImplicitVolumeWrap* obj = new VtkImplicitVolumeWrap(native);
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

void VtkImplicitVolumeWrap::EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitVolumeWrap>(info.Holder());
	vtkImplicitVolume *native = (vtkImplicitVolume *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->EvaluateFunction(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		info.GetReturnValue().Set(Nan::New(r));
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
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->EvaluateFunction(
			b0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->EvaluateFunction(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitVolumeWrap::EvaluateGradient(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitVolumeWrap>(info.Holder());
	vtkImplicitVolume *native = (vtkImplicitVolume *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->EvaluateGradient(
				(double *)(a0->Buffer()->GetContents().Data()),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->EvaluateGradient(
				(double *)(a0->Buffer()->GetContents().Data()),
				b1
			);
			return;
		}
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->EvaluateGradient(
				b0,
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->EvaluateGradient(
				b0,
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitVolumeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitVolumeWrap>(info.Holder());
	vtkImplicitVolume *native = (vtkImplicitVolume *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImplicitVolumeWrap::GetOutGradient(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitVolumeWrap>(info.Holder());
	vtkImplicitVolume *native = (vtkImplicitVolume *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutGradient();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkImplicitVolumeWrap::GetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitVolumeWrap>(info.Holder());
	vtkImplicitVolume *native = (vtkImplicitVolume *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitVolumeWrap::GetVolume(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitVolumeWrap>(info.Holder());
	vtkImplicitVolume *native = (vtkImplicitVolume *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolume();
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

void VtkImplicitVolumeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitVolumeWrap>(info.Holder());
	vtkImplicitVolume *native = (vtkImplicitVolume *)wrapper->native.GetPointer();
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

void VtkImplicitVolumeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitVolumeWrap>(info.Holder());
	vtkImplicitVolume *native = (vtkImplicitVolume *)wrapper->native.GetPointer();
	vtkImplicitVolume * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImplicitVolumeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImplicitVolumeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImplicitVolumeWrap *w = new VtkImplicitVolumeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImplicitVolumeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitVolumeWrap>(info.Holder());
	vtkImplicitVolume *native = (vtkImplicitVolume *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImplicitVolume * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImplicitVolumeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImplicitVolumeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImplicitVolumeWrap *w = new VtkImplicitVolumeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitVolumeWrap::SetOutGradient(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitVolumeWrap>(info.Holder());
	vtkImplicitVolume *native = (vtkImplicitVolume *)wrapper->native.GetPointer();
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
		native->SetOutGradient(
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
		native->SetOutGradient(
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
				native->SetOutGradient(
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

void VtkImplicitVolumeWrap::SetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitVolumeWrap>(info.Holder());
	vtkImplicitVolume *native = (vtkImplicitVolume *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitVolumeWrap::SetVolume(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitVolumeWrap>(info.Holder());
	vtkImplicitVolume *native = (vtkImplicitVolume *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVolume(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

