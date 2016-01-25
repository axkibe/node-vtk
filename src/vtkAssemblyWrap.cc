/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkProp3DWrap.h"
#include "vtkAssemblyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkProp3DCollectionWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkViewportWrap.h"
#include "vtkWindowWrap.h"
#include "vtkAssemblyPathWrap.h"
#include "vtkPropWrap.h"
#include "vtkAssemblyPathsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAssemblyWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkAssemblyWrap::ptpl;

VtkAssemblyWrap::VtkAssemblyWrap()
{ }

VtkAssemblyWrap::VtkAssemblyWrap(vtkSmartPointer<vtkAssembly> _native)
{ native = _native; }

VtkAssemblyWrap::~VtkAssemblyWrap()
{ }

void VtkAssemblyWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkProp3DWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkProp3DWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkAssemblyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkAssembly").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Assembly").ToLocalChecked(),tpl->GetFunction());
}

void VtkAssemblyWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddPart", AddPart);
	Nan::SetPrototypeMethod(tpl, "addPart", AddPart);

	Nan::SetPrototypeMethod(tpl, "BuildPaths", BuildPaths);
	Nan::SetPrototypeMethod(tpl, "buildPaths", BuildPaths);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNextPath", GetNextPath);
	Nan::SetPrototypeMethod(tpl, "getNextPath", GetNextPath);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPaths", GetNumberOfPaths);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPaths", GetNumberOfPaths);

	Nan::SetPrototypeMethod(tpl, "GetParts", GetParts);
	Nan::SetPrototypeMethod(tpl, "getParts", GetParts);

	Nan::SetPrototypeMethod(tpl, "GetVolumes", GetVolumes);
	Nan::SetPrototypeMethod(tpl, "getVolumes", GetVolumes);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "InitPathTraversal", InitPathTraversal);
	Nan::SetPrototypeMethod(tpl, "initPathTraversal", InitPathTraversal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RemovePart", RemovePart);
	Nan::SetPrototypeMethod(tpl, "removePart", RemovePart);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderVolumetricGeometry", RenderVolumetricGeometry);
	Nan::SetPrototypeMethod(tpl, "renderVolumetricGeometry", RenderVolumetricGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

}

void VtkAssemblyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAssembly> native = vtkSmartPointer<vtkAssembly>::New();
		VtkAssemblyWrap* obj = new VtkAssemblyWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAssemblyWrap::AddPart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkProp3DWrap *a0 = ObjectWrap::Unwrap<VtkProp3DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddPart(
			(vtkProp3D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssemblyWrap::BuildPaths(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
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

void VtkAssemblyWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
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

void VtkAssemblyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAssemblyWrap::GetNextPath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	vtkAssemblyPath * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextPath();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAssemblyPathWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssemblyPathWrap *w = new VtkAssemblyPathWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssemblyWrap::GetNumberOfPaths(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPaths();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAssemblyWrap::GetParts(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	vtkProp3DCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParts();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkProp3DCollectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProp3DCollectionWrap *w = new VtkProp3DCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssemblyWrap::GetVolumes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
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

void VtkAssemblyWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAssemblyWrap::InitPathTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitPathTraversal();
}

void VtkAssemblyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
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

void VtkAssemblyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	vtkAssembly * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAssemblyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssemblyWrap *w = new VtkAssemblyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssemblyWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
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

void VtkAssemblyWrap::RemovePart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkProp3DWrap *a0 = ObjectWrap::Unwrap<VtkProp3DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemovePart(
			(vtkProp3D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssemblyWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
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

void VtkAssemblyWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
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

void VtkAssemblyWrap::RenderVolumetricGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
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

void VtkAssemblyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAssembly * r;
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
			Nan::New<v8::Function>(VtkAssemblyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAssemblyWrap *w = new VtkAssemblyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssemblyWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
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
