/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkScalarsToColorsPainterWrap.h"
#include "vtkOpenGLScalarsToColorsPainterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkWindowWrap.h"
#include "vtkActorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOpenGLScalarsToColorsPainterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLScalarsToColorsPainterWrap::ptpl;

VtkOpenGLScalarsToColorsPainterWrap::VtkOpenGLScalarsToColorsPainterWrap()
{ }

VtkOpenGLScalarsToColorsPainterWrap::VtkOpenGLScalarsToColorsPainterWrap(vtkSmartPointer<vtkOpenGLScalarsToColorsPainter> _native)
{ native = _native; }

VtkOpenGLScalarsToColorsPainterWrap::~VtkOpenGLScalarsToColorsPainterWrap()
{ }

void VtkOpenGLScalarsToColorsPainterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkScalarsToColorsPainterWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkScalarsToColorsPainterWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkOpenGLScalarsToColorsPainterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkOpenGLScalarsToColorsPainter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("OpenGLScalarsToColorsPainter").ToLocalChecked(),tpl->GetFunction());
}

void VtkOpenGLScalarsToColorsPainterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPremultiplyColorsWithAlpha", GetPremultiplyColorsWithAlpha);
	Nan::SetPrototypeMethod(tpl, "getPremultiplyColorsWithAlpha", GetPremultiplyColorsWithAlpha);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkOpenGLScalarsToColorsPainterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLScalarsToColorsPainter> native = vtkSmartPointer<vtkOpenGLScalarsToColorsPainter>::New();
		VtkOpenGLScalarsToColorsPainterWrap* obj = new VtkOpenGLScalarsToColorsPainterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLScalarsToColorsPainterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLScalarsToColorsPainterWrap>(info.Holder());
	vtkOpenGLScalarsToColorsPainter *native = (vtkOpenGLScalarsToColorsPainter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLScalarsToColorsPainterWrap::GetPremultiplyColorsWithAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLScalarsToColorsPainterWrap>(info.Holder());
	vtkOpenGLScalarsToColorsPainter *native = (vtkOpenGLScalarsToColorsPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkActorWrap *a0 = ObjectWrap::Unwrap<VtkActorWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPremultiplyColorsWithAlpha(
			(vtkActor *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLScalarsToColorsPainterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLScalarsToColorsPainterWrap>(info.Holder());
	vtkOpenGLScalarsToColorsPainter *native = (vtkOpenGLScalarsToColorsPainter *)wrapper->native.GetPointer();
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

void VtkOpenGLScalarsToColorsPainterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLScalarsToColorsPainterWrap>(info.Holder());
	vtkOpenGLScalarsToColorsPainter *native = (vtkOpenGLScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkOpenGLScalarsToColorsPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOpenGLScalarsToColorsPainterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLScalarsToColorsPainterWrap *w = new VtkOpenGLScalarsToColorsPainterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLScalarsToColorsPainterWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLScalarsToColorsPainterWrap>(info.Holder());
	vtkOpenGLScalarsToColorsPainter *native = (vtkOpenGLScalarsToColorsPainter *)wrapper->native.GetPointer();
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

void VtkOpenGLScalarsToColorsPainterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLScalarsToColorsPainterWrap>(info.Holder());
	vtkOpenGLScalarsToColorsPainter *native = (vtkOpenGLScalarsToColorsPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLScalarsToColorsPainter * r;
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
			Nan::New<v8::Function>(VtkOpenGLScalarsToColorsPainterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLScalarsToColorsPainterWrap *w = new VtkOpenGLScalarsToColorsPainterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
