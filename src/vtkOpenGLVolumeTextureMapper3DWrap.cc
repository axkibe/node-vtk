/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkVolumeTextureMapper3DWrap.h"
#include "vtkOpenGLVolumeTextureMapper3DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkVolumePropertyWrap.h"
#include "vtkRendererWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOpenGLVolumeTextureMapper3DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLVolumeTextureMapper3DWrap::ptpl;

VtkOpenGLVolumeTextureMapper3DWrap::VtkOpenGLVolumeTextureMapper3DWrap()
{ }

VtkOpenGLVolumeTextureMapper3DWrap::VtkOpenGLVolumeTextureMapper3DWrap(vtkSmartPointer<vtkOpenGLVolumeTextureMapper3D> _native)
{ native = _native; }

VtkOpenGLVolumeTextureMapper3DWrap::~VtkOpenGLVolumeTextureMapper3DWrap()
{ }

void VtkOpenGLVolumeTextureMapper3DWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkVolumeTextureMapper3DWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkVolumeTextureMapper3DWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkOpenGLVolumeTextureMapper3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkOpenGLVolumeTextureMapper3D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("OpenGLVolumeTextureMapper3D").ToLocalChecked(),tpl->GetFunction());
}

void VtkOpenGLVolumeTextureMapper3DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInitialized", GetInitialized);
	Nan::SetPrototypeMethod(tpl, "getInitialized", GetInitialized);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsRenderSupported", IsRenderSupported);
	Nan::SetPrototypeMethod(tpl, "isRenderSupported", IsRenderSupported);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkOpenGLVolumeTextureMapper3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLVolumeTextureMapper3D> native = vtkSmartPointer<vtkOpenGLVolumeTextureMapper3D>::New();
		VtkOpenGLVolumeTextureMapper3DWrap* obj = new VtkOpenGLVolumeTextureMapper3DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLVolumeTextureMapper3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLVolumeTextureMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLVolumeTextureMapper3DWrap>(info.Holder());
	vtkOpenGLVolumeTextureMapper3D *native = (vtkOpenGLVolumeTextureMapper3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLVolumeTextureMapper3DWrap::GetInitialized(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLVolumeTextureMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLVolumeTextureMapper3DWrap>(info.Holder());
	vtkOpenGLVolumeTextureMapper3D *native = (vtkOpenGLVolumeTextureMapper3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInitialized();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLVolumeTextureMapper3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLVolumeTextureMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLVolumeTextureMapper3DWrap>(info.Holder());
	vtkOpenGLVolumeTextureMapper3D *native = (vtkOpenGLVolumeTextureMapper3D *)wrapper->native.GetPointer();
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

void VtkOpenGLVolumeTextureMapper3DWrap::IsRenderSupported(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLVolumeTextureMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLVolumeTextureMapper3DWrap>(info.Holder());
	vtkOpenGLVolumeTextureMapper3D *native = (vtkOpenGLVolumeTextureMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkVolumePropertyWrap *a0 = ObjectWrap::Unwrap<VtkVolumePropertyWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkRendererWrap *a1 = ObjectWrap::Unwrap<VtkRendererWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->IsRenderSupported(
				(vtkVolumeProperty *) a0->native.GetPointer(),
				(vtkRenderer *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLVolumeTextureMapper3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLVolumeTextureMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLVolumeTextureMapper3DWrap>(info.Holder());
	vtkOpenGLVolumeTextureMapper3D *native = (vtkOpenGLVolumeTextureMapper3D *)wrapper->native.GetPointer();
	vtkOpenGLVolumeTextureMapper3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOpenGLVolumeTextureMapper3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLVolumeTextureMapper3DWrap *w = new VtkOpenGLVolumeTextureMapper3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLVolumeTextureMapper3DWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLVolumeTextureMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLVolumeTextureMapper3DWrap>(info.Holder());
	vtkOpenGLVolumeTextureMapper3D *native = (vtkOpenGLVolumeTextureMapper3D *)wrapper->native.GetPointer();
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

void VtkOpenGLVolumeTextureMapper3DWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLVolumeTextureMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLVolumeTextureMapper3DWrap>(info.Holder());
	vtkOpenGLVolumeTextureMapper3D *native = (vtkOpenGLVolumeTextureMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
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

void VtkOpenGLVolumeTextureMapper3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLVolumeTextureMapper3DWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLVolumeTextureMapper3DWrap>(info.Holder());
	vtkOpenGLVolumeTextureMapper3D *native = (vtkOpenGLVolumeTextureMapper3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLVolumeTextureMapper3D * r;
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
			Nan::New<v8::Function>(VtkOpenGLVolumeTextureMapper3DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLVolumeTextureMapper3DWrap *w = new VtkOpenGLVolumeTextureMapper3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

