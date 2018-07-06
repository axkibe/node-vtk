/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkWidgetRepresentationWrap.h"
#include "vtkAxesTransformRepresentationWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkHandleRepresentationWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"
#include "vtkPropertyWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAxesTransformRepresentationWrap::ptpl;

VtkAxesTransformRepresentationWrap::VtkAxesTransformRepresentationWrap()
{ }

VtkAxesTransformRepresentationWrap::VtkAxesTransformRepresentationWrap(vtkSmartPointer<vtkAxesTransformRepresentation> _native)
{ native = _native; }

VtkAxesTransformRepresentationWrap::~VtkAxesTransformRepresentationWrap()
{ }

void VtkAxesTransformRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAxesTransformRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AxesTransformRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkAxesTransformRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAxesTransformRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWidgetRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAxesTransformRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetInteractionStateMaxValue", GetInteractionStateMaxValue);
	Nan::SetPrototypeMethod(tpl, "getInteractionStateMaxValue", GetInteractionStateMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetInteractionStateMinValue", GetInteractionStateMinValue);
	Nan::SetPrototypeMethod(tpl, "getInteractionStateMinValue", GetInteractionStateMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLabelFormat", GetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "getLabelFormat", GetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "GetLabelProperty", GetLabelProperty);
	Nan::SetPrototypeMethod(tpl, "getLabelProperty", GetLabelProperty);

	Nan::SetPrototypeMethod(tpl, "GetOriginDisplayPosition", GetOriginDisplayPosition);
	Nan::SetPrototypeMethod(tpl, "getOriginDisplayPosition", GetOriginDisplayPosition);

	Nan::SetPrototypeMethod(tpl, "GetOriginRepresentation", GetOriginRepresentation);
	Nan::SetPrototypeMethod(tpl, "getOriginRepresentation", GetOriginRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetOriginWorldPosition", GetOriginWorldPosition);
	Nan::SetPrototypeMethod(tpl, "getOriginWorldPosition", GetOriginWorldPosition);

	Nan::SetPrototypeMethod(tpl, "GetSelectionRepresentation", GetSelectionRepresentation);
	Nan::SetPrototypeMethod(tpl, "getSelectionRepresentation", GetSelectionRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInteractionState", SetInteractionState);
	Nan::SetPrototypeMethod(tpl, "setInteractionState", SetInteractionState);

	Nan::SetPrototypeMethod(tpl, "SetLabelFormat", SetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "setLabelFormat", SetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "SetLabelScale", SetLabelScale);
	Nan::SetPrototypeMethod(tpl, "setLabelScale", SetLabelScale);

	Nan::SetPrototypeMethod(tpl, "SetOriginDisplayPosition", SetOriginDisplayPosition);
	Nan::SetPrototypeMethod(tpl, "setOriginDisplayPosition", SetOriginDisplayPosition);

	Nan::SetPrototypeMethod(tpl, "SetOriginWorldPosition", SetOriginWorldPosition);
	Nan::SetPrototypeMethod(tpl, "setOriginWorldPosition", SetOriginWorldPosition);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	Nan::SetPrototypeMethod(tpl, "StartWidgetInteraction", StartWidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "startWidgetInteraction", StartWidgetInteraction);

	Nan::SetPrototypeMethod(tpl, "WidgetInteraction", WidgetInteraction);
	Nan::SetPrototypeMethod(tpl, "widgetInteraction", WidgetInteraction);

#ifdef VTK_NODE_PLUS_VTKAXESTRANSFORMREPRESENTATIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKAXESTRANSFORMREPRESENTATIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAxesTransformRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAxesTransformRepresentation> native = vtkSmartPointer<vtkAxesTransformRepresentation>::New();
		VtkAxesTransformRepresentationWrap* obj = new VtkAxesTransformRepresentationWrap(native);
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

void VtkAxesTransformRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkAxesTransformRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
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

void VtkAxesTransformRepresentationWrap::GetInteractionStateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractionStateMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxesTransformRepresentationWrap::GetInteractionStateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractionStateMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxesTransformRepresentationWrap::GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelFormat();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAxesTransformRepresentationWrap::GetLabelProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelProperty();
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

void VtkAxesTransformRepresentationWrap::GetOriginDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
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
		native->GetOriginDisplayPosition(
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
		native->GetOriginDisplayPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxesTransformRepresentationWrap::GetOriginRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	vtkHandleRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOriginRepresentation();
	VtkHandleRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHandleRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHandleRepresentationWrap *w = new VtkHandleRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxesTransformRepresentationWrap::GetOriginWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
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
		native->GetOriginWorldPosition(
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
		native->GetOriginWorldPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxesTransformRepresentationWrap::GetSelectionRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	vtkHandleRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionRepresentation();
	VtkHandleRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHandleRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHandleRepresentationWrap *w = new VtkHandleRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxesTransformRepresentationWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxesTransformRepresentationWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxesTransformRepresentationWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxesTransformRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	vtkAxesTransformRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAxesTransformRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAxesTransformRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAxesTransformRepresentationWrap *w = new VtkAxesTransformRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxesTransformRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
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

void VtkAxesTransformRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
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

void VtkAxesTransformRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
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

void VtkAxesTransformRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkAxesTransformRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkAxesTransformRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAxesTransformRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAxesTransformRepresentationWrap *w = new VtkAxesTransformRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxesTransformRepresentationWrap::SetInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractionState(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxesTransformRepresentationWrap::SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelFormat(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxesTransformRepresentationWrap::SetLabelScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
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
		native->SetLabelScale(
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
		native->SetLabelScale(
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
				native->SetLabelScale(
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

void VtkAxesTransformRepresentationWrap::SetOriginDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
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
		native->SetOriginDisplayPosition(
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
		native->SetOriginDisplayPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxesTransformRepresentationWrap::SetOriginWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
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
		native->SetOriginWorldPosition(
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
		native->SetOriginWorldPosition(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxesTransformRepresentationWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxesTransformRepresentationWrap::StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
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

void VtkAxesTransformRepresentationWrap::WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
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
