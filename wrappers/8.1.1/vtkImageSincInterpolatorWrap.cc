/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAbstractImageInterpolatorWrap.h"
#include "vtkImageSincInterpolatorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageSincInterpolatorWrap::ptpl;

VtkImageSincInterpolatorWrap::VtkImageSincInterpolatorWrap()
{ }

VtkImageSincInterpolatorWrap::VtkImageSincInterpolatorWrap(vtkSmartPointer<vtkImageSincInterpolator> _native)
{ native = _native; }

VtkImageSincInterpolatorWrap::~VtkImageSincInterpolatorWrap()
{ }

void VtkImageSincInterpolatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageSincInterpolator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageSincInterpolator").ToLocalChecked(), ConstructorGetter);
}

void VtkImageSincInterpolatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageSincInterpolatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractImageInterpolatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractImageInterpolatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageSincInterpolatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AntialiasingOff", AntialiasingOff);
	Nan::SetPrototypeMethod(tpl, "antialiasingOff", AntialiasingOff);

	Nan::SetPrototypeMethod(tpl, "AntialiasingOn", AntialiasingOn);
	Nan::SetPrototypeMethod(tpl, "antialiasingOn", AntialiasingOn);

	Nan::SetPrototypeMethod(tpl, "ComputeSupportSize", ComputeSupportSize);
	Nan::SetPrototypeMethod(tpl, "computeSupportSize", ComputeSupportSize);

	Nan::SetPrototypeMethod(tpl, "GetAntialiasing", GetAntialiasing);
	Nan::SetPrototypeMethod(tpl, "getAntialiasing", GetAntialiasing);

	Nan::SetPrototypeMethod(tpl, "GetBlurFactors", GetBlurFactors);
	Nan::SetPrototypeMethod(tpl, "getBlurFactors", GetBlurFactors);

	Nan::SetPrototypeMethod(tpl, "GetRenormalization", GetRenormalization);
	Nan::SetPrototypeMethod(tpl, "getRenormalization", GetRenormalization);

	Nan::SetPrototypeMethod(tpl, "GetUseWindowParameter", GetUseWindowParameter);
	Nan::SetPrototypeMethod(tpl, "getUseWindowParameter", GetUseWindowParameter);

	Nan::SetPrototypeMethod(tpl, "GetWindowFunction", GetWindowFunction);
	Nan::SetPrototypeMethod(tpl, "getWindowFunction", GetWindowFunction);

	Nan::SetPrototypeMethod(tpl, "GetWindowFunctionAsString", GetWindowFunctionAsString);
	Nan::SetPrototypeMethod(tpl, "getWindowFunctionAsString", GetWindowFunctionAsString);

	Nan::SetPrototypeMethod(tpl, "GetWindowHalfWidth", GetWindowHalfWidth);
	Nan::SetPrototypeMethod(tpl, "getWindowHalfWidth", GetWindowHalfWidth);

	Nan::SetPrototypeMethod(tpl, "GetWindowParameter", GetWindowParameter);
	Nan::SetPrototypeMethod(tpl, "getWindowParameter", GetWindowParameter);

	Nan::SetPrototypeMethod(tpl, "IsSeparable", IsSeparable);
	Nan::SetPrototypeMethod(tpl, "isSeparable", IsSeparable);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RenormalizationOff", RenormalizationOff);
	Nan::SetPrototypeMethod(tpl, "renormalizationOff", RenormalizationOff);

	Nan::SetPrototypeMethod(tpl, "RenormalizationOn", RenormalizationOn);
	Nan::SetPrototypeMethod(tpl, "renormalizationOn", RenormalizationOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAntialiasing", SetAntialiasing);
	Nan::SetPrototypeMethod(tpl, "setAntialiasing", SetAntialiasing);

	Nan::SetPrototypeMethod(tpl, "SetBlurFactors", SetBlurFactors);
	Nan::SetPrototypeMethod(tpl, "setBlurFactors", SetBlurFactors);

	Nan::SetPrototypeMethod(tpl, "SetRenormalization", SetRenormalization);
	Nan::SetPrototypeMethod(tpl, "setRenormalization", SetRenormalization);

	Nan::SetPrototypeMethod(tpl, "SetUseWindowParameter", SetUseWindowParameter);
	Nan::SetPrototypeMethod(tpl, "setUseWindowParameter", SetUseWindowParameter);

	Nan::SetPrototypeMethod(tpl, "SetWindowFunction", SetWindowFunction);
	Nan::SetPrototypeMethod(tpl, "setWindowFunction", SetWindowFunction);

	Nan::SetPrototypeMethod(tpl, "SetWindowFunctionToBlackman", SetWindowFunctionToBlackman);
	Nan::SetPrototypeMethod(tpl, "setWindowFunctionToBlackman", SetWindowFunctionToBlackman);

	Nan::SetPrototypeMethod(tpl, "SetWindowFunctionToBlackmanHarris3", SetWindowFunctionToBlackmanHarris3);
	Nan::SetPrototypeMethod(tpl, "setWindowFunctionToBlackmanHarris3", SetWindowFunctionToBlackmanHarris3);

	Nan::SetPrototypeMethod(tpl, "SetWindowFunctionToBlackmanHarris4", SetWindowFunctionToBlackmanHarris4);
	Nan::SetPrototypeMethod(tpl, "setWindowFunctionToBlackmanHarris4", SetWindowFunctionToBlackmanHarris4);

	Nan::SetPrototypeMethod(tpl, "SetWindowFunctionToBlackmanNuttall3", SetWindowFunctionToBlackmanNuttall3);
	Nan::SetPrototypeMethod(tpl, "setWindowFunctionToBlackmanNuttall3", SetWindowFunctionToBlackmanNuttall3);

	Nan::SetPrototypeMethod(tpl, "SetWindowFunctionToBlackmanNuttall4", SetWindowFunctionToBlackmanNuttall4);
	Nan::SetPrototypeMethod(tpl, "setWindowFunctionToBlackmanNuttall4", SetWindowFunctionToBlackmanNuttall4);

	Nan::SetPrototypeMethod(tpl, "SetWindowFunctionToCosine", SetWindowFunctionToCosine);
	Nan::SetPrototypeMethod(tpl, "setWindowFunctionToCosine", SetWindowFunctionToCosine);

	Nan::SetPrototypeMethod(tpl, "SetWindowFunctionToHamming", SetWindowFunctionToHamming);
	Nan::SetPrototypeMethod(tpl, "setWindowFunctionToHamming", SetWindowFunctionToHamming);

	Nan::SetPrototypeMethod(tpl, "SetWindowFunctionToHann", SetWindowFunctionToHann);
	Nan::SetPrototypeMethod(tpl, "setWindowFunctionToHann", SetWindowFunctionToHann);

	Nan::SetPrototypeMethod(tpl, "SetWindowFunctionToKaiser", SetWindowFunctionToKaiser);
	Nan::SetPrototypeMethod(tpl, "setWindowFunctionToKaiser", SetWindowFunctionToKaiser);

	Nan::SetPrototypeMethod(tpl, "SetWindowFunctionToLanczos", SetWindowFunctionToLanczos);
	Nan::SetPrototypeMethod(tpl, "setWindowFunctionToLanczos", SetWindowFunctionToLanczos);

	Nan::SetPrototypeMethod(tpl, "SetWindowFunctionToNuttall", SetWindowFunctionToNuttall);
	Nan::SetPrototypeMethod(tpl, "setWindowFunctionToNuttall", SetWindowFunctionToNuttall);

	Nan::SetPrototypeMethod(tpl, "SetWindowHalfWidth", SetWindowHalfWidth);
	Nan::SetPrototypeMethod(tpl, "setWindowHalfWidth", SetWindowHalfWidth);

	Nan::SetPrototypeMethod(tpl, "SetWindowParameter", SetWindowParameter);
	Nan::SetPrototypeMethod(tpl, "setWindowParameter", SetWindowParameter);

	Nan::SetPrototypeMethod(tpl, "UseWindowParameterOff", UseWindowParameterOff);
	Nan::SetPrototypeMethod(tpl, "useWindowParameterOff", UseWindowParameterOff);

	Nan::SetPrototypeMethod(tpl, "UseWindowParameterOn", UseWindowParameterOn);
	Nan::SetPrototypeMethod(tpl, "useWindowParameterOn", UseWindowParameterOn);

#ifdef VTK_NODE_PLUS_VTKIMAGESINCINTERPOLATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGESINCINTERPOLATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageSincInterpolatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageSincInterpolator> native = vtkSmartPointer<vtkImageSincInterpolator>::New();
		VtkImageSincInterpolatorWrap* obj = new VtkImageSincInterpolatorWrap(native);
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

void VtkImageSincInterpolatorWrap::AntialiasingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AntialiasingOff();
}

