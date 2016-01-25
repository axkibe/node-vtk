/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkPropWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkAssemblyPathWrap.h"
#include "vtkMatrix4x4Wrap.h"
#include "vtkInformationWrap.h"
#include "vtkViewportWrap.h"
#include "vtkWindowWrap.h"
#include "vtkAssemblyPathsWrap.h"

using namespace v8;

Nan::Persistent<v8::Function> VtkPropWrap::constructor;

VtkPropWrap::VtkPropWrap()
{ }

VtkPropWrap::VtkPropWrap(vtkSmartPointer<vtkProp> _native)
{ native = _native; }

VtkPropWrap::~VtkPropWrap()
{ }

void VtkPropWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkPropWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkProp").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Prop").ToLocalChecked(),tpl->GetFunction());
}

void VtkPropWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddConsumer", AddConsumer);
	Nan::SetPrototypeMethod(tpl, "addConsumer", AddConsumer);

	Nan::SetPrototypeMethod(tpl, "AddEstimatedRenderTime", AddEstimatedRenderTime);
	Nan::SetPrototypeMethod(tpl, "addEstimatedRenderTime", AddEstimatedRenderTime);

	Nan::SetPrototypeMethod(tpl, "BuildPaths", BuildPaths);
	Nan::SetPrototypeMethod(tpl, "buildPaths", BuildPaths);

	Nan::SetPrototypeMethod(tpl, "DragableOff", DragableOff);
	Nan::SetPrototypeMethod(tpl, "dragableOff", DragableOff);

	Nan::SetPrototypeMethod(tpl, "DragableOn", DragableOn);
	Nan::SetPrototypeMethod(tpl, "dragableOn", DragableOn);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetActors2D", GetActors2D);
	Nan::SetPrototypeMethod(tpl, "getActors2D", GetActors2D);

	Nan::SetPrototypeMethod(tpl, "GetAllocatedRenderTime", GetAllocatedRenderTime);
	Nan::SetPrototypeMethod(tpl, "getAllocatedRenderTime", GetAllocatedRenderTime);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetConsumer", GetConsumer);
	Nan::SetPrototypeMethod(tpl, "getConsumer", GetConsumer);

	Nan::SetPrototypeMethod(tpl, "GetDragable", GetDragable);
	Nan::SetPrototypeMethod(tpl, "getDragable", GetDragable);

	Nan::SetPrototypeMethod(tpl, "GetEstimatedRenderTime", GetEstimatedRenderTime);
	Nan::SetPrototypeMethod(tpl, "getEstimatedRenderTime", GetEstimatedRenderTime);

	Nan::SetPrototypeMethod(tpl, "GetMatrix", GetMatrix);
	Nan::SetPrototypeMethod(tpl, "getMatrix", GetMatrix);

	Nan::SetPrototypeMethod(tpl, "GetNextPath", GetNextPath);
	Nan::SetPrototypeMethod(tpl, "getNextPath", GetNextPath);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfConsumers", GetNumberOfConsumers);
	Nan::SetPrototypeMethod(tpl, "getNumberOfConsumers", GetNumberOfConsumers);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPaths", GetNumberOfPaths);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPaths", GetNumberOfPaths);

	Nan::SetPrototypeMethod(tpl, "GetPickable", GetPickable);
	Nan::SetPrototypeMethod(tpl, "getPickable", GetPickable);

	Nan::SetPrototypeMethod(tpl, "GetPropertyKeys", GetPropertyKeys);
	Nan::SetPrototypeMethod(tpl, "getPropertyKeys", GetPropertyKeys);

	Nan::SetPrototypeMethod(tpl, "GetRenderTimeMultiplier", GetRenderTimeMultiplier);
	Nan::SetPrototypeMethod(tpl, "getRenderTimeMultiplier", GetRenderTimeMultiplier);

	Nan::SetPrototypeMethod(tpl, "GetVisibility", GetVisibility);
	Nan::SetPrototypeMethod(tpl, "getVisibility", GetVisibility);

	Nan::SetPrototypeMethod(tpl, "GetVolumes", GetVolumes);
	Nan::SetPrototypeMethod(tpl, "getVolumes", GetVolumes);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "InitPathTraversal", InitPathTraversal);
	Nan::SetPrototypeMethod(tpl, "initPathTraversal", InitPathTraversal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsConsumer", IsConsumer);
	Nan::SetPrototypeMethod(tpl, "isConsumer", IsConsumer);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Pick", Pick);
	Nan::SetPrototypeMethod(tpl, "pick", Pick);

	Nan::SetPrototypeMethod(tpl, "PickableOff", PickableOff);
	Nan::SetPrototypeMethod(tpl, "pickableOff", PickableOff);

	Nan::SetPrototypeMethod(tpl, "PickableOn", PickableOn);
	Nan::SetPrototypeMethod(tpl, "pickableOn", PickableOn);

	Nan::SetPrototypeMethod(tpl, "PokeMatrix", PokeMatrix);
	Nan::SetPrototypeMethod(tpl, "pokeMatrix", PokeMatrix);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RemoveConsumer", RemoveConsumer);
	Nan::SetPrototypeMethod(tpl, "removeConsumer", RemoveConsumer);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderVolumetricGeometry", RenderVolumetricGeometry);
	Nan::SetPrototypeMethod(tpl, "renderVolumetricGeometry", RenderVolumetricGeometry);

	Nan::SetPrototypeMethod(tpl, "RestoreEstimatedRenderTime", RestoreEstimatedRenderTime);
	Nan::SetPrototypeMethod(tpl, "restoreEstimatedRenderTime", RestoreEstimatedRenderTime);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAllocatedRenderTime", SetAllocatedRenderTime);
	Nan::SetPrototypeMethod(tpl, "setAllocatedRenderTime", SetAllocatedRenderTime);

	Nan::SetPrototypeMethod(tpl, "SetDragable", SetDragable);
	Nan::SetPrototypeMethod(tpl, "setDragable", SetDragable);

	Nan::SetPrototypeMethod(tpl, "SetEstimatedRenderTime", SetEstimatedRenderTime);
	Nan::SetPrototypeMethod(tpl, "setEstimatedRenderTime", SetEstimatedRenderTime);

	Nan::SetPrototypeMethod(tpl, "SetPickable", SetPickable);
	Nan::SetPrototypeMethod(tpl, "setPickable", SetPickable);

	Nan::SetPrototypeMethod(tpl, "SetPropertyKeys", SetPropertyKeys);
	Nan::SetPrototypeMethod(tpl, "setPropertyKeys", SetPropertyKeys);

	Nan::SetPrototypeMethod(tpl, "SetRenderTimeMultiplier", SetRenderTimeMultiplier);
	Nan::SetPrototypeMethod(tpl, "setRenderTimeMultiplier", SetRenderTimeMultiplier);

	Nan::SetPrototypeMethod(tpl, "SetVisibility", SetVisibility);
	Nan::SetPrototypeMethod(tpl, "setVisibility", SetVisibility);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "UseBoundsOff", UseBoundsOff);
	Nan::SetPrototypeMethod(tpl, "useBoundsOff", UseBoundsOff);

	Nan::SetPrototypeMethod(tpl, "UseBoundsOn", UseBoundsOn);
	Nan::SetPrototypeMethod(tpl, "useBoundsOn", UseBoundsOn);

	Nan::SetPrototypeMethod(tpl, "VisibilityOff", VisibilityOff);
	Nan::SetPrototypeMethod(tpl, "visibilityOff", VisibilityOff);

	Nan::SetPrototypeMethod(tpl, "VisibilityOn", VisibilityOn);
	Nan::SetPrototypeMethod(tpl, "visibilityOn", VisibilityOn);

}

void VtkPropWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(strcmp(*s, "__nowrap" ))
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPropWrap::AddConsumer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddConsumer(
			(vtkObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::AddEstimatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkViewportWrap *a1 = ObjectWrap::Unwrap<VtkViewportWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddEstimatedRenderTime(
				info[0]->NumberValue(),
				(vtkViewport *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::BuildPaths(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAssemblyPathsWrap *a0 = ObjectWrap::Unwrap<VtkAssemblyPathsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkAssemblyPathWrap *a1 = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->BuildPaths(
				(vtkAssemblyPaths *) a0->native.GetPointer(),
				(vtkAssemblyPath *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::DragableOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DragableOff();
}

void VtkPropWrap::DragableOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DragableOn();
}

void VtkPropWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkPropWrap::GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkPropWrap::GetAllocatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAllocatedRenderTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPropWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPropWrap::GetConsumer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetConsumer(
			info[0]->Int32Value()
		);
		const int argc = 1;
		v8::Local<v8::Value> argv[argc] =
			{ Nan::New("__nowrap").ToLocalChecked() };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkObjectWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
		VtkObjectWrap *w = new VtkObjectWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::GetDragable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDragable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPropWrap::GetEstimatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetEstimatedRenderTime(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEstimatedRenderTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPropWrap::GetMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	vtkMatrix4x4 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMatrix();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMatrix4x4Wrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPropWrap::GetNextPath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	vtkAssemblyPath * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextPath();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAssemblyPathWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkAssemblyPathWrap *w = new VtkAssemblyPathWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPropWrap::GetNumberOfConsumers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfConsumers();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPropWrap::GetNumberOfPaths(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPaths();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPropWrap::GetPickable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPropWrap::GetPropertyKeys(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	vtkInformation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPropertyKeys();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkInformationWrap *w = new VtkInformationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPropWrap::GetRenderTimeMultiplier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderTimeMultiplier();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPropWrap::GetVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPropWrap::GetVolumes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetVolumes(
			(vtkPropCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPropWrap::InitPathTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitPathTraversal();
}

void VtkPropWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
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

void VtkPropWrap::IsConsumer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsConsumer(
			(vtkObject *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	vtkProp * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkPropWrap *w = new VtkPropWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPropWrap::Pick(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Pick();
}

void VtkPropWrap::PickableOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickableOff();
}

void VtkPropWrap::PickableOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickableOn();
}

void VtkPropWrap::PokeMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PokeMatrix(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
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

void VtkPropWrap::RemoveConsumer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveConsumer(
			(vtkObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
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

void VtkPropWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkPropWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
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

void VtkPropWrap::RenderVolumetricGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderVolumetricGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::RestoreEstimatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RestoreEstimatedRenderTime();
}

void VtkPropWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProp * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		const int argc = 1;
		v8::Local<v8::Value> argv[argc] =
			{ Nan::New("__nowrap").ToLocalChecked() };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkPropWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
		VtkPropWrap *w = new VtkPropWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::SetAllocatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkViewportWrap *a1 = ObjectWrap::Unwrap<VtkViewportWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAllocatedRenderTime(
				info[0]->NumberValue(),
				(vtkViewport *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::SetDragable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDragable(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::SetEstimatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEstimatedRenderTime(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::SetPickable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPickable(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::SetPropertyKeys(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPropertyKeys(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::SetRenderTimeMultiplier(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderTimeMultiplier(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::SetVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVisibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkPropWrap::UseBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseBoundsOff();
}

void VtkPropWrap::UseBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseBoundsOn();
}

void VtkPropWrap::VisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VisibilityOff();
}

void VtkPropWrap::VisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropWrap *wrapper = ObjectWrap::Unwrap<VtkPropWrap>(info.Holder());
	vtkProp *native = (vtkProp *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->VisibilityOn();
}

