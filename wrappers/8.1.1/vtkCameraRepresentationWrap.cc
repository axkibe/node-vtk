/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkBorderRepresentationWrap.h"
#include "vtkCameraRepresentationWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkCameraWrap.h"
#include "vtkCameraInterpolatorWrap.h"
#include "vtkProperty2DWrap.h"
#include "vtkRenderWindowInteractorWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCameraRepresentationWrap::ptpl;

VtkCameraRepresentationWrap::VtkCameraRepresentationWrap()
{ }

VtkCameraRepresentationWrap::VtkCameraRepresentationWrap(vtkSmartPointer<vtkCameraRepresentation> _native)
{ native = _native; }

VtkCameraRepresentationWrap::~VtkCameraRepresentationWrap()
{ }

void VtkCameraRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCameraRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CameraRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkCameraRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCameraRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkBorderRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkBorderRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCameraRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddCameraToPath", AddCameraToPath);
	Nan::SetPrototypeMethod(tpl, "addCameraToPath", AddCameraToPath);

	Nan::SetPrototypeMethod(tpl, "AnimatePath", AnimatePath);
	Nan::SetPrototypeMethod(tpl, "animatePath", AnimatePath);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetActors2D", GetActors2D);
	Nan::SetPrototypeMethod(tpl, "getActors2D", GetActors2D);

	Nan::SetPrototypeMethod(tpl, "GetCamera", GetCamera);
	Nan::SetPrototypeMethod(tpl, "getCamera", GetCamera);

	Nan::SetPrototypeMethod(tpl, "GetInterpolator", GetInterpolator);
	Nan::SetPrototypeMethod(tpl, "getInterpolator", GetInterpolator);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFrames", GetNumberOfFrames);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFrames", GetNumberOfFrames);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFramesMaxValue", GetNumberOfFramesMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFramesMaxValue", GetNumberOfFramesMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFramesMinValue", GetNumberOfFramesMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFramesMinValue", GetNumberOfFramesMinValue);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "GetSize", GetSize);
	Nan::SetPrototypeMethod(tpl, "getSize", GetSize);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "InitializePath", InitializePath);
	Nan::SetPrototypeMethod(tpl, "initializePath", InitializePath);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCamera", SetCamera);
	Nan::SetPrototypeMethod(tpl, "setCamera", SetCamera);

	Nan::SetPrototypeMethod(tpl, "SetInterpolator", SetInterpolator);
	Nan::SetPrototypeMethod(tpl, "setInterpolator", SetInterpolator);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfFrames", SetNumberOfFrames);
	Nan::SetPrototypeMethod(tpl, "setNumberOfFrames", SetNumberOfFrames);

#ifdef VTK_NODE_PLUS_VTKCAMERAREPRESENTATIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCAMERAREPRESENTATIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCameraRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCameraRepresentation> native = vtkSmartPointer<vtkCameraRepresentation>::New();
		VtkCameraRepresentationWrap* obj = new VtkCameraRepresentationWrap(native);
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

void VtkCameraRepresentationWrap::AddCameraToPath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AddCameraToPath();
}

void VtkCameraRepresentationWrap::AnimatePath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowInteractorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowInteractorWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowInteractorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AnimatePath(
			(vtkRenderWindowInteractor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCameraRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkCameraRepresentationWrap::GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetActors2D(
			(vtkPropCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCameraRepresentationWrap::GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	vtkCamera * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCamera();
	VtkCameraWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCameraWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCameraWrap *w = new VtkCameraWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCameraRepresentationWrap::GetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	vtkCameraInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolator();
	VtkCameraInterpolatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCameraInterpolatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCameraInterpolatorWrap *w = new VtkCameraInterpolatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCameraRepresentationWrap::GetNumberOfFrames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFrames();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCameraRepresentationWrap::GetNumberOfFramesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFramesMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCameraRepresentationWrap::GetNumberOfFramesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFramesMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCameraRepresentationWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProperty();
	VtkProperty2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProperty2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCameraRepresentationWrap::GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
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
		native->GetSize(
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
		native->GetSize(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCameraRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCameraRepresentationWrap::InitializePath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitializePath();
}

void VtkCameraRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	vtkCameraRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCameraRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCameraRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCameraRepresentationWrap *w = new VtkCameraRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCameraRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
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

void VtkCameraRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
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

void VtkCameraRepresentationWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderOverlay(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCameraRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
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

void VtkCameraRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkCameraRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkCameraRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCameraRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCameraRepresentationWrap *w = new VtkCameraRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCameraRepresentationWrap::SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCameraWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCameraWrap *a0 = ObjectWrap::Unwrap<VtkCameraWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCamera(
			(vtkCamera *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCameraRepresentationWrap::SetInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCameraInterpolatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCameraInterpolatorWrap *a0 = ObjectWrap::Unwrap<VtkCameraInterpolatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolator(
			(vtkCameraInterpolator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCameraRepresentationWrap::SetNumberOfFrames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCameraRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkCameraRepresentationWrap>(info.Holder());
	vtkCameraRepresentation *native = (vtkCameraRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfFrames(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

