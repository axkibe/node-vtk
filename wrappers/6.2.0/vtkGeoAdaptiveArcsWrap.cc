/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkGeoAdaptiveArcsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGeoAdaptiveArcsWrap::ptpl;

VtkGeoAdaptiveArcsWrap::VtkGeoAdaptiveArcsWrap()
{ }

VtkGeoAdaptiveArcsWrap::VtkGeoAdaptiveArcsWrap(vtkSmartPointer<vtkGeoAdaptiveArcs> _native)
{ native = _native; }

VtkGeoAdaptiveArcsWrap::~VtkGeoAdaptiveArcsWrap()
{ }

void VtkGeoAdaptiveArcsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoAdaptiveArcs").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoAdaptiveArcs").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoAdaptiveArcsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoAdaptiveArcsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoAdaptiveArcsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGlobeRadius", GetGlobeRadius);
	Nan::SetPrototypeMethod(tpl, "getGlobeRadius", GetGlobeRadius);

	Nan::SetPrototypeMethod(tpl, "GetMaximumPixelSeparation", GetMaximumPixelSeparation);
	Nan::SetPrototypeMethod(tpl, "getMaximumPixelSeparation", GetMaximumPixelSeparation);

	Nan::SetPrototypeMethod(tpl, "GetMinimumPixelSeparation", GetMinimumPixelSeparation);
	Nan::SetPrototypeMethod(tpl, "getMinimumPixelSeparation", GetMinimumPixelSeparation);

	Nan::SetPrototypeMethod(tpl, "GetRenderer", GetRenderer);
	Nan::SetPrototypeMethod(tpl, "getRenderer", GetRenderer);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGlobeRadius", SetGlobeRadius);
	Nan::SetPrototypeMethod(tpl, "setGlobeRadius", SetGlobeRadius);

	Nan::SetPrototypeMethod(tpl, "SetMaximumPixelSeparation", SetMaximumPixelSeparation);
	Nan::SetPrototypeMethod(tpl, "setMaximumPixelSeparation", SetMaximumPixelSeparation);

	Nan::SetPrototypeMethod(tpl, "SetMinimumPixelSeparation", SetMinimumPixelSeparation);
	Nan::SetPrototypeMethod(tpl, "setMinimumPixelSeparation", SetMinimumPixelSeparation);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	ptpl.Reset( tpl );
}

void VtkGeoAdaptiveArcsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoAdaptiveArcs> native = vtkSmartPointer<vtkGeoAdaptiveArcs>::New();
		VtkGeoAdaptiveArcsWrap* obj = new VtkGeoAdaptiveArcsWrap(native);
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

void VtkGeoAdaptiveArcsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAdaptiveArcsWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAdaptiveArcsWrap>(info.Holder());
	vtkGeoAdaptiveArcs *native = (vtkGeoAdaptiveArcs *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoAdaptiveArcsWrap::GetGlobeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAdaptiveArcsWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAdaptiveArcsWrap>(info.Holder());
	vtkGeoAdaptiveArcs *native = (vtkGeoAdaptiveArcs *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlobeRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoAdaptiveArcsWrap::GetMaximumPixelSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAdaptiveArcsWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAdaptiveArcsWrap>(info.Holder());
	vtkGeoAdaptiveArcs *native = (vtkGeoAdaptiveArcs *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumPixelSeparation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoAdaptiveArcsWrap::GetMinimumPixelSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAdaptiveArcsWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAdaptiveArcsWrap>(info.Holder());
	vtkGeoAdaptiveArcs *native = (vtkGeoAdaptiveArcs *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinimumPixelSeparation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoAdaptiveArcsWrap::GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAdaptiveArcsWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAdaptiveArcsWrap>(info.Holder());
	vtkGeoAdaptiveArcs *native = (vtkGeoAdaptiveArcs *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderer();
		VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoAdaptiveArcsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAdaptiveArcsWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAdaptiveArcsWrap>(info.Holder());
	vtkGeoAdaptiveArcs *native = (vtkGeoAdaptiveArcs *)wrapper->native.GetPointer();
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

void VtkGeoAdaptiveArcsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAdaptiveArcsWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAdaptiveArcsWrap>(info.Holder());
	vtkGeoAdaptiveArcs *native = (vtkGeoAdaptiveArcs *)wrapper->native.GetPointer();
	vtkGeoAdaptiveArcs * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGeoAdaptiveArcsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoAdaptiveArcsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoAdaptiveArcsWrap *w = new VtkGeoAdaptiveArcsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoAdaptiveArcsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAdaptiveArcsWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAdaptiveArcsWrap>(info.Holder());
	vtkGeoAdaptiveArcs *native = (vtkGeoAdaptiveArcs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoAdaptiveArcs * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGeoAdaptiveArcsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoAdaptiveArcsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoAdaptiveArcsWrap *w = new VtkGeoAdaptiveArcsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAdaptiveArcsWrap::SetGlobeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAdaptiveArcsWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAdaptiveArcsWrap>(info.Holder());
	vtkGeoAdaptiveArcs *native = (vtkGeoAdaptiveArcs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGlobeRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAdaptiveArcsWrap::SetMaximumPixelSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAdaptiveArcsWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAdaptiveArcsWrap>(info.Holder());
	vtkGeoAdaptiveArcs *native = (vtkGeoAdaptiveArcs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumPixelSeparation(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAdaptiveArcsWrap::SetMinimumPixelSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAdaptiveArcsWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAdaptiveArcsWrap>(info.Holder());
	vtkGeoAdaptiveArcs *native = (vtkGeoAdaptiveArcs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinimumPixelSeparation(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAdaptiveArcsWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAdaptiveArcsWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAdaptiveArcsWrap>(info.Holder());
	vtkGeoAdaptiveArcs *native = (vtkGeoAdaptiveArcs *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

