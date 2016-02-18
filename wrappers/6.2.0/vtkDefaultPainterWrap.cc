/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPainterWrap.h"
#include "vtkDefaultPainterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkScalarsToColorsPainterWrap.h"
#include "vtkClipPlanesPainterWrap.h"
#include "vtkDisplayListPainterWrap.h"
#include "vtkCompositePainterWrap.h"
#include "vtkCoincidentTopologyResolutionPainterWrap.h"
#include "vtkLightingPainterWrap.h"
#include "vtkRepresentationPainterWrap.h"
#include "vtkWindowWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDefaultPainterWrap::ptpl;

VtkDefaultPainterWrap::VtkDefaultPainterWrap()
{ }

VtkDefaultPainterWrap::VtkDefaultPainterWrap(vtkSmartPointer<vtkDefaultPainter> _native)
{ native = _native; }

VtkDefaultPainterWrap::~VtkDefaultPainterWrap()
{ }

void VtkDefaultPainterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDefaultPainter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DefaultPainter").ToLocalChecked(), ConstructorGetter);
}

void VtkDefaultPainterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDefaultPainterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPainterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPainterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDefaultPainterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClipPlanesPainter", GetClipPlanesPainter);
	Nan::SetPrototypeMethod(tpl, "getClipPlanesPainter", GetClipPlanesPainter);

	Nan::SetPrototypeMethod(tpl, "GetCoincidentTopologyResolutionPainter", GetCoincidentTopologyResolutionPainter);
	Nan::SetPrototypeMethod(tpl, "getCoincidentTopologyResolutionPainter", GetCoincidentTopologyResolutionPainter);

	Nan::SetPrototypeMethod(tpl, "GetCompositePainter", GetCompositePainter);
	Nan::SetPrototypeMethod(tpl, "getCompositePainter", GetCompositePainter);

	Nan::SetPrototypeMethod(tpl, "GetDelegatePainter", GetDelegatePainter);
	Nan::SetPrototypeMethod(tpl, "getDelegatePainter", GetDelegatePainter);

	Nan::SetPrototypeMethod(tpl, "GetDisplayListPainter", GetDisplayListPainter);
	Nan::SetPrototypeMethod(tpl, "getDisplayListPainter", GetDisplayListPainter);

	Nan::SetPrototypeMethod(tpl, "GetLightingPainter", GetLightingPainter);
	Nan::SetPrototypeMethod(tpl, "getLightingPainter", GetLightingPainter);

	Nan::SetPrototypeMethod(tpl, "GetRepresentationPainter", GetRepresentationPainter);
	Nan::SetPrototypeMethod(tpl, "getRepresentationPainter", GetRepresentationPainter);

	Nan::SetPrototypeMethod(tpl, "GetScalarsToColorsPainter", GetScalarsToColorsPainter);
	Nan::SetPrototypeMethod(tpl, "getScalarsToColorsPainter", GetScalarsToColorsPainter);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetClipPlanesPainter", SetClipPlanesPainter);
	Nan::SetPrototypeMethod(tpl, "setClipPlanesPainter", SetClipPlanesPainter);

	Nan::SetPrototypeMethod(tpl, "SetCoincidentTopologyResolutionPainter", SetCoincidentTopologyResolutionPainter);
	Nan::SetPrototypeMethod(tpl, "setCoincidentTopologyResolutionPainter", SetCoincidentTopologyResolutionPainter);

	Nan::SetPrototypeMethod(tpl, "SetCompositePainter", SetCompositePainter);
	Nan::SetPrototypeMethod(tpl, "setCompositePainter", SetCompositePainter);

	Nan::SetPrototypeMethod(tpl, "SetDelegatePainter", SetDelegatePainter);
	Nan::SetPrototypeMethod(tpl, "setDelegatePainter", SetDelegatePainter);

	Nan::SetPrototypeMethod(tpl, "SetDisplayListPainter", SetDisplayListPainter);
	Nan::SetPrototypeMethod(tpl, "setDisplayListPainter", SetDisplayListPainter);

	Nan::SetPrototypeMethod(tpl, "SetLightingPainter", SetLightingPainter);
	Nan::SetPrototypeMethod(tpl, "setLightingPainter", SetLightingPainter);

	Nan::SetPrototypeMethod(tpl, "SetRepresentationPainter", SetRepresentationPainter);
	Nan::SetPrototypeMethod(tpl, "setRepresentationPainter", SetRepresentationPainter);

	Nan::SetPrototypeMethod(tpl, "SetScalarsToColorsPainter", SetScalarsToColorsPainter);
	Nan::SetPrototypeMethod(tpl, "setScalarsToColorsPainter", SetScalarsToColorsPainter);

	Nan::SetPrototypeMethod(tpl, "UpdateBounds", UpdateBounds);
	Nan::SetPrototypeMethod(tpl, "updateBounds", UpdateBounds);

