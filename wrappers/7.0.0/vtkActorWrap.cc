/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkProp3DWrap.h"
#include "vtkActorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkViewportWrap.h"
#include "vtkRendererWrap.h"
#include "vtkMapperWrap.h"
#include "vtkPropWrap.h"
#include "vtkWindowWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkTextureWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkActorWrap::ptpl;

VtkActorWrap::VtkActorWrap()
{ }

VtkActorWrap::VtkActorWrap(vtkSmartPointer<vtkActor> _native)
{ native = _native; }

VtkActorWrap::~VtkActorWrap()
{ }

void VtkActorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkActor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Actor").ToLocalChecked(), ConstructorGetter);
}

void VtkActorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkActorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkProp3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkProp3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkActorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ApplyProperties", ApplyProperties);
	Nan::SetPrototypeMethod(tpl, "applyProperties", ApplyProperties);

	Nan::SetPrototypeMethod(tpl, "ForceOpaqueOff", ForceOpaqueOff);
	Nan::SetPrototypeMethod(tpl, "forceOpaqueOff", ForceOpaqueOff);

	Nan::SetPrototypeMethod(tpl, "ForceOpaqueOn", ForceOpaqueOn);
	Nan::SetPrototypeMethod(tpl, "forceOpaqueOn", ForceOpaqueOn);

	Nan::SetPrototypeMethod(tpl, "ForceTranslucentOff", ForceTranslucentOff);
	Nan::SetPrototypeMethod(tpl, "forceTranslucentOff", ForceTranslucentOff);

	Nan::SetPrototypeMethod(tpl, "ForceTranslucentOn", ForceTranslucentOn);
	Nan::SetPrototypeMethod(tpl, "forceTranslucentOn", ForceTranslucentOn);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetBackfaceProperty", GetBackfaceProperty);
	Nan::SetPrototypeMethod(tpl, "getBackfaceProperty", GetBackfaceProperty);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetForceOpaque", GetForceOpaque);
	Nan::SetPrototypeMethod(tpl, "getForceOpaque", GetForceOpaque);

	Nan::SetPrototypeMethod(tpl, "GetForceTranslucent", GetForceTranslucent);
	Nan::SetPrototypeMethod(tpl, "getForceTranslucent", GetForceTranslucent);

	Nan::SetPrototypeMethod(tpl, "GetMapper", GetMapper);
	Nan::SetPrototypeMethod(tpl, "getMapper", GetMapper);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "GetSupportsSelection", GetSupportsSelection);
	Nan::SetPrototypeMethod(tpl, "getSupportsSelection", GetSupportsSelection);

	Nan::SetPrototypeMethod(tpl, "GetTexture", GetTexture);
	Nan::SetPrototypeMethod(tpl, "getTexture", GetTexture);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MakeProperty", MakeProperty);
	Nan::SetPrototypeMethod(tpl, "makeProperty", MakeProperty);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBackfaceProperty", SetBackfaceProperty);
	Nan::SetPrototypeMethod(tpl, "setBackfaceProperty", SetBackfaceProperty);

	Nan::SetPrototypeMethod(tpl, "SetForceOpaque", SetForceOpaque);
	Nan::SetPrototypeMethod(tpl, "setForceOpaque", SetForceOpaque);

	Nan::SetPrototypeMethod(tpl, "SetForceTranslucent", SetForceTranslucent);
	Nan::SetPrototypeMethod(tpl, "setForceTranslucent", SetForceTranslucent);

	Nan::SetPrototypeMethod(tpl, "SetMapper", SetMapper);
	Nan::SetPrototypeMethod(tpl, "setMapper", SetMapper);

	Nan::SetPrototypeMethod(tpl, "SetProperty", SetProperty);
	Nan::SetPrototypeMethod(tpl, "setProperty", SetProperty);

	Nan::SetPrototypeMethod(tpl, "SetTexture", SetTexture);
	Nan::SetPrototypeMethod(tpl, "setTexture", SetTexture);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkActorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkActor> native = vtkSmartPointer<vtkActor>::New();
		VtkActorWrap* obj = new VtkActorWrap(native);
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

void VtkActorWrap::ApplyProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ApplyProperties();
}

void VtkActorWrap::ForceOpaqueOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForceOpaqueOff();
}

void VtkActorWrap::ForceOpaqueOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForceOpaqueOn();
}

void VtkActorWrap::ForceTranslucentOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForceTranslucentOff();
}

void VtkActorWrap::ForceTranslucentOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForceTranslucentOn();
}

void VtkActorWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
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

void VtkActorWrap::GetBackfaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBackfaceProperty();
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

void VtkActorWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
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
	Nan::ThrowError("Parameter mismatch");
}

void VtkActorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkActorWrap::GetForceOpaque(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetForceOpaque();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkActorWrap::GetForceTranslucent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetForceTranslucent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkActorWrap::GetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	vtkMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMapper();
		VtkMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMapperWrap *w = new VtkMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkActorWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
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

void VtkActorWrap::GetSupportsSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSupportsSelection();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkActorWrap::GetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	vtkTexture * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTexture();
		VtkTextureWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextureWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextureWrap *w = new VtkTextureWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkActorWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkActorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
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

void VtkActorWrap::MakeProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->MakeProperty();
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

void VtkActorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	vtkActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkActorWrap *w = new VtkActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkActorWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
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

void VtkActorWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkMapperWrap::ptpl))->HasInstance(info[1]))
		{
			VtkMapperWrap *a1 = ObjectWrap::Unwrap<VtkMapperWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkMapper *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkActorWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
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

void VtkActorWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
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

void VtkActorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkActor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkActorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkActorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkActorWrap *w = new VtkActorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkActorWrap::SetBackfaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBackfaceProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkActorWrap::SetForceOpaque(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetForceOpaque(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkActorWrap::SetForceTranslucent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetForceTranslucent(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkActorWrap::SetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMapperWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMapperWrap *a0 = ObjectWrap::Unwrap<VtkMapperWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMapper(
			(vtkMapper *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkActorWrap::SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
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

void VtkActorWrap::SetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextureWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextureWrap *a0 = ObjectWrap::Unwrap<VtkTextureWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTexture(
			(vtkTexture *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkActorWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkActorWrap *wrapper = ObjectWrap::Unwrap<VtkActorWrap>(info.Holder());
	vtkActor *native = (vtkActor *)wrapper->native.GetPointer();
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

