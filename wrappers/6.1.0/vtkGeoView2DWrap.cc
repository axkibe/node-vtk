/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRenderViewWrap.h"
#include "vtkGeoView2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkGeoTerrain2DWrap.h"
#include "vtkAbstractTransformWrap.h"
#include "vtkViewThemeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGeoView2DWrap::ptpl;

VtkGeoView2DWrap::VtkGeoView2DWrap()
{ }

VtkGeoView2DWrap::VtkGeoView2DWrap(vtkSmartPointer<vtkGeoView2D> _native)
{ native = _native; }

VtkGeoView2DWrap::~VtkGeoView2DWrap()
{ }

void VtkGeoView2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoView2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoView2D").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoView2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoView2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderViewWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderViewWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoView2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ApplyViewTheme", ApplyViewTheme);
	Nan::SetPrototypeMethod(tpl, "applyViewTheme", ApplyViewTheme);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSurface", GetSurface);
	Nan::SetPrototypeMethod(tpl, "getSurface", GetSurface);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSurface", SetSurface);
	Nan::SetPrototypeMethod(tpl, "setSurface", SetSurface);

	ptpl.Reset( tpl );
}

void VtkGeoView2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoView2D> native = vtkSmartPointer<vtkGeoView2D>::New();
		VtkGeoView2DWrap* obj = new VtkGeoView2DWrap(native);
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

void VtkGeoView2DWrap::ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoView2DWrap *wrapper = ObjectWrap::Unwrap<VtkGeoView2DWrap>(info.Holder());
	vtkGeoView2D *native = (vtkGeoView2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewThemeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewThemeWrap *a0 = ObjectWrap::Unwrap<VtkViewThemeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ApplyViewTheme(
			(vtkViewTheme *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoView2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoView2DWrap *wrapper = ObjectWrap::Unwrap<VtkGeoView2DWrap>(info.Holder());
	vtkGeoView2D *native = (vtkGeoView2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoView2DWrap::GetSurface(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoView2DWrap *wrapper = ObjectWrap::Unwrap<VtkGeoView2DWrap>(info.Holder());
	vtkGeoView2D *native = (vtkGeoView2D *)wrapper->native.GetPointer();
	vtkGeoTerrain2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSurface();
	VtkGeoTerrain2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoTerrain2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoTerrain2DWrap *w = new VtkGeoTerrain2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoView2DWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoView2DWrap *wrapper = ObjectWrap::Unwrap<VtkGeoView2DWrap>(info.Holder());
	vtkGeoView2D *native = (vtkGeoView2D *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransform();
	VtkAbstractTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoView2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoView2DWrap *wrapper = ObjectWrap::Unwrap<VtkGeoView2DWrap>(info.Holder());
	vtkGeoView2D *native = (vtkGeoView2D *)wrapper->native.GetPointer();
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

void VtkGeoView2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoView2DWrap *wrapper = ObjectWrap::Unwrap<VtkGeoView2DWrap>(info.Holder());
	vtkGeoView2D *native = (vtkGeoView2D *)wrapper->native.GetPointer();
	vtkGeoView2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGeoView2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoView2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoView2DWrap *w = new VtkGeoView2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoView2DWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoView2DWrap *wrapper = ObjectWrap::Unwrap<VtkGeoView2DWrap>(info.Holder());
	vtkGeoView2D *native = (vtkGeoView2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Render();
}

void VtkGeoView2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoView2DWrap *wrapper = ObjectWrap::Unwrap<VtkGeoView2DWrap>(info.Holder());
	vtkGeoView2D *native = (vtkGeoView2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoView2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkGeoView2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoView2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoView2DWrap *w = new VtkGeoView2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoView2DWrap::SetSurface(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoView2DWrap *wrapper = ObjectWrap::Unwrap<VtkGeoView2DWrap>(info.Holder());
	vtkGeoView2D *native = (vtkGeoView2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoTerrain2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoTerrain2DWrap *a0 = ObjectWrap::Unwrap<VtkGeoTerrain2DWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSurface(
			(vtkGeoTerrain2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

