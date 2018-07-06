/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkEvenlySpacedStreamlines2DWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkInitialValueProblemSolverWrap.h"
#include "vtkAbstractInterpolatedVelocityFieldWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkEvenlySpacedStreamlines2DWrap::ptpl;

VtkEvenlySpacedStreamlines2DWrap::VtkEvenlySpacedStreamlines2DWrap()
{ }

VtkEvenlySpacedStreamlines2DWrap::VtkEvenlySpacedStreamlines2DWrap(vtkSmartPointer<vtkEvenlySpacedStreamlines2D> _native)
{ native = _native; }

VtkEvenlySpacedStreamlines2DWrap::~VtkEvenlySpacedStreamlines2DWrap()
{ }

void VtkEvenlySpacedStreamlines2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkEvenlySpacedStreamlines2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("EvenlySpacedStreamlines2D").ToLocalChecked(), ConstructorGetter);
}

void VtkEvenlySpacedStreamlines2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkEvenlySpacedStreamlines2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkEvenlySpacedStreamlines2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClosedLoopMaximumDistance", GetClosedLoopMaximumDistance);
	Nan::SetPrototypeMethod(tpl, "getClosedLoopMaximumDistance", GetClosedLoopMaximumDistance);

	Nan::SetPrototypeMethod(tpl, "GetComputeVorticity", GetComputeVorticity);
	Nan::SetPrototypeMethod(tpl, "getComputeVorticity", GetComputeVorticity);

	Nan::SetPrototypeMethod(tpl, "GetInitialIntegrationStep", GetInitialIntegrationStep);
	Nan::SetPrototypeMethod(tpl, "getInitialIntegrationStep", GetInitialIntegrationStep);

	Nan::SetPrototypeMethod(tpl, "GetIntegrationStepUnit", GetIntegrationStepUnit);
	Nan::SetPrototypeMethod(tpl, "getIntegrationStepUnit", GetIntegrationStepUnit);

	Nan::SetPrototypeMethod(tpl, "GetIntegrator", GetIntegrator);
	Nan::SetPrototypeMethod(tpl, "getIntegrator", GetIntegrator);

	Nan::SetPrototypeMethod(tpl, "GetIntegratorType", GetIntegratorType);
	Nan::SetPrototypeMethod(tpl, "getIntegratorType", GetIntegratorType);

	Nan::SetPrototypeMethod(tpl, "GetLoopAngle", GetLoopAngle);
	Nan::SetPrototypeMethod(tpl, "getLoopAngle", GetLoopAngle);

	Nan::SetPrototypeMethod(tpl, "GetSeparatingDistance", GetSeparatingDistance);
	Nan::SetPrototypeMethod(tpl, "getSeparatingDistance", GetSeparatingDistance);

	Nan::SetPrototypeMethod(tpl, "GetSeparatingDistanceRatio", GetSeparatingDistanceRatio);
	Nan::SetPrototypeMethod(tpl, "getSeparatingDistanceRatio", GetSeparatingDistanceRatio);

	Nan::SetPrototypeMethod(tpl, "GetStartPosition", GetStartPosition);
	Nan::SetPrototypeMethod(tpl, "getStartPosition", GetStartPosition);

	Nan::SetPrototypeMethod(tpl, "GetTerminalSpeed", GetTerminalSpeed);
	Nan::SetPrototypeMethod(tpl, "getTerminalSpeed", GetTerminalSpeed);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetClosedLoopMaximumDistance", SetClosedLoopMaximumDistance);
	Nan::SetPrototypeMethod(tpl, "setClosedLoopMaximumDistance", SetClosedLoopMaximumDistance);

	Nan::SetPrototypeMethod(tpl, "SetComputeVorticity", SetComputeVorticity);
	Nan::SetPrototypeMethod(tpl, "setComputeVorticity", SetComputeVorticity);

	Nan::SetPrototypeMethod(tpl, "SetInitialIntegrationStep", SetInitialIntegrationStep);
	Nan::SetPrototypeMethod(tpl, "setInitialIntegrationStep", SetInitialIntegrationStep);

	Nan::SetPrototypeMethod(tpl, "SetIntegrationStepUnit", SetIntegrationStepUnit);
	Nan::SetPrototypeMethod(tpl, "setIntegrationStepUnit", SetIntegrationStepUnit);

	Nan::SetPrototypeMethod(tpl, "SetIntegrator", SetIntegrator);
	Nan::SetPrototypeMethod(tpl, "setIntegrator", SetIntegrator);

	Nan::SetPrototypeMethod(tpl, "SetIntegratorType", SetIntegratorType);
	Nan::SetPrototypeMethod(tpl, "setIntegratorType", SetIntegratorType);

	Nan::SetPrototypeMethod(tpl, "SetIntegratorTypeToRungeKutta2", SetIntegratorTypeToRungeKutta2);
	Nan::SetPrototypeMethod(tpl, "setIntegratorTypeToRungeKutta2", SetIntegratorTypeToRungeKutta2);

	Nan::SetPrototypeMethod(tpl, "SetIntegratorTypeToRungeKutta4", SetIntegratorTypeToRungeKutta4);
	Nan::SetPrototypeMethod(tpl, "setIntegratorTypeToRungeKutta4", SetIntegratorTypeToRungeKutta4);

	Nan::SetPrototypeMethod(tpl, "SetInterpolatorPrototype", SetInterpolatorPrototype);
	Nan::SetPrototypeMethod(tpl, "setInterpolatorPrototype", SetInterpolatorPrototype);

	Nan::SetPrototypeMethod(tpl, "SetInterpolatorType", SetInterpolatorType);
	Nan::SetPrototypeMethod(tpl, "setInterpolatorType", SetInterpolatorType);

	Nan::SetPrototypeMethod(tpl, "SetInterpolatorTypeToCellLocator", SetInterpolatorTypeToCellLocator);
	Nan::SetPrototypeMethod(tpl, "setInterpolatorTypeToCellLocator", SetInterpolatorTypeToCellLocator);

	Nan::SetPrototypeMethod(tpl, "SetInterpolatorTypeToDataSetPointLocator", SetInterpolatorTypeToDataSetPointLocator);
	Nan::SetPrototypeMethod(tpl, "setInterpolatorTypeToDataSetPointLocator", SetInterpolatorTypeToDataSetPointLocator);

	Nan::SetPrototypeMethod(tpl, "SetLoopAngle", SetLoopAngle);
	Nan::SetPrototypeMethod(tpl, "setLoopAngle", SetLoopAngle);

	Nan::SetPrototypeMethod(tpl, "SetSeparatingDistance", SetSeparatingDistance);
	Nan::SetPrototypeMethod(tpl, "setSeparatingDistance", SetSeparatingDistance);

	Nan::SetPrototypeMethod(tpl, "SetSeparatingDistanceRatio", SetSeparatingDistanceRatio);
	Nan::SetPrototypeMethod(tpl, "setSeparatingDistanceRatio", SetSeparatingDistanceRatio);

	Nan::SetPrototypeMethod(tpl, "SetStartPosition", SetStartPosition);
	Nan::SetPrototypeMethod(tpl, "setStartPosition", SetStartPosition);

	Nan::SetPrototypeMethod(tpl, "SetTerminalSpeed", SetTerminalSpeed);
	Nan::SetPrototypeMethod(tpl, "setTerminalSpeed", SetTerminalSpeed);

