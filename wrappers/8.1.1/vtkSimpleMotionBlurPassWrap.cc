/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDepthImageProcessingPassWrap.h"
#include "vtkSimpleMotionBlurPassWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkWindowWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSimpleMotionBlurPassWrap::ptpl;

VtkSimpleMotionBlurPassWrap::VtkSimpleMotionBlurPassWrap()
{ }

VtkSimpleMotionBlurPassWrap::VtkSimpleMotionBlurPassWrap(vtkSmartPointer<vtkSimpleMotionBlurPass> _native)
{ native = _native; }

VtkSimpleMotionBlurPassWrap::~VtkSimpleMotionBlurPassWrap()
{ }

void VtkSimpleMotionBlurPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSimpleMotionBlurPass").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SimpleMotionBlurPass").ToLocalChecked(), ConstructorGetter);
}

void VtkSimpleMotionBlurPassWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSimpleMotionBlurPassWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDepthImageProcessingPassWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDepthImageProcessingPassWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSimpleMotionBlurPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetSubFrames", GetSubFrames);
	Nan::SetPrototypeMethod(tpl, "getSubFrames", GetSubFrames);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColorFormat", SetColorFormat);
	Nan::SetPrototypeMethod(tpl, "setColorFormat", SetColorFormat);

	Nan::SetPrototypeMethod(tpl, "SetDepthFormat", SetDepthFormat);
	Nan::SetPrototypeMethod(tpl, "setDepthFormat", SetDepthFormat);

	Nan::SetPrototypeMethod(tpl, "SetSubFrames", SetSubFrames);
	Nan::SetPrototypeMethod(tpl, "setSubFrames", SetSubFrames);

#ifdef VTK_NODE_PLUS_VTKSIMPLEMOTIONBLURPASSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSIMPLEMOTIONBLURPASSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSimpleMotionBlurPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSimpleMotionBlurPass> native = vtkSmartPointer<vtkSimpleMotionBlurPass>::New();
		VtkSimpleMotionBlurPassWrap* obj = new VtkSimpleMotionBlurPassWrap(native);
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

void VtkSimpleMotionBlurPassWrap::GetSubFrames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimpleMotionBlurPassWrap *wrapper = ObjectWrap::Unwrap<VtkSimpleMotionBlurPassWrap>(info.Holder());
	vtkSimpleMotionBlurPass *native = (vtkSimpleMotionBlurPass *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubFrames();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimpleMotionBlurPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimpleMotionBlurPassWrap *wrapper = ObjectWrap::Unwrap<VtkSimpleMotionBlurPassWrap>(info.Holder());
	vtkSimpleMotionBlurPass *native = (vtkSimpleMotionBlurPass *)wrapper->native.GetPointer();
	vtkSimpleMotionBlurPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSimpleMotionBlurPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSimpleMotionBlurPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSimpleMotionBlurPassWrap *w = new VtkSimpleMotionBlurPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSimpleMotionBlurPassWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimpleMotionBlurPassWrap *wrapper = ObjectWrap::Unwrap<VtkSimpleMotionBlurPassWrap>(info.Holder());
	vtkSimpleMotionBlurPass *native = (vtkSimpleMotionBlurPass *)wrapper->native.GetPointer();
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

void VtkSimpleMotionBlurPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimpleMotionBlurPassWrap *wrapper = ObjectWrap::Unwrap<VtkSimpleMotionBlurPassWrap>(info.Holder());
	vtkSimpleMotionBlurPass *native = (vtkSimpleMotionBlurPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkSimpleMotionBlurPass * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkSimpleMotionBlurPassWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSimpleMotionBlurPassWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSimpleMotionBlurPassWrap *w = new VtkSimpleMotionBlurPassWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSimpleMotionBlurPassWrap::SetColorFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimpleMotionBlurPassWrap *wrapper = ObjectWrap::Unwrap<VtkSimpleMotionBlurPassWrap>(info.Holder());
	vtkSimpleMotionBlurPass *native = (vtkSimpleMotionBlurPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorFormat(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSimpleMotionBlurPassWrap::SetDepthFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimpleMotionBlurPassWrap *wrapper = ObjectWrap::Unwrap<VtkSimpleMotionBlurPassWrap>(info.Holder());
	vtkSimpleMotionBlurPass *native = (vtkSimpleMotionBlurPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDepthFormat(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSimpleMotionBlurPassWrap::SetSubFrames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimpleMotionBlurPassWrap *wrapper = ObjectWrap::Unwrap<VtkSimpleMotionBlurPassWrap>(info.Holder());
	vtkSimpleMotionBlurPass *native = (vtkSimpleMotionBlurPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSubFrames(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

