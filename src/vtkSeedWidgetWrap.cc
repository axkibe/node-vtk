/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractWidgetWrap.h"
#include "vtkSeedWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkRenderWindowInteractorWrap.h"
#include "vtkSeedRepresentationWrap.h"
#include "vtkHandleWidgetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSeedWidgetWrap::constructor;

VtkSeedWidgetWrap::VtkSeedWidgetWrap()
{ }

VtkSeedWidgetWrap::VtkSeedWidgetWrap(vtkSmartPointer<vtkSeedWidget> _native)
{ native = _native; }

VtkSeedWidgetWrap::~VtkSeedWidgetWrap()
{ }

void VtkSeedWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkSeedWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkInteractorObserverWrap::InitTpl(tpl);
	VtkAbstractWidgetWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkSeedWidget").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("SeedWidget").ToLocalChecked(),tpl->GetFunction());
}

void VtkSeedWidgetWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CompleteInteraction", CompleteInteraction);
	Nan::SetPrototypeMethod(tpl, "completeInteraction", CompleteInteraction);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "CreateNewHandle", CreateNewHandle);
	Nan::SetPrototypeMethod(tpl, "createNewHandle", CreateNewHandle);

	Nan::SetPrototypeMethod(tpl, "DeleteSeed", DeleteSeed);
	Nan::SetPrototypeMethod(tpl, "deleteSeed", DeleteSeed);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSeed", GetSeed);
	Nan::SetPrototypeMethod(tpl, "getSeed", GetSeed);

	Nan::SetPrototypeMethod(tpl, "GetSeedRepresentation", GetSeedRepresentation);
	Nan::SetPrototypeMethod(tpl, "getSeedRepresentation", GetSeedRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetWidgetState", GetWidgetState);
	Nan::SetPrototypeMethod(tpl, "getWidgetState", GetWidgetState);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RestartInteraction", RestartInteraction);
	Nan::SetPrototypeMethod(tpl, "restartInteraction", RestartInteraction);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCurrentRenderer", SetCurrentRenderer);
	Nan::SetPrototypeMethod(tpl, "setCurrentRenderer", SetCurrentRenderer);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetInteractor", SetInteractor);
	Nan::SetPrototypeMethod(tpl, "setInteractor", SetInteractor);

	Nan::SetPrototypeMethod(tpl, "SetProcessEvents", SetProcessEvents);
	Nan::SetPrototypeMethod(tpl, "setProcessEvents", SetProcessEvents);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

}

void VtkSeedWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSeedWidget> native = vtkSmartPointer<vtkSeedWidget>::New();
		VtkSeedWidgetWrap* obj = new VtkSeedWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSeedWidgetWrap::CompleteInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CompleteInteraction();
}

void VtkSeedWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkSeedWidgetWrap::CreateNewHandle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	vtkHandleWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CreateNewHandle();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHandleWidgetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHandleWidgetWrap *w = new VtkHandleWidgetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSeedWidgetWrap::DeleteSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeleteSeed(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSeedWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSeedWidgetWrap::GetSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkHandleWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetSeed(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkHandleWidgetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHandleWidgetWrap *w = new VtkHandleWidgetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSeedWidgetWrap::GetSeedRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	vtkSeedRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSeedRepresentation();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSeedRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSeedRepresentationWrap *w = new VtkSeedRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSeedWidgetWrap::GetWidgetState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidgetState();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSeedWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
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

void VtkSeedWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	vtkSeedWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSeedWidgetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSeedWidgetWrap *w = new VtkSeedWidgetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSeedWidgetWrap::RestartInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RestartInteraction();
}

void VtkSeedWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSeedWidget * r;
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
			Nan::New<v8::Function>(VtkSeedWidgetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSeedWidgetWrap *w = new VtkSeedWidgetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSeedWidgetWrap::SetCurrentRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCurrentRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSeedWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnabled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSeedWidgetWrap::SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRenderWindowInteractorWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowInteractorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractor(
			(vtkRenderWindowInteractor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSeedWidgetWrap::SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProcessEvents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSeedWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSeedWidgetWrap>(info.Holder());
	vtkSeedWidget *native = (vtkSeedWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkSeedRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkSeedRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

