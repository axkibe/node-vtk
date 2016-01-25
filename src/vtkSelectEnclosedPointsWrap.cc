/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkSelectEnclosedPointsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkInformationVectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSelectEnclosedPointsWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkSelectEnclosedPointsWrap::ptpl;

VtkSelectEnclosedPointsWrap::VtkSelectEnclosedPointsWrap()
{ }

VtkSelectEnclosedPointsWrap::VtkSelectEnclosedPointsWrap(vtkSmartPointer<vtkSelectEnclosedPoints> _native)
{ native = _native; }

VtkSelectEnclosedPointsWrap::~VtkSelectEnclosedPointsWrap()
{ }

void VtkSelectEnclosedPointsWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkSelectEnclosedPointsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkSelectEnclosedPoints").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("SelectEnclosedPoints").ToLocalChecked(),tpl->GetFunction());
}

void VtkSelectEnclosedPointsWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CheckSurfaceOff", CheckSurfaceOff);
	Nan::SetPrototypeMethod(tpl, "checkSurfaceOff", CheckSurfaceOff);

	Nan::SetPrototypeMethod(tpl, "CheckSurfaceOn", CheckSurfaceOn);
	Nan::SetPrototypeMethod(tpl, "checkSurfaceOn", CheckSurfaceOn);

	Nan::SetPrototypeMethod(tpl, "Complete", Complete);
	Nan::SetPrototypeMethod(tpl, "complete", Complete);

	Nan::SetPrototypeMethod(tpl, "GetCheckSurface", GetCheckSurface);
	Nan::SetPrototypeMethod(tpl, "getCheckSurface", GetCheckSurface);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInsideOut", GetInsideOut);
	Nan::SetPrototypeMethod(tpl, "getInsideOut", GetInsideOut);

	Nan::SetPrototypeMethod(tpl, "GetSurface", GetSurface);
	Nan::SetPrototypeMethod(tpl, "getSurface", GetSurface);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "InsideOutOff", InsideOutOff);
	Nan::SetPrototypeMethod(tpl, "insideOutOff", InsideOutOff);

	Nan::SetPrototypeMethod(tpl, "InsideOutOn", InsideOutOn);
	Nan::SetPrototypeMethod(tpl, "insideOutOn", InsideOutOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsInsideSurface", IsInsideSurface);
	Nan::SetPrototypeMethod(tpl, "isInsideSurface", IsInsideSurface);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCheckSurface", SetCheckSurface);
	Nan::SetPrototypeMethod(tpl, "setCheckSurface", SetCheckSurface);

	Nan::SetPrototypeMethod(tpl, "SetInsideOut", SetInsideOut);
	Nan::SetPrototypeMethod(tpl, "setInsideOut", SetInsideOut);

	Nan::SetPrototypeMethod(tpl, "SetSurfaceConnection", SetSurfaceConnection);
	Nan::SetPrototypeMethod(tpl, "setSurfaceConnection", SetSurfaceConnection);

	Nan::SetPrototypeMethod(tpl, "SetSurfaceData", SetSurfaceData);
	Nan::SetPrototypeMethod(tpl, "setSurfaceData", SetSurfaceData);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

}

void VtkSelectEnclosedPointsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSelectEnclosedPoints> native = vtkSmartPointer<vtkSelectEnclosedPoints>::New();
		VtkSelectEnclosedPointsWrap* obj = new VtkSelectEnclosedPointsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSelectEnclosedPointsWrap::CheckSurfaceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CheckSurfaceOff();
}

void VtkSelectEnclosedPointsWrap::CheckSurfaceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CheckSurfaceOn();
}

void VtkSelectEnclosedPointsWrap::Complete(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Complete();
}

void VtkSelectEnclosedPointsWrap::GetCheckSurface(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCheckSurface();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectEnclosedPointsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSelectEnclosedPointsWrap::GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInsideOut();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectEnclosedPointsWrap::GetSurface(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		vtkPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetSurface(
			(vtkInformationVector *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataWrap *w = new VtkPolyDataWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSurface();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectEnclosedPointsWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectEnclosedPointsWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectEnclosedPointsWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectEnclosedPointsWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Initialize(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectEnclosedPointsWrap::InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOff();
}

void VtkSelectEnclosedPointsWrap::InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOn();
}

void VtkSelectEnclosedPointsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkSelectEnclosedPointsWrap::IsInsideSurface(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->IsInsideSurface(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectEnclosedPointsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	vtkSelectEnclosedPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSelectEnclosedPointsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSelectEnclosedPointsWrap *w = new VtkSelectEnclosedPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectEnclosedPointsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSelectEnclosedPoints * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkSelectEnclosedPointsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSelectEnclosedPointsWrap *w = new VtkSelectEnclosedPointsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectEnclosedPointsWrap::SetCheckSurface(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCheckSurface(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectEnclosedPointsWrap::SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInsideOut(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectEnclosedPointsWrap::SetSurfaceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSurfaceConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectEnclosedPointsWrap::SetSurfaceData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSurfaceData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectEnclosedPointsWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectEnclosedPointsWrap *wrapper = ObjectWrap::Unwrap<VtkSelectEnclosedPointsWrap>(info.Holder());
	vtkSelectEnclosedPoints *native = (vtkSelectEnclosedPoints *)wrapper->native.GetPointer();
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

