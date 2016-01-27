/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGenericSubdivisionErrorMetricWrap.h"
#include "vtkViewDependentErrorMetricWrap.h"
#include "vtkObjectWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkViewDependentErrorMetricWrap::ptpl;

VtkViewDependentErrorMetricWrap::VtkViewDependentErrorMetricWrap()
{ }

VtkViewDependentErrorMetricWrap::VtkViewDependentErrorMetricWrap(vtkSmartPointer<vtkViewDependentErrorMetric> _native)
{ native = _native; }

VtkViewDependentErrorMetricWrap::~VtkViewDependentErrorMetricWrap()
{ }

void VtkViewDependentErrorMetricWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkViewDependentErrorMetric").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ViewDependentErrorMetric").ToLocalChecked(), ConstructorGetter);
}

void VtkViewDependentErrorMetricWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkViewDependentErrorMetricWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGenericSubdivisionErrorMetricWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGenericSubdivisionErrorMetricWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkViewDependentErrorMetricWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPixelTolerance", GetPixelTolerance);
	Nan::SetPrototypeMethod(tpl, "getPixelTolerance", GetPixelTolerance);

	Nan::SetPrototypeMethod(tpl, "GetViewport", GetViewport);
	Nan::SetPrototypeMethod(tpl, "getViewport", GetViewport);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPixelTolerance", SetPixelTolerance);
	Nan::SetPrototypeMethod(tpl, "setPixelTolerance", SetPixelTolerance);

	Nan::SetPrototypeMethod(tpl, "SetViewport", SetViewport);
	Nan::SetPrototypeMethod(tpl, "setViewport", SetViewport);

	ptpl.Reset( tpl );
}

void VtkViewDependentErrorMetricWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkViewDependentErrorMetric> native = vtkSmartPointer<vtkViewDependentErrorMetric>::New();
		VtkViewDependentErrorMetricWrap* obj = new VtkViewDependentErrorMetricWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkViewDependentErrorMetricWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewDependentErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkViewDependentErrorMetricWrap>(info.Holder());
	vtkViewDependentErrorMetric *native = (vtkViewDependentErrorMetric *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkViewDependentErrorMetricWrap::GetPixelTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewDependentErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkViewDependentErrorMetricWrap>(info.Holder());
	vtkViewDependentErrorMetric *native = (vtkViewDependentErrorMetric *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPixelTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewDependentErrorMetricWrap::GetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewDependentErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkViewDependentErrorMetricWrap>(info.Holder());
	vtkViewDependentErrorMetric *native = (vtkViewDependentErrorMetric *)wrapper->native.GetPointer();
	vtkViewport * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetViewport();
		VtkViewportWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkViewportWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkViewportWrap *w = new VtkViewportWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewDependentErrorMetricWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewDependentErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkViewDependentErrorMetricWrap>(info.Holder());
	vtkViewDependentErrorMetric *native = (vtkViewDependentErrorMetric *)wrapper->native.GetPointer();
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

void VtkViewDependentErrorMetricWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewDependentErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkViewDependentErrorMetricWrap>(info.Holder());
	vtkViewDependentErrorMetric *native = (vtkViewDependentErrorMetric *)wrapper->native.GetPointer();
	vtkViewDependentErrorMetric * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkViewDependentErrorMetricWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkViewDependentErrorMetricWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkViewDependentErrorMetricWrap *w = new VtkViewDependentErrorMetricWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewDependentErrorMetricWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewDependentErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkViewDependentErrorMetricWrap>(info.Holder());
	vtkViewDependentErrorMetric *native = (vtkViewDependentErrorMetric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkViewDependentErrorMetric * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkViewDependentErrorMetricWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkViewDependentErrorMetricWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkViewDependentErrorMetricWrap *w = new VtkViewDependentErrorMetricWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewDependentErrorMetricWrap::SetPixelTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewDependentErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkViewDependentErrorMetricWrap>(info.Holder());
	vtkViewDependentErrorMetric *native = (vtkViewDependentErrorMetric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPixelTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewDependentErrorMetricWrap::SetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewDependentErrorMetricWrap *wrapper = ObjectWrap::Unwrap<VtkViewDependentErrorMetricWrap>(info.Holder());
	vtkViewDependentErrorMetric *native = (vtkViewDependentErrorMetric *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetViewport(
			(vtkViewport *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

