/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageGradientMagnitudeWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageGradientMagnitudeWrap::ptpl;

VtkImageGradientMagnitudeWrap::VtkImageGradientMagnitudeWrap()
{ }

VtkImageGradientMagnitudeWrap::VtkImageGradientMagnitudeWrap(vtkSmartPointer<vtkImageGradientMagnitude> _native)
{ native = _native; }

VtkImageGradientMagnitudeWrap::~VtkImageGradientMagnitudeWrap()
{ }

void VtkImageGradientMagnitudeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageGradientMagnitude").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageGradientMagnitude").ToLocalChecked(), ConstructorGetter);
}

void VtkImageGradientMagnitudeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageGradientMagnitudeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageGradientMagnitudeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimensionality", GetDimensionality);
	Nan::SetPrototypeMethod(tpl, "getDimensionality", GetDimensionality);

	Nan::SetPrototypeMethod(tpl, "GetDimensionalityMaxValue", GetDimensionalityMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDimensionalityMaxValue", GetDimensionalityMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDimensionalityMinValue", GetDimensionalityMinValue);
	Nan::SetPrototypeMethod(tpl, "getDimensionalityMinValue", GetDimensionalityMinValue);

	Nan::SetPrototypeMethod(tpl, "GetHandleBoundaries", GetHandleBoundaries);
	Nan::SetPrototypeMethod(tpl, "getHandleBoundaries", GetHandleBoundaries);

	Nan::SetPrototypeMethod(tpl, "HandleBoundariesOff", HandleBoundariesOff);
	Nan::SetPrototypeMethod(tpl, "handleBoundariesOff", HandleBoundariesOff);

	Nan::SetPrototypeMethod(tpl, "HandleBoundariesOn", HandleBoundariesOn);
	Nan::SetPrototypeMethod(tpl, "handleBoundariesOn", HandleBoundariesOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDimensionality", SetDimensionality);
	Nan::SetPrototypeMethod(tpl, "setDimensionality", SetDimensionality);

	Nan::SetPrototypeMethod(tpl, "SetHandleBoundaries", SetHandleBoundaries);
	Nan::SetPrototypeMethod(tpl, "setHandleBoundaries", SetHandleBoundaries);

	ptpl.Reset( tpl );
}

void VtkImageGradientMagnitudeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageGradientMagnitude> native = vtkSmartPointer<vtkImageGradientMagnitude>::New();
		VtkImageGradientMagnitudeWrap* obj = new VtkImageGradientMagnitudeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageGradientMagnitudeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientMagnitudeWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientMagnitudeWrap>(info.Holder());
	vtkImageGradientMagnitude *native = (vtkImageGradientMagnitude *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageGradientMagnitudeWrap::GetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientMagnitudeWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientMagnitudeWrap>(info.Holder());
	vtkImageGradientMagnitude *native = (vtkImageGradientMagnitude *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionality();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGradientMagnitudeWrap::GetDimensionalityMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientMagnitudeWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientMagnitudeWrap>(info.Holder());
	vtkImageGradientMagnitude *native = (vtkImageGradientMagnitude *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionalityMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGradientMagnitudeWrap::GetDimensionalityMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientMagnitudeWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientMagnitudeWrap>(info.Holder());
	vtkImageGradientMagnitude *native = (vtkImageGradientMagnitude *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionalityMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGradientMagnitudeWrap::GetHandleBoundaries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientMagnitudeWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientMagnitudeWrap>(info.Holder());
	vtkImageGradientMagnitude *native = (vtkImageGradientMagnitude *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleBoundaries();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGradientMagnitudeWrap::HandleBoundariesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientMagnitudeWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientMagnitudeWrap>(info.Holder());
	vtkImageGradientMagnitude *native = (vtkImageGradientMagnitude *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HandleBoundariesOff();
}

void VtkImageGradientMagnitudeWrap::HandleBoundariesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientMagnitudeWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientMagnitudeWrap>(info.Holder());
	vtkImageGradientMagnitude *native = (vtkImageGradientMagnitude *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HandleBoundariesOn();
}

void VtkImageGradientMagnitudeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientMagnitudeWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientMagnitudeWrap>(info.Holder());
	vtkImageGradientMagnitude *native = (vtkImageGradientMagnitude *)wrapper->native.GetPointer();
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

void VtkImageGradientMagnitudeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientMagnitudeWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientMagnitudeWrap>(info.Holder());
	vtkImageGradientMagnitude *native = (vtkImageGradientMagnitude *)wrapper->native.GetPointer();
	vtkImageGradientMagnitude * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageGradientMagnitudeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageGradientMagnitudeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageGradientMagnitudeWrap *w = new VtkImageGradientMagnitudeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageGradientMagnitudeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientMagnitudeWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientMagnitudeWrap>(info.Holder());
	vtkImageGradientMagnitude *native = (vtkImageGradientMagnitude *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageGradientMagnitude * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageGradientMagnitudeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageGradientMagnitudeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageGradientMagnitudeWrap *w = new VtkImageGradientMagnitudeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGradientMagnitudeWrap::SetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientMagnitudeWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientMagnitudeWrap>(info.Holder());
	vtkImageGradientMagnitude *native = (vtkImageGradientMagnitude *)wrapper->native.GetPointer();
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

void VtkImageGradientMagnitudeWrap::SetHandleBoundaries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientMagnitudeWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientMagnitudeWrap>(info.Holder());
	vtkImageGradientMagnitude *native = (vtkImageGradientMagnitude *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHandleBoundaries(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

