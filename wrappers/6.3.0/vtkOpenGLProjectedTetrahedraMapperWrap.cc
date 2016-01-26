/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkProjectedTetrahedraMapperWrap.h"
#include "vtkOpenGLProjectedTetrahedraMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkWindowWrap.h"
#include "vtkRendererWrap.h"
#include "vtkVolumeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLProjectedTetrahedraMapperWrap::ptpl;

VtkOpenGLProjectedTetrahedraMapperWrap::VtkOpenGLProjectedTetrahedraMapperWrap()
{ }

VtkOpenGLProjectedTetrahedraMapperWrap::VtkOpenGLProjectedTetrahedraMapperWrap(vtkSmartPointer<vtkOpenGLProjectedTetrahedraMapper> _native)
{ native = _native; }

VtkOpenGLProjectedTetrahedraMapperWrap::~VtkOpenGLProjectedTetrahedraMapperWrap()
{ }

void VtkOpenGLProjectedTetrahedraMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLProjectedTetrahedraMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLProjectedTetrahedraMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLProjectedTetrahedraMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLProjectedTetrahedraMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkProjectedTetrahedraMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkProjectedTetrahedraMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLProjectedTetrahedraMapperWrap").ToLocalChecked());
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

	Nan::SetPrototypeMethod(tpl, "UseFloatingPointFrameBufferOff", UseFloatingPointFrameBufferOff);
	Nan::SetPrototypeMethod(tpl, "useFloatingPointFrameBufferOff", UseFloatingPointFrameBufferOff);

	Nan::SetPrototypeMethod(tpl, "UseFloatingPointFrameBufferOn", UseFloatingPointFrameBufferOn);
	Nan::SetPrototypeMethod(tpl, "useFloatingPointFrameBufferOn", UseFloatingPointFrameBufferOn);

	ptpl.Reset( tpl );
}

void VtkOpenGLProjectedTetrahedraMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLProjectedTetrahedraMapper> native = vtkSmartPointer<vtkOpenGLProjectedTetrahedraMapper>::New();
		VtkOpenGLProjectedTetrahedraMapperWrap* obj = new VtkOpenGLProjectedTetrahedraMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLProjectedTetrahedraMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedTetrahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedTetrahedraMapper *native = (vtkOpenGLProjectedTetrahedraMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLProjectedTetrahedraMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedTetrahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedTetrahedraMapper *native = (vtkOpenGLProjectedTetrahedraMapper *)wrapper->native.GetPointer();
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

void VtkOpenGLProjectedTetrahedraMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedTetrahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedTetrahedraMapper *native = (vtkOpenGLProjectedTetrahedraMapper *)wrapper->native.GetPointer();
	vtkOpenGLProjectedTetrahedraMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOpenGLProjectedTetrahedraMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOpenGLProjectedTetrahedraMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLProjectedTetrahedraMapperWrap *w = new VtkOpenGLProjectedTetrahedraMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLProjectedTetrahedraMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedTetrahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedTetrahedraMapper *native = (vtkOpenGLProjectedTetrahedraMapper *)wrapper->native.GetPointer();
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

void VtkOpenGLProjectedTetrahedraMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedTetrahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedTetrahedraMapper *native = (vtkOpenGLProjectedTetrahedraMapper *)wrapper->native.GetPointer();
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

void VtkOpenGLProjectedTetrahedraMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedTetrahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedTetrahedraMapper *native = (vtkOpenGLProjectedTetrahedraMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLProjectedTetrahedraMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOpenGLProjectedTetrahedraMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOpenGLProjectedTetrahedraMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLProjectedTetrahedraMapperWrap *w = new VtkOpenGLProjectedTetrahedraMapperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLProjectedTetrahedraMapperWrap::UseFloatingPointFrameBufferOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedTetrahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedTetrahedraMapper *native = (vtkOpenGLProjectedTetrahedraMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseFloatingPointFrameBufferOff();
}

void VtkOpenGLProjectedTetrahedraMapperWrap::UseFloatingPointFrameBufferOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLProjectedTetrahedraMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLProjectedTetrahedraMapperWrap>(info.Holder());
	vtkOpenGLProjectedTetrahedraMapper *native = (vtkOpenGLProjectedTetrahedraMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseFloatingPointFrameBufferOn();
}