#ifdef VTK_NODE_PLUS_VTKEVENLYSPACEDSTREAMLINES2DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKEVENLYSPACEDSTREAMLINES2DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkEvenlySpacedStreamlines2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkEvenlySpacedStreamlines2D> native = vtkSmartPointer<vtkEvenlySpacedStreamlines2D>::New();
		VtkEvenlySpacedStreamlines2DWrap* obj = new VtkEvenlySpacedStreamlines2DWrap(native);
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

void VtkEvenlySpacedStreamlines2DWrap::GetClosedLoopMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClosedLoopMaximumDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEvenlySpacedStreamlines2DWrap::GetComputeVorticity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeVorticity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEvenlySpacedStreamlines2DWrap::GetInitialIntegrationStep(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInitialIntegrationStep();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEvenlySpacedStreamlines2DWrap::GetIntegrationStepUnit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntegrationStepUnit();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEvenlySpacedStreamlines2DWrap::GetIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	vtkInitialValueProblemSolver * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntegrator();
	VtkInitialValueProblemSolverWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInitialValueProblemSolverWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInitialValueProblemSolverWrap *w = new VtkInitialValueProblemSolverWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEvenlySpacedStreamlines2DWrap::GetIntegratorType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntegratorType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEvenlySpacedStreamlines2DWrap::GetLoopAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLoopAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEvenlySpacedStreamlines2DWrap::GetSeparatingDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSeparatingDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEvenlySpacedStreamlines2DWrap::GetSeparatingDistanceRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSeparatingDistanceRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEvenlySpacedStreamlines2DWrap::GetStartPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartPosition();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkEvenlySpacedStreamlines2DWrap::GetTerminalSpeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTerminalSpeed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEvenlySpacedStreamlines2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	vtkEvenlySpacedStreamlines2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkEvenlySpacedStreamlines2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkEvenlySpacedStreamlines2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEvenlySpacedStreamlines2DWrap *w = new VtkEvenlySpacedStreamlines2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEvenlySpacedStreamlines2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkEvenlySpacedStreamlines2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkEvenlySpacedStreamlines2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkEvenlySpacedStreamlines2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEvenlySpacedStreamlines2DWrap *w = new VtkEvenlySpacedStreamlines2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEvenlySpacedStreamlines2DWrap::SetClosedLoopMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClosedLoopMaximumDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEvenlySpacedStreamlines2DWrap::SetComputeVorticity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeVorticity(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEvenlySpacedStreamlines2DWrap::SetInitialIntegrationStep(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInitialIntegrationStep(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEvenlySpacedStreamlines2DWrap::SetIntegrationStepUnit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIntegrationStepUnit(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEvenlySpacedStreamlines2DWrap::SetIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInitialValueProblemSolverWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInitialValueProblemSolverWrap *a0 = ObjectWrap::Unwrap<VtkInitialValueProblemSolverWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIntegrator(
			(vtkInitialValueProblemSolver *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEvenlySpacedStreamlines2DWrap::SetIntegratorType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIntegratorType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEvenlySpacedStreamlines2DWrap::SetIntegratorTypeToRungeKutta2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIntegratorTypeToRungeKutta2();
}

void VtkEvenlySpacedStreamlines2DWrap::SetIntegratorTypeToRungeKutta4(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIntegratorTypeToRungeKutta4();
}

void VtkEvenlySpacedStreamlines2DWrap::SetInterpolatorPrototype(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractInterpolatedVelocityFieldWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractInterpolatedVelocityFieldWrap *a0 = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolatorPrototype(
			(vtkAbstractInterpolatedVelocityField *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEvenlySpacedStreamlines2DWrap::SetInterpolatorType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolatorType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEvenlySpacedStreamlines2DWrap::SetInterpolatorTypeToCellLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolatorTypeToCellLocator();
}

void VtkEvenlySpacedStreamlines2DWrap::SetInterpolatorTypeToDataSetPointLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolatorTypeToDataSetPointLocator();
}

void VtkEvenlySpacedStreamlines2DWrap::SetLoopAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLoopAngle(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEvenlySpacedStreamlines2DWrap::SetSeparatingDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSeparatingDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEvenlySpacedStreamlines2DWrap::SetSeparatingDistanceRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSeparatingDistanceRatio(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEvenlySpacedStreamlines2DWrap::SetStartPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStartPosition(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStartPosition(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetStartPosition(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEvenlySpacedStreamlines2DWrap::SetTerminalSpeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEvenlySpacedStreamlines2DWrap *wrapper = ObjectWrap::Unwrap<VtkEvenlySpacedStreamlines2DWrap>(info.Holder());
	vtkEvenlySpacedStreamlines2D *native = (vtkEvenlySpacedStreamlines2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTerminalSpeed(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
