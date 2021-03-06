/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPointInterpolatorWrap.h"
#include "vtkPointInterpolator2DWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPointInterpolator2DWrap::ptpl;

VtkPointInterpolator2DWrap::VtkPointInterpolator2DWrap()
{ }

VtkPointInterpolator2DWrap::VtkPointInterpolator2DWrap(vtkSmartPointer<vtkPointInterpolator2D> _native)
{ native = _native; }

VtkPointInterpolator2DWrap::~VtkPointInterpolator2DWrap()
{ }

void VtkPointInterpolator2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPointInterpolator2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PointInterpolator2D").ToLocalChecked(), ConstructorGetter);
}

void VtkPointInterpolator2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPointInterpolator2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointInterpolatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointInterpolatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPointInterpolator2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetInterpolateZ", GetInterpolateZ);
	Nan::SetPrototypeMethod(tpl, "getInterpolateZ", GetInterpolateZ);

	Nan::SetPrototypeMethod(tpl, "InterpolateZOff", InterpolateZOff);
	Nan::SetPrototypeMethod(tpl, "interpolateZOff", InterpolateZOff);

	Nan::SetPrototypeMethod(tpl, "InterpolateZOn", InterpolateZOn);
	Nan::SetPrototypeMethod(tpl, "interpolateZOn", InterpolateZOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInterpolateZ", SetInterpolateZ);
	Nan::SetPrototypeMethod(tpl, "setInterpolateZ", SetInterpolateZ);

#ifdef VTK_NODE_PLUS_VTKPOINTINTERPOLATOR2DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPOINTINTERPOLATOR2DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPointInterpolator2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPointInterpolator2D> native = vtkSmartPointer<vtkPointInterpolator2D>::New();
		VtkPointInterpolator2DWrap* obj = new VtkPointInterpolator2DWrap(native);
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

void VtkPointInterpolator2DWrap::GetInterpolateZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointInterpolator2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointInterpolator2DWrap>(info.Holder());
	vtkPointInterpolator2D *native = (vtkPointInterpolator2D *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolateZ();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointInterpolator2DWrap::InterpolateZOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointInterpolator2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointInterpolator2DWrap>(info.Holder());
	vtkPointInterpolator2D *native = (vtkPointInterpolator2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InterpolateZOff();
}

void VtkPointInterpolator2DWrap::InterpolateZOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointInterpolator2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointInterpolator2DWrap>(info.Holder());
	vtkPointInterpolator2D *native = (vtkPointInterpolator2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InterpolateZOn();
}

void VtkPointInterpolator2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointInterpolator2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointInterpolator2DWrap>(info.Holder());
	vtkPointInterpolator2D *native = (vtkPointInterpolator2D *)wrapper->native.GetPointer();
	vtkPointInterpolator2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPointInterpolator2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointInterpolator2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointInterpolator2DWrap *w = new VtkPointInterpolator2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointInterpolator2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointInterpolator2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointInterpolator2DWrap>(info.Holder());
	vtkPointInterpolator2D *native = (vtkPointInterpolator2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPointInterpolator2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPointInterpolator2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPointInterpolator2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointInterpolator2DWrap *w = new VtkPointInterpolator2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointInterpolator2DWrap::SetInterpolateZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointInterpolator2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointInterpolator2DWrap>(info.Holder());
	vtkPointInterpolator2D *native = (vtkPointInterpolator2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolateZ(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

