/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkProcrustesAlignmentFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkLandmarkTransformWrap.h"
#include "vtkPointsWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProcrustesAlignmentFilterWrap::ptpl;

VtkProcrustesAlignmentFilterWrap::VtkProcrustesAlignmentFilterWrap()
{ }

VtkProcrustesAlignmentFilterWrap::VtkProcrustesAlignmentFilterWrap(vtkSmartPointer<vtkProcrustesAlignmentFilter> _native)
{ native = _native; }

VtkProcrustesAlignmentFilterWrap::~VtkProcrustesAlignmentFilterWrap()
{ }

void VtkProcrustesAlignmentFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProcrustesAlignmentFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProcrustesAlignmentFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkProcrustesAlignmentFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProcrustesAlignmentFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProcrustesAlignmentFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetLandmarkTransform", GetLandmarkTransform);
	Nan::SetPrototypeMethod(tpl, "getLandmarkTransform", GetLandmarkTransform);

	Nan::SetPrototypeMethod(tpl, "GetMeanPoints", GetMeanPoints);
	Nan::SetPrototypeMethod(tpl, "getMeanPoints", GetMeanPoints);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetStartFromCentroid", GetStartFromCentroid);
	Nan::SetPrototypeMethod(tpl, "getStartFromCentroid", GetStartFromCentroid);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetStartFromCentroid", SetStartFromCentroid);
	Nan::SetPrototypeMethod(tpl, "setStartFromCentroid", SetStartFromCentroid);

	Nan::SetPrototypeMethod(tpl, "StartFromCentroidOff", StartFromCentroidOff);
	Nan::SetPrototypeMethod(tpl, "startFromCentroidOff", StartFromCentroidOff);

	Nan::SetPrototypeMethod(tpl, "StartFromCentroidOn", StartFromCentroidOn);
	Nan::SetPrototypeMethod(tpl, "startFromCentroidOn", StartFromCentroidOn);

#ifdef VTK_NODE_PLUS_VTKPROCRUSTESALIGNMENTFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPROCRUSTESALIGNMENTFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
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
		VtkProcrustesAlignmentFilterWrap* obj = new VtkProcrustesAlignmentFilterWrap(native);
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
	VtkLandmarkTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLandmarkTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLandmarkTransformWrap *w = new VtkLandmarkTransformWrap();
	w->native = r;
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
	VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native = r;
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

void VtkProcrustesAlignmentFilterWrap::GetStartFromCentroid(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcrustesAlignmentFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProcrustesAlignmentFilterWrap>(info.Holder());
	vtkProcrustesAlignmentFilter *native = (vtkProcrustesAlignmentFilter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartFromCentroid();
	info.GetReturnValue().Set(Nan::New(r));
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
	VtkProcrustesAlignmentFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProcrustesAlignmentFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProcrustesAlignmentFilterWrap *w = new VtkProcrustesAlignmentFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProcrustesAlignmentFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcrustesAlignmentFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProcrustesAlignmentFilterWrap>(info.Holder());
	vtkProcrustesAlignmentFilter *native = (vtkProcrustesAlignmentFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkProcrustesAlignmentFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkProcrustesAlignmentFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProcrustesAlignmentFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProcrustesAlignmentFilterWrap *w = new VtkProcrustesAlignmentFilterWrap();
		w->native = r;
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

void VtkProcrustesAlignmentFilterWrap::SetStartFromCentroid(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProcrustesAlignmentFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProcrustesAlignmentFilterWrap>(info.Holder());
	vtkProcrustesAlignmentFilter *native = (vtkProcrustesAlignmentFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStartFromCentroid(
			info[0]->BooleanValue()
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

