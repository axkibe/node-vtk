/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkClipPlanesPainterWrap.h"
#include "vtkOpenGLClipPlanesPainterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLClipPlanesPainterWrap::ptpl;

VtkOpenGLClipPlanesPainterWrap::VtkOpenGLClipPlanesPainterWrap()
{ }

VtkOpenGLClipPlanesPainterWrap::VtkOpenGLClipPlanesPainterWrap(vtkSmartPointer<vtkOpenGLClipPlanesPainter> _native)
{ native = _native; }

VtkOpenGLClipPlanesPainterWrap::~VtkOpenGLClipPlanesPainterWrap()
{ }

void VtkOpenGLClipPlanesPainterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLClipPlanesPainter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLClipPlanesPainter").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLClipPlanesPainterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLClipPlanesPainterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkClipPlanesPainterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkClipPlanesPainterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLClipPlanesPainterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkOpenGLClipPlanesPainterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLClipPlanesPainter> native = vtkSmartPointer<vtkOpenGLClipPlanesPainter>::New();
		VtkOpenGLClipPlanesPainterWrap* obj = new VtkOpenGLClipPlanesPainterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLClipPlanesPainterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLClipPlanesPainterWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLClipPlanesPainterWrap>(info.Holder());
	vtkOpenGLClipPlanesPainter *native = (vtkOpenGLClipPlanesPainter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLClipPlanesPainterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLClipPlanesPainterWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLClipPlanesPainterWrap>(info.Holder());
	vtkOpenGLClipPlanesPainter *native = (vtkOpenGLClipPlanesPainter *)wrapper->native.GetPointer();
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

void VtkOpenGLClipPlanesPainterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLClipPlanesPainterWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLClipPlanesPainterWrap>(info.Holder());
	vtkOpenGLClipPlanesPainter *native = (vtkOpenGLClipPlanesPainter *)wrapper->native.GetPointer();
	vtkOpenGLClipPlanesPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOpenGLClipPlanesPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOpenGLClipPlanesPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLClipPlanesPainterWrap *w = new VtkOpenGLClipPlanesPainterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLClipPlanesPainterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLClipPlanesPainterWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLClipPlanesPainterWrap>(info.Holder());
	vtkOpenGLClipPlanesPainter *native = (vtkOpenGLClipPlanesPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLClipPlanesPainter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOpenGLClipPlanesPainterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOpenGLClipPlanesPainterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLClipPlanesPainterWrap *w = new VtkOpenGLClipPlanesPainterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

