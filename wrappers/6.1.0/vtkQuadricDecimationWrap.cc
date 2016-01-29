/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkQuadricDecimationWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkQuadricDecimationWrap::ptpl;

VtkQuadricDecimationWrap::VtkQuadricDecimationWrap()
{ }

VtkQuadricDecimationWrap::VtkQuadricDecimationWrap(vtkSmartPointer<vtkQuadricDecimation> _native)
{ native = _native; }

VtkQuadricDecimationWrap::~VtkQuadricDecimationWrap()
{ }

void VtkQuadricDecimationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkQuadricDecimation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("QuadricDecimation").ToLocalChecked(), ConstructorGetter);
}

void VtkQuadricDecimationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkQuadricDecimationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkQuadricDecimationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AttributeErrorMetricOff", AttributeErrorMetricOff);
	Nan::SetPrototypeMethod(tpl, "attributeErrorMetricOff", AttributeErrorMetricOff);

	Nan::SetPrototypeMethod(tpl, "AttributeErrorMetricOn", AttributeErrorMetricOn);
	Nan::SetPrototypeMethod(tpl, "attributeErrorMetricOn", AttributeErrorMetricOn);

	Nan::SetPrototypeMethod(tpl, "GetActualReduction", GetActualReduction);
	Nan::SetPrototypeMethod(tpl, "getActualReduction", GetActualReduction);

	Nan::SetPrototypeMethod(tpl, "GetAttributeErrorMetric", GetAttributeErrorMetric);
	Nan::SetPrototypeMethod(tpl, "getAttributeErrorMetric", GetAttributeErrorMetric);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNormalsAttribute", GetNormalsAttribute);
	Nan::SetPrototypeMethod(tpl, "getNormalsAttribute", GetNormalsAttribute);

	Nan::SetPrototypeMethod(tpl, "GetNormalsWeight", GetNormalsWeight);
	Nan::SetPrototypeMethod(tpl, "getNormalsWeight", GetNormalsWeight);

	Nan::SetPrototypeMethod(tpl, "GetScalarsAttribute", GetScalarsAttribute);
	Nan::SetPrototypeMethod(tpl, "getScalarsAttribute", GetScalarsAttribute);

	Nan::SetPrototypeMethod(tpl, "GetScalarsWeight", GetScalarsWeight);
	Nan::SetPrototypeMethod(tpl, "getScalarsWeight", GetScalarsWeight);

	Nan::SetPrototypeMethod(tpl, "GetTCoordsAttribute", GetTCoordsAttribute);
	Nan::SetPrototypeMethod(tpl, "getTCoordsAttribute", GetTCoordsAttribute);

	Nan::SetPrototypeMethod(tpl, "GetTCoordsWeight", GetTCoordsWeight);
	Nan::SetPrototypeMethod(tpl, "getTCoordsWeight", GetTCoordsWeight);

	Nan::SetPrototypeMethod(tpl, "GetTargetReduction", GetTargetReduction);
	Nan::SetPrototypeMethod(tpl, "getTargetReduction", GetTargetReduction);

	Nan::SetPrototypeMethod(tpl, "GetTargetReductionMaxValue", GetTargetReductionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTargetReductionMaxValue", GetTargetReductionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTargetReductionMinValue", GetTargetReductionMinValue);
	Nan::SetPrototypeMethod(tpl, "getTargetReductionMinValue", GetTargetReductionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTensorsAttribute", GetTensorsAttribute);
	Nan::SetPrototypeMethod(tpl, "getTensorsAttribute", GetTensorsAttribute);

	Nan::SetPrototypeMethod(tpl, "GetTensorsWeight", GetTensorsWeight);
	Nan::SetPrototypeMethod(tpl, "getTensorsWeight", GetTensorsWeight);

	Nan::SetPrototypeMethod(tpl, "GetVectorsAttribute", GetVectorsAttribute);
	Nan::SetPrototypeMethod(tpl, "getVectorsAttribute", GetVectorsAttribute);

	Nan::SetPrototypeMethod(tpl, "GetVectorsWeight", GetVectorsWeight);
	Nan::SetPrototypeMethod(tpl, "getVectorsWeight", GetVectorsWeight);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NormalsAttributeOff", NormalsAttributeOff);
	Nan::SetPrototypeMethod(tpl, "normalsAttributeOff", NormalsAttributeOff);

	Nan::SetPrototypeMethod(tpl, "NormalsAttributeOn", NormalsAttributeOn);
	Nan::SetPrototypeMethod(tpl, "normalsAttributeOn", NormalsAttributeOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScalarsAttributeOff", ScalarsAttributeOff);
	Nan::SetPrototypeMethod(tpl, "scalarsAttributeOff", ScalarsAttributeOff);

	Nan::SetPrototypeMethod(tpl, "ScalarsAttributeOn", ScalarsAttributeOn);
	Nan::SetPrototypeMethod(tpl, "scalarsAttributeOn", ScalarsAttributeOn);

	Nan::SetPrototypeMethod(tpl, "SetAttributeErrorMetric", SetAttributeErrorMetric);
	Nan::SetPrototypeMethod(tpl, "setAttributeErrorMetric", SetAttributeErrorMetric);

	Nan::SetPrototypeMethod(tpl, "SetNormalsAttribute", SetNormalsAttribute);
	Nan::SetPrototypeMethod(tpl, "setNormalsAttribute", SetNormalsAttribute);

	Nan::SetPrototypeMethod(tpl, "SetNormalsWeight", SetNormalsWeight);
	Nan::SetPrototypeMethod(tpl, "setNormalsWeight", SetNormalsWeight);

	Nan::SetPrototypeMethod(tpl, "SetScalarsAttribute", SetScalarsAttribute);
	Nan::SetPrototypeMethod(tpl, "setScalarsAttribute", SetScalarsAttribute);

	Nan::SetPrototypeMethod(tpl, "SetScalarsWeight", SetScalarsWeight);
	Nan::SetPrototypeMethod(tpl, "setScalarsWeight", SetScalarsWeight);

	Nan::SetPrototypeMethod(tpl, "SetTCoordsAttribute", SetTCoordsAttribute);
	Nan::SetPrototypeMethod(tpl, "setTCoordsAttribute", SetTCoordsAttribute);

	Nan::SetPrototypeMethod(tpl, "SetTCoordsWeight", SetTCoordsWeight);
	Nan::SetPrototypeMethod(tpl, "setTCoordsWeight", SetTCoordsWeight);

	Nan::SetPrototypeMethod(tpl, "SetTargetReduction", SetTargetReduction);
	Nan::SetPrototypeMethod(tpl, "setTargetReduction", SetTargetReduction);

	Nan::SetPrototypeMethod(tpl, "SetTensorsAttribute", SetTensorsAttribute);
	Nan::SetPrototypeMethod(tpl, "setTensorsAttribute", SetTensorsAttribute);

	Nan::SetPrototypeMethod(tpl, "SetTensorsWeight", SetTensorsWeight);
	Nan::SetPrototypeMethod(tpl, "setTensorsWeight", SetTensorsWeight);

	Nan::SetPrototypeMethod(tpl, "SetVectorsAttribute", SetVectorsAttribute);
	Nan::SetPrototypeMethod(tpl, "setVectorsAttribute", SetVectorsAttribute);

	Nan::SetPrototypeMethod(tpl, "SetVectorsWeight", SetVectorsWeight);
	Nan::SetPrototypeMethod(tpl, "setVectorsWeight", SetVectorsWeight);

	Nan::SetPrototypeMethod(tpl, "TCoordsAttributeOff", TCoordsAttributeOff);
	Nan::SetPrototypeMethod(tpl, "tCoordsAttributeOff", TCoordsAttributeOff);

	Nan::SetPrototypeMethod(tpl, "TCoordsAttributeOn", TCoordsAttributeOn);
	Nan::SetPrototypeMethod(tpl, "tCoordsAttributeOn", TCoordsAttributeOn);

	Nan::SetPrototypeMethod(tpl, "TensorsAttributeOff", TensorsAttributeOff);
	Nan::SetPrototypeMethod(tpl, "tensorsAttributeOff", TensorsAttributeOff);

	Nan::SetPrototypeMethod(tpl, "TensorsAttributeOn", TensorsAttributeOn);
	Nan::SetPrototypeMethod(tpl, "tensorsAttributeOn", TensorsAttributeOn);

	Nan::SetPrototypeMethod(tpl, "VectorsAttributeOff", VectorsAttributeOff);
	Nan::SetPrototypeMethod(tpl, "vectorsAttributeOff", VectorsAttributeOff);

	Nan::SetPrototypeMethod(tpl, "VectorsAttributeOn", VectorsAttributeOn);
	Nan::SetPrototypeMethod(tpl, "vectorsAttributeOn", VectorsAttributeOn);

	ptpl.Reset( tpl );
}

void VtkQuadricDecimationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkQuadricDecimation> native = vtkSmartPointer<vtkQuadricDecimation>::New();
		VtkQuadricDecimationWrap* obj = new VtkQuadricDecimationWrap(native);
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

void VtkQuadricDecimationWrap::AttributeErrorMetricOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AttributeErrorMetricOff();
}

