/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPropertyWrap.h"
#include "vtkOpenGLPropertyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkActorWrap.h"
#include "vtkRendererWrap.h"
#include "vtkWindowWrap.h"
#include "vtkShaderDeviceAdapter2Wrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOpenGLPropertyWrap::constructor;

VtkOpenGLPropertyWrap::VtkOpenGLPropertyWrap()
{ }

VtkOpenGLPropertyWrap::VtkOpenGLPropertyWrap(vtkSmartPointer<vtkOpenGLProperty> _native)
{ native = _native; }

VtkOpenGLPropertyWrap::~VtkOpenGLPropertyWrap()
{ }

void VtkOpenGLPropertyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkOpenGLPropertyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkPropertyWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkOpenGLProperty").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("OpenGLProperty").ToLocalChecked(),tpl->GetFunction());
}

void VtkOpenGLPropertyWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "BackfaceRender", BackfaceRender);
	Nan::SetPrototypeMethod(tpl, "backfaceRender", BackfaceRender);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetShaderDeviceAdapter2", GetShaderDeviceAdapter2);
	Nan::SetPrototypeMethod(tpl, "getShaderDeviceAdapter2", GetShaderDeviceAdapter2);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PostRender", PostRender);
	Nan::SetPrototypeMethod(tpl, "postRender", PostRender);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkOpenGLPropertyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLProperty> native = vtkSmartPointer<vtkOpenGLProperty>::New();
		VtkOpenGLPropertyWrap* obj = new VtkOpenGLPropertyWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLPropertyWrap::BackfaceRender(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLPropertyWrap>(info.Holder());
	vtkOpenGLProperty *native = (vtkOpenGLProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkActorWrap *a0 = ObjectWrap::Unwrap<VtkActorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkRendererWrap *a1 = ObjectWrap::Unwrap<VtkRendererWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->BackfaceRender(
				(vtkActor *) a0->native.GetPointer(),
				(vtkRenderer *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLPropertyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLPropertyWrap>(info.Holder());
	vtkOpenGLProperty *native = (vtkOpenGLProperty *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLPropertyWrap::GetShaderDeviceAdapter2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLPropertyWrap>(info.Holder());
	vtkOpenGLProperty *native = (vtkOpenGLProperty *)wrapper->native.GetPointer();
	vtkShaderDeviceAdapter2 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShaderDeviceAdapter2();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkShaderDeviceAdapter2Wrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkShaderDeviceAdapter2Wrap *w = new VtkShaderDeviceAdapter2Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLPropertyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLPropertyWrap>(info.Holder());
	vtkOpenGLProperty *native = (vtkOpenGLProperty *)wrapper->native.GetPointer();
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

void VtkOpenGLPropertyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLPropertyWrap>(info.Holder());
	vtkOpenGLProperty *native = (vtkOpenGLProperty *)wrapper->native.GetPointer();
	vtkOpenGLProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOpenGLPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLPropertyWrap *w = new VtkOpenGLPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLPropertyWrap::PostRender(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLPropertyWrap>(info.Holder());
	vtkOpenGLProperty *native = (vtkOpenGLProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkActorWrap *a0 = ObjectWrap::Unwrap<VtkActorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkRendererWrap *a1 = ObjectWrap::Unwrap<VtkRendererWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->PostRender(
				(vtkActor *) a0->native.GetPointer(),
				(vtkRenderer *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLPropertyWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLPropertyWrap>(info.Holder());
	vtkOpenGLProperty *native = (vtkOpenGLProperty *)wrapper->native.GetPointer();
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

void VtkOpenGLPropertyWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLPropertyWrap>(info.Holder());
	vtkOpenGLProperty *native = (vtkOpenGLProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkActorWrap *a0 = ObjectWrap::Unwrap<VtkActorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkRendererWrap *a1 = ObjectWrap::Unwrap<VtkRendererWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkActor *) a0->native.GetPointer(),
				(vtkRenderer *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLPropertyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLPropertyWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLPropertyWrap>(info.Holder());
	vtkOpenGLProperty *native = (vtkOpenGLProperty *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLProperty * r;
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
			Nan::New<v8::Function>(VtkOpenGLPropertyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLPropertyWrap *w = new VtkOpenGLPropertyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

