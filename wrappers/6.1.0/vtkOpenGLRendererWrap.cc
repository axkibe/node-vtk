/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRendererWrap.h"
#include "vtkOpenGLRendererWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRenderPassWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLRendererWrap::ptpl;

VtkOpenGLRendererWrap::VtkOpenGLRendererWrap()
{ }

VtkOpenGLRendererWrap::VtkOpenGLRendererWrap(vtkSmartPointer<vtkOpenGLRenderer> _native)
{ native = _native; }

VtkOpenGLRendererWrap::~VtkOpenGLRendererWrap()
{ }

void VtkOpenGLRendererWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLRenderer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLRenderer").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLRendererWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLRendererWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRendererWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRendererWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLRendererWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Clear", Clear);
	Nan::SetPrototypeMethod(tpl, "clear", Clear);

	Nan::SetPrototypeMethod(tpl, "ClearLights", ClearLights);
	Nan::SetPrototypeMethod(tpl, "clearLights", ClearLights);

	Nan::SetPrototypeMethod(tpl, "DeviceRender", DeviceRender);
	Nan::SetPrototypeMethod(tpl, "deviceRender", DeviceRender);

	Nan::SetPrototypeMethod(tpl, "DeviceRenderTranslucentPolygonalGeometry", DeviceRenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "deviceRenderTranslucentPolygonalGeometry", DeviceRenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDepthPeelingHigherLayer", GetDepthPeelingHigherLayer);
	Nan::SetPrototypeMethod(tpl, "getDepthPeelingHigherLayer", GetDepthPeelingHigherLayer);

	Nan::SetPrototypeMethod(tpl, "GetPass", GetPass);
	Nan::SetPrototypeMethod(tpl, "getPass", GetPass);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPass", SetPass);
	Nan::SetPrototypeMethod(tpl, "setPass", SetPass);

	Nan::SetPrototypeMethod(tpl, "UpdateLights", UpdateLights);
	Nan::SetPrototypeMethod(tpl, "updateLights", UpdateLights);

	ptpl.Reset( tpl );
}

void VtkOpenGLRendererWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLRenderer> native = vtkSmartPointer<vtkOpenGLRenderer>::New();
		VtkOpenGLRendererWrap* obj = new VtkOpenGLRendererWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLRendererWrap::Clear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRendererWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRendererWrap>(info.Holder());
	vtkOpenGLRenderer *native = (vtkOpenGLRenderer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Clear();
}

void VtkOpenGLRendererWrap::ClearLights(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRendererWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRendererWrap>(info.Holder());
	vtkOpenGLRenderer *native = (vtkOpenGLRenderer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearLights();
}

void VtkOpenGLRendererWrap::DeviceRender(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRendererWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRendererWrap>(info.Holder());
	vtkOpenGLRenderer *native = (vtkOpenGLRenderer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeviceRender();
}

void VtkOpenGLRendererWrap::DeviceRenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRendererWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRendererWrap>(info.Holder());
	vtkOpenGLRenderer *native = (vtkOpenGLRenderer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeviceRenderTranslucentPolygonalGeometry();
}

void VtkOpenGLRendererWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRendererWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRendererWrap>(info.Holder());
	vtkOpenGLRenderer *native = (vtkOpenGLRenderer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLRendererWrap::GetDepthPeelingHigherLayer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRendererWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRendererWrap>(info.Holder());
	vtkOpenGLRenderer *native = (vtkOpenGLRenderer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthPeelingHigherLayer();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLRendererWrap::GetPass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRendererWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRendererWrap>(info.Holder());
	vtkOpenGLRenderer *native = (vtkOpenGLRenderer *)wrapper->native.GetPointer();
	vtkRenderPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPass();
		VtkRenderPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderPassWrap *w = new VtkRenderPassWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLRendererWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRendererWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRendererWrap>(info.Holder());
	vtkOpenGLRenderer *native = (vtkOpenGLRenderer *)wrapper->native.GetPointer();
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

void VtkOpenGLRendererWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRendererWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRendererWrap>(info.Holder());
	vtkOpenGLRenderer *native = (vtkOpenGLRenderer *)wrapper->native.GetPointer();
	vtkOpenGLRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOpenGLRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOpenGLRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLRendererWrap *w = new VtkOpenGLRendererWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLRendererWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRendererWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRendererWrap>(info.Holder());
	vtkOpenGLRenderer *native = (vtkOpenGLRenderer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLRenderer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOpenGLRendererWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOpenGLRendererWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLRendererWrap *w = new VtkOpenGLRendererWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRendererWrap::SetPass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRendererWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRendererWrap>(info.Holder());
	vtkOpenGLRenderer *native = (vtkOpenGLRenderer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderPassWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderPassWrap *a0 = ObjectWrap::Unwrap<VtkRenderPassWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPass(
			(vtkRenderPass *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRendererWrap::UpdateLights(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRendererWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRendererWrap>(info.Holder());
	vtkOpenGLRenderer *native = (vtkOpenGLRenderer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->UpdateLights();
	info.GetReturnValue().Set(Nan::New(r));
}