void VtkImageSincInterpolatorWrap::AntialiasingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AntialiasingOn();
}

void VtkImageSincInterpolatorWrap::ComputeSupportSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 16 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsInt32Array())
		{
			v8::Local<v8::Int32Array>a1(v8::Local<v8::Int32Array>::Cast(info[1]->ToObject()));
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
			native->ComputeSupportSize(
				(double *)(a0->Buffer()->GetContents().Data()),
				(int *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			int b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsInt32() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->Int32Value();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ComputeSupportSize(
				(double *)(a0->Buffer()->GetContents().Data()),
				b1
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[16];
		if( a0->Length() < 16 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 16; i++ )
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
			int b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsInt32() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->Int32Value();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ComputeSupportSize(
				b0,
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsInt32Array())
		{
			v8::Local<v8::Int32Array>a1(v8::Local<v8::Int32Array>::Cast(info[1]->ToObject()));
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
			native->ComputeSupportSize(
				b0,
				(int *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSincInterpolatorWrap::GetAntialiasing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAntialiasing();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSincInterpolatorWrap::GetBlurFactors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
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
		native->GetBlurFactors(
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
		native->GetBlurFactors(
			b0
		);
		return;
	}
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBlurFactors();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkImageSincInterpolatorWrap::GetRenormalization(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenormalization();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSincInterpolatorWrap::GetUseWindowParameter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseWindowParameter();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSincInterpolatorWrap::GetWindowFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWindowFunction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSincInterpolatorWrap::GetWindowFunctionAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWindowFunctionAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageSincInterpolatorWrap::GetWindowHalfWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWindowHalfWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSincInterpolatorWrap::GetWindowParameter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWindowParameter();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSincInterpolatorWrap::IsSeparable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsSeparable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSincInterpolatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	vtkImageSincInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageSincInterpolatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageSincInterpolatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageSincInterpolatorWrap *w = new VtkImageSincInterpolatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSincInterpolatorWrap::RenormalizationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RenormalizationOff();
}

void VtkImageSincInterpolatorWrap::RenormalizationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RenormalizationOn();
}

void VtkImageSincInterpolatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkImageSincInterpolator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkImageSincInterpolatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageSincInterpolatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageSincInterpolatorWrap *w = new VtkImageSincInterpolatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSincInterpolatorWrap::SetAntialiasing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAntialiasing(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSincInterpolatorWrap::SetBlurFactors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
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
		native->SetBlurFactors(
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
		native->SetBlurFactors(
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
				native->SetBlurFactors(
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

void VtkImageSincInterpolatorWrap::SetRenormalization(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenormalization(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSincInterpolatorWrap::SetUseWindowParameter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseWindowParameter(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSincInterpolatorWrap::SetWindowFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWindowFunction(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSincInterpolatorWrap::SetWindowFunctionToBlackman(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWindowFunctionToBlackman();
}

void VtkImageSincInterpolatorWrap::SetWindowFunctionToBlackmanHarris3(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWindowFunctionToBlackmanHarris3();
}

void VtkImageSincInterpolatorWrap::SetWindowFunctionToBlackmanHarris4(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWindowFunctionToBlackmanHarris4();
}

void VtkImageSincInterpolatorWrap::SetWindowFunctionToBlackmanNuttall3(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWindowFunctionToBlackmanNuttall3();
}

void VtkImageSincInterpolatorWrap::SetWindowFunctionToBlackmanNuttall4(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWindowFunctionToBlackmanNuttall4();
}

void VtkImageSincInterpolatorWrap::SetWindowFunctionToCosine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWindowFunctionToCosine();
}

void VtkImageSincInterpolatorWrap::SetWindowFunctionToHamming(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWindowFunctionToHamming();
}

void VtkImageSincInterpolatorWrap::SetWindowFunctionToHann(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWindowFunctionToHann();
}

void VtkImageSincInterpolatorWrap::SetWindowFunctionToKaiser(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWindowFunctionToKaiser();
}

void VtkImageSincInterpolatorWrap::SetWindowFunctionToLanczos(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWindowFunctionToLanczos();
}

void VtkImageSincInterpolatorWrap::SetWindowFunctionToNuttall(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWindowFunctionToNuttall();
}

void VtkImageSincInterpolatorWrap::SetWindowHalfWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWindowHalfWidth(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSincInterpolatorWrap::SetWindowParameter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWindowParameter(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSincInterpolatorWrap::UseWindowParameterOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseWindowParameterOff();
}

void VtkImageSincInterpolatorWrap::UseWindowParameterOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSincInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkImageSincInterpolatorWrap>(info.Holder());
	vtkImageSincInterpolator *native = (vtkImageSincInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseWindowParameterOn();
}

