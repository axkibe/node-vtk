/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGPUVolumeRayCastMapperWrap.h"
#include "vtkOpenGLGPUVolumeRayCastMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"
#include "../../plus/plus.h"

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

	Nan::SetPrototypeMethod(tpl, "GetColorImage", GetColorImage);
	Nan::SetPrototypeMethod(tpl, "getColorImage", GetColorImage);

	Nan::SetPrototypeMethod(tpl, "GetDepthImage", GetDepthImage);
	Nan::SetPrototypeMethod(tpl, "getDepthImage", GetDepthImage);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKOPENGLGPUVOLUMERAYCASTMAPPERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKOPENGLGPUVOLUMERAYCASTMAPPERWRAP_INITPTPL
#endif
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

void VtkOpenGLGPUVolumeRayCastMapperWrap::GetColorImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLGPUVolumeRayCastMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLGPUVolumeRayCastMapperWrap>(info.Holder());
	vtkOpenGLGPUVolumeRayCastMapper *native = (vtkOpenGLGPUVolumeRayCastMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetColorImage(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLGPUVolumeRayCastMapperWrap::GetDepthImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLGPUVolumeRayCastMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLGPUVolumeRayCastMapperWrap>(info.Holder());
	vtkOpenGLGPUVolumeRayCastMapper *native = (vtkOpenGLGPUVolumeRayCastMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetDepthImage(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
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

