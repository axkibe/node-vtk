/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkProp3DWrap.h"
#include "vtkImageSliceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageMapper3DWrap.h"
#include "vtkImagePropertyWrap.h"
#include "vtkPropWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkViewportWrap.h"
#include "vtkRendererWrap.h"
#include "vtkWindowWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageSliceWrap::ptpl;

VtkImageSliceWrap::VtkImageSliceWrap()
{ }

VtkImageSliceWrap::VtkImageSliceWrap(vtkSmartPointer<vtkImageSlice> _native)
{ native = _native; }

VtkImageSliceWrap::~VtkImageSliceWrap()
{ }

void VtkImageSliceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageSlice").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageSlice").ToLocalChecked(), ConstructorGetter);
}

void VtkImageSliceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageSliceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkProp3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkProp3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageSliceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetImages", GetImages);
	Nan::SetPrototypeMethod(tpl, "getImages", GetImages);

	Nan::SetPrototypeMethod(tpl, "GetMTime", GetMTime);
	Nan::SetPrototypeMethod(tpl, "getMTime", GetMTime);

	Nan::SetPrototypeMethod(tpl, "GetMapper", GetMapper);
	Nan::SetPrototypeMethod(tpl, "getMapper", GetMapper);

	Nan::SetPrototypeMethod(tpl, "GetMaxXBound", GetMaxXBound);
	Nan::SetPrototypeMethod(tpl, "getMaxXBound", GetMaxXBound);

	Nan::SetPrototypeMethod(tpl, "GetMaxYBound", GetMaxYBound);
	Nan::SetPrototypeMethod(tpl, "getMaxYBound", GetMaxYBound);

	Nan::SetPrototypeMethod(tpl, "GetMaxZBound", GetMaxZBound);
	Nan::SetPrototypeMethod(tpl, "getMaxZBound", GetMaxZBound);

	Nan::SetPrototypeMethod(tpl, "GetMinXBound", GetMinXBound);
	Nan::SetPrototypeMethod(tpl, "getMinXBound", GetMinXBound);

	Nan::SetPrototypeMethod(tpl, "GetMinYBound", GetMinYBound);
	Nan::SetPrototypeMethod(tpl, "getMinYBound", GetMinYBound);

	Nan::SetPrototypeMethod(tpl, "GetMinZBound", GetMinZBound);
	Nan::SetPrototypeMethod(tpl, "getMinZBound", GetMinZBound);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "GetRedrawMTime", GetRedrawMTime);
	Nan::SetPrototypeMethod(tpl, "getRedrawMTime", GetRedrawMTime);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMapper", SetMapper);
	Nan::SetPrototypeMethod(tpl, "setMapper", SetMapper);

	Nan::SetPrototypeMethod(tpl, "SetProperty", SetProperty);
	Nan::SetPrototypeMethod(tpl, "setProperty", SetProperty);

	Nan::SetPrototypeMethod(tpl, "SetStackedImagePass", SetStackedImagePass);
	Nan::SetPrototypeMethod(tpl, "setStackedImagePass", SetStackedImagePass);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

#ifdef VTK_NODE_PLUS_VTKIMAGESLICEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGESLICEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageSliceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageSlice> native = vtkSmartPointer<vtkImageSlice>::New();
		VtkImageSliceWrap* obj = new VtkImageSliceWrap(native);
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

void VtkImageSliceWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
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

void VtkImageSliceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageSliceWrap::GetImages(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetImages(
			(vtkPropCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceWrap::GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceWrap::GetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	vtkImageMapper3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMapper();
	VtkImageMapper3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageMapper3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageMapper3DWrap *w = new VtkImageMapper3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSliceWrap::GetMaxXBound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxXBound();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceWrap::GetMaxYBound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxYBound();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceWrap::GetMaxZBound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxZBound();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceWrap::GetMinXBound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinXBound();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceWrap::GetMinYBound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinYBound();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceWrap::GetMinZBound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinZBound();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	vtkImageProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProperty();
	VtkImagePropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImagePropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImagePropertyWrap *w = new VtkImagePropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSliceWrap::GetRedrawMTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRedrawMTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSliceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
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

void VtkImageSliceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	vtkImageSlice * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageSliceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageSliceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageSliceWrap *w = new VtkImageSliceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSliceWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
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

void VtkImageSliceWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Render(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
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

void VtkImageSliceWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
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

void VtkImageSliceWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
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

void VtkImageSliceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageSlice * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImageSliceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageSliceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageSliceWrap *w = new VtkImageSliceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceWrap::SetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageMapper3DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageMapper3DWrap *a0 = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMapper(
			(vtkImageMapper3D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceWrap::SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImagePropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImagePropertyWrap *a0 = ObjectWrap::Unwrap<VtkImagePropertyWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProperty(
			(vtkImageProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceWrap::SetStackedImagePass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStackedImagePass(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
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

void VtkImageSliceWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceWrap>(info.Holder());
	vtkImageSlice *native = (vtkImageSlice *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

