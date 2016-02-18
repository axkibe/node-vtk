/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkGreedyTerrainDecimationWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGreedyTerrainDecimationWrap::ptpl;

VtkGreedyTerrainDecimationWrap::VtkGreedyTerrainDecimationWrap()
{ }

VtkGreedyTerrainDecimationWrap::VtkGreedyTerrainDecimationWrap(vtkSmartPointer<vtkGreedyTerrainDecimation> _native)
{ native = _native; }

VtkGreedyTerrainDecimationWrap::~VtkGreedyTerrainDecimationWrap()
{ }

void VtkGreedyTerrainDecimationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGreedyTerrainDecimation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GreedyTerrainDecimation").ToLocalChecked(), ConstructorGetter);
}

void VtkGreedyTerrainDecimationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGreedyTerrainDecimationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGreedyTerrainDecimationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BoundaryVertexDeletionOff", BoundaryVertexDeletionOff);
	Nan::SetPrototypeMethod(tpl, "boundaryVertexDeletionOff", BoundaryVertexDeletionOff);

	Nan::SetPrototypeMethod(tpl, "BoundaryVertexDeletionOn", BoundaryVertexDeletionOn);
	Nan::SetPrototypeMethod(tpl, "boundaryVertexDeletionOn", BoundaryVertexDeletionOn);

	Nan::SetPrototypeMethod(tpl, "ComputeNormalsOff", ComputeNormalsOff);
	Nan::SetPrototypeMethod(tpl, "computeNormalsOff", ComputeNormalsOff);

	Nan::SetPrototypeMethod(tpl, "ComputeNormalsOn", ComputeNormalsOn);
	Nan::SetPrototypeMethod(tpl, "computeNormalsOn", ComputeNormalsOn);

	Nan::SetPrototypeMethod(tpl, "GetAbsoluteError", GetAbsoluteError);
	Nan::SetPrototypeMethod(tpl, "getAbsoluteError", GetAbsoluteError);

	Nan::SetPrototypeMethod(tpl, "GetAbsoluteErrorMaxValue", GetAbsoluteErrorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAbsoluteErrorMaxValue", GetAbsoluteErrorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAbsoluteErrorMinValue", GetAbsoluteErrorMinValue);
	Nan::SetPrototypeMethod(tpl, "getAbsoluteErrorMinValue", GetAbsoluteErrorMinValue);

	Nan::SetPrototypeMethod(tpl, "GetBoundaryVertexDeletion", GetBoundaryVertexDeletion);
	Nan::SetPrototypeMethod(tpl, "getBoundaryVertexDeletion", GetBoundaryVertexDeletion);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComputeNormals", GetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "getComputeNormals", GetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "GetErrorMeasure", GetErrorMeasure);
	Nan::SetPrototypeMethod(tpl, "getErrorMeasure", GetErrorMeasure);

	Nan::SetPrototypeMethod(tpl, "GetErrorMeasureMaxValue", GetErrorMeasureMaxValue);
	Nan::SetPrototypeMethod(tpl, "getErrorMeasureMaxValue", GetErrorMeasureMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetErrorMeasureMinValue", GetErrorMeasureMinValue);
	Nan::SetPrototypeMethod(tpl, "getErrorMeasureMinValue", GetErrorMeasureMinValue);

	Nan::SetPrototypeMethod(tpl, "GetReduction", GetReduction);
	Nan::SetPrototypeMethod(tpl, "getReduction", GetReduction);

	Nan::SetPrototypeMethod(tpl, "GetReductionMaxValue", GetReductionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getReductionMaxValue", GetReductionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetReductionMinValue", GetReductionMinValue);
	Nan::SetPrototypeMethod(tpl, "getReductionMinValue", GetReductionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRelativeError", GetRelativeError);
	Nan::SetPrototypeMethod(tpl, "getRelativeError", GetRelativeError);

	Nan::SetPrototypeMethod(tpl, "GetRelativeErrorMaxValue", GetRelativeErrorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRelativeErrorMaxValue", GetRelativeErrorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRelativeErrorMinValue", GetRelativeErrorMinValue);
	Nan::SetPrototypeMethod(tpl, "getRelativeErrorMinValue", GetRelativeErrorMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAbsoluteError", SetAbsoluteError);
	Nan::SetPrototypeMethod(tpl, "setAbsoluteError", SetAbsoluteError);

	Nan::SetPrototypeMethod(tpl, "SetBoundaryVertexDeletion", SetBoundaryVertexDeletion);
	Nan::SetPrototypeMethod(tpl, "setBoundaryVertexDeletion", SetBoundaryVertexDeletion);

	Nan::SetPrototypeMethod(tpl, "SetComputeNormals", SetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "setComputeNormals", SetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "SetErrorMeasure", SetErrorMeasure);
	Nan::SetPrototypeMethod(tpl, "setErrorMeasure", SetErrorMeasure);

	Nan::SetPrototypeMethod(tpl, "SetErrorMeasureToAbsoluteError", SetErrorMeasureToAbsoluteError);
	Nan::SetPrototypeMethod(tpl, "setErrorMeasureToAbsoluteError", SetErrorMeasureToAbsoluteError);

	Nan::SetPrototypeMethod(tpl, "SetErrorMeasureToNumberOfTriangles", SetErrorMeasureToNumberOfTriangles);
	Nan::SetPrototypeMethod(tpl, "setErrorMeasureToNumberOfTriangles", SetErrorMeasureToNumberOfTriangles);

	Nan::SetPrototypeMethod(tpl, "SetErrorMeasureToRelativeError", SetErrorMeasureToRelativeError);
	Nan::SetPrototypeMethod(tpl, "setErrorMeasureToRelativeError", SetErrorMeasureToRelativeError);

	Nan::SetPrototypeMethod(tpl, "SetErrorMeasureToSpecifiedReduction", SetErrorMeasureToSpecifiedReduction);
	Nan::SetPrototypeMethod(tpl, "setErrorMeasureToSpecifiedReduction", SetErrorMeasureToSpecifiedReduction);

	Nan::SetPrototypeMethod(tpl, "SetReduction", SetReduction);
	Nan::SetPrototypeMethod(tpl, "setReduction", SetReduction);

	Nan::SetPrototypeMethod(tpl, "SetRelativeError", SetRelativeError);
	Nan::SetPrototypeMethod(tpl, "setRelativeError", SetRelativeError);

#ifdef VTK_NODE_PLUS_VTKGREEDYTERRAINDECIMATIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGREEDYTERRAINDECIMATIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGreedyTerrainDecimationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGreedyTerrainDecimation> native = vtkSmartPointer<vtkGreedyTerrainDecimation>::New();
		VtkGreedyTerrainDecimationWrap* obj = new VtkGreedyTerrainDecimationWrap(native);
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

void VtkGreedyTerrainDecimationWrap::BoundaryVertexDeletionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoundaryVertexDeletionOff();
}

void VtkGreedyTerrainDecimationWrap::BoundaryVertexDeletionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoundaryVertexDeletionOn();
}

void VtkGreedyTerrainDecimationWrap::ComputeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOff();
}

