/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageProcessingPassWrap.h"
#include "vtkSobelGradientMagnitudePassWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkWindowWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSobelGradientMagnitudePassWrap::ptpl;

VtkSobelGradientMagnitudePassWrap::VtkSobelGradientMagnitudePassWrap()
{ }

VtkSobelGradientMagnitudePassWrap::VtkSobelGradientMagnitudePassWrap(vtkSmartPointer<vtkSobelGradientMagnitudePass> _native)
{ native = _native; }

VtkSobelGradientMagnitudePassWrap::~VtkSobelGradientMagnitudePassWrap()
{ }

void VtkSobelGradientMagnitudePassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSobelGradientMagnitudePass").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SobelGradientMagnitudePass").ToLocalChecked(), ConstructorGetter);
}

void VtkSobelGradientMagnitudePassWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSobelGradientMagnitudePassWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageProcessingPassWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageProcessingPassWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSobelGradientMagnitudePassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKSOBELGRADIENTMAGNITUDEPASSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSOBELGRADIENTMAGNITUDEPASSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSobelGradientMagnitudePassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSobelGradientMagnitudePass> native = vtkSmartPointer<vtkSobelGradientMagnitudePass>::New();
		VtkSobelGradientMagnitudePassWrap* obj = new VtkSobelGradientMagnitudePassWrap(native);
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

void VtkSobelGradientMagnitudePassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSobelGradientMagnitudePassWrap *wrapper = ObjectWrap::Unwrap<VtkSobelGradientMagnitudePassWrap>(info.Holder());
	vtkSobelGradientMagnitudePass *native = (vtkSobelGradientMagnitudePass *)wrapper->native.GetPointer();
	vtkSobelGradientMagnitudePass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSobelGradientMagnitudePassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSobelGradientMagnitudePassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSobelGradientMagnitudePassWrap *w = new VtkSobelGradientMagnitudePassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSobelGradientMagnitudePassWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSobelGradientMagnitudePassWrap *wrapper = ObjectWrap::Unwrap<VtkSobelGradientMagnitudePassWrap>(info.Holder());
	vtkSobelGradientMagnitudePass *native = (vtkSobelGradientMagnitudePass *)wrapper->native.GetPointer();
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

void VtkSobelGradientMagnitudePassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSobelGradientMagnitudePassWrap *wrapper = ObjectWrap::Unwrap<VtkSobelGradientMagnitudePassWrap>(info.Holder());
	vtkSobelGradientMagnitudePass *native = (vtkSobelGradientMagnitudePass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkSobelGradientMagnitudePass * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkSobelGradientMagnitudePassWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSobelGradientMagnitudePassWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSobelGradientMagnitudePassWrap *w = new VtkSobelGradientMagnitudePassWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