#ifdef VTK_NODE_PLUS_VTKDEFAULTPAINTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDEFAULTPAINTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkDefaultPainterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDefaultPainter> native = vtkSmartPointer<vtkDefaultPainter>::New();
		VtkDefaultPainterWrap* obj = new VtkDefaultPainterWrap(native);
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

void VtkDefaultPainterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDefaultPainterWrap::GetClipPlanesPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	vtkClipPlanesPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipPlanesPainter();
	VtkClipPlanesPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkClipPlanesPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkClipPlanesPainterWrap *w = new VtkClipPlanesPainterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDefaultPainterWrap::GetCoincidentTopologyResolutionPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	vtkCoincidentTopologyResolutionPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoincidentTopologyResolutionPainter();
	VtkCoincidentTopologyResolutionPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCoincidentTopologyResolutionPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCoincidentTopologyResolutionPainterWrap *w = new VtkCoincidentTopologyResolutionPainterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDefaultPainterWrap::GetCompositePainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	vtkCompositePainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompositePainter();
	VtkCompositePainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositePainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositePainterWrap *w = new VtkCompositePainterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDefaultPainterWrap::GetDelegatePainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	vtkPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDelegatePainter();
	VtkPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPainterWrap *w = new VtkPainterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDefaultPainterWrap::GetDisplayListPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	vtkDisplayListPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplayListPainter();
	VtkDisplayListPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDisplayListPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDisplayListPainterWrap *w = new VtkDisplayListPainterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDefaultPainterWrap::GetLightingPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	vtkLightingPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLightingPainter();
	VtkLightingPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLightingPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLightingPainterWrap *w = new VtkLightingPainterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDefaultPainterWrap::GetRepresentationPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	vtkRepresentationPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRepresentationPainter();
	VtkRepresentationPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRepresentationPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRepresentationPainterWrap *w = new VtkRepresentationPainterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDefaultPainterWrap::GetScalarsToColorsPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	vtkScalarsToColorsPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarsToColorsPainter();
	VtkScalarsToColorsPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarsToColorsPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarsToColorsPainterWrap *w = new VtkScalarsToColorsPainterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDefaultPainterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
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

void VtkDefaultPainterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	vtkDefaultPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDefaultPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDefaultPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDefaultPainterWrap *w = new VtkDefaultPainterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDefaultPainterWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
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

void VtkDefaultPainterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDefaultPainter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkDefaultPainterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDefaultPainterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDefaultPainterWrap *w = new VtkDefaultPainterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDefaultPainterWrap::SetClipPlanesPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkClipPlanesPainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkClipPlanesPainterWrap *a0 = ObjectWrap::Unwrap<VtkClipPlanesPainterWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClipPlanesPainter(
			(vtkClipPlanesPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDefaultPainterWrap::SetCoincidentTopologyResolutionPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCoincidentTopologyResolutionPainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCoincidentTopologyResolutionPainterWrap *a0 = ObjectWrap::Unwrap<VtkCoincidentTopologyResolutionPainterWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCoincidentTopologyResolutionPainter(
			(vtkCoincidentTopologyResolutionPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDefaultPainterWrap::SetCompositePainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompositePainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompositePainterWrap *a0 = ObjectWrap::Unwrap<VtkCompositePainterWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompositePainter(
			(vtkCompositePainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDefaultPainterWrap::SetDelegatePainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPainterWrap *a0 = ObjectWrap::Unwrap<VtkPainterWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDelegatePainter(
			(vtkPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDefaultPainterWrap::SetDisplayListPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDisplayListPainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDisplayListPainterWrap *a0 = ObjectWrap::Unwrap<VtkDisplayListPainterWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplayListPainter(
			(vtkDisplayListPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDefaultPainterWrap::SetLightingPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkLightingPainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkLightingPainterWrap *a0 = ObjectWrap::Unwrap<VtkLightingPainterWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLightingPainter(
			(vtkLightingPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDefaultPainterWrap::SetRepresentationPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRepresentationPainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRepresentationPainterWrap *a0 = ObjectWrap::Unwrap<VtkRepresentationPainterWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentationPainter(
			(vtkRepresentationPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDefaultPainterWrap::SetScalarsToColorsPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarsToColorsPainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarsToColorsPainterWrap *a0 = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarsToColorsPainter(
			(vtkScalarsToColorsPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDefaultPainterWrap::UpdateBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPainterWrap>(info.Holder());
	vtkDefaultPainter *native = (vtkDefaultPainter *)wrapper->native.GetPointer();
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
		native->UpdateBounds(
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
		native->UpdateBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

