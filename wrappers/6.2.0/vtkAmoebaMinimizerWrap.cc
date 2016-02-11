/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkAmoebaMinimizerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAmoebaMinimizerWrap::ptpl;

VtkAmoebaMinimizerWrap::VtkAmoebaMinimizerWrap()
{ }

VtkAmoebaMinimizerWrap::VtkAmoebaMinimizerWrap(vtkSmartPointer<vtkAmoebaMinimizer> _native)
{ native = _native; }

VtkAmoebaMinimizerWrap::~VtkAmoebaMinimizerWrap()
{ }

void VtkAmoebaMinimizerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAmoebaMinimizer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AmoebaMinimizer").ToLocalChecked(), ConstructorGetter);
}

void VtkAmoebaMinimizerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAmoebaMinimizerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAmoebaMinimizerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EvaluateFunction", EvaluateFunction);
	Nan::SetPrototypeMethod(tpl, "evaluateFunction", EvaluateFunction);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetContractionRatio", GetContractionRatio);
	Nan::SetPrototypeMethod(tpl, "getContractionRatio", GetContractionRatio);

	Nan::SetPrototypeMethod(tpl, "GetContractionRatioMaxValue", GetContractionRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getContractionRatioMaxValue", GetContractionRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetContractionRatioMinValue", GetContractionRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getContractionRatioMinValue", GetContractionRatioMinValue);

	Nan::SetPrototypeMethod(tpl, "GetExpansionRatio", GetExpansionRatio);
	Nan::SetPrototypeMethod(tpl, "getExpansionRatio", GetExpansionRatio);

	Nan::SetPrototypeMethod(tpl, "GetExpansionRatioMaxValue", GetExpansionRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getExpansionRatioMaxValue", GetExpansionRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetExpansionRatioMinValue", GetExpansionRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getExpansionRatioMinValue", GetExpansionRatioMinValue);

	Nan::SetPrototypeMethod(tpl, "GetFunctionEvaluations", GetFunctionEvaluations);
	Nan::SetPrototypeMethod(tpl, "getFunctionEvaluations", GetFunctionEvaluations);

	Nan::SetPrototypeMethod(tpl, "GetFunctionValue", GetFunctionValue);
	Nan::SetPrototypeMethod(tpl, "getFunctionValue", GetFunctionValue);

	Nan::SetPrototypeMethod(tpl, "GetIterations", GetIterations);
	Nan::SetPrototypeMethod(tpl, "getIterations", GetIterations);

	Nan::SetPrototypeMethod(tpl, "GetMaxIterations", GetMaxIterations);
	Nan::SetPrototypeMethod(tpl, "getMaxIterations", GetMaxIterations);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfParameters", GetNumberOfParameters);
	Nan::SetPrototypeMethod(tpl, "getNumberOfParameters", GetNumberOfParameters);

	Nan::SetPrototypeMethod(tpl, "GetParameterName", GetParameterName);
	Nan::SetPrototypeMethod(tpl, "getParameterName", GetParameterName);

	Nan::SetPrototypeMethod(tpl, "GetParameterScale", GetParameterScale);
	Nan::SetPrototypeMethod(tpl, "getParameterScale", GetParameterScale);

	Nan::SetPrototypeMethod(tpl, "GetParameterTolerance", GetParameterTolerance);
	Nan::SetPrototypeMethod(tpl, "getParameterTolerance", GetParameterTolerance);

	Nan::SetPrototypeMethod(tpl, "GetParameterValue", GetParameterValue);
	Nan::SetPrototypeMethod(tpl, "getParameterValue", GetParameterValue);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Iterate", Iterate);
	Nan::SetPrototypeMethod(tpl, "iterate", Iterate);

	Nan::SetPrototypeMethod(tpl, "Minimize", Minimize);
	Nan::SetPrototypeMethod(tpl, "minimize", Minimize);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetContractionRatio", SetContractionRatio);
	Nan::SetPrototypeMethod(tpl, "setContractionRatio", SetContractionRatio);

	Nan::SetPrototypeMethod(tpl, "SetExpansionRatio", SetExpansionRatio);
	Nan::SetPrototypeMethod(tpl, "setExpansionRatio", SetExpansionRatio);

	Nan::SetPrototypeMethod(tpl, "SetFunctionValue", SetFunctionValue);
	Nan::SetPrototypeMethod(tpl, "setFunctionValue", SetFunctionValue);

	Nan::SetPrototypeMethod(tpl, "SetMaxIterations", SetMaxIterations);
	Nan::SetPrototypeMethod(tpl, "setMaxIterations", SetMaxIterations);

	Nan::SetPrototypeMethod(tpl, "SetParameterScale", SetParameterScale);
	Nan::SetPrototypeMethod(tpl, "setParameterScale", SetParameterScale);

	Nan::SetPrototypeMethod(tpl, "SetParameterTolerance", SetParameterTolerance);
	Nan::SetPrototypeMethod(tpl, "setParameterTolerance", SetParameterTolerance);

	Nan::SetPrototypeMethod(tpl, "SetParameterValue", SetParameterValue);
	Nan::SetPrototypeMethod(tpl, "setParameterValue", SetParameterValue);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	ptpl.Reset( tpl );
}

void VtkAmoebaMinimizerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAmoebaMinimizer> native = vtkSmartPointer<vtkAmoebaMinimizer>::New();
		VtkAmoebaMinimizerWrap* obj = new VtkAmoebaMinimizerWrap(native);
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

void VtkAmoebaMinimizerWrap::EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EvaluateFunction();
}

void VtkAmoebaMinimizerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAmoebaMinimizerWrap::GetContractionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContractionRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::GetContractionRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContractionRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::GetContractionRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContractionRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::GetExpansionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExpansionRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::GetExpansionRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExpansionRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::GetExpansionRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExpansionRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::GetFunctionEvaluations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFunctionEvaluations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::GetFunctionValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFunctionValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::GetIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIterations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::GetMaxIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxIterations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::GetNumberOfParameters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfParameters();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::GetParameterName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetParameterName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAmoebaMinimizerWrap::GetParameterScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetParameterScale(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetParameterScale(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAmoebaMinimizerWrap::GetParameterTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParameterTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::GetParameterValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetParameterValue(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetParameterValue(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAmoebaMinimizerWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkAmoebaMinimizerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
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

void VtkAmoebaMinimizerWrap::Iterate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Iterate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAmoebaMinimizerWrap::Minimize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Minimize();
}

void VtkAmoebaMinimizerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	vtkAmoebaMinimizer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAmoebaMinimizerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAmoebaMinimizerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAmoebaMinimizerWrap *w = new VtkAmoebaMinimizerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAmoebaMinimizerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAmoebaMinimizer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkAmoebaMinimizerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAmoebaMinimizerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAmoebaMinimizerWrap *w = new VtkAmoebaMinimizerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAmoebaMinimizerWrap::SetContractionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetContractionRatio(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAmoebaMinimizerWrap::SetExpansionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExpansionRatio(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAmoebaMinimizerWrap::SetFunctionValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFunctionValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAmoebaMinimizerWrap::SetMaxIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxIterations(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAmoebaMinimizerWrap::SetParameterScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetParameterScale(
				*a0,
				info[1]->NumberValue()
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetParameterScale(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAmoebaMinimizerWrap::SetParameterTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParameterTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAmoebaMinimizerWrap::SetParameterValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetParameterValue(
				*a0,
				info[1]->NumberValue()
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetParameterValue(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAmoebaMinimizerWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAmoebaMinimizerWrap *wrapper = ObjectWrap::Unwrap<VtkAmoebaMinimizerWrap>(info.Holder());
	vtkAmoebaMinimizer *native = (vtkAmoebaMinimizer *)wrapper->native.GetPointer();
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

