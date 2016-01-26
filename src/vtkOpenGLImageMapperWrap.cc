/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageMapperWrap.h"
#include "vtkOpenGLImageMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkViewportWrap.h"
#include "vtkActor2DWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOpenGLImageMapperWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLImageMapperWrap::ptpl;

VtkOpenGLImageMapperWrap::VtkOpenGLImageMapperWrap()
{ }

VtkOpenGLImageMapperWrap::VtkOpenGLImageMapperWrap(vtkSmartPointer<vtkOpenGLImageMapper> _native)
{ native = _native; }

VtkOpenGLImageMapperWrap::~VtkOpenGLImageMapperWrap()
{ }

void VtkOpenGLImageMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLImageMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLImageMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLImageMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLImageMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLImageMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RenderData", RenderData);
	Nan::SetPrototypeMethod(tpl, "renderData", RenderData);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkOpenGLImageMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLImageMapper> native = vtkSmartPointer<vtkOpenGLImageMapper>::New();
		VtkOpenGLImageMapperWrap* obj = new VtkOpenGLImageMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLImageMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLImageMapperWrap>(info.Holder());
	vtkOpenGLImageMapper *native = (vtkOpenGLImageMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLImageMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLImageMapperWrap>(info.Holder());
	vtkOpenGLImageMapper *native = (vtkOpenGLImageMapper *)wrapper->native.GetPointer();
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

void VtkOpenGLImageMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLImageMapperWrap>(info.Holder());
	vtkOpenGLImageMapper *native = (vtkOpenGLImageMapper *)wrapper->native.GetPointer();
	vtkOpenGLImageMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOpenGLImageMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOpenGLImageMapperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLImageMapperWrap *w = new VtkOpenGLImageMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLImageMapperWrap::RenderData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLImageMapperWrap>(info.Holder());
	vtkOpenGLImageMapper *native = (vtkOpenGLImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkImageDataWrap *a1 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkActor2DWrap::ptpl))->HasInstance(info[2]))
			{
				VtkActor2DWrap *a2 = ObjectWrap::Unwrap<VtkActor2DWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->RenderData(
					(vtkViewport *) a0->native.GetPointer(),
					(vtkImageData *) a1->native.GetPointer(),
					(vtkActor2D *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLImageMapperWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLImageMapperWrap>(info.Holder());
	vtkOpenGLImageMapper *native = (vtkOpenGLImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkActor2DWrap::ptpl))->HasInstance(info[1]))
		{
			VtkActor2DWrap *a1 = ObjectWrap::Unwrap<VtkActor2DWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->RenderOverlay(
				(vtkViewport *) a0->native.GetPointer(),
				(vtkActor2D *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLImageMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLImageMapperWrap>(info.Holder());
	vtkOpenGLImageMapper *native = (vtkOpenGLImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLImageMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOpenGLImageMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkOpenGLImageMapperWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLImageMapperWrap *w = new VtkOpenGLImageMapperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

