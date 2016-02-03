/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkQuaternionInterpolatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkQuaternionInterpolatorWrap::ptpl;

VtkQuaternionInterpolatorWrap::VtkQuaternionInterpolatorWrap()
{ }

VtkQuaternionInterpolatorWrap::VtkQuaternionInterpolatorWrap(vtkSmartPointer<vtkQuaternionInterpolator> _native)
{ native = _native; }

VtkQuaternionInterpolatorWrap::~VtkQuaternionInterpolatorWrap()
{ }

void VtkQuaternionInterpolatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkQuaternionInterpolator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("QuaternionInterpolator").ToLocalChecked(), ConstructorGetter);
}

void VtkQuaternionInterpolatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkQuaternionInterpolatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkQuaternionInterpolatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddQuaternion", AddQuaternion);
	Nan::SetPrototypeMethod(tpl, "addQuaternion", AddQuaternion);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationType", GetInterpolationType);
	Nan::SetPrototypeMethod(tpl, "getInterpolationType", GetInterpolationType);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationTypeMaxValue", GetInterpolationTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getInterpolationTypeMaxValue", GetInterpolationTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationTypeMinValue", GetInterpolationTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getInterpolationTypeMinValue", GetInterpolationTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumT", GetMaximumT);
	Nan::SetPrototypeMethod(tpl, "getMaximumT", GetMaximumT);

	Nan::SetPrototypeMethod(tpl, "GetMinimumT", GetMinimumT);
	Nan::SetPrototypeMethod(tpl, "getMinimumT", GetMinimumT);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfQuaternions", GetNumberOfQuaternions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfQuaternions", GetNumberOfQuaternions);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "InterpolateQuaternion", InterpolateQuaternion);
	Nan::SetPrototypeMethod(tpl, "interpolateQuaternion", InterpolateQuaternion);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveQuaternion", RemoveQuaternion);
	Nan::SetPrototypeMethod(tpl, "removeQuaternion", RemoveQuaternion);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationType", SetInterpolationType);
	Nan::SetPrototypeMethod(tpl, "setInterpolationType", SetInterpolationType);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationTypeToLinear", SetInterpolationTypeToLinear);
	Nan::SetPrototypeMethod(tpl, "setInterpolationTypeToLinear", SetInterpolationTypeToLinear);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationTypeToSpline", SetInterpolationTypeToSpline);
	Nan::SetPrototypeMethod(tpl, "setInterpolationTypeToSpline", SetInterpolationTypeToSpline);

	ptpl.Reset( tpl );
}

void VtkQuaternionInterpolatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkQuaternionInterpolator> native = vtkSmartPointer<vtkQuaternionInterpolator>::New();
		VtkQuaternionInterpolatorWrap* obj = new VtkQuaternionInterpolatorWrap(native);
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

void VtkQuaternionInterpolatorWrap::AddQuaternion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 4 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddQuaternion(
				info[0]->NumberValue(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[4];
			if( a1->Length() < 4 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 4; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddQuaternion(
				info[0]->NumberValue(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuaternionInterpolatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkQuaternionInterpolatorWrap::GetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuaternionInterpolatorWrap::GetInterpolationTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuaternionInterpolatorWrap::GetInterpolationTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuaternionInterpolatorWrap::GetMaximumT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumT();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuaternionInterpolatorWrap::GetMinimumT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinimumT();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuaternionInterpolatorWrap::GetNumberOfQuaternions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfQuaternions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuaternionInterpolatorWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkQuaternionInterpolatorWrap::InterpolateQuaternion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 4 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolateQuaternion(
				info[0]->NumberValue(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[4];
			if( a1->Length() < 4 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 4; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InterpolateQuaternion(
				info[0]->NumberValue(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuaternionInterpolatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
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

void VtkQuaternionInterpolatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	vtkQuaternionInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkQuaternionInterpolatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkQuaternionInterpolatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkQuaternionInterpolatorWrap *w = new VtkQuaternionInterpolatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkQuaternionInterpolatorWrap::RemoveQuaternion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveQuaternion(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuaternionInterpolatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkQuaternionInterpolator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkQuaternionInterpolatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkQuaternionInterpolatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkQuaternionInterpolatorWrap *w = new VtkQuaternionInterpolatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuaternionInterpolatorWrap::SetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolationType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuaternionInterpolatorWrap::SetInterpolationTypeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationTypeToLinear();
}

void VtkQuaternionInterpolatorWrap::SetInterpolationTypeToSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuaternionInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkQuaternionInterpolatorWrap>(info.Holder());
	vtkQuaternionInterpolator *native = (vtkQuaternionInterpolator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationTypeToSpline();
}

