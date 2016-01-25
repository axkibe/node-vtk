/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWidgetRepresentationWrap.h"
#include "vtkAxesTransformRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkHandleRepresentationWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"
#include "vtkPropertyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAxesTransformRepresentationWrap::constructor;

VtkAxesTransformRepresentationWrap::VtkAxesTransformRepresentationWrap()
{ }

VtkAxesTransformRepresentationWrap::VtkAxesTransformRepresentationWrap(vtkSmartPointer<vtkAxesTransformRepresentation> _native)
{ native = _native; }

VtkAxesTransformRepresentationWrap::~VtkAxesTransformRepresentationWrap()
{ }

void VtkAxesTransformRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkAxesTransformRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkPropWrap::InitTpl(tpl);
	VtkWidgetRepresentationWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkAxesTransformRepresentation").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AxesTransformRepresentation").ToLocalChecked(),tpl->GetFunction());
}

void VtkAxesTransformRepresentationWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInteractionStateMaxValue", GetInteractionStateMaxValue);
	Nan::SetPrototypeMethod(tpl, "getInteractionStateMaxValue", GetInteractionStateMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetInteractionStateMinValue", GetInteractionStateMinValue);
	Nan::SetPrototypeMethod(tpl, "getInteractionStateMinValue", GetInteractionStateMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLabelFormat", GetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "getLabelFormat", GetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "GetLabelProperty", GetLabelProperty);
	Nan::SetPrototypeMethod(tpl, "getLabelProperty", GetLabelProperty);

	Nan::SetPrototypeMethod(tpl, "GetOriginRepresentation", GetOriginRepresentation);
	Nan::SetPrototypeMethod(tpl, "getOriginRepresentation", GetOriginRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetSelectionRepresentation", GetSelectionRepresentation);
	Nan::SetPrototypeMethod(tpl, "getSelectionRepresentation", GetSelectionRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

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

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

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
		VtkAxesTransformRepresentationWrap* obj = new VtkAxesTransformRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
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

void VtkAxesTransformRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHandleRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHandleRepresentationWrap *w = new VtkHandleRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHandleRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHandleRepresentationWrap *w = new VtkHandleRepresentationWrap();
	w->native.TakeReference(r);
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

void VtkAxesTransformRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAxesTransformRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAxesTransformRepresentationWrap *w = new VtkAxesTransformRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxesTransformRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxesTransformRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkAxesTransformRepresentationWrap>(info.Holder());
	vtkAxesTransformRepresentation *native = (vtkAxesTransformRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAxesTransformRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkAxesTransformRepresentationWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAxesTransformRepresentationWrap *w = new VtkAxesTransformRepresentationWrap();
		w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsInt32())
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
	if(info.Length() > 0 && info[0]->IsNumber())
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

