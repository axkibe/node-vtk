/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkDistancePolyDataFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDistancePolyDataFilterWrap::ptpl;

VtkDistancePolyDataFilterWrap::VtkDistancePolyDataFilterWrap()
{ }

VtkDistancePolyDataFilterWrap::VtkDistancePolyDataFilterWrap(vtkSmartPointer<vtkDistancePolyDataFilter> _native)
{ native = _native; }

VtkDistancePolyDataFilterWrap::~VtkDistancePolyDataFilterWrap()
{ }

void VtkDistancePolyDataFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDistancePolyDataFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DistancePolyDataFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkDistancePolyDataFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDistancePolyDataFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDistancePolyDataFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeSecondDistanceOff", ComputeSecondDistanceOff);
	Nan::SetPrototypeMethod(tpl, "computeSecondDistanceOff", ComputeSecondDistanceOff);

	Nan::SetPrototypeMethod(tpl, "ComputeSecondDistanceOn", ComputeSecondDistanceOn);
	Nan::SetPrototypeMethod(tpl, "computeSecondDistanceOn", ComputeSecondDistanceOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComputeSecondDistance", GetComputeSecondDistance);
	Nan::SetPrototypeMethod(tpl, "getComputeSecondDistance", GetComputeSecondDistance);

	Nan::SetPrototypeMethod(tpl, "GetNegateDistance", GetNegateDistance);
	Nan::SetPrototypeMethod(tpl, "getNegateDistance", GetNegateDistance);

	Nan::SetPrototypeMethod(tpl, "GetSecondDistanceOutput", GetSecondDistanceOutput);
	Nan::SetPrototypeMethod(tpl, "getSecondDistanceOutput", GetSecondDistanceOutput);

	Nan::SetPrototypeMethod(tpl, "GetSignedDistance", GetSignedDistance);
	Nan::SetPrototypeMethod(tpl, "getSignedDistance", GetSignedDistance);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NegateDistanceOff", NegateDistanceOff);
	Nan::SetPrototypeMethod(tpl, "negateDistanceOff", NegateDistanceOff);

	Nan::SetPrototypeMethod(tpl, "NegateDistanceOn", NegateDistanceOn);
	Nan::SetPrototypeMethod(tpl, "negateDistanceOn", NegateDistanceOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetComputeSecondDistance", SetComputeSecondDistance);
	Nan::SetPrototypeMethod(tpl, "setComputeSecondDistance", SetComputeSecondDistance);

	Nan::SetPrototypeMethod(tpl, "SetNegateDistance", SetNegateDistance);
	Nan::SetPrototypeMethod(tpl, "setNegateDistance", SetNegateDistance);

	Nan::SetPrototypeMethod(tpl, "SetSignedDistance", SetSignedDistance);
	Nan::SetPrototypeMethod(tpl, "setSignedDistance", SetSignedDistance);

	Nan::SetPrototypeMethod(tpl, "SignedDistanceOff", SignedDistanceOff);
	Nan::SetPrototypeMethod(tpl, "signedDistanceOff", SignedDistanceOff);

	Nan::SetPrototypeMethod(tpl, "SignedDistanceOn", SignedDistanceOn);
	Nan::SetPrototypeMethod(tpl, "signedDistanceOn", SignedDistanceOn);

	ptpl.Reset( tpl );
}

void VtkDistancePolyDataFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDistancePolyDataFilter> native = vtkSmartPointer<vtkDistancePolyDataFilter>::New();
		VtkDistancePolyDataFilterWrap* obj = new VtkDistancePolyDataFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDistancePolyDataFilterWrap::ComputeSecondDistanceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeSecondDistanceOff();
}

void VtkDistancePolyDataFilterWrap::ComputeSecondDistanceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeSecondDistanceOn();
}

void VtkDistancePolyDataFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDistancePolyDataFilterWrap::GetComputeSecondDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeSecondDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistancePolyDataFilterWrap::GetNegateDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNegateDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistancePolyDataFilterWrap::GetSecondDistanceOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSecondDistanceOutput();
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

void VtkDistancePolyDataFilterWrap::GetSignedDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSignedDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDistancePolyDataFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
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

void VtkDistancePolyDataFilterWrap::NegateDistanceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NegateDistanceOff();
}

void VtkDistancePolyDataFilterWrap::NegateDistanceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NegateDistanceOn();
}

void VtkDistancePolyDataFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	vtkDistancePolyDataFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDistancePolyDataFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDistancePolyDataFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDistancePolyDataFilterWrap *w = new VtkDistancePolyDataFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDistancePolyDataFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDistancePolyDataFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDistancePolyDataFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDistancePolyDataFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDistancePolyDataFilterWrap *w = new VtkDistancePolyDataFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistancePolyDataFilterWrap::SetComputeSecondDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeSecondDistance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistancePolyDataFilterWrap::SetNegateDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNegateDistance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistancePolyDataFilterWrap::SetSignedDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSignedDistance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDistancePolyDataFilterWrap::SignedDistanceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SignedDistanceOff();
}

void VtkDistancePolyDataFilterWrap::SignedDistanceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDistancePolyDataFilterWrap *wrapper = ObjectWrap::Unwrap<VtkDistancePolyDataFilterWrap>(info.Holder());
	vtkDistancePolyDataFilter *native = (vtkDistancePolyDataFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SignedDistanceOn();
}
