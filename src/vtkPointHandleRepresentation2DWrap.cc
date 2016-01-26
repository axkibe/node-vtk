/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkHandleRepresentationWrap.h"
#include "vtkPointHandleRepresentation2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkProperty2DWrap.h"
#include "vtkPropWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"
#include "vtkPointPlacerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPointHandleRepresentation2DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPointHandleRepresentation2DWrap::ptpl;

VtkPointHandleRepresentation2DWrap::VtkPointHandleRepresentation2DWrap()
{ }

VtkPointHandleRepresentation2DWrap::VtkPointHandleRepresentation2DWrap(vtkSmartPointer<vtkPointHandleRepresentation2D> _native)
{ native = _native; }

VtkPointHandleRepresentation2DWrap::~VtkPointHandleRepresentation2DWrap()
{ }

void VtkPointHandleRepresentation2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPointHandleRepresentation2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PointHandleRepresentation2D").ToLocalChecked(), ConstructorGetter);
}

void VtkPointHandleRepresentation2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPointHandleRepresentation2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHandleRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHandleRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPointHandleRepresentation2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetActors2D", GetActors2D);
	Nan::SetPrototypeMethod(tpl, "getActors2D", GetActors2D);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCursorShape", GetCursorShape);
	Nan::SetPrototypeMethod(tpl, "getCursorShape", GetCursorShape);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedProperty", GetSelectedProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedProperty", GetSelectedProperty);

	Nan::SetPrototypeMethod(tpl, "Highlight", Highlight);
	Nan::SetPrototypeMethod(tpl, "highlight", Highlight);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCursorShape", SetCursorShape);
	Nan::SetPrototypeMethod(tpl, "setCursorShape", SetCursorShape);

	Nan::SetPrototypeMethod(tpl, "SetPointPlacer", SetPointPlacer);
	Nan::SetPrototypeMethod(tpl, "setPointPlacer", SetPointPlacer);

	Nan::SetPrototypeMethod(tpl, "SetProperty", SetProperty);
	Nan::SetPrototypeMethod(tpl, "setProperty", SetProperty);

	Nan::SetPrototypeMethod(tpl, "SetSelectedProperty", SetSelectedProperty);
	Nan::SetPrototypeMethod(tpl, "setSelectedProperty", SetSelectedProperty);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkPointHandleRepresentation2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPointHandleRepresentation2D> native = vtkSmartPointer<vtkPointHandleRepresentation2D>::New();
		VtkPointHandleRepresentation2DWrap* obj = new VtkPointHandleRepresentation2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPointHandleRepresentation2DWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkPointHandleRepresentation2DWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkPointHandleRepresentation2DWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkPointHandleRepresentation2DWrap::GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkPointHandleRepresentation2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPointHandleRepresentation2DWrap::GetCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCursorShape();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointHandleRepresentation2DWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
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
		Nan::New<v8::Function>(VtkProperty2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointHandleRepresentation2DWrap::GetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
	vtkProperty2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedProperty();
		VtkProperty2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkProperty2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProperty2DWrap *w = new VtkProperty2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointHandleRepresentation2DWrap::Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkPointHandleRepresentation2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkPointHandleRepresentation2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
	vtkPointHandleRepresentation2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPointHandleRepresentation2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPointHandleRepresentation2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointHandleRepresentation2DWrap *w = new VtkPointHandleRepresentation2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointHandleRepresentation2DWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkPointHandleRepresentation2DWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
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

void VtkPointHandleRepresentation2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPointHandleRepresentation2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPointHandleRepresentation2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkPointHandleRepresentation2DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointHandleRepresentation2DWrap *w = new VtkPointHandleRepresentation2DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation2DWrap::SetCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCursorShape(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation2DWrap::SetPointPlacer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointPlacerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointPlacerWrap *a0 = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointPlacer(
			(vtkPointPlacer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation2DWrap::SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkProperty2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkProperty2DWrap *a0 = ObjectWrap::Unwrap<VtkProperty2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProperty(
			(vtkProperty2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation2DWrap::SetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkProperty2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkProperty2DWrap *a0 = ObjectWrap::Unwrap<VtkProperty2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedProperty(
			(vtkProperty2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointHandleRepresentation2DWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointHandleRepresentation2DWrap *wrapper = ObjectWrap::Unwrap<VtkPointHandleRepresentation2DWrap>(info.Holder());
	vtkPointHandleRepresentation2D *native = (vtkPointHandleRepresentation2D *)wrapper->native.GetPointer();
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

