/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAlgorithmWrap.h"
#include "vtkTemporalFractalWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTemporalFractalWrap::ptpl;

VtkTemporalFractalWrap::VtkTemporalFractalWrap()
{ }

VtkTemporalFractalWrap::VtkTemporalFractalWrap(vtkSmartPointer<vtkTemporalFractal> _native)
{ native = _native; }

VtkTemporalFractalWrap::~VtkTemporalFractalWrap()
{ }

void VtkTemporalFractalWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTemporalFractal").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TemporalFractal").ToLocalChecked(), ConstructorGetter);
}

void VtkTemporalFractalWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTemporalFractalWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTemporalFractalWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AdaptiveSubdivisionOff", AdaptiveSubdivisionOff);
	Nan::SetPrototypeMethod(tpl, "adaptiveSubdivisionOff", AdaptiveSubdivisionOff);

	Nan::SetPrototypeMethod(tpl, "AdaptiveSubdivisionOn", AdaptiveSubdivisionOn);
	Nan::SetPrototypeMethod(tpl, "adaptiveSubdivisionOn", AdaptiveSubdivisionOn);

	Nan::SetPrototypeMethod(tpl, "DiscreteTimeStepsOff", DiscreteTimeStepsOff);
	Nan::SetPrototypeMethod(tpl, "discreteTimeStepsOff", DiscreteTimeStepsOff);

	Nan::SetPrototypeMethod(tpl, "DiscreteTimeStepsOn", DiscreteTimeStepsOn);
	Nan::SetPrototypeMethod(tpl, "discreteTimeStepsOn", DiscreteTimeStepsOn);

	Nan::SetPrototypeMethod(tpl, "GenerateRectilinearGridsOff", GenerateRectilinearGridsOff);
	Nan::SetPrototypeMethod(tpl, "generateRectilinearGridsOff", GenerateRectilinearGridsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateRectilinearGridsOn", GenerateRectilinearGridsOn);
	Nan::SetPrototypeMethod(tpl, "generateRectilinearGridsOn", GenerateRectilinearGridsOn);

	Nan::SetPrototypeMethod(tpl, "GetAdaptiveSubdivision", GetAdaptiveSubdivision);
	Nan::SetPrototypeMethod(tpl, "getAdaptiveSubdivision", GetAdaptiveSubdivision);

	Nan::SetPrototypeMethod(tpl, "GetAsymetric", GetAsymetric);
	Nan::SetPrototypeMethod(tpl, "getAsymetric", GetAsymetric);

	Nan::SetPrototypeMethod(tpl, "GetDimensions", GetDimensions);
	Nan::SetPrototypeMethod(tpl, "getDimensions", GetDimensions);

	Nan::SetPrototypeMethod(tpl, "GetDiscreteTimeSteps", GetDiscreteTimeSteps);
	Nan::SetPrototypeMethod(tpl, "getDiscreteTimeSteps", GetDiscreteTimeSteps);

	Nan::SetPrototypeMethod(tpl, "GetFractalValue", GetFractalValue);
	Nan::SetPrototypeMethod(tpl, "getFractalValue", GetFractalValue);

	Nan::SetPrototypeMethod(tpl, "GetGenerateRectilinearGrids", GetGenerateRectilinearGrids);
	Nan::SetPrototypeMethod(tpl, "getGenerateRectilinearGrids", GetGenerateRectilinearGrids);

	Nan::SetPrototypeMethod(tpl, "GetGhostLevels", GetGhostLevels);
	Nan::SetPrototypeMethod(tpl, "getGhostLevels", GetGhostLevels);

	Nan::SetPrototypeMethod(tpl, "GetMaximumLevel", GetMaximumLevel);
	Nan::SetPrototypeMethod(tpl, "getMaximumLevel", GetMaximumLevel);

	Nan::SetPrototypeMethod(tpl, "GetTwoDimensional", GetTwoDimensional);
	Nan::SetPrototypeMethod(tpl, "getTwoDimensional", GetTwoDimensional);

	Nan::SetPrototypeMethod(tpl, "GhostLevelsOff", GhostLevelsOff);
	Nan::SetPrototypeMethod(tpl, "ghostLevelsOff", GhostLevelsOff);

	Nan::SetPrototypeMethod(tpl, "GhostLevelsOn", GhostLevelsOn);
	Nan::SetPrototypeMethod(tpl, "ghostLevelsOn", GhostLevelsOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAdaptiveSubdivision", SetAdaptiveSubdivision);
	Nan::SetPrototypeMethod(tpl, "setAdaptiveSubdivision", SetAdaptiveSubdivision);

	Nan::SetPrototypeMethod(tpl, "SetAsymetric", SetAsymetric);
	Nan::SetPrototypeMethod(tpl, "setAsymetric", SetAsymetric);

	Nan::SetPrototypeMethod(tpl, "SetDimensions", SetDimensions);
	Nan::SetPrototypeMethod(tpl, "setDimensions", SetDimensions);

	Nan::SetPrototypeMethod(tpl, "SetDiscreteTimeSteps", SetDiscreteTimeSteps);
	Nan::SetPrototypeMethod(tpl, "setDiscreteTimeSteps", SetDiscreteTimeSteps);

	Nan::SetPrototypeMethod(tpl, "SetFractalValue", SetFractalValue);
	Nan::SetPrototypeMethod(tpl, "setFractalValue", SetFractalValue);

	Nan::SetPrototypeMethod(tpl, "SetGenerateRectilinearGrids", SetGenerateRectilinearGrids);
	Nan::SetPrototypeMethod(tpl, "setGenerateRectilinearGrids", SetGenerateRectilinearGrids);

	Nan::SetPrototypeMethod(tpl, "SetGhostLevels", SetGhostLevels);
	Nan::SetPrototypeMethod(tpl, "setGhostLevels", SetGhostLevels);

	Nan::SetPrototypeMethod(tpl, "SetMaximumLevel", SetMaximumLevel);
	Nan::SetPrototypeMethod(tpl, "setMaximumLevel", SetMaximumLevel);

	Nan::SetPrototypeMethod(tpl, "SetTwoDimensional", SetTwoDimensional);
	Nan::SetPrototypeMethod(tpl, "setTwoDimensional", SetTwoDimensional);

	Nan::SetPrototypeMethod(tpl, "TwoDimensionalOff", TwoDimensionalOff);
	Nan::SetPrototypeMethod(tpl, "twoDimensionalOff", TwoDimensionalOff);

	Nan::SetPrototypeMethod(tpl, "TwoDimensionalOn", TwoDimensionalOn);
	Nan::SetPrototypeMethod(tpl, "twoDimensionalOn", TwoDimensionalOn);

#ifdef VTK_NODE_PLUS_VTKTEMPORALFRACTALWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTEMPORALFRACTALWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTemporalFractalWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTemporalFractal> native = vtkSmartPointer<vtkTemporalFractal>::New();
		VtkTemporalFractalWrap* obj = new VtkTemporalFractalWrap(native);
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

void VtkTemporalFractalWrap::AdaptiveSubdivisionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AdaptiveSubdivisionOff();
}

void VtkTemporalFractalWrap::AdaptiveSubdivisionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AdaptiveSubdivisionOn();
}

