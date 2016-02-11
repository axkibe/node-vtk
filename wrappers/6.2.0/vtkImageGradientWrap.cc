/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageGradientWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageGradientWrap::ptpl;

VtkImageGradientWrap::VtkImageGradientWrap()
{ }

VtkImageGradientWrap::VtkImageGradientWrap(vtkSmartPointer<vtkImageGradient> _native)
{ native = _native; }

VtkImageGradientWrap::~VtkImageGradientWrap()
{ }

void VtkImageGradientWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageGradient").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageGradient").ToLocalChecked(), ConstructorGetter);
}

void VtkImageGradientWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageGradientWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageGradientWrap").ToLocalChecked());
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

void VtkImageGradientWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageGradient> native = vtkSmartPointer<vtkImageGradient>::New();
		VtkImageGradientWrap* obj = new VtkImageGradientWrap(native);
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

void VtkImageGradientWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientWrap>(info.Holder());
	vtkImageGradient *native = (vtkImageGradient *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageGradientWrap::GetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientWrap>(info.Holder());
	vtkImageGradient *native = (vtkImageGradient *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionality();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGradientWrap::GetDimensionalityMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientWrap>(info.Holder());
	vtkImageGradient *native = (vtkImageGradient *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionalityMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGradientWrap::GetDimensionalityMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientWrap>(info.Holder());
	vtkImageGradient *native = (vtkImageGradient *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionalityMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGradientWrap::GetHandleBoundaries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientWrap>(info.Holder());
	vtkImageGradient *native = (vtkImageGradient *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleBoundaries();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGradientWrap::HandleBoundariesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientWrap>(info.Holder());
	vtkImageGradient *native = (vtkImageGradient *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HandleBoundariesOff();
}

void VtkImageGradientWrap::HandleBoundariesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientWrap>(info.Holder());
	vtkImageGradient *native = (vtkImageGradient *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HandleBoundariesOn();
}

void VtkImageGradientWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientWrap>(info.Holder());
	vtkImageGradient *native = (vtkImageGradient *)wrapper->native.GetPointer();
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

void VtkImageGradientWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientWrap>(info.Holder());
	vtkImageGradient *native = (vtkImageGradient *)wrapper->native.GetPointer();
	vtkImageGradient * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageGradientWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageGradientWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageGradientWrap *w = new VtkImageGradientWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageGradientWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientWrap>(info.Holder());
	vtkImageGradient *native = (vtkImageGradient *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageGradient * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImageGradientWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageGradientWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageGradientWrap *w = new VtkImageGradientWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGradientWrap::SetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientWrap>(info.Holder());
	vtkImageGradient *native = (vtkImageGradient *)wrapper->native.GetPointer();
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

void VtkImageGradientWrap::SetHandleBoundaries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGradientWrap *wrapper = ObjectWrap::Unwrap<VtkImageGradientWrap>(info.Holder());
	vtkImageGradient *native = (vtkImageGradient *)wrapper->native.GetPointer();
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

