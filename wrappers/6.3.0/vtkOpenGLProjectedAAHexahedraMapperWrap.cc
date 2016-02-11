/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkProjectedAAHexahedraMapperWrap.h"
#include "vtkOpenGLProjectedAAHexahedraMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRenderWindowWrap.h"
#include "vtkRendererWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLProjectedAAHexahedraMapperWrap::ptpl;

VtkOpenGLProjectedAAHexahedraMapperWrap::VtkOpenGLProjectedAAHexahedraMapperWrap()
{ }

VtkOpenGLProjectedAAHexahedraMapperWrap::VtkOpenGLProjectedAAHexahedraMapperWrap(vtkSmartPointer<vtkOpenGLProjectedAAHexahedraMapper> _native)
{ native = _native; }

VtkOpenGLProjectedAAHexahedraMapperWrap::~VtkOpenGLProjectedAAHexahedraMapperWrap()
{ }

void VtkOpenGLProjectedAAHexahedraMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLProjectedAAHexahedraMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLProjectedAAHexahedraMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLProjectedAAHexahedraMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLProjectedAAHexahedraMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkProjectedAAHexahedraMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkProjectedAAHexahedraMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLProjectedAAHexahedraMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

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

	ptpl.Reset( tpl );
}

void VtkOpenGLProjectedAAHexahedraMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLProjectedAAHexahedraMapper> native = vtkSmartPointer<vtkOpenGLProjectedAAHexahedraMapper>::New();
		VtkOpenGLProjectedAAHexahedraMapperWrap* obj = new VtkOpenGLProjectedAAHexahedraMapperWrap(native);
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

void VtkOpenGLProjectedAAHexahedraMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedAAHexahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedAAHexahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedAAHexahedraMapper *native = (vtkOpenGLProjectedAAHexahedraMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLProjectedAAHexahedraMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedAAHexahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedAAHexahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedAAHexahedraMapper *native = (vtkOpenGLProjectedAAHexahedraMapper *)wrapper->native.GetPointer();
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

void VtkOpenGLProjectedAAHexahedraMapperWrap::IsRenderSupported(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedAAHexahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedAAHexahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedAAHexahedraMapper *native = (vtkOpenGLProjectedAAHexahedraMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsRenderSupported(
			(vtkRenderWindow *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLProjectedAAHexahedraMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedAAHexahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedAAHexahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedAAHexahedraMapper *native = (vtkOpenGLProjectedAAHexahedraMapper *)wrapper->native.GetPointer();
	vtkOpenGLProjectedAAHexahedraMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkOpenGLProjectedAAHexahedraMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOpenGLProjectedAAHexahedraMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLProjectedAAHexahedraMapperWrap *w = new VtkOpenGLProjectedAAHexahedraMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLProjectedAAHexahedraMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedAAHexahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedAAHexahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedAAHexahedraMapper *native = (vtkOpenGLProjectedAAHexahedraMapper *)wrapper->native.GetPointer();
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

void VtkOpenGLProjectedAAHexahedraMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedAAHexahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedAAHexahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedAAHexahedraMapper *native = (vtkOpenGLProjectedAAHexahedraMapper *)wrapper->native.GetPointer();
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

void VtkOpenGLProjectedAAHexahedraMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedAAHexahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedAAHexahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedAAHexahedraMapper *native = (vtkOpenGLProjectedAAHexahedraMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLProjectedAAHexahedraMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkOpenGLProjectedAAHexahedraMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOpenGLProjectedAAHexahedraMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLProjectedAAHexahedraMapperWrap *w = new VtkOpenGLProjectedAAHexahedraMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

