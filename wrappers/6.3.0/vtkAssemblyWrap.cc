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
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAssemblyWrap::ptpl;

VtkAssemblyWrap::VtkAssemblyWrap()
{ }

VtkAssemblyWrap::VtkAssemblyWrap(vtkSmartPointer<vtkAssembly> _native)
{ native = _native; }

VtkAssemblyWrap::~VtkAssemblyWrap()
{ }

void VtkAssemblyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAssembly").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Assembly").ToLocalChecked(), ConstructorGetter);
}

void VtkAssemblyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAssemblyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkProp3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkProp3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAssemblyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddPart", AddPart);
	Nan::SetPrototypeMethod(tpl, "addPart", AddPart);

	Nan::SetPrototypeMethod(tpl, "BuildPaths", BuildPaths);
	Nan::SetPrototypeMethod(tpl, "buildPaths", BuildPaths);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

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

#ifdef VTK_NODE_PLUS_VTKASSEMBLYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKASSEMBLYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
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
		VtkAssemblyWrap* obj = new VtkAssemblyWrap(native);
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

void VtkAssemblyWrap::AddPart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkProp3DWrap::ptpl))->HasInstance(info[0]))
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAssemblyPathsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAssemblyPathsWrap *a0 = ObjectWrap::Unwrap<VtkAssemblyPathsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkAssemblyPathWrap::ptpl))->HasInstance(info[1]))
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

void VtkAssemblyWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
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
		native->GetBounds(
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
		native->GetBounds(
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
	r = native->GetBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
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
	VtkAssemblyPathWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAssemblyPathWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssemblyPathWrap *w = new VtkAssemblyPathWrap();
	w->native = r;
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
	VtkProp3DCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProp3DCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProp3DCollectionWrap *w = new VtkProp3DCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssemblyWrap::GetVolumes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropCollectionWrap::ptpl))->HasInstance(info[0]))
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
	VtkAssemblyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAssemblyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssemblyWrap *w = new VtkAssemblyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssemblyWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
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

void VtkAssemblyWrap::RemovePart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkProp3DWrap::ptpl))->HasInstance(info[0]))
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

void VtkAssemblyWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
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

void VtkAssemblyWrap::RenderVolumetricGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyWrap>(info.Holder());
	vtkAssembly *native = (vtkAssembly *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
		VtkAssemblyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAssemblyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAssemblyWrap *w = new VtkAssemblyWrap();
		w->native = r;
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

