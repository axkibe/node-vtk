/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkLabelRenderStrategyWrap.h"
#include "vtkRendererWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkLabelRenderStrategyWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkLabelRenderStrategyWrap::ptpl;

VtkLabelRenderStrategyWrap::VtkLabelRenderStrategyWrap()
{ }

VtkLabelRenderStrategyWrap::VtkLabelRenderStrategyWrap(vtkSmartPointer<vtkLabelRenderStrategy> _native)
{ native = _native; }

VtkLabelRenderStrategyWrap::~VtkLabelRenderStrategyWrap()
{ }

void VtkLabelRenderStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkLabelRenderStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkLabelRenderStrategy").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("LabelRenderStrategy").ToLocalChecked(),tpl->GetFunction());
}

void VtkLabelRenderStrategyWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "EndFrame", EndFrame);
	Nan::SetPrototypeMethod(tpl, "endFrame", EndFrame);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDefaultTextProperty", GetDefaultTextProperty);
	Nan::SetPrototypeMethod(tpl, "getDefaultTextProperty", GetDefaultTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetRenderer", GetRenderer);
	Nan::SetPrototypeMethod(tpl, "getRenderer", GetRenderer);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDefaultTextProperty", SetDefaultTextProperty);
	Nan::SetPrototypeMethod(tpl, "setDefaultTextProperty", SetDefaultTextProperty);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	Nan::SetPrototypeMethod(tpl, "StartFrame", StartFrame);
	Nan::SetPrototypeMethod(tpl, "startFrame", StartFrame);

}

void VtkLabelRenderStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLabelRenderStrategyWrap::EndFrame(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndFrame();
}

void VtkLabelRenderStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLabelRenderStrategyWrap::GetDefaultTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultTextProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTextPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelRenderStrategyWrap::GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderer();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRendererWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelRenderStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
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

void VtkLabelRenderStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
	vtkLabelRenderStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLabelRenderStrategyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLabelRenderStrategyWrap *w = new VtkLabelRenderStrategyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelRenderStrategyWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
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

void VtkLabelRenderStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLabelRenderStrategy * r;
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
			Nan::New<v8::Function>(VtkLabelRenderStrategyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLabelRenderStrategyWrap *w = new VtkLabelRenderStrategyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelRenderStrategyWrap::SetDefaultTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDefaultTextProperty(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelRenderStrategyWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelRenderStrategyWrap::StartFrame(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartFrame();
}
