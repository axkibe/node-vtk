/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkSplineWrap.h"
#include "vtkKochanekSplineWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkKochanekSplineWrap::ptpl;

VtkKochanekSplineWrap::VtkKochanekSplineWrap()
{ }

VtkKochanekSplineWrap::VtkKochanekSplineWrap(vtkSmartPointer<vtkKochanekSpline> _native)
{ native = _native; }

VtkKochanekSplineWrap::~VtkKochanekSplineWrap()
{ }

void VtkKochanekSplineWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkKochanekSpline").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("KochanekSpline").ToLocalChecked(), ConstructorGetter);
}

void VtkKochanekSplineWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkKochanekSplineWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkSplineWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkSplineWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkKochanekSplineWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Compute", Compute);
	Nan::SetPrototypeMethod(tpl, "compute", Compute);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "Evaluate", Evaluate);
	Nan::SetPrototypeMethod(tpl, "evaluate", Evaluate);

	Nan::SetPrototypeMethod(tpl, "GetDefaultBias", GetDefaultBias);
	Nan::SetPrototypeMethod(tpl, "getDefaultBias", GetDefaultBias);

	Nan::SetPrototypeMethod(tpl, "GetDefaultContinuity", GetDefaultContinuity);
	Nan::SetPrototypeMethod(tpl, "getDefaultContinuity", GetDefaultContinuity);

	Nan::SetPrototypeMethod(tpl, "GetDefaultTension", GetDefaultTension);
	Nan::SetPrototypeMethod(tpl, "getDefaultTension", GetDefaultTension);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDefaultBias", SetDefaultBias);
	Nan::SetPrototypeMethod(tpl, "setDefaultBias", SetDefaultBias);

	Nan::SetPrototypeMethod(tpl, "SetDefaultContinuity", SetDefaultContinuity);
	Nan::SetPrototypeMethod(tpl, "setDefaultContinuity", SetDefaultContinuity);

	Nan::SetPrototypeMethod(tpl, "SetDefaultTension", SetDefaultTension);
	Nan::SetPrototypeMethod(tpl, "setDefaultTension", SetDefaultTension);

#ifdef VTK_NODE_PLUS_VTKKOCHANEKSPLINEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKKOCHANEKSPLINEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkKochanekSplineWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkKochanekSpline> native = vtkSmartPointer<vtkKochanekSpline>::New();
		VtkKochanekSplineWrap* obj = new VtkKochanekSplineWrap(native);
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

void VtkKochanekSplineWrap::Compute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKochanekSplineWrap *wrapper = ObjectWrap::Unwrap<VtkKochanekSplineWrap>(info.Holder());
	vtkKochanekSpline *native = (vtkKochanekSpline *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Compute();
}

void VtkKochanekSplineWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKochanekSplineWrap *wrapper = ObjectWrap::Unwrap<VtkKochanekSplineWrap>(info.Holder());
	vtkKochanekSpline *native = (vtkKochanekSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSplineWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSplineWrap *a0 = ObjectWrap::Unwrap<VtkSplineWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkSpline *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKochanekSplineWrap::Evaluate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKochanekSplineWrap *wrapper = ObjectWrap::Unwrap<VtkKochanekSplineWrap>(info.Holder());
	vtkKochanekSpline *native = (vtkKochanekSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Evaluate(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKochanekSplineWrap::GetDefaultBias(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKochanekSplineWrap *wrapper = ObjectWrap::Unwrap<VtkKochanekSplineWrap>(info.Holder());
	vtkKochanekSpline *native = (vtkKochanekSpline *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultBias();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkKochanekSplineWrap::GetDefaultContinuity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKochanekSplineWrap *wrapper = ObjectWrap::Unwrap<VtkKochanekSplineWrap>(info.Holder());
	vtkKochanekSpline *native = (vtkKochanekSpline *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultContinuity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkKochanekSplineWrap::GetDefaultTension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKochanekSplineWrap *wrapper = ObjectWrap::Unwrap<VtkKochanekSplineWrap>(info.Holder());
	vtkKochanekSpline *native = (vtkKochanekSpline *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultTension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkKochanekSplineWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKochanekSplineWrap *wrapper = ObjectWrap::Unwrap<VtkKochanekSplineWrap>(info.Holder());
	vtkKochanekSpline *native = (vtkKochanekSpline *)wrapper->native.GetPointer();
	vtkKochanekSpline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkKochanekSplineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkKochanekSplineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkKochanekSplineWrap *w = new VtkKochanekSplineWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkKochanekSplineWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKochanekSplineWrap *wrapper = ObjectWrap::Unwrap<VtkKochanekSplineWrap>(info.Holder());
	vtkKochanekSpline *native = (vtkKochanekSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkKochanekSpline * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkKochanekSplineWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkKochanekSplineWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkKochanekSplineWrap *w = new VtkKochanekSplineWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKochanekSplineWrap::SetDefaultBias(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKochanekSplineWrap *wrapper = ObjectWrap::Unwrap<VtkKochanekSplineWrap>(info.Holder());
	vtkKochanekSpline *native = (vtkKochanekSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDefaultBias(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKochanekSplineWrap::SetDefaultContinuity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKochanekSplineWrap *wrapper = ObjectWrap::Unwrap<VtkKochanekSplineWrap>(info.Holder());
	vtkKochanekSpline *native = (vtkKochanekSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDefaultContinuity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKochanekSplineWrap::SetDefaultTension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKochanekSplineWrap *wrapper = ObjectWrap::Unwrap<VtkKochanekSplineWrap>(info.Holder());
	vtkKochanekSpline *native = (vtkKochanekSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDefaultTension(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

