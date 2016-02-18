/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkViewUpdaterWrap.h"
#include "vtkViewWrap.h"
#include "vtkAnnotationLinkWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkViewUpdaterWrap::ptpl;

VtkViewUpdaterWrap::VtkViewUpdaterWrap()
{ }

VtkViewUpdaterWrap::VtkViewUpdaterWrap(vtkSmartPointer<vtkViewUpdater> _native)
{ native = _native; }

VtkViewUpdaterWrap::~VtkViewUpdaterWrap()
{ }

void VtkViewUpdaterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkViewUpdater").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ViewUpdater").ToLocalChecked(), ConstructorGetter);
}

void VtkViewUpdaterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkViewUpdaterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkViewUpdaterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddAnnotationLink", AddAnnotationLink);
	Nan::SetPrototypeMethod(tpl, "addAnnotationLink", AddAnnotationLink);

	Nan::SetPrototypeMethod(tpl, "AddView", AddView);
	Nan::SetPrototypeMethod(tpl, "addView", AddView);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveView", RemoveView);
	Nan::SetPrototypeMethod(tpl, "removeView", RemoveView);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKVIEWUPDATERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKVIEWUPDATERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkViewUpdaterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkViewUpdater> native = vtkSmartPointer<vtkViewUpdater>::New();
		VtkViewUpdaterWrap* obj = new VtkViewUpdaterWrap(native);
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

void VtkViewUpdaterWrap::AddAnnotationLink(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewUpdaterWrap *wrapper = ObjectWrap::Unwrap<VtkViewUpdaterWrap>(info.Holder());
	vtkViewUpdater *native = (vtkViewUpdater *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAnnotationLinkWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAnnotationLinkWrap *a0 = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddAnnotationLink(
			(vtkAnnotationLink *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewUpdaterWrap::AddView(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewUpdaterWrap *wrapper = ObjectWrap::Unwrap<VtkViewUpdaterWrap>(info.Holder());
	vtkViewUpdater *native = (vtkViewUpdater *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewWrap *a0 = ObjectWrap::Unwrap<VtkViewWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddView(
			(vtkView *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewUpdaterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewUpdaterWrap *wrapper = ObjectWrap::Unwrap<VtkViewUpdaterWrap>(info.Holder());
	vtkViewUpdater *native = (vtkViewUpdater *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkViewUpdaterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewUpdaterWrap *wrapper = ObjectWrap::Unwrap<VtkViewUpdaterWrap>(info.Holder());
	vtkViewUpdater *native = (vtkViewUpdater *)wrapper->native.GetPointer();
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

void VtkViewUpdaterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewUpdaterWrap *wrapper = ObjectWrap::Unwrap<VtkViewUpdaterWrap>(info.Holder());
	vtkViewUpdater *native = (vtkViewUpdater *)wrapper->native.GetPointer();
	vtkViewUpdater * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkViewUpdaterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkViewUpdaterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkViewUpdaterWrap *w = new VtkViewUpdaterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewUpdaterWrap::RemoveView(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewUpdaterWrap *wrapper = ObjectWrap::Unwrap<VtkViewUpdaterWrap>(info.Holder());
	vtkViewUpdater *native = (vtkViewUpdater *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewWrap *a0 = ObjectWrap::Unwrap<VtkViewWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveView(
			(vtkView *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewUpdaterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewUpdaterWrap *wrapper = ObjectWrap::Unwrap<VtkViewUpdaterWrap>(info.Holder());
	vtkViewUpdater *native = (vtkViewUpdater *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkViewUpdater * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkViewUpdaterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkViewUpdaterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkViewUpdaterWrap *w = new VtkViewUpdaterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

