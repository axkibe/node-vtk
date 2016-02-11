/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkHandleRepresentationWrap.h"
#include "vtkSphereHandleRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkPropWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSphereHandleRepresentationWrap::ptpl;

VtkSphereHandleRepresentationWrap::VtkSphereHandleRepresentationWrap()
{ }

VtkSphereHandleRepresentationWrap::VtkSphereHandleRepresentationWrap(vtkSmartPointer<vtkSphereHandleRepresentation> _native)
{ native = _native; }

VtkSphereHandleRepresentationWrap::~VtkSphereHandleRepresentationWrap()
{ }

void VtkSphereHandleRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSphereHandleRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SphereHandleRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkSphereHandleRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSphereHandleRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHandleRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHandleRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSphereHandleRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHotSpotSize", GetHotSpotSize);
	Nan::SetPrototypeMethod(tpl, "getHotSpotSize", GetHotSpotSize);

	Nan::SetPrototypeMethod(tpl, "GetHotSpotSizeMaxValue", GetHotSpotSizeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getHotSpotSizeMaxValue", GetHotSpotSizeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetHotSpotSizeMinValue", GetHotSpotSizeMinValue);
	Nan::SetPrototypeMethod(tpl, "getHotSpotSizeMinValue", GetHotSpotSizeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedProperty", GetSelectedProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedProperty", GetSelectedProperty);

	Nan::SetPrototypeMethod(tpl, "GetSphereRadius", GetSphereRadius);
	Nan::SetPrototypeMethod(tpl, "getSphereRadius", GetSphereRadius);

	Nan::SetPrototypeMethod(tpl, "GetTranslationMode", GetTranslationMode);
	Nan::SetPrototypeMethod(tpl, "getTranslationMode", GetTranslationMode);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "Highlight", Highlight);
	Nan::SetPrototypeMethod(tpl, "highlight", Highlight);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PlaceWidget", PlaceWidget);
	Nan::SetPrototypeMethod(tpl, "placeWidget", PlaceWidget);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDisplayPosition", SetDisplayPosition);
	Nan::SetPrototypeMethod(tpl, "setDisplayPosition", SetDisplayPosition);

	Nan::SetPrototypeMethod(tpl, "SetHandleSize", SetHandleSize);
	Nan::SetPrototypeMethod(tpl, "setHandleSize", SetHandleSize);

	Nan::SetPrototypeMethod(tpl, "SetHotSpotSize", SetHotSpotSize);
	Nan::SetPrototypeMethod(tpl, "setHotSpotSize", SetHotSpotSize);

	Nan::SetPrototypeMethod(tpl, "SetProperty", SetProperty);
	Nan::SetPrototypeMethod(tpl, "setProperty", SetProperty);

	Nan::SetPrototypeMethod(tpl, "SetSelectedProperty", SetSelectedProperty);
	Nan::SetPrototypeMethod(tpl, "setSelectedProperty", SetSelectedProperty);

	Nan::SetPrototypeMethod(tpl, "SetSphereRadius", SetSphereRadius);
	Nan::SetPrototypeMethod(tpl, "setSphereRadius", SetSphereRadius);

	Nan::SetPrototypeMethod(tpl, "SetTranslationMode", SetTranslationMode);
	Nan::SetPrototypeMethod(tpl, "setTranslationMode", SetTranslationMode);

	Nan::SetPrototypeMethod(tpl, "SetWorldPosition", SetWorldPosition);
	Nan::SetPrototypeMethod(tpl, "setWorldPosition", SetWorldPosition);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "StartWidgetInteraction", StartWidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "startWidgetInteraction", StartWidgetInteraction);

	Nan::SetPrototypeMethod(tpl, "TranslationModeOff", TranslationModeOff);
	Nan::SetPrototypeMethod(tpl, "translationModeOff", TranslationModeOff);

	Nan::SetPrototypeMethod(tpl, "TranslationModeOn", TranslationModeOn);
	Nan::SetPrototypeMethod(tpl, "translationModeOn", TranslationModeOn);

	Nan::SetPrototypeMethod(tpl, "WidgetInteraction", WidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "widgetInteraction", WidgetInteraction);

	ptpl.Reset( tpl );
}

void VtkSphereHandleRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSphereHandleRepresentation> native = vtkSmartPointer<vtkSphereHandleRepresentation>::New();
		VtkSphereHandleRepresentationWrap* obj = new VtkSphereHandleRepresentationWrap(native);
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

void VtkSphereHandleRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkSphereHandleRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->ComputeInteractionState(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetActors(
			(vtkPropCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkSphereHandleRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSphereHandleRepresentationWrap::GetHotSpotSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHotSpotSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereHandleRepresentationWrap::GetHotSpotSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHotSpotSizeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereHandleRepresentationWrap::GetHotSpotSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHotSpotSizeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereHandleRepresentationWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProperty();
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

void VtkSphereHandleRepresentationWrap::GetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedProperty();
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

void VtkSphereHandleRepresentationWrap::GetSphereRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSphereRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereHandleRepresentationWrap::GetTranslationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslationMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereHandleRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSphereHandleRepresentationWrap::Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Highlight(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
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

void VtkSphereHandleRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	vtkSphereHandleRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSphereHandleRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSphereHandleRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSphereHandleRepresentationWrap *w = new VtkSphereHandleRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSphereHandleRepresentationWrap::PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
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
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderOpaqueGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderTranslucentPolygonalGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSphereHandleRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSphereHandleRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSphereHandleRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSphereHandleRepresentationWrap *w = new VtkSphereHandleRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::SetDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
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
		native->SetDisplayPosition(
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
		native->SetDisplayPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::SetHandleSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHandleSize(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::SetHotSpotSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHotSpotSize(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::SetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::SetSphereRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSphereRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::SetTranslationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTranslationMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::SetWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
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
		native->SetWorldPosition(
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
		native->SetWorldPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->StartWidgetInteraction(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->StartWidgetInteraction(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSphereHandleRepresentationWrap::TranslationModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationModeOff();
}

void VtkSphereHandleRepresentationWrap::TranslationModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationModeOn();
}

void VtkSphereHandleRepresentationWrap::WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSphereHandleRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSphereHandleRepresentationWrap>(info.Holder());
	vtkSphereHandleRepresentation *native = (vtkSphereHandleRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->WidgetInteraction(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->WidgetInteraction(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