void VtkQuadricDecimationWrap::AttributeErrorMetricOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AttributeErrorMetricOn();
}

void VtkQuadricDecimationWrap::GetActualReduction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActualReduction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetAttributeErrorMetric(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAttributeErrorMetric();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkQuadricDecimationWrap::GetNormalsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalsAttribute();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetNormalsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalsWeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetScalarsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarsAttribute();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetScalarsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarsWeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetTCoordsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTCoordsAttribute();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetTCoordsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTCoordsWeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetTargetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetReduction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetTargetReductionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetReductionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetTargetReductionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetReductionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetTensorsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTensorsAttribute();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetTensorsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTensorsWeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetVectorsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorsAttribute();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::GetVectorsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorsWeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadricDecimationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
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

void VtkQuadricDecimationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	vtkQuadricDecimation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkQuadricDecimationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkQuadricDecimationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkQuadricDecimationWrap *w = new VtkQuadricDecimationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkQuadricDecimationWrap::NormalsAttributeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalsAttributeOff();
}

void VtkQuadricDecimationWrap::NormalsAttributeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalsAttributeOn();
}

void VtkQuadricDecimationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkQuadricDecimation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkQuadricDecimationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkQuadricDecimationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkQuadricDecimationWrap *w = new VtkQuadricDecimationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricDecimationWrap::ScalarsAttributeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarsAttributeOff();
}

