/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkDelaunay3DWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDelaunay3DWrap::ptpl;

VtkDelaunay3DWrap::VtkDelaunay3DWrap()
{ }

VtkDelaunay3DWrap::VtkDelaunay3DWrap(vtkSmartPointer<vtkDelaunay3D> _native)
{ native = _native; }

VtkDelaunay3DWrap::~VtkDelaunay3DWrap()
{ }

void VtkDelaunay3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDelaunay3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Delaunay3D").ToLocalChecked(), ConstructorGetter);
}

void VtkDelaunay3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDelaunay3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDelaunay3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AlphaLinesOff", AlphaLinesOff);
	Nan::SetPrototypeMethod(tpl, "alphaLinesOff", AlphaLinesOff);

	Nan::SetPrototypeMethod(tpl, "AlphaLinesOn", AlphaLinesOn);
	Nan::SetPrototypeMethod(tpl, "alphaLinesOn", AlphaLinesOn);

	Nan::SetPrototypeMethod(tpl, "AlphaTetsOff", AlphaTetsOff);
	Nan::SetPrototypeMethod(tpl, "alphaTetsOff", AlphaTetsOff);

	Nan::SetPrototypeMethod(tpl, "AlphaTetsOn", AlphaTetsOn);
	Nan::SetPrototypeMethod(tpl, "alphaTetsOn", AlphaTetsOn);

	Nan::SetPrototypeMethod(tpl, "AlphaTrisOff", AlphaTrisOff);
	Nan::SetPrototypeMethod(tpl, "alphaTrisOff", AlphaTrisOff);

	Nan::SetPrototypeMethod(tpl, "AlphaTrisOn", AlphaTrisOn);
	Nan::SetPrototypeMethod(tpl, "alphaTrisOn", AlphaTrisOn);

	Nan::SetPrototypeMethod(tpl, "AlphaVertsOff", AlphaVertsOff);
	Nan::SetPrototypeMethod(tpl, "alphaVertsOff", AlphaVertsOff);

	Nan::SetPrototypeMethod(tpl, "AlphaVertsOn", AlphaVertsOn);
	Nan::SetPrototypeMethod(tpl, "alphaVertsOn", AlphaVertsOn);

	Nan::SetPrototypeMethod(tpl, "BoundingTriangulationOff", BoundingTriangulationOff);
	Nan::SetPrototypeMethod(tpl, "boundingTriangulationOff", BoundingTriangulationOff);

	Nan::SetPrototypeMethod(tpl, "BoundingTriangulationOn", BoundingTriangulationOn);
	Nan::SetPrototypeMethod(tpl, "boundingTriangulationOn", BoundingTriangulationOn);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultLocator", CreateDefaultLocator);
	Nan::SetPrototypeMethod(tpl, "createDefaultLocator", CreateDefaultLocator);

	Nan::SetPrototypeMethod(tpl, "EndPointInsertion", EndPointInsertion);
	Nan::SetPrototypeMethod(tpl, "endPointInsertion", EndPointInsertion);

	Nan::SetPrototypeMethod(tpl, "GetAlpha", GetAlpha);
	Nan::SetPrototypeMethod(tpl, "getAlpha", GetAlpha);

	Nan::SetPrototypeMethod(tpl, "GetAlphaLines", GetAlphaLines);
	Nan::SetPrototypeMethod(tpl, "getAlphaLines", GetAlphaLines);

	Nan::SetPrototypeMethod(tpl, "GetAlphaMaxValue", GetAlphaMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAlphaMaxValue", GetAlphaMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAlphaMinValue", GetAlphaMinValue);
	Nan::SetPrototypeMethod(tpl, "getAlphaMinValue", GetAlphaMinValue);

	Nan::SetPrototypeMethod(tpl, "GetAlphaTets", GetAlphaTets);
	Nan::SetPrototypeMethod(tpl, "getAlphaTets", GetAlphaTets);

	Nan::SetPrototypeMethod(tpl, "GetAlphaTris", GetAlphaTris);
	Nan::SetPrototypeMethod(tpl, "getAlphaTris", GetAlphaTris);

	Nan::SetPrototypeMethod(tpl, "GetAlphaVerts", GetAlphaVerts);
	Nan::SetPrototypeMethod(tpl, "getAlphaVerts", GetAlphaVerts);

	Nan::SetPrototypeMethod(tpl, "GetBoundingTriangulation", GetBoundingTriangulation);
	Nan::SetPrototypeMethod(tpl, "getBoundingTriangulation", GetBoundingTriangulation);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetOffset", GetOffset);
	Nan::SetPrototypeMethod(tpl, "getOffset", GetOffset);

	Nan::SetPrototypeMethod(tpl, "GetOffsetMaxValue", GetOffsetMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOffsetMaxValue", GetOffsetMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOffsetMinValue", GetOffsetMinValue);
	Nan::SetPrototypeMethod(tpl, "getOffsetMinValue", GetOffsetMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAlpha", SetAlpha);
	Nan::SetPrototypeMethod(tpl, "setAlpha", SetAlpha);

	Nan::SetPrototypeMethod(tpl, "SetAlphaLines", SetAlphaLines);
	Nan::SetPrototypeMethod(tpl, "setAlphaLines", SetAlphaLines);

	Nan::SetPrototypeMethod(tpl, "SetAlphaTets", SetAlphaTets);
	Nan::SetPrototypeMethod(tpl, "setAlphaTets", SetAlphaTets);

	Nan::SetPrototypeMethod(tpl, "SetAlphaTris", SetAlphaTris);
	Nan::SetPrototypeMethod(tpl, "setAlphaTris", SetAlphaTris);

	Nan::SetPrototypeMethod(tpl, "SetAlphaVerts", SetAlphaVerts);
	Nan::SetPrototypeMethod(tpl, "setAlphaVerts", SetAlphaVerts);

	Nan::SetPrototypeMethod(tpl, "SetBoundingTriangulation", SetBoundingTriangulation);
	Nan::SetPrototypeMethod(tpl, "setBoundingTriangulation", SetBoundingTriangulation);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetOffset", SetOffset);
	Nan::SetPrototypeMethod(tpl, "setOffset", SetOffset);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

#ifdef VTK_NODE_PLUS_VTKDELAUNAY3DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDELAUNAY3DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkDelaunay3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDelaunay3D> native = vtkSmartPointer<vtkDelaunay3D>::New();
		VtkDelaunay3DWrap* obj = new VtkDelaunay3DWrap(native);
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

void VtkDelaunay3DWrap::AlphaLinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AlphaLinesOff();
}

