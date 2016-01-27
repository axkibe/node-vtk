/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkDelaunay2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkAbstractTransformWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDelaunay2DWrap::ptpl;

VtkDelaunay2DWrap::VtkDelaunay2DWrap()
{ }

VtkDelaunay2DWrap::VtkDelaunay2DWrap(vtkSmartPointer<vtkDelaunay2D> _native)
{ native = _native; }

VtkDelaunay2DWrap::~VtkDelaunay2DWrap()
{ }

void VtkDelaunay2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDelaunay2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Delaunay2D").ToLocalChecked(), ConstructorGetter);
}

void VtkDelaunay2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDelaunay2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDelaunay2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BoundingTriangulationOff", BoundingTriangulationOff);
	Nan::SetPrototypeMethod(tpl, "boundingTriangulationOff", BoundingTriangulationOff);

	Nan::SetPrototypeMethod(tpl, "BoundingTriangulationOn", BoundingTriangulationOn);
	Nan::SetPrototypeMethod(tpl, "boundingTriangulationOn", BoundingTriangulationOn);

	Nan::SetPrototypeMethod(tpl, "GetAlpha", GetAlpha);
	Nan::SetPrototypeMethod(tpl, "getAlpha", GetAlpha);

	Nan::SetPrototypeMethod(tpl, "GetAlphaMaxValue", GetAlphaMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAlphaMaxValue", GetAlphaMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAlphaMinValue", GetAlphaMinValue);
	Nan::SetPrototypeMethod(tpl, "getAlphaMinValue", GetAlphaMinValue);

	Nan::SetPrototypeMethod(tpl, "GetBoundingTriangulation", GetBoundingTriangulation);
	Nan::SetPrototypeMethod(tpl, "getBoundingTriangulation", GetBoundingTriangulation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOffset", GetOffset);
	Nan::SetPrototypeMethod(tpl, "getOffset", GetOffset);

	Nan::SetPrototypeMethod(tpl, "GetOffsetMaxValue", GetOffsetMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOffsetMaxValue", GetOffsetMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOffsetMinValue", GetOffsetMinValue);
	Nan::SetPrototypeMethod(tpl, "getOffsetMinValue", GetOffsetMinValue);

	Nan::SetPrototypeMethod(tpl, "GetProjectionPlaneMode", GetProjectionPlaneMode);
	Nan::SetPrototypeMethod(tpl, "getProjectionPlaneMode", GetProjectionPlaneMode);

	Nan::SetPrototypeMethod(tpl, "GetProjectionPlaneModeMaxValue", GetProjectionPlaneModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getProjectionPlaneModeMaxValue", GetProjectionPlaneModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetProjectionPlaneModeMinValue", GetProjectionPlaneModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getProjectionPlaneModeMinValue", GetProjectionPlaneModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSource", GetSource);
	Nan::SetPrototypeMethod(tpl, "getSource", GetSource);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAlpha", SetAlpha);
	Nan::SetPrototypeMethod(tpl, "setAlpha", SetAlpha);

	Nan::SetPrototypeMethod(tpl, "SetBoundingTriangulation", SetBoundingTriangulation);
	Nan::SetPrototypeMethod(tpl, "setBoundingTriangulation", SetBoundingTriangulation);

	Nan::SetPrototypeMethod(tpl, "SetOffset", SetOffset);
	Nan::SetPrototypeMethod(tpl, "setOffset", SetOffset);

	Nan::SetPrototypeMethod(tpl, "SetProjectionPlaneMode", SetProjectionPlaneMode);
	Nan::SetPrototypeMethod(tpl, "setProjectionPlaneMode", SetProjectionPlaneMode);

	Nan::SetPrototypeMethod(tpl, "SetSourceConnection", SetSourceConnection);
	Nan::SetPrototypeMethod(tpl, "setSourceConnection", SetSourceConnection);

	Nan::SetPrototypeMethod(tpl, "SetSourceData", SetSourceData);
	Nan::SetPrototypeMethod(tpl, "setSourceData", SetSourceData);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	Nan::SetPrototypeMethod(tpl, "SetTransform", SetTransform);
	Nan::SetPrototypeMethod(tpl, "setTransform", SetTransform);

	ptpl.Reset( tpl );
}

void VtkDelaunay2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDelaunay2D> native = vtkSmartPointer<vtkDelaunay2D>::New();
		VtkDelaunay2DWrap* obj = new VtkDelaunay2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDelaunay2DWrap::BoundingTriangulationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoundingTriangulationOff();
}

void VtkDelaunay2DWrap::BoundingTriangulationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoundingTriangulationOn();
}

void VtkDelaunay2DWrap::GetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlpha();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay2DWrap::GetAlphaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlphaMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay2DWrap::GetAlphaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlphaMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay2DWrap::GetBoundingTriangulation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoundingTriangulation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelaunay2DWrap::GetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay2DWrap::GetOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffsetMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay2DWrap::GetOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffsetMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay2DWrap::GetProjectionPlaneMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionPlaneMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay2DWrap::GetProjectionPlaneModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionPlaneModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay2DWrap::GetProjectionPlaneModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionPlaneModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay2DWrap::GetSource(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSource();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDelaunay2DWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay2DWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay2DWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelaunay2DWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransform();
		VtkAbstractTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDelaunay2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
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

void VtkDelaunay2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	vtkDelaunay2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDelaunay2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDelaunay2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDelaunay2DWrap *w = new VtkDelaunay2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDelaunay2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDelaunay2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDelaunay2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDelaunay2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDelaunay2DWrap *w = new VtkDelaunay2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelaunay2DWrap::SetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
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

void VtkDelaunay2DWrap::SetBoundingTriangulation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
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

void VtkDelaunay2DWrap::SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
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

void VtkDelaunay2DWrap::SetProjectionPlaneMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProjectionPlaneMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelaunay2DWrap::SetSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelaunay2DWrap::SetSourceData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelaunay2DWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
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

void VtkDelaunay2DWrap::SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelaunay2DWrap *wrapper = ObjectWrap::Unwrap<VtkDelaunay2DWrap>(info.Holder());
	vtkDelaunay2D *native = (vtkDelaunay2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractTransformWrap *a0 = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransform(
			(vtkAbstractTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

