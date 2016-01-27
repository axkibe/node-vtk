/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkEncodedGradientEstimatorWrap.h"
#include "vtkFiniteDifferenceGradientEstimatorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFiniteDifferenceGradientEstimatorWrap::ptpl;

VtkFiniteDifferenceGradientEstimatorWrap::VtkFiniteDifferenceGradientEstimatorWrap()
{ }

VtkFiniteDifferenceGradientEstimatorWrap::VtkFiniteDifferenceGradientEstimatorWrap(vtkSmartPointer<vtkFiniteDifferenceGradientEstimator> _native)
{ native = _native; }

VtkFiniteDifferenceGradientEstimatorWrap::~VtkFiniteDifferenceGradientEstimatorWrap()
{ }

void VtkFiniteDifferenceGradientEstimatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFiniteDifferenceGradientEstimator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FiniteDifferenceGradientEstimator").ToLocalChecked(), ConstructorGetter);
}

void VtkFiniteDifferenceGradientEstimatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFiniteDifferenceGradientEstimatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkEncodedGradientEstimatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkEncodedGradientEstimatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFiniteDifferenceGradientEstimatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSampleSpacingInVoxels", GetSampleSpacingInVoxels);
	Nan::SetPrototypeMethod(tpl, "getSampleSpacingInVoxels", GetSampleSpacingInVoxels);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSampleSpacingInVoxels", SetSampleSpacingInVoxels);
	Nan::SetPrototypeMethod(tpl, "setSampleSpacingInVoxels", SetSampleSpacingInVoxels);

	ptpl.Reset( tpl );
}

void VtkFiniteDifferenceGradientEstimatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFiniteDifferenceGradientEstimator> native = vtkSmartPointer<vtkFiniteDifferenceGradientEstimator>::New();
		VtkFiniteDifferenceGradientEstimatorWrap* obj = new VtkFiniteDifferenceGradientEstimatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkFiniteDifferenceGradientEstimatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFiniteDifferenceGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkFiniteDifferenceGradientEstimatorWrap>(info.Holder());
	vtkFiniteDifferenceGradientEstimator *native = (vtkFiniteDifferenceGradientEstimator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFiniteDifferenceGradientEstimatorWrap::GetSampleSpacingInVoxels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFiniteDifferenceGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkFiniteDifferenceGradientEstimatorWrap>(info.Holder());
	vtkFiniteDifferenceGradientEstimator *native = (vtkFiniteDifferenceGradientEstimator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSampleSpacingInVoxels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFiniteDifferenceGradientEstimatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFiniteDifferenceGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkFiniteDifferenceGradientEstimatorWrap>(info.Holder());
	vtkFiniteDifferenceGradientEstimator *native = (vtkFiniteDifferenceGradientEstimator *)wrapper->native.GetPointer();
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

void VtkFiniteDifferenceGradientEstimatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFiniteDifferenceGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkFiniteDifferenceGradientEstimatorWrap>(info.Holder());
	vtkFiniteDifferenceGradientEstimator *native = (vtkFiniteDifferenceGradientEstimator *)wrapper->native.GetPointer();
	vtkFiniteDifferenceGradientEstimator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkFiniteDifferenceGradientEstimatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFiniteDifferenceGradientEstimatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFiniteDifferenceGradientEstimatorWrap *w = new VtkFiniteDifferenceGradientEstimatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFiniteDifferenceGradientEstimatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFiniteDifferenceGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkFiniteDifferenceGradientEstimatorWrap>(info.Holder());
	vtkFiniteDifferenceGradientEstimator *native = (vtkFiniteDifferenceGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkFiniteDifferenceGradientEstimator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkFiniteDifferenceGradientEstimatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFiniteDifferenceGradientEstimatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFiniteDifferenceGradientEstimatorWrap *w = new VtkFiniteDifferenceGradientEstimatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFiniteDifferenceGradientEstimatorWrap::SetSampleSpacingInVoxels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFiniteDifferenceGradientEstimatorWrap *wrapper = ObjectWrap::Unwrap<VtkFiniteDifferenceGradientEstimatorWrap>(info.Holder());
	vtkFiniteDifferenceGradientEstimator *native = (vtkFiniteDifferenceGradientEstimator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSampleSpacingInVoxels(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

