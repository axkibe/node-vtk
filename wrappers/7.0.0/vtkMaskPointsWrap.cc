/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkMaskPointsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMaskPointsWrap::ptpl;

VtkMaskPointsWrap::VtkMaskPointsWrap()
{ }

VtkMaskPointsWrap::VtkMaskPointsWrap(vtkSmartPointer<vtkMaskPoints> _native)
{ native = _native; }

VtkMaskPointsWrap::~VtkMaskPointsWrap()
{ }

void VtkMaskPointsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMaskPoints").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MaskPoints").ToLocalChecked(), ConstructorGetter);
}

void VtkMaskPointsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMaskPointsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMaskPointsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GenerateVerticesOff", GenerateVerticesOff);
	Nan::SetPrototypeMethod(tpl, "generateVerticesOff", GenerateVerticesOff);

	Nan::SetPrototypeMethod(tpl, "GenerateVerticesOn", GenerateVerticesOn);
	Nan::SetPrototypeMethod(tpl, "generateVerticesOn", GenerateVerticesOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGenerateVertices", GetGenerateVertices);
	Nan::SetPrototypeMethod(tpl, "getGenerateVertices", GetGenerateVertices);

	Nan::SetPrototypeMethod(tpl, "GetOnRatio", GetOnRatio);
	Nan::SetPrototypeMethod(tpl, "getOnRatio", GetOnRatio);

	Nan::SetPrototypeMethod(tpl, "GetOnRatioMaxValue", GetOnRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOnRatioMaxValue", GetOnRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOnRatioMinValue", GetOnRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getOnRatioMinValue", GetOnRatioMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetProportionalMaximumNumberOfPoints", GetProportionalMaximumNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "getProportionalMaximumNumberOfPoints", GetProportionalMaximumNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "GetRandomMode", GetRandomMode);
	Nan::SetPrototypeMethod(tpl, "getRandomMode", GetRandomMode);

	Nan::SetPrototypeMethod(tpl, "GetRandomModeType", GetRandomModeType);
	Nan::SetPrototypeMethod(tpl, "getRandomModeType", GetRandomModeType);

	Nan::SetPrototypeMethod(tpl, "GetRandomModeTypeMaxValue", GetRandomModeTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRandomModeTypeMaxValue", GetRandomModeTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRandomModeTypeMinValue", GetRandomModeTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getRandomModeTypeMinValue", GetRandomModeTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSingleVertexPerCell", GetSingleVertexPerCell);
	Nan::SetPrototypeMethod(tpl, "getSingleVertexPerCell", GetSingleVertexPerCell);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ProportionalMaximumNumberOfPointsOff", ProportionalMaximumNumberOfPointsOff);
	Nan::SetPrototypeMethod(tpl, "proportionalMaximumNumberOfPointsOff", ProportionalMaximumNumberOfPointsOff);

	Nan::SetPrototypeMethod(tpl, "ProportionalMaximumNumberOfPointsOn", ProportionalMaximumNumberOfPointsOn);
	Nan::SetPrototypeMethod(tpl, "proportionalMaximumNumberOfPointsOn", ProportionalMaximumNumberOfPointsOn);

	Nan::SetPrototypeMethod(tpl, "RandomModeOff", RandomModeOff);
	Nan::SetPrototypeMethod(tpl, "randomModeOff", RandomModeOff);

	Nan::SetPrototypeMethod(tpl, "RandomModeOn", RandomModeOn);
	Nan::SetPrototypeMethod(tpl, "randomModeOn", RandomModeOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGenerateVertices", SetGenerateVertices);
	Nan::SetPrototypeMethod(tpl, "setGenerateVertices", SetGenerateVertices);

	Nan::SetPrototypeMethod(tpl, "SetOnRatio", SetOnRatio);
	Nan::SetPrototypeMethod(tpl, "setOnRatio", SetOnRatio);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetProportionalMaximumNumberOfPoints", SetProportionalMaximumNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "setProportionalMaximumNumberOfPoints", SetProportionalMaximumNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "SetRandomMode", SetRandomMode);
	Nan::SetPrototypeMethod(tpl, "setRandomMode", SetRandomMode);

	Nan::SetPrototypeMethod(tpl, "SetRandomModeType", SetRandomModeType);
	Nan::SetPrototypeMethod(tpl, "setRandomModeType", SetRandomModeType);

	Nan::SetPrototypeMethod(tpl, "SetSingleVertexPerCell", SetSingleVertexPerCell);
	Nan::SetPrototypeMethod(tpl, "setSingleVertexPerCell", SetSingleVertexPerCell);

	Nan::SetPrototypeMethod(tpl, "SingleVertexPerCellOff", SingleVertexPerCellOff);
	Nan::SetPrototypeMethod(tpl, "singleVertexPerCellOff", SingleVertexPerCellOff);

	Nan::SetPrototypeMethod(tpl, "SingleVertexPerCellOn", SingleVertexPerCellOn);
	Nan::SetPrototypeMethod(tpl, "singleVertexPerCellOn", SingleVertexPerCellOn);

	ptpl.Reset( tpl );
}

void VtkMaskPointsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMaskPoints> native = vtkSmartPointer<vtkMaskPoints>::New();
		VtkMaskPointsWrap* obj = new VtkMaskPointsWrap(native);
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

void VtkMaskPointsWrap::GenerateVerticesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateVerticesOff();
}

void VtkMaskPointsWrap::GenerateVerticesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateVerticesOn();
}

void VtkMaskPointsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMaskPointsWrap::GetGenerateVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateVertices();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMaskPointsWrap::GetOnRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMaskPointsWrap::GetOnRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMaskPointsWrap::GetOnRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMaskPointsWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMaskPointsWrap::GetProportionalMaximumNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProportionalMaximumNumberOfPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMaskPointsWrap::GetRandomMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMaskPointsWrap::GetRandomModeType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomModeType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMaskPointsWrap::GetRandomModeTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomModeTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMaskPointsWrap::GetRandomModeTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomModeTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMaskPointsWrap::GetSingleVertexPerCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSingleVertexPerCell();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMaskPointsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
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

void VtkMaskPointsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	vtkMaskPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMaskPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMaskPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMaskPointsWrap *w = new VtkMaskPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMaskPointsWrap::ProportionalMaximumNumberOfPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProportionalMaximumNumberOfPointsOff();
}

void VtkMaskPointsWrap::ProportionalMaximumNumberOfPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProportionalMaximumNumberOfPointsOn();
}

void VtkMaskPointsWrap::RandomModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RandomModeOff();
}

void VtkMaskPointsWrap::RandomModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RandomModeOn();
}

void VtkMaskPointsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMaskPoints * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMaskPointsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMaskPointsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMaskPointsWrap *w = new VtkMaskPointsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMaskPointsWrap::SetGenerateVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
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

void VtkMaskPointsWrap::SetOnRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOnRatio(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMaskPointsWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
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

void VtkMaskPointsWrap::SetProportionalMaximumNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProportionalMaximumNumberOfPoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMaskPointsWrap::SetRandomMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRandomMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMaskPointsWrap::SetRandomModeType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRandomModeType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMaskPointsWrap::SetSingleVertexPerCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSingleVertexPerCell(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMaskPointsWrap::SingleVertexPerCellOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SingleVertexPerCellOff();
}

void VtkMaskPointsWrap::SingleVertexPerCellOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMaskPointsWrap *wrapper = ObjectWrap::Unwrap<VtkMaskPointsWrap>(info.Holder());
	vtkMaskPoints *native = (vtkMaskPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SingleVertexPerCellOn();
}

