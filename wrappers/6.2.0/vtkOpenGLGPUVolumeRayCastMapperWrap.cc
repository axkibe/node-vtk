/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGPUVolumeRayCastMapperWrap.h"
#include "vtkOpenGLGPUVolumeRayCastMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRenderWindowWrap.h"
#include "vtkVolumePropertyWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLGPUVolumeRayCastMapperWrap::ptpl;

VtkOpenGLGPUVolumeRayCastMapperWrap::VtkOpenGLGPUVolumeRayCastMapperWrap()
{ }

VtkOpenGLGPUVolumeRayCastMapperWrap::VtkOpenGLGPUVolumeRayCastMapperWrap(vtkSmartPointer<vtkOpenGLGPUVolumeRayCastMapper> _native)
{ native = _native; }

VtkOpenGLGPUVolumeRayCastMapperWrap::~VtkOpenGLGPUVolumeRayCastMapperWrap()
{ }

void VtkOpenGLGPUVolumeRayCastMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLGPUVolumeRayCastMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLGPUVolumeRayCastMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLGPUVolumeRayCastMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLGPUVolumeRayCastMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGPUVolumeRayCastMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGPUVolumeRayCastMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLGPUVolumeRayCastMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsRenderSupported", IsRenderSupported);
	Nan::SetPrototypeMethod(tpl, "isRenderSupported", IsRenderSupported);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PrintError", PrintError);
	Nan::SetPrototypeMethod(tpl, "printError", PrintError);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkOpenGLGPUVolumeRayCastMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLGPUVolumeRayCastMapper> native = vtkSmartPointer<vtkOpenGLGPUVolumeRayCastMapper>::New();
		VtkOpenGLGPUVolumeRayCastMapperWrap* obj = new VtkOpenGLGPUVolumeRayCastMapperWrap(native);
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

void VtkOpenGLGPUVolumeRayCastMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLGPUVolumeRayCastMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLGPUVolumeRayCastMapperWrap>(info.Holder());
	vtkOpenGLGPUVolumeRayCastMapper *native = (vtkOpenGLGPUVolumeRayCastMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLGPUVolumeRayCastMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLGPUVolumeRayCastMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLGPUVolumeRayCastMapperWrap>(info.Holder());
	vtkOpenGLGPUVolumeRayCastMapper *native = (vtkOpenGLGPUVolumeRayCastMapper *)wrapper->native.GetPointer();
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

void VtkOpenGLGPUVolumeRayCastMapperWrap::IsRenderSupported(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLGPUVolumeRayCastMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLGPUVolumeRayCastMapperWrap>(info.Holder());
	vtkOpenGLGPUVolumeRayCastMapper *native = (vtkOpenGLGPUVolumeRayCastMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkVolumePropertyWrap::ptpl))->HasInstance(info[1]))
		{
			VtkVolumePropertyWrap *a1 = ObjectWrap::Unwrap<VtkVolumePropertyWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->IsRenderSupported(
				(vtkRenderWindow *) a0->native.GetPointer(),
				(vtkVolumeProperty *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLGPUVolumeRayCastMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLGPUVolumeRayCastMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLGPUVolumeRayCastMapperWrap>(info.Holder());
	vtkOpenGLGPUVolumeRayCastMapper *native = (vtkOpenGLGPUVolumeRayCastMapper *)wrapper->native.GetPointer();
	vtkOpenGLGPUVolumeRayCastMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkOpenGLGPUVolumeRayCastMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOpenGLGPUVolumeRayCastMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLGPUVolumeRayCastMapperWrap *w = new VtkOpenGLGPUVolumeRayCastMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLGPUVolumeRayCastMapperWrap::PrintError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLGPUVolumeRayCastMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLGPUVolumeRayCastMapperWrap>(info.Holder());
	vtkOpenGLGPUVolumeRayCastMapper *native = (vtkOpenGLGPUVolumeRayCastMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PrintError(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLGPUVolumeRayCastMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLGPUVolumeRayCastMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLGPUVolumeRayCastMapperWrap>(info.Holder());
	vtkOpenGLGPUVolumeRayCastMapper *native = (vtkOpenGLGPUVolumeRayCastMapper *)wrapper->native.GetPointer();
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

void VtkOpenGLGPUVolumeRayCastMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLGPUVolumeRayCastMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLGPUVolumeRayCastMapperWrap>(info.Holder());
	vtkOpenGLGPUVolumeRayCastMapper *native = (vtkOpenGLGPUVolumeRayCastMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLGPUVolumeRayCastMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkOpenGLGPUVolumeRayCastMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOpenGLGPUVolumeRayCastMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLGPUVolumeRayCastMapperWrap *w = new VtkOpenGLGPUVolumeRayCastMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