void VtkDelaunay3DWrap::AlphaLinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AlphaLinesOn();
}

void VtkDelaunay3DWrap::AlphaTetsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AlphaTetsOff();
}

void VtkDelaunay3DWrap::AlphaTetsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AlphaTetsOn();
}

void VtkDelaunay3DWrap::AlphaTrisOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AlphaTrisOff();
}

void VtkDelaunay3DWrap::AlphaTrisOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AlphaTrisOn();
}

void VtkDelaunay3DWrap::AlphaVertsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AlphaVertsOff();
}

void VtkDelaunay3DWrap::AlphaVertsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AlphaVertsOn();
}

void VtkDelaunay3DWrap::BoundingTriangulationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoundingTriangulationOff();
}

void VtkDelaunay3DWrap::BoundingTriangulationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoundingTriangulationOn();
}

void VtkDelaunay3DWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkDelaunay3DWrap::EndPointInsertion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndPointInsertion();
}

void VtkDelaunay3DWrap::GetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlpha();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetAlphaLines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlphaLines();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetAlphaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlphaMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetAlphaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlphaMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetAlphaTets(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlphaTets();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetAlphaTris(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlphaTris();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetAlphaVerts(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlphaVerts();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetBoundingTriangulation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoundingTriangulation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	vtkIncrementalPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocator();
	VtkIncrementalPointLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIncrementalPointLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalPointLocatorWrap *w = new VtkIncrementalPointLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDelaunay3DWrap::GetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffsetMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffsetMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	vtkDelaunay3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDelaunay3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDelaunay3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDelaunay3DWrap *w = new VtkDelaunay3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDelaunay3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkDelaunay3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkDelaunay3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDelaunay3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDelaunay3DWrap *w = new VtkDelaunay3DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelaunay3DWrap::SetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAlpha(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelaunay3DWrap::SetAlphaLines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAlphaLines(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelaunay3DWrap::SetAlphaTets(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAlphaTets(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelaunay3DWrap::SetAlphaTris(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAlphaTris(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelaunay3DWrap::SetAlphaVerts(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAlphaVerts(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelaunay3DWrap::SetBoundingTriangulation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBoundingTriangulation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelaunay3DWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIncrementalPointLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIncrementalPointLocatorWrap *a0 = ObjectWrap::Unwrap<VtkIncrementalPointLocatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocator(
			(vtkIncrementalPointLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelaunay3DWrap::SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOffset(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelaunay3DWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
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

void VtkDelaunay3DWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay3DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay3DWrap>(info.Holder());
	vtkDelaunay3D *native = (vtkDelaunay3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

