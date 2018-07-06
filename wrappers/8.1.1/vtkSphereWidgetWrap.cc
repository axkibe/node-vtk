/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtk3DWidgetWrap.h"
#include "vtkSphereWidgetWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkSphereWrap.h"
#include "vtkPropertyWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSphereWidgetWrap::ptpl;

VtkSphereWidgetWrap::VtkSphereWidgetWrap()
{ }

VtkSphereWidgetWrap::VtkSphereWidgetWrap(vtkSmartPointer<vtkSphereWidget> _native)
{ native = _native; }

VtkSphereWidgetWrap::~VtkSphereWidgetWrap()
{ }

void VtkSphereWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSphereWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SphereWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkSphereWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSphereWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	Vtk3DWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(Vtk3DWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSphereWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCenter", GetCenter);
	Nan::SetPrototypeMethod(tpl, "getCenter", GetCenter);

	Nan::SetPrototypeMethod(tpl, "GetHandleDirection", GetHandleDirection);
	Nan::SetPrototypeMethod(tpl, "getHandleDirection", GetHandleDirection);

	Nan::SetPrototypeMethod(tpl, "GetHandlePosition", GetHandlePosition);
	Nan::SetPrototypeMethod(tpl, "getHandlePosition", GetHandlePosition);

	Nan::SetPrototypeMethod(tpl, "GetHandleProperty", GetHandleProperty);
	Nan::SetPrototypeMethod(tpl, "getHandleProperty", GetHandleProperty);

	Nan::SetPrototypeMethod(tpl, "GetHandleVisibility", GetHandleVisibility);
	Nan::SetPrototypeMethod(tpl, "getHandleVisibility", GetHandleVisibility);

	Nan::SetPrototypeMethod(tpl, "GetPhiResolution", GetPhiResolution);
	Nan::SetPrototypeMethod(tpl, "getPhiResolution", GetPhiResolution);

	Nan::SetPrototypeMethod(tpl, "GetPolyData", GetPolyData);
	Nan::SetPrototypeMethod(tpl, "getPolyData", GetPolyData);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "GetRepresentation", GetRepresentation);
	Nan::SetPrototypeMethod(tpl, "getRepresentation", GetRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetRepresentationMaxValue", GetRepresentationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRepresentationMaxValue", GetRepresentationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRepresentationMinValue", GetRepresentationMinValue);
	Nan::SetPrototypeMethod(tpl, "getRepresentationMinValue", GetRepresentationMinValue);

	Nan::SetPrototypeMethod(tpl, "GetScale", GetScale);
	Nan::SetPrototypeMethod(tpl, "getScale", GetScale);

	Nan::SetPrototypeMethod(tpl, "GetSelectedHandleProperty", GetSelectedHandleProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedHandleProperty", GetSelectedHandleProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedSphereProperty", GetSelectedSphereProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedSphereProperty", GetSelectedSphereProperty);

	Nan::SetPrototypeMethod(tpl, "GetSphere", GetSphere);
	Nan::SetPrototypeMethod(tpl, "getSphere", GetSphere);

	Nan::SetPrototypeMethod(tpl, "GetSphereProperty", GetSphereProperty);
	Nan::SetPrototypeMethod(tpl, "getSphereProperty", GetSphereProperty);

	Nan::SetPrototypeMethod(tpl, "GetThetaResolution", GetThetaResolution);
	Nan::SetPrototypeMethod(tpl, "getThetaResolution", GetThetaResolution);

	Nan::SetPrototypeMethod(tpl, "GetTranslation", GetTranslation);
	Nan::SetPrototypeMethod(tpl, "getTranslation", GetTranslation);

	Nan::SetPrototypeMethod(tpl, "HandleVisibilityOff", HandleVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "handleVisibilityOff", HandleVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "HandleVisibilityOn", HandleVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "handleVisibilityOn", HandleVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PlaceWidget", PlaceWidget);
	Nan::SetPrototypeMethod(tpl, "placeWidget", PlaceWidget);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScaleOff", ScaleOff);
	Nan::SetPrototypeMethod(tpl, "scaleOff", ScaleOff);

	Nan::SetPrototypeMethod(tpl, "ScaleOn", ScaleOn);
	Nan::SetPrototypeMethod(tpl, "scaleOn", ScaleOn);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetHandleDirection", SetHandleDirection);
	Nan::SetPrototypeMethod(tpl, "setHandleDirection", SetHandleDirection);

	Nan::SetPrototypeMethod(tpl, "SetHandleVisibility", SetHandleVisibility);
	Nan::SetPrototypeMethod(tpl, "setHandleVisibility", SetHandleVisibility);

	Nan::SetPrototypeMethod(tpl, "SetPhiResolution", SetPhiResolution);
	Nan::SetPrototypeMethod(tpl, "setPhiResolution", SetPhiResolution);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetRepresentationToOff", SetRepresentationToOff);
	Nan::SetPrototypeMethod(tpl, "setRepresentationToOff", SetRepresentationToOff);

	Nan::SetPrototypeMethod(tpl, "SetRepresentationToSurface", SetRepresentationToSurface);
	Nan::SetPrototypeMethod(tpl, "setRepresentationToSurface", SetRepresentationToSurface);

	Nan::SetPrototypeMethod(tpl, "SetRepresentationToWireframe", SetRepresentationToWireframe);
	Nan::SetPrototypeMethod(tpl, "setRepresentationToWireframe", SetRepresentationToWireframe);

	Nan::SetPrototypeMethod(tpl, "SetScale", SetScale);
	Nan::SetPrototypeMethod(tpl, "setScale", SetScale);

	Nan::SetPrototypeMethod(tpl, "SetThetaResolution", SetThetaResolution);
	Nan::SetPrototypeMethod(tpl, "setThetaResolution", SetThetaResolution);

	Nan::SetPrototypeMethod(tpl, "SetTranslation", SetTranslation);
	Nan::SetPrototypeMethod(tpl, "setTranslation", SetTranslation);

	Nan::SetPrototypeMethod(tpl, "TranslationOff", TranslationOff);
	Nan::SetPrototypeMethod(tpl, "translationOff", TranslationOff);

	Nan::SetPrototypeMethod(tpl, "TranslationOn", TranslationOn);
	Nan::SetPrototypeMethod(tpl, "translationOn", TranslationOn);

#ifdef VTK_NODE_PLUS_VTKSPHEREWIDGETWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSPHEREWIDGETWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSphereWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSphereWidget> native = vtkSmartPointer<vtkSphereWidget>::New();
		VtkSphereWidgetWrap* obj = new VtkSphereWidgetWrap(native);
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

void VtkSphereWidgetWrap::GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
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
		native->GetCenter(
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
		native->GetCenter(
			b0
		);
		return;
	}
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCenter();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkSphereWidgetWrap::GetHandleDirection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleDirection();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkSphereWidgetWrap::GetHandlePosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandlePosition();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkSphereWidgetWrap::GetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleProperty();
	VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSphereWidgetWrap::GetHandleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereWidgetWrap::GetPhiResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPhiResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereWidgetWrap::GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetPolyData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereWidgetWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereWidgetWrap::GetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRepresentation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereWidgetWrap::GetRepresentationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRepresentationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereWidgetWrap::GetRepresentationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRepresentationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereWidgetWrap::GetScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereWidgetWrap::GetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedHandleProperty();
	VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSphereWidgetWrap::GetSelectedSphereProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedSphereProperty();
	VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSphereWidgetWrap::GetSphere(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSphereWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSphereWrap *a0 = ObjectWrap::Unwrap<VtkSphereWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetSphere(
			(vtkSphere *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereWidgetWrap::GetSphereProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSphereProperty();
	VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSphereWidgetWrap::GetThetaResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThetaResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereWidgetWrap::GetTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereWidgetWrap::HandleVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HandleVisibilityOff();
}

void VtkSphereWidgetWrap::HandleVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HandleVisibilityOn();
}

void VtkSphereWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	vtkSphereWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSphereWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSphereWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSphereWidgetWrap *w = new VtkSphereWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSphereWidgetWrap::PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PlaceWidget(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->PlaceWidget(
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
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
														if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->PlaceWidget(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PlaceWidget();
}

void VtkSphereWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkSphereWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkSphereWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSphereWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSphereWidgetWrap *w = new VtkSphereWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereWidgetWrap::ScaleOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScaleOff();
}

void VtkSphereWidgetWrap::ScaleOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScaleOn();
}

void VtkSphereWidgetWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
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

void VtkSphereWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnabled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereWidgetWrap::SetHandleDirection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
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
		native->SetHandleDirection(
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
		native->SetHandleDirection(
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
				native->SetHandleDirection(
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

void VtkSphereWidgetWrap::SetHandleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHandleVisibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereWidgetWrap::SetPhiResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
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

void VtkSphereWidgetWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereWidgetWrap::SetRepresentationToOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRepresentationToOff();
}

void VtkSphereWidgetWrap::SetRepresentationToSurface(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRepresentationToSurface();
}

void VtkSphereWidgetWrap::SetRepresentationToWireframe(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRepresentationToWireframe();
}

void VtkSphereWidgetWrap::SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScale(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereWidgetWrap::SetThetaResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
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

void VtkSphereWidgetWrap::SetTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTranslation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereWidgetWrap::TranslationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationOff();
}

void VtkSphereWidgetWrap::TranslationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSphereWidgetWrap>(info.Holder());
	vtkSphereWidget *native = (vtkSphereWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationOn();
}

