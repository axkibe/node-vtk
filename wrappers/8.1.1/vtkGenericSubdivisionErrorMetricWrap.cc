/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkGenericSubdivisionErrorMetricWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkGenericAdaptorCellWrap.h"
#include "vtkGenericDataSetWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGenericSubdivisionErrorMetricWrap::ptpl;

VtkGenericSubdivisionErrorMetricWrap::VtkGenericSubdivisionErrorMetricWrap()
{ }

VtkGenericSubdivisionErrorMetricWrap::VtkGenericSubdivisionErrorMetricWrap(vtkSmartPointer<vtkGenericSubdivisionErrorMetric> _native)
{ native = _native; }

VtkGenericSubdivisionErrorMetricWrap::~VtkGenericSubdivisionErrorMetricWrap()
{ }

void VtkGenericSubdivisionErrorMetricWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGenericSubdivisionErrorMetric").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GenericSubdivisionErrorMetric").ToLocalChecked(), ConstructorGetter);
}

void VtkGenericSubdivisionErrorMetricWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGenericSubdivisionErrorMetricWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGenericSubdivisionErrorMetricWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetDataSet", GetDataSet);
	Nan::SetPrototypeMethod(tpl, "getDataSet", GetDataSet);

	Nan::SetPrototypeMethod(tpl, "GetGenericCell", GetGenericCell);
	Nan::SetPrototypeMethod(tpl, "getGenericCell", GetGenericCell);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDataSet", SetDataSet);
	Nan::SetPrototypeMethod(tpl, "setDataSet", SetDataSet);

	Nan::SetPrototypeMethod(tpl, "SetGenericCell", SetGenericCell);
	Nan::SetPrototypeMethod(tpl, "setGenericCell", SetGenericCell);

#ifdef VTK_NODE_PLUS_VTKGENERICSUBDIVISIONERRORMETRICWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGENERICSUBDIVISIONERRORMETRICWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGenericSubdivisionErrorMetricWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkGenericSubdivisionErrorMetricWrap::GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericSubdivisionErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkGenericSubdivisionErrorMetricWrap>(info.Holder());
	vtkGenericSubdivisionErrorMetric *native = (vtkGenericSubdivisionErrorMetric *)wrapper->native.GetPointer();
	vtkGenericDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataSet();
	VtkGenericDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericDataSetWrap *w = new VtkGenericDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericSubdivisionErrorMetricWrap::GetGenericCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericSubdivisionErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkGenericSubdivisionErrorMetricWrap>(info.Holder());
	vtkGenericSubdivisionErrorMetric *native = (vtkGenericSubdivisionErrorMetric *)wrapper->native.GetPointer();
	vtkGenericAdaptorCell * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenericCell();
	VtkGenericAdaptorCellWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericAdaptorCellWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericAdaptorCellWrap *w = new VtkGenericAdaptorCellWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericSubdivisionErrorMetricWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericSubdivisionErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkGenericSubdivisionErrorMetricWrap>(info.Holder());
	vtkGenericSubdivisionErrorMetric *native = (vtkGenericSubdivisionErrorMetric *)wrapper->native.GetPointer();
	vtkGenericSubdivisionErrorMetric * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGenericSubdivisionErrorMetricWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericSubdivisionErrorMetricWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericSubdivisionErrorMetricWrap *w = new VtkGenericSubdivisionErrorMetricWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericSubdivisionErrorMetricWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericSubdivisionErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkGenericSubdivisionErrorMetricWrap>(info.Holder());
	vtkGenericSubdivisionErrorMetric *native = (vtkGenericSubdivisionErrorMetric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkGenericSubdivisionErrorMetric * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkGenericSubdivisionErrorMetricWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericSubdivisionErrorMetricWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericSubdivisionErrorMetricWrap *w = new VtkGenericSubdivisionErrorMetricWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericSubdivisionErrorMetricWrap::SetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericSubdivisionErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkGenericSubdivisionErrorMetricWrap>(info.Holder());
	vtkGenericSubdivisionErrorMetric *native = (vtkGenericSubdivisionErrorMetric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericDataSetWrap *a0 = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataSet(
			(vtkGenericDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericSubdivisionErrorMetricWrap::SetGenericCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericSubdivisionErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkGenericSubdivisionErrorMetricWrap>(info.Holder());
	vtkGenericSubdivisionErrorMetric *native = (vtkGenericSubdivisionErrorMetric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericAdaptorCellWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericAdaptorCellWrap *a0 = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenericCell(
			(vtkGenericAdaptorCell *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

