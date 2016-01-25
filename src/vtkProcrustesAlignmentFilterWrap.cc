/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkProcrustesAlignmentFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkLandmarkTransformWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkProcrustesAlignmentFilterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkProcrustesAlignmentFilterWrap::ptpl;

VtkProcrustesAlignmentFilterWrap::VtkProcrustesAlignmentFilterWrap()
{ }

VtkProcrustesAlignmentFilterWrap::VtkProcrustesAlignmentFilterWrap(vtkSmartPointer<vtkProcrustesAlignmentFilter> _native)
{ native = _native; }

VtkProcrustesAlignmentFilterWrap::~VtkProcrustesAlignmentFilterWrap()
{ }

void VtkProcrustesAlignmentFilterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkProcrustesAlignmentFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkProcrustesAlignmentFilter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ProcrustesAlignmentFilter").ToLocalChecked(),tpl->GetFunction());
}

void VtkProcrustesAlignmentFilterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLandmarkTransform", GetLandmarkTransform);
	Nan::SetPrototypeMethod(tpl, "getLandmarkTransform", GetLandmarkTransform);

	Nan::SetPrototypeMethod(tpl, "GetMeanPoints", GetMeanPoints);
	Nan::SetPrototypeMethod(tpl, "getMeanPoints", GetMeanPoints);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "StartFromCentroidOff", StartFromCentroidOff);
	Nan::SetPrototypeMethod(tpl, "startFromCentroidOff", StartFromCentroidOff);

	Nan::SetPrototypeMethod(tpl, "StartFromCentroidOn", StartFromCentroidOn);
	Nan::SetPrototypeMethod(tpl, "startFromCentroidOn", StartFromCentroidOn);

}

void VtkProcrustesAlignmentFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProcrustesAlignmentFilter> native = vtkSmartPointer<vtkProcrustesAlignmentFilter>::New();
		VtkProcrustesAlignmentFilterWrap* obj = new VtkProcrustesAlignmentFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkProcrustesAlignmentFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcrustesAlignmentFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProcrustesAlignmentFilterWrap>(info.Holder());
	vtkProcrustesAlignmentFilter *native = (vtkProcrustesAlignmentFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProcrustesAlignmentFilterWrap::GetLandmarkTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcrustesAlignmentFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProcrustesAlignmentFilterWrap>(info.Holder());
	vtkProcrustesAlignmentFilter *native = (vtkProcrustesAlignmentFilter *)wrapper->native.GetPointer();
	vtkLandmarkTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLandmarkTransform();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLandmarkTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLandmarkTransformWrap *w = new VtkLandmarkTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProcrustesAlignmentFilterWrap::GetMeanPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcrustesAlignmentFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProcrustesAlignmentFilterWrap>(info.Holder());
	vtkProcrustesAlignmentFilter *native = (vtkProcrustesAlignmentFilter *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMeanPoints();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPointsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProcrustesAlignmentFilterWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcrustesAlignmentFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProcrustesAlignmentFilterWrap>(info.Holder());
	vtkProcrustesAlignmentFilter *native = (vtkProcrustesAlignmentFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProcrustesAlignmentFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcrustesAlignmentFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProcrustesAlignmentFilterWrap>(info.Holder());
	vtkProcrustesAlignmentFilter *native = (vtkProcrustesAlignmentFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkProcrustesAlignmentFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcrustesAlignmentFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProcrustesAlignmentFilterWrap>(info.Holder());
	vtkProcrustesAlignmentFilter *native = (vtkProcrustesAlignmentFilter *)wrapper->native.GetPointer();
	vtkProcrustesAlignmentFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkProcrustesAlignmentFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProcrustesAlignmentFilterWrap *w = new VtkProcrustesAlignmentFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProcrustesAlignmentFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcrustesAlignmentFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProcrustesAlignmentFilterWrap>(info.Holder());
	vtkProcrustesAlignmentFilter *native = (vtkProcrustesAlignmentFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProcrustesAlignmentFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkProcrustesAlignmentFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProcrustesAlignmentFilterWrap *w = new VtkProcrustesAlignmentFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProcrustesAlignmentFilterWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcrustesAlignmentFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProcrustesAlignmentFilterWrap>(info.Holder());
	vtkProcrustesAlignmentFilter *native = (vtkProcrustesAlignmentFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProcrustesAlignmentFilterWrap::StartFromCentroidOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcrustesAlignmentFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProcrustesAlignmentFilterWrap>(info.Holder());
	vtkProcrustesAlignmentFilter *native = (vtkProcrustesAlignmentFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartFromCentroidOff();
}

void VtkProcrustesAlignmentFilterWrap::StartFromCentroidOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcrustesAlignmentFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProcrustesAlignmentFilterWrap>(info.Holder());
	vtkProcrustesAlignmentFilter *native = (vtkProcrustesAlignmentFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartFromCentroidOn();
}