void VtkTemporalFractalWrap::DiscreteTimeStepsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DiscreteTimeStepsOff();
}

void VtkTemporalFractalWrap::DiscreteTimeStepsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DiscreteTimeStepsOn();
}

void VtkTemporalFractalWrap::GenerateRectilinearGridsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateRectilinearGridsOff();
}

void VtkTemporalFractalWrap::GenerateRectilinearGridsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateRectilinearGridsOn();
}

void VtkTemporalFractalWrap::GetAdaptiveSubdivision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAdaptiveSubdivision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalFractalWrap::GetAsymetric(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAsymetric();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalFractalWrap::GetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalFractalWrap::GetDiscreteTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDiscreteTimeSteps();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalFractalWrap::GetFractalValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFractalValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalFractalWrap::GetGenerateRectilinearGrids(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateRectilinearGrids();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalFractalWrap::GetGhostLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGhostLevels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalFractalWrap::GetMaximumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalFractalWrap::GetTwoDimensional(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTwoDimensional();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTemporalFractalWrap::GhostLevelsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GhostLevelsOff();
}

void VtkTemporalFractalWrap::GhostLevelsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GhostLevelsOn();
}

void VtkTemporalFractalWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	vtkTemporalFractal * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTemporalFractalWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTemporalFractalWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTemporalFractalWrap *w = new VtkTemporalFractalWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTemporalFractalWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkTemporalFractal * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkTemporalFractalWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTemporalFractalWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTemporalFractalWrap *w = new VtkTemporalFractalWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalFractalWrap::SetAdaptiveSubdivision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAdaptiveSubdivision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalFractalWrap::SetAsymetric(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAsymetric(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalFractalWrap::SetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDimensions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalFractalWrap::SetDiscreteTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDiscreteTimeSteps(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalFractalWrap::SetFractalValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFractalValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalFractalWrap::SetGenerateRectilinearGrids(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateRectilinearGrids(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalFractalWrap::SetGhostLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGhostLevels(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalFractalWrap::SetMaximumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalFractalWrap::SetTwoDimensional(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTwoDimensional(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTemporalFractalWrap::TwoDimensionalOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TwoDimensionalOff();
}

void VtkTemporalFractalWrap::TwoDimensionalOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTemporalFractalWrap *wrapper = ObjectWrap::Unwrap<VtkTemporalFractalWrap>(info.Holder());
	vtkTemporalFractal *native = (vtkTemporalFractal *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TwoDimensionalOn();
}
