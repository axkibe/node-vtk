/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkSelectionAlgorithmWrap.h"
#include "vtkComputeHistogram2DOutliersWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTableWrap.h"
#include "vtkAlgorithmOutputWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkComputeHistogram2DOutliersWrap::ptpl;

VtkComputeHistogram2DOutliersWrap::VtkComputeHistogram2DOutliersWrap()
{ }

VtkComputeHistogram2DOutliersWrap::VtkComputeHistogram2DOutliersWrap(vtkSmartPointer<vtkComputeHistogram2DOutliers> _native)
{ native = _native; }

VtkComputeHistogram2DOutliersWrap::~VtkComputeHistogram2DOutliersWrap()
{ }

void VtkComputeHistogram2DOutliersWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkComputeHistogram2DOutliers").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ComputeHistogram2DOutliers").ToLocalChecked(), ConstructorGetter);
}

void VtkComputeHistogram2DOutliersWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkComputeHistogram2DOutliersWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkSelectionAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkSelectionAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkComputeHistogram2DOutliersWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutputTable", GetOutputTable);
	Nan::SetPrototypeMethod(tpl, "getOutputTable", GetOutputTable);

	Nan::SetPrototypeMethod(tpl, "GetPreferredNumberOfOutliers", GetPreferredNumberOfOutliers);
	Nan::SetPrototypeMethod(tpl, "getPreferredNumberOfOutliers", GetPreferredNumberOfOutliers);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputHistogramImageDataConnection", SetInputHistogramImageDataConnection);
	Nan::SetPrototypeMethod(tpl, "setInputHistogramImageDataConnection", SetInputHistogramImageDataConnection);

	Nan::SetPrototypeMethod(tpl, "SetInputHistogramMultiBlockConnection", SetInputHistogramMultiBlockConnection);
	Nan::SetPrototypeMethod(tpl, "setInputHistogramMultiBlockConnection", SetInputHistogramMultiBlockConnection);

	Nan::SetPrototypeMethod(tpl, "SetInputTableConnection", SetInputTableConnection);
	Nan::SetPrototypeMethod(tpl, "setInputTableConnection", SetInputTableConnection);

	Nan::SetPrototypeMethod(tpl, "SetPreferredNumberOfOutliers", SetPreferredNumberOfOutliers);
	Nan::SetPrototypeMethod(tpl, "setPreferredNumberOfOutliers", SetPreferredNumberOfOutliers);

	ptpl.Reset( tpl );
}

void VtkComputeHistogram2DOutliersWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkComputeHistogram2DOutliers> native = vtkSmartPointer<vtkComputeHistogram2DOutliers>::New();
		VtkComputeHistogram2DOutliersWrap* obj = new VtkComputeHistogram2DOutliersWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkComputeHistogram2DOutliersWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkComputeHistogram2DOutliersWrap>(info.Holder());
	vtkComputeHistogram2DOutliers *native = (vtkComputeHistogram2DOutliers *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkComputeHistogram2DOutliersWrap::GetOutputTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkComputeHistogram2DOutliersWrap>(info.Holder());
	vtkComputeHistogram2DOutliers *native = (vtkComputeHistogram2DOutliers *)wrapper->native.GetPointer();
	vtkTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputTable();
		VtkTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTableWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableWrap *w = new VtkTableWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkComputeHistogram2DOutliersWrap::GetPreferredNumberOfOutliers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkComputeHistogram2DOutliersWrap>(info.Holder());
	vtkComputeHistogram2DOutliers *native = (vtkComputeHistogram2DOutliers *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreferredNumberOfOutliers();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkComputeHistogram2DOutliersWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkComputeHistogram2DOutliersWrap>(info.Holder());
	vtkComputeHistogram2DOutliers *native = (vtkComputeHistogram2DOutliers *)wrapper->native.GetPointer();
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

void VtkComputeHistogram2DOutliersWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkComputeHistogram2DOutliersWrap>(info.Holder());
	vtkComputeHistogram2DOutliers *native = (vtkComputeHistogram2DOutliers *)wrapper->native.GetPointer();
	vtkComputeHistogram2DOutliers * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkComputeHistogram2DOutliersWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkComputeHistogram2DOutliersWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkComputeHistogram2DOutliersWrap *w = new VtkComputeHistogram2DOutliersWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkComputeHistogram2DOutliersWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkComputeHistogram2DOutliersWrap>(info.Holder());
	vtkComputeHistogram2DOutliers *native = (vtkComputeHistogram2DOutliers *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkComputeHistogram2DOutliers * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkComputeHistogram2DOutliersWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkComputeHistogram2DOutliersWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkComputeHistogram2DOutliersWrap *w = new VtkComputeHistogram2DOutliersWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkComputeHistogram2DOutliersWrap::SetInputHistogramImageDataConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkComputeHistogram2DOutliersWrap>(info.Holder());
	vtkComputeHistogram2DOutliers *native = (vtkComputeHistogram2DOutliers *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputHistogramImageDataConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkComputeHistogram2DOutliersWrap::SetInputHistogramMultiBlockConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkComputeHistogram2DOutliersWrap>(info.Holder());
	vtkComputeHistogram2DOutliers *native = (vtkComputeHistogram2DOutliers *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputHistogramMultiBlockConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkComputeHistogram2DOutliersWrap::SetInputTableConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkComputeHistogram2DOutliersWrap>(info.Holder());
	vtkComputeHistogram2DOutliers *native = (vtkComputeHistogram2DOutliers *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputTableConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkComputeHistogram2DOutliersWrap::SetPreferredNumberOfOutliers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkComputeHistogram2DOutliersWrap *wrapper = ObjectWrap::Unwrap<VtkComputeHistogram2DOutliersWrap>(info.Holder());
	vtkComputeHistogram2DOutliers *native = (vtkComputeHistogram2DOutliers *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPreferredNumberOfOutliers(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
