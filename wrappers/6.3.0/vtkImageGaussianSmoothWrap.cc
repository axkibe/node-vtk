/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageGaussianSmoothWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageGaussianSmoothWrap::ptpl;

VtkImageGaussianSmoothWrap::VtkImageGaussianSmoothWrap()
{ }

VtkImageGaussianSmoothWrap::VtkImageGaussianSmoothWrap(vtkSmartPointer<vtkImageGaussianSmooth> _native)
{ native = _native; }

VtkImageGaussianSmoothWrap::~VtkImageGaussianSmoothWrap()
{ }

void VtkImageGaussianSmoothWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageGaussianSmooth").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageGaussianSmooth").ToLocalChecked(), ConstructorGetter);
}

void VtkImageGaussianSmoothWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageGaussianSmoothWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageGaussianSmoothWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimensionality", GetDimensionality);
	Nan::SetPrototypeMethod(tpl, "getDimensionality", GetDimensionality);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDimensionality", SetDimensionality);
	Nan::SetPrototypeMethod(tpl, "setDimensionality", SetDimensionality);

	Nan::SetPrototypeMethod(tpl, "SetRadiusFactor", SetRadiusFactor);
	Nan::SetPrototypeMethod(tpl, "setRadiusFactor", SetRadiusFactor);

	Nan::SetPrototypeMethod(tpl, "SetRadiusFactors", SetRadiusFactors);
	Nan::SetPrototypeMethod(tpl, "setRadiusFactors", SetRadiusFactors);

	Nan::SetPrototypeMethod(tpl, "SetStandardDeviation", SetStandardDeviation);
	Nan::SetPrototypeMethod(tpl, "setStandardDeviation", SetStandardDeviation);

	Nan::SetPrototypeMethod(tpl, "SetStandardDeviations", SetStandardDeviations);
	Nan::SetPrototypeMethod(tpl, "setStandardDeviations", SetStandardDeviations);

	ptpl.Reset( tpl );
}

void VtkImageGaussianSmoothWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageGaussianSmooth> native = vtkSmartPointer<vtkImageGaussianSmooth>::New();
		VtkImageGaussianSmoothWrap* obj = new VtkImageGaussianSmoothWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageGaussianSmoothWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSmoothWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSmoothWrap>(info.Holder());
	vtkImageGaussianSmooth *native = (vtkImageGaussianSmooth *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageGaussianSmoothWrap::GetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSmoothWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSmoothWrap>(info.Holder());
	vtkImageGaussianSmooth *native = (vtkImageGaussianSmooth *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionality();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGaussianSmoothWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSmoothWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSmoothWrap>(info.Holder());
	vtkImageGaussianSmooth *native = (vtkImageGaussianSmooth *)wrapper->native.GetPointer();
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

void VtkImageGaussianSmoothWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSmoothWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSmoothWrap>(info.Holder());
	vtkImageGaussianSmooth *native = (vtkImageGaussianSmooth *)wrapper->native.GetPointer();
	vtkImageGaussianSmooth * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageGaussianSmoothWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageGaussianSmoothWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageGaussianSmoothWrap *w = new VtkImageGaussianSmoothWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageGaussianSmoothWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSmoothWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSmoothWrap>(info.Holder());
	vtkImageGaussianSmooth *native = (vtkImageGaussianSmooth *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageGaussianSmooth * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageGaussianSmoothWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageGaussianSmoothWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageGaussianSmoothWrap *w = new VtkImageGaussianSmoothWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGaussianSmoothWrap::SetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSmoothWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSmoothWrap>(info.Holder());
	vtkImageGaussianSmooth *native = (vtkImageGaussianSmooth *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDimensionality(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGaussianSmoothWrap::SetRadiusFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSmoothWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSmoothWrap>(info.Holder());
	vtkImageGaussianSmooth *native = (vtkImageGaussianSmooth *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadiusFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGaussianSmoothWrap::SetRadiusFactors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSmoothWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSmoothWrap>(info.Holder());
	vtkImageGaussianSmooth *native = (vtkImageGaussianSmooth *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetRadiusFactors(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetRadiusFactors(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGaussianSmoothWrap::SetStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSmoothWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSmoothWrap>(info.Holder());
	vtkImageGaussianSmooth *native = (vtkImageGaussianSmooth *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetStandardDeviation(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetStandardDeviation(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
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

void VtkImageGaussianSmoothWrap::SetStandardDeviations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSmoothWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSmoothWrap>(info.Holder());
	vtkImageGaussianSmooth *native = (vtkImageGaussianSmooth *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetStandardDeviations(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetStandardDeviations(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

