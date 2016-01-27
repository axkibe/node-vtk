/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRenderViewWrap.h"
#include "vtkGeoViewWrap.h"
#include "vtkObjectWrap.h"
#include "vtkGeoAlignedImageRepresentationWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkGeoInteractorStyleWrap.h"
#include "vtkGeoTerrainWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGeoViewWrap::ptpl;

VtkGeoViewWrap::VtkGeoViewWrap()
{ }

VtkGeoViewWrap::VtkGeoViewWrap(vtkSmartPointer<vtkGeoView> _native)
{ native = _native; }

VtkGeoViewWrap::~VtkGeoViewWrap()
{ }

void VtkGeoViewWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoView").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoView").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoViewWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoViewWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderViewWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderViewWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoViewWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddDefaultImageRepresentation", AddDefaultImageRepresentation);
	Nan::SetPrototypeMethod(tpl, "addDefaultImageRepresentation", AddDefaultImageRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGeoInteractorStyle", GetGeoInteractorStyle);
	Nan::SetPrototypeMethod(tpl, "getGeoInteractorStyle", GetGeoInteractorStyle);

	Nan::SetPrototypeMethod(tpl, "GetTerrain", GetTerrain);
	Nan::SetPrototypeMethod(tpl, "getTerrain", GetTerrain);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LockHeadingOff", LockHeadingOff);
	Nan::SetPrototypeMethod(tpl, "lockHeadingOff", LockHeadingOff);

	Nan::SetPrototypeMethod(tpl, "LockHeadingOn", LockHeadingOn);
	Nan::SetPrototypeMethod(tpl, "lockHeadingOn", LockHeadingOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PrepareForRendering", PrepareForRendering);
	Nan::SetPrototypeMethod(tpl, "prepareForRendering", PrepareForRendering);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGeoInteractorStyle", SetGeoInteractorStyle);
	Nan::SetPrototypeMethod(tpl, "setGeoInteractorStyle", SetGeoInteractorStyle);

	Nan::SetPrototypeMethod(tpl, "SetTerrain", SetTerrain);
	Nan::SetPrototypeMethod(tpl, "setTerrain", SetTerrain);

	ptpl.Reset( tpl );
}

void VtkGeoViewWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoView> native = vtkSmartPointer<vtkGeoView>::New();
		VtkGeoViewWrap* obj = new VtkGeoViewWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGeoViewWrap::AddDefaultImageRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoViewWrap *wrapper = ObjectWrap::Unwrap<VtkGeoViewWrap>(info.Holder());
	vtkGeoView *native = (vtkGeoView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		vtkGeoAlignedImageRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->AddDefaultImageRepresentation(
			(vtkImageData *) a0->native.GetPointer()
		);
			VtkGeoAlignedImageRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoAlignedImageRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoAlignedImageRepresentationWrap *w = new VtkGeoAlignedImageRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoViewWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoViewWrap *wrapper = ObjectWrap::Unwrap<VtkGeoViewWrap>(info.Holder());
	vtkGeoView *native = (vtkGeoView *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoViewWrap::GetGeoInteractorStyle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoViewWrap *wrapper = ObjectWrap::Unwrap<VtkGeoViewWrap>(info.Holder());
	vtkGeoView *native = (vtkGeoView *)wrapper->native.GetPointer();
	vtkGeoInteractorStyle * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGeoInteractorStyle();
		VtkGeoInteractorStyleWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoInteractorStyleWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoInteractorStyleWrap *w = new VtkGeoInteractorStyleWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoViewWrap::GetTerrain(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoViewWrap *wrapper = ObjectWrap::Unwrap<VtkGeoViewWrap>(info.Holder());
	vtkGeoView *native = (vtkGeoView *)wrapper->native.GetPointer();
	vtkGeoTerrain * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTerrain();
		VtkGeoTerrainWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoTerrainWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoTerrainWrap *w = new VtkGeoTerrainWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoViewWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoViewWrap *wrapper = ObjectWrap::Unwrap<VtkGeoViewWrap>(info.Holder());
	vtkGeoView *native = (vtkGeoView *)wrapper->native.GetPointer();
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

void VtkGeoViewWrap::LockHeadingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoViewWrap *wrapper = ObjectWrap::Unwrap<VtkGeoViewWrap>(info.Holder());
	vtkGeoView *native = (vtkGeoView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LockHeadingOff();
}

void VtkGeoViewWrap::LockHeadingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoViewWrap *wrapper = ObjectWrap::Unwrap<VtkGeoViewWrap>(info.Holder());
	vtkGeoView *native = (vtkGeoView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LockHeadingOn();
}

void VtkGeoViewWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoViewWrap *wrapper = ObjectWrap::Unwrap<VtkGeoViewWrap>(info.Holder());
	vtkGeoView *native = (vtkGeoView *)wrapper->native.GetPointer();
	vtkGeoView * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGeoViewWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoViewWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoViewWrap *w = new VtkGeoViewWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoViewWrap::PrepareForRendering(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoViewWrap *wrapper = ObjectWrap::Unwrap<VtkGeoViewWrap>(info.Holder());
	vtkGeoView *native = (vtkGeoView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PrepareForRendering();
}

void VtkGeoViewWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoViewWrap *wrapper = ObjectWrap::Unwrap<VtkGeoViewWrap>(info.Holder());
	vtkGeoView *native = (vtkGeoView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Render();
}

void VtkGeoViewWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoViewWrap *wrapper = ObjectWrap::Unwrap<VtkGeoViewWrap>(info.Holder());
	vtkGeoView *native = (vtkGeoView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoView * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGeoViewWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoViewWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoViewWrap *w = new VtkGeoViewWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoViewWrap::SetGeoInteractorStyle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoViewWrap *wrapper = ObjectWrap::Unwrap<VtkGeoViewWrap>(info.Holder());
	vtkGeoView *native = (vtkGeoView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoInteractorStyleWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoInteractorStyleWrap *a0 = ObjectWrap::Unwrap<VtkGeoInteractorStyleWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGeoInteractorStyle(
			(vtkGeoInteractorStyle *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoViewWrap::SetTerrain(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoViewWrap *wrapper = ObjectWrap::Unwrap<VtkGeoViewWrap>(info.Holder());
	vtkGeoView *native = (vtkGeoView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoTerrainWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoTerrainWrap *a0 = ObjectWrap::Unwrap<VtkGeoTerrainWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTerrain(
			(vtkGeoTerrain *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

