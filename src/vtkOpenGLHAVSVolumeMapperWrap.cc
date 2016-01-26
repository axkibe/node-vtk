/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkHAVSVolumeMapperWrap.h"
#include "vtkOpenGLHAVSVolumeMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOpenGLHAVSVolumeMapperWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLHAVSVolumeMapperWrap::ptpl;

VtkOpenGLHAVSVolumeMapperWrap::VtkOpenGLHAVSVolumeMapperWrap()
{ }

VtkOpenGLHAVSVolumeMapperWrap::VtkOpenGLHAVSVolumeMapperWrap(vtkSmartPointer<vtkOpenGLHAVSVolumeMapper> _native)
{ native = _native; }

VtkOpenGLHAVSVolumeMapperWrap::~VtkOpenGLHAVSVolumeMapperWrap()
{ }

void VtkOpenGLHAVSVolumeMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLHAVSVolumeMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLHAVSVolumeMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLHAVSVolumeMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLHAVSVolumeMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHAVSVolumeMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHAVSVolumeMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLHAVSVolumeMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkOpenGLHAVSVolumeMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLHAVSVolumeMapper> native = vtkSmartPointer<vtkOpenGLHAVSVolumeMapper>::New();
		VtkOpenGLHAVSVolumeMapperWrap* obj = new VtkOpenGLHAVSVolumeMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLHAVSVolumeMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHAVSVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHAVSVolumeMapperWrap>(info.Holder());
	vtkOpenGLHAVSVolumeMapper *native = (vtkOpenGLHAVSVolumeMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLHAVSVolumeMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHAVSVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHAVSVolumeMapperWrap>(info.Holder());
	vtkOpenGLHAVSVolumeMapper *native = (vtkOpenGLHAVSVolumeMapper *)wrapper->native.GetPointer();
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

void VtkOpenGLHAVSVolumeMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHAVSVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHAVSVolumeMapperWrap>(info.Holder());
	vtkOpenGLHAVSVolumeMapper *native = (vtkOpenGLHAVSVolumeMapper *)wrapper->native.GetPointer();
	vtkOpenGLHAVSVolumeMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOpenGLHAVSVolumeMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOpenGLHAVSVolumeMapperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLHAVSVolumeMapperWrap *w = new VtkOpenGLHAVSVolumeMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLHAVSVolumeMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHAVSVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHAVSVolumeMapperWrap>(info.Holder());
	vtkOpenGLHAVSVolumeMapper *native = (vtkOpenGLHAVSVolumeMapper *)wrapper->native.GetPointer();
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

void VtkOpenGLHAVSVolumeMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHAVSVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHAVSVolumeMapperWrap>(info.Holder());
	vtkOpenGLHAVSVolumeMapper *native = (vtkOpenGLHAVSVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkVolumeWrap::ptpl))->HasInstance(info[1]))
		{
			VtkVolumeWrap *a1 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkVolume *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLHAVSVolumeMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHAVSVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHAVSVolumeMapperWrap>(info.Holder());
	vtkOpenGLHAVSVolumeMapper *native = (vtkOpenGLHAVSVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLHAVSVolumeMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOpenGLHAVSVolumeMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkOpenGLHAVSVolumeMapperWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLHAVSVolumeMapperWrap *w = new VtkOpenGLHAVSVolumeMapperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