void VtkQuadricDecimationWrap::ScalarsAttributeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarsAttributeOn();
}

void VtkQuadricDecimationWrap::SetAttributeErrorMetric(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAttributeErrorMetric(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricDecimationWrap::SetNormalsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalsAttribute(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricDecimationWrap::SetNormalsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalsWeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricDecimationWrap::SetScalarsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarsAttribute(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricDecimationWrap::SetScalarsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarsWeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricDecimationWrap::SetTCoordsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTCoordsAttribute(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricDecimationWrap::SetTCoordsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTCoordsWeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricDecimationWrap::SetTargetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTargetReduction(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricDecimationWrap::SetTensorsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTensorsAttribute(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricDecimationWrap::SetTensorsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTensorsWeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricDecimationWrap::SetVectorsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVectorsAttribute(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricDecimationWrap::SetVectorsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVectorsWeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadricDecimationWrap::TCoordsAttributeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TCoordsAttributeOff();
}

void VtkQuadricDecimationWrap::TCoordsAttributeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TCoordsAttributeOn();
}

void VtkQuadricDecimationWrap::TensorsAttributeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TensorsAttributeOff();
}

void VtkQuadricDecimationWrap::TensorsAttributeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TensorsAttributeOn();
}

void VtkQuadricDecimationWrap::VectorsAttributeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VectorsAttributeOff();
}

void VtkQuadricDecimationWrap::VectorsAttributeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadricDecimationWrap *wrapper = ObjectWrap::Unwrap<VtkQuadricDecimationWrap>(info.Holder());
	vtkQuadricDecimation *native = (vtkQuadricDecimation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VectorsAttributeOn();
}