void VtkGreedyTerrainDecimationWrap::ComputeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOn();
}

void VtkGreedyTerrainDecimationWrap::GetAbsoluteError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAbsoluteError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::GetAbsoluteErrorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAbsoluteErrorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::GetAbsoluteErrorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAbsoluteErrorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::GetBoundaryVertexDeletion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoundaryVertexDeletion();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGreedyTerrainDecimationWrap::GetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::GetErrorMeasure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetErrorMeasure();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::GetErrorMeasureMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetErrorMeasureMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::GetErrorMeasureMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetErrorMeasureMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::GetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReduction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::GetReductionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReductionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::GetReductionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReductionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::GetRelativeError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRelativeError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::GetRelativeErrorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRelativeErrorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::GetRelativeErrorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRelativeErrorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGreedyTerrainDecimationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
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

void VtkGreedyTerrainDecimationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	vtkGreedyTerrainDecimation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGreedyTerrainDecimationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGreedyTerrainDecimationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGreedyTerrainDecimationWrap *w = new VtkGreedyTerrainDecimationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGreedyTerrainDecimationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGreedyTerrainDecimation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkGreedyTerrainDecimationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGreedyTerrainDecimationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGreedyTerrainDecimationWrap *w = new VtkGreedyTerrainDecimationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGreedyTerrainDecimationWrap::SetAbsoluteError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAbsoluteError(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGreedyTerrainDecimationWrap::SetBoundaryVertexDeletion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBoundaryVertexDeletion(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGreedyTerrainDecimationWrap::SetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeNormals(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGreedyTerrainDecimationWrap::SetErrorMeasure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetErrorMeasure(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGreedyTerrainDecimationWrap::SetErrorMeasureToAbsoluteError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetErrorMeasureToAbsoluteError();
}

void VtkGreedyTerrainDecimationWrap::SetErrorMeasureToNumberOfTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetErrorMeasureToNumberOfTriangles();
}

void VtkGreedyTerrainDecimationWrap::SetErrorMeasureToRelativeError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetErrorMeasureToRelativeError();
}

void VtkGreedyTerrainDecimationWrap::SetErrorMeasureToSpecifiedReduction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetErrorMeasureToSpecifiedReduction();
}

void VtkGreedyTerrainDecimationWrap::SetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReduction(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGreedyTerrainDecimationWrap::SetRelativeError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGreedyTerrainDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkGreedyTerrainDecimationWrap>(info.Holder());
	vtkGreedyTerrainDecimation *native = (vtkGreedyTerrainDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRelativeError(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

