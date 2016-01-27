/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkRecursiveDividingCubesWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRecursiveDividingCubesWrap::ptpl;

VtkRecursiveDividingCubesWrap::VtkRecursiveDividingCubesWrap()
{ }

VtkRecursiveDividingCubesWrap::VtkRecursiveDividingCubesWrap(vtkSmartPointer<vtkRecursiveDividingCubes> _native)
{ native = _native; }

VtkRecursiveDividingCubesWrap::~VtkRecursiveDividingCubesWrap()
{ }

void VtkRecursiveDividingCubesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRecursiveDividingCubes").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RecursiveDividingCubes").ToLocalChecked(), ConstructorGetter);
}

void VtkRecursiveDividingCubesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRecursiveDividingCubesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRecursiveDividingCubesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDistance", GetDistance);
	Nan::SetPrototypeMethod(tpl, "getDistance", GetDistance);

	Nan::SetPrototypeMethod(tpl, "GetDistanceMaxValue", GetDistanceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDistanceMaxValue", GetDistanceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDistanceMinValue", GetDistanceMinValue);
	Nan::SetPrototypeMethod(tpl, "getDistanceMinValue", GetDistanceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetIncrement", GetIncrement);
	Nan::SetPrototypeMethod(tpl, "getIncrement", GetIncrement);

	Nan::SetPrototypeMethod(tpl, "GetIncrementMaxValue", GetIncrementMaxValue);
	Nan::SetPrototypeMethod(tpl, "getIncrementMaxValue", GetIncrementMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetIncrementMinValue", GetIncrementMinValue);
	Nan::SetPrototypeMethod(tpl, "getIncrementMinValue", GetIncrementMinValue);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDistance", SetDistance);
	Nan::SetPrototypeMethod(tpl, "setDistance", SetDistance);

	Nan::SetPrototypeMethod(tpl, "SetIncrement", SetIncrement);
	Nan::SetPrototypeMethod(tpl, "setIncrement", SetIncrement);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	ptpl.Reset( tpl );
}

void VtkRecursiveDividingCubesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRecursiveDividingCubes> native = vtkSmartPointer<vtkRecursiveDividingCubes>::New();
		VtkRecursiveDividingCubesWrap* obj = new VtkRecursiveDividingCubesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRecursiveDividingCubesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRecursiveDividingCubesWrap::GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRecursiveDividingCubesWrap::GetDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRecursiveDividingCubesWrap::GetDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRecursiveDividingCubesWrap::GetIncrement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIncrement();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRecursiveDividingCubesWrap::GetIncrementMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIncrementMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRecursiveDividingCubesWrap::GetIncrementMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIncrementMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRecursiveDividingCubesWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRecursiveDividingCubesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
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

void VtkRecursiveDividingCubesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
	vtkRecursiveDividingCubes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRecursiveDividingCubesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRecursiveDividingCubesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRecursiveDividingCubesWrap *w = new VtkRecursiveDividingCubesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRecursiveDividingCubesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRecursiveDividingCubes * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRecursiveDividingCubesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRecursiveDividingCubesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRecursiveDividingCubesWrap *w = new VtkRecursiveDividingCubesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRecursiveDividingCubesWrap::SetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
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

void VtkRecursiveDividingCubesWrap::SetIncrement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIncrement(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRecursiveDividingCubesWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRecursiveDividingCubesWrap *wrapper = ObjectWrap::Unwrap<VtkRecursiveDividingCubesWrap>(info.Holder());
	vtkRecursiveDividingCubes *native = (vtkRecursiveDividingCubes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

