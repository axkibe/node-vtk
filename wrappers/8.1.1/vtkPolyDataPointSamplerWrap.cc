/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkPolyDataPointSamplerWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPolyDataPointSamplerWrap::ptpl;

VtkPolyDataPointSamplerWrap::VtkPolyDataPointSamplerWrap()
{ }

VtkPolyDataPointSamplerWrap::VtkPolyDataPointSamplerWrap(vtkSmartPointer<vtkPolyDataPointSampler> _native)
{ native = _native; }

VtkPolyDataPointSamplerWrap::~VtkPolyDataPointSamplerWrap()
{ }

void VtkPolyDataPointSamplerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPolyDataPointSampler").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PolyDataPointSampler").ToLocalChecked(), ConstructorGetter);
}

void VtkPolyDataPointSamplerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPolyDataPointSamplerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPolyDataPointSamplerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GenerateEdgePointsOff", GenerateEdgePointsOff);
	Nan::SetPrototypeMethod(tpl, "generateEdgePointsOff", GenerateEdgePointsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateEdgePointsOn", GenerateEdgePointsOn);
	Nan::SetPrototypeMethod(tpl, "generateEdgePointsOn", GenerateEdgePointsOn);

	Nan::SetPrototypeMethod(tpl, "GenerateInteriorPointsOff", GenerateInteriorPointsOff);
	Nan::SetPrototypeMethod(tpl, "generateInteriorPointsOff", GenerateInteriorPointsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateInteriorPointsOn", GenerateInteriorPointsOn);
	Nan::SetPrototypeMethod(tpl, "generateInteriorPointsOn", GenerateInteriorPointsOn);

	Nan::SetPrototypeMethod(tpl, "GenerateVertexPointsOff", GenerateVertexPointsOff);
	Nan::SetPrototypeMethod(tpl, "generateVertexPointsOff", GenerateVertexPointsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateVertexPointsOn", GenerateVertexPointsOn);
	Nan::SetPrototypeMethod(tpl, "generateVertexPointsOn", GenerateVertexPointsOn);

	Nan::SetPrototypeMethod(tpl, "GenerateVerticesOff", GenerateVerticesOff);
	Nan::SetPrototypeMethod(tpl, "generateVerticesOff", GenerateVerticesOff);

	Nan::SetPrototypeMethod(tpl, "GenerateVerticesOn", GenerateVerticesOn);
	Nan::SetPrototypeMethod(tpl, "generateVerticesOn", GenerateVerticesOn);

	Nan::SetPrototypeMethod(tpl, "GetDistance", GetDistance);
	Nan::SetPrototypeMethod(tpl, "getDistance", GetDistance);

	Nan::SetPrototypeMethod(tpl, "GetDistanceMaxValue", GetDistanceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDistanceMaxValue", GetDistanceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDistanceMinValue", GetDistanceMinValue);
	Nan::SetPrototypeMethod(tpl, "getDistanceMinValue", GetDistanceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetGenerateEdgePoints", GetGenerateEdgePoints);
	Nan::SetPrototypeMethod(tpl, "getGenerateEdgePoints", GetGenerateEdgePoints);

	Nan::SetPrototypeMethod(tpl, "GetGenerateInteriorPoints", GetGenerateInteriorPoints);
	Nan::SetPrototypeMethod(tpl, "getGenerateInteriorPoints", GetGenerateInteriorPoints);

	Nan::SetPrototypeMethod(tpl, "GetGenerateVertexPoints", GetGenerateVertexPoints);
	Nan::SetPrototypeMethod(tpl, "getGenerateVertexPoints", GetGenerateVertexPoints);

	Nan::SetPrototypeMethod(tpl, "GetGenerateVertices", GetGenerateVertices);
	Nan::SetPrototypeMethod(tpl, "getGenerateVertices", GetGenerateVertices);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDistance", SetDistance);
	Nan::SetPrototypeMethod(tpl, "setDistance", SetDistance);

	Nan::SetPrototypeMethod(tpl, "SetGenerateEdgePoints", SetGenerateEdgePoints);
	Nan::SetPrototypeMethod(tpl, "setGenerateEdgePoints", SetGenerateEdgePoints);

	Nan::SetPrototypeMethod(tpl, "SetGenerateInteriorPoints", SetGenerateInteriorPoints);
	Nan::SetPrototypeMethod(tpl, "setGenerateInteriorPoints", SetGenerateInteriorPoints);

	Nan::SetPrototypeMethod(tpl, "SetGenerateVertexPoints", SetGenerateVertexPoints);
	Nan::SetPrototypeMethod(tpl, "setGenerateVertexPoints", SetGenerateVertexPoints);

	Nan::SetPrototypeMethod(tpl, "SetGenerateVertices", SetGenerateVertices);
	Nan::SetPrototypeMethod(tpl, "setGenerateVertices", SetGenerateVertices);

#ifdef VTK_NODE_PLUS_VTKPOLYDATAPOINTSAMPLERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPOLYDATAPOINTSAMPLERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPolyDataPointSamplerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolyDataPointSampler> native = vtkSmartPointer<vtkPolyDataPointSampler>::New();
		VtkPolyDataPointSamplerWrap* obj = new VtkPolyDataPointSamplerWrap(native);
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

void VtkPolyDataPointSamplerWrap::GenerateEdgePointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateEdgePointsOff();
}

void VtkPolyDataPointSamplerWrap::GenerateEdgePointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateEdgePointsOn();
}

void VtkPolyDataPointSamplerWrap::GenerateInteriorPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateInteriorPointsOff();
}

void VtkPolyDataPointSamplerWrap::GenerateInteriorPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateInteriorPointsOn();
}

void VtkPolyDataPointSamplerWrap::GenerateVertexPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateVertexPointsOff();
}

void VtkPolyDataPointSamplerWrap::GenerateVertexPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateVertexPointsOn();
}

void VtkPolyDataPointSamplerWrap::GenerateVerticesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateVerticesOff();
}

void VtkPolyDataPointSamplerWrap::GenerateVerticesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateVerticesOn();
}

void VtkPolyDataPointSamplerWrap::GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataPointSamplerWrap::GetDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataPointSamplerWrap::GetDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataPointSamplerWrap::GetGenerateEdgePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateEdgePoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataPointSamplerWrap::GetGenerateInteriorPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateInteriorPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataPointSamplerWrap::GetGenerateVertexPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateVertexPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataPointSamplerWrap::GetGenerateVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateVertices();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataPointSamplerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	vtkPolyDataPointSampler * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPolyDataPointSamplerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataPointSamplerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataPointSamplerWrap *w = new VtkPolyDataPointSamplerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataPointSamplerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPolyDataPointSampler * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPolyDataPointSamplerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolyDataPointSamplerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataPointSamplerWrap *w = new VtkPolyDataPointSamplerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataPointSamplerWrap::SetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataPointSamplerWrap::SetGenerateEdgePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateEdgePoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataPointSamplerWrap::SetGenerateInteriorPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateInteriorPoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataPointSamplerWrap::SetGenerateVertexPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateVertexPoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataPointSamplerWrap::SetGenerateVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointSamplerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointSamplerWrap>(info.Holder());
	vtkPolyDataPointSampler *native = (vtkPolyDataPointSampler *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateVertices(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

