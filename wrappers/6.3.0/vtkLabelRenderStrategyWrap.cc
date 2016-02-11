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
Nan::Persistent<v8::FunctionTemplate> VtkLabelRenderStrategyWrap::ptpl;

VtkLabelRenderStrategyWrap::VtkLabelRenderStrategyWrap()
{ }

VtkLabelRenderStrategyWrap::VtkLabelRenderStrategyWrap(vtkSmartPointer<vtkLabelRenderStrategy> _native)
{ native = _native; }

VtkLabelRenderStrategyWrap::~VtkLabelRenderStrategyWrap()
{ }

void VtkLabelRenderStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLabelRenderStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LabelRenderStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkLabelRenderStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLabelRenderStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLabelRenderStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

	Nan::SetPrototypeMethod(tpl, "SupportsBoundedSize", SupportsBoundedSize);
	Nan::SetPrototypeMethod(tpl, "supportsBoundedSize", SupportsBoundedSize);

	Nan::SetPrototypeMethod(tpl, "SupportsRotation", SupportsRotation);
	Nan::SetPrototypeMethod(tpl, "supportsRotation", SupportsRotation);

	ptpl.Reset( tpl );
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
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
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
	VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native = r;
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
	VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelRenderStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
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
	VtkLabelRenderStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLabelRenderStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLabelRenderStrategyWrap *w = new VtkLabelRenderStrategyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelRenderStrategyWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
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

void VtkLabelRenderStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
		VtkLabelRenderStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLabelRenderStrategyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLabelRenderStrategyWrap *w = new VtkLabelRenderStrategyWrap();
		w->native = r;
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
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

void VtkLabelRenderStrategyWrap::SupportsBoundedSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->SupportsBoundedSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabelRenderStrategyWrap::SupportsRotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelRenderStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkLabelRenderStrategyWrap>(info.Holder());
	vtkLabelRenderStrategy *native = (vtkLabelRenderStrategy *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->SupportsRotation();
	info.GetReturnValue().Set(Nan::New(r));
}

