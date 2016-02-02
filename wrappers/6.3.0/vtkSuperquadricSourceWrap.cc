/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkSuperquadricSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSuperquadricSourceWrap::ptpl;

VtkSuperquadricSourceWrap::VtkSuperquadricSourceWrap()
{ }

VtkSuperquadricSourceWrap::VtkSuperquadricSourceWrap(vtkSmartPointer<vtkSuperquadricSource> _native)
{ native = _native; }

VtkSuperquadricSourceWrap::~VtkSuperquadricSourceWrap()
{ }

void VtkSuperquadricSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSuperquadricSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SuperquadricSource").ToLocalChecked(), ConstructorGetter);
}

void VtkSuperquadricSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSuperquadricSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSuperquadricSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAxisOfSymmetry", GetAxisOfSymmetry);
	Nan::SetPrototypeMethod(tpl, "getAxisOfSymmetry", GetAxisOfSymmetry);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetPhiResolution", GetPhiResolution);
	Nan::SetPrototypeMethod(tpl, "getPhiResolution", GetPhiResolution);

	Nan::SetPrototypeMethod(tpl, "GetPhiRoundness", GetPhiRoundness);
	Nan::SetPrototypeMethod(tpl, "getPhiRoundness", GetPhiRoundness);

	Nan::SetPrototypeMethod(tpl, "GetSize", GetSize);
	Nan::SetPrototypeMethod(tpl, "getSize", GetSize);

	Nan::SetPrototypeMethod(tpl, "GetThetaResolution", GetThetaResolution);
	Nan::SetPrototypeMethod(tpl, "getThetaResolution", GetThetaResolution);

	Nan::SetPrototypeMethod(tpl, "GetThetaRoundness", GetThetaRoundness);
	Nan::SetPrototypeMethod(tpl, "getThetaRoundness", GetThetaRoundness);

	Nan::SetPrototypeMethod(tpl, "GetThickness", GetThickness);
	Nan::SetPrototypeMethod(tpl, "getThickness", GetThickness);

	Nan::SetPrototypeMethod(tpl, "GetThicknessMaxValue", GetThicknessMaxValue);
	Nan::SetPrototypeMethod(tpl, "getThicknessMaxValue", GetThicknessMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetThicknessMinValue", GetThicknessMinValue);
	Nan::SetPrototypeMethod(tpl, "getThicknessMinValue", GetThicknessMinValue);

	Nan::SetPrototypeMethod(tpl, "GetToroidal", GetToroidal);
	Nan::SetPrototypeMethod(tpl, "getToroidal", GetToroidal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAxisOfSymmetry", SetAxisOfSymmetry);
	Nan::SetPrototypeMethod(tpl, "setAxisOfSymmetry", SetAxisOfSymmetry);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetPhiResolution", SetPhiResolution);
	Nan::SetPrototypeMethod(tpl, "setPhiResolution", SetPhiResolution);

	Nan::SetPrototypeMethod(tpl, "SetPhiRoundness", SetPhiRoundness);
	Nan::SetPrototypeMethod(tpl, "setPhiRoundness", SetPhiRoundness);

	Nan::SetPrototypeMethod(tpl, "SetScale", SetScale);
	Nan::SetPrototypeMethod(tpl, "setScale", SetScale);

	Nan::SetPrototypeMethod(tpl, "SetSize", SetSize);
	Nan::SetPrototypeMethod(tpl, "setSize", SetSize);

	Nan::SetPrototypeMethod(tpl, "SetThetaResolution", SetThetaResolution);
	Nan::SetPrototypeMethod(tpl, "setThetaResolution", SetThetaResolution);

	Nan::SetPrototypeMethod(tpl, "SetThetaRoundness", SetThetaRoundness);
	Nan::SetPrototypeMethod(tpl, "setThetaRoundness", SetThetaRoundness);

	Nan::SetPrototypeMethod(tpl, "SetThickness", SetThickness);
	Nan::SetPrototypeMethod(tpl, "setThickness", SetThickness);

	Nan::SetPrototypeMethod(tpl, "SetToroidal", SetToroidal);
	Nan::SetPrototypeMethod(tpl, "setToroidal", SetToroidal);

	Nan::SetPrototypeMethod(tpl, "SetXAxisOfSymmetry", SetXAxisOfSymmetry);
	Nan::SetPrototypeMethod(tpl, "setXAxisOfSymmetry", SetXAxisOfSymmetry);

	Nan::SetPrototypeMethod(tpl, "SetYAxisOfSymmetry", SetYAxisOfSymmetry);
	Nan::SetPrototypeMethod(tpl, "setYAxisOfSymmetry", SetYAxisOfSymmetry);

	Nan::SetPrototypeMethod(tpl, "SetZAxisOfSymmetry", SetZAxisOfSymmetry);
	Nan::SetPrototypeMethod(tpl, "setZAxisOfSymmetry", SetZAxisOfSymmetry);

	Nan::SetPrototypeMethod(tpl, "ToroidalOff", ToroidalOff);
	Nan::SetPrototypeMethod(tpl, "toroidalOff", ToroidalOff);

	Nan::SetPrototypeMethod(tpl, "ToroidalOn", ToroidalOn);
	Nan::SetPrototypeMethod(tpl, "toroidalOn", ToroidalOn);

	ptpl.Reset( tpl );
}

void VtkSuperquadricSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSuperquadricSource> native = vtkSmartPointer<vtkSuperquadricSource>::New();
		VtkSuperquadricSourceWrap* obj = new VtkSuperquadricSourceWrap(native);
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

void VtkSuperquadricSourceWrap::GetAxisOfSymmetry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAxisOfSymmetry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSuperquadricSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricSourceWrap::GetPhiResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPhiResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricSourceWrap::GetPhiRoundness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPhiRoundness();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricSourceWrap::GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricSourceWrap::GetThetaResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThetaResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricSourceWrap::GetThetaRoundness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThetaRoundness();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricSourceWrap::GetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThickness();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricSourceWrap::GetThicknessMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThicknessMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricSourceWrap::GetThicknessMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThicknessMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricSourceWrap::GetToroidal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToroidal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSuperquadricSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
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

void VtkSuperquadricSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	vtkSuperquadricSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSuperquadricSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSuperquadricSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSuperquadricSourceWrap *w = new VtkSuperquadricSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSuperquadricSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSuperquadricSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSuperquadricSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSuperquadricSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSuperquadricSourceWrap *w = new VtkSuperquadricSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricSourceWrap::SetAxisOfSymmetry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAxisOfSymmetry(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricSourceWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
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
		native->SetCenter(
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
		native->SetCenter(
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
				native->SetCenter(
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

void VtkSuperquadricSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
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

void VtkSuperquadricSourceWrap::SetPhiResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPhiResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricSourceWrap::SetPhiRoundness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPhiRoundness(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricSourceWrap::SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
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
		native->SetScale(
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
		native->SetScale(
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
				native->SetScale(
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

void VtkSuperquadricSourceWrap::SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSize(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricSourceWrap::SetThetaResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThetaResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricSourceWrap::SetThetaRoundness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThetaRoundness(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricSourceWrap::SetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThickness(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricSourceWrap::SetToroidal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetToroidal(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSuperquadricSourceWrap::SetXAxisOfSymmetry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetXAxisOfSymmetry();
}

void VtkSuperquadricSourceWrap::SetYAxisOfSymmetry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetYAxisOfSymmetry();
}

void VtkSuperquadricSourceWrap::SetZAxisOfSymmetry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetZAxisOfSymmetry();
}

void VtkSuperquadricSourceWrap::ToroidalOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ToroidalOff();
}

void VtkSuperquadricSourceWrap::ToroidalOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSuperquadricSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSuperquadricSourceWrap>(info.Holder());
	vtkSuperquadricSource *native = (vtkSuperquadricSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ToroidalOn();
}

