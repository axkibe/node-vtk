/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkParametricFunctionWrap.h"
#include "vtkParametricSuperToroidWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkParametricSuperToroidWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkParametricSuperToroidWrap::ptpl;

VtkParametricSuperToroidWrap::VtkParametricSuperToroidWrap()
{ }

VtkParametricSuperToroidWrap::VtkParametricSuperToroidWrap(vtkSmartPointer<vtkParametricSuperToroid> _native)
{ native = _native; }

VtkParametricSuperToroidWrap::~VtkParametricSuperToroidWrap()
{ }

void VtkParametricSuperToroidWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkParametricSuperToroid").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ParametricSuperToroid").ToLocalChecked(), ConstructorGetter);
}

void VtkParametricSuperToroidWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkParametricSuperToroidWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkParametricFunctionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkParametricFunctionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkParametricSuperToroidWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCrossSectionRadius", GetCrossSectionRadius);
	Nan::SetPrototypeMethod(tpl, "getCrossSectionRadius", GetCrossSectionRadius);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "GetN1", GetN1);
	Nan::SetPrototypeMethod(tpl, "getN1", GetN1);

	Nan::SetPrototypeMethod(tpl, "GetN2", GetN2);
	Nan::SetPrototypeMethod(tpl, "getN2", GetN2);

	Nan::SetPrototypeMethod(tpl, "GetRingRadius", GetRingRadius);
	Nan::SetPrototypeMethod(tpl, "getRingRadius", GetRingRadius);

	Nan::SetPrototypeMethod(tpl, "GetXRadius", GetXRadius);
	Nan::SetPrototypeMethod(tpl, "getXRadius", GetXRadius);

	Nan::SetPrototypeMethod(tpl, "GetYRadius", GetYRadius);
	Nan::SetPrototypeMethod(tpl, "getYRadius", GetYRadius);

	Nan::SetPrototypeMethod(tpl, "GetZRadius", GetZRadius);
	Nan::SetPrototypeMethod(tpl, "getZRadius", GetZRadius);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCrossSectionRadius", SetCrossSectionRadius);
	Nan::SetPrototypeMethod(tpl, "setCrossSectionRadius", SetCrossSectionRadius);

	Nan::SetPrototypeMethod(tpl, "SetN1", SetN1);
	Nan::SetPrototypeMethod(tpl, "setN1", SetN1);

	Nan::SetPrototypeMethod(tpl, "SetN2", SetN2);
	Nan::SetPrototypeMethod(tpl, "setN2", SetN2);

	Nan::SetPrototypeMethod(tpl, "SetRingRadius", SetRingRadius);
	Nan::SetPrototypeMethod(tpl, "setRingRadius", SetRingRadius);

	Nan::SetPrototypeMethod(tpl, "SetXRadius", SetXRadius);
	Nan::SetPrototypeMethod(tpl, "setXRadius", SetXRadius);

	Nan::SetPrototypeMethod(tpl, "SetYRadius", SetYRadius);
	Nan::SetPrototypeMethod(tpl, "setYRadius", SetYRadius);

	Nan::SetPrototypeMethod(tpl, "SetZRadius", SetZRadius);
	Nan::SetPrototypeMethod(tpl, "setZRadius", SetZRadius);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkParametricSuperToroidWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkParametricSuperToroid> native = vtkSmartPointer<vtkParametricSuperToroid>::New();
		VtkParametricSuperToroidWrap* obj = new VtkParametricSuperToroidWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkParametricSuperToroidWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkParametricSuperToroidWrap::GetCrossSectionRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCrossSectionRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSuperToroidWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSuperToroidWrap::GetN1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetN1();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSuperToroidWrap::GetN2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetN2();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSuperToroidWrap::GetRingRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRingRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSuperToroidWrap::GetXRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSuperToroidWrap::GetYRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSuperToroidWrap::GetZRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricSuperToroidWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
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

void VtkParametricSuperToroidWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	vtkParametricSuperToroid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkParametricSuperToroidWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkParametricSuperToroidWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParametricSuperToroidWrap *w = new VtkParametricSuperToroidWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParametricSuperToroidWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkParametricSuperToroid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkParametricSuperToroidWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkParametricSuperToroidWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParametricSuperToroidWrap *w = new VtkParametricSuperToroidWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSuperToroidWrap::SetCrossSectionRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCrossSectionRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSuperToroidWrap::SetN1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetN1(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSuperToroidWrap::SetN2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetN2(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSuperToroidWrap::SetRingRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRingRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSuperToroidWrap::SetXRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSuperToroidWrap::SetYRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricSuperToroidWrap::SetZRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricSuperToroidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricSuperToroidWrap>(info.Holder());
	vtkParametricSuperToroid *native = (vtkParametricSuperToroid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

