/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkOpenGLPolyDataMapperWrap.h"
#include "vtkGenericCompositePolyDataMapper2Wrap.h"
#include "vtkObjectWrap.h"
#include "vtkCompositeDataDisplayAttributesWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGenericCompositePolyDataMapper2Wrap::ptpl;

VtkGenericCompositePolyDataMapper2Wrap::VtkGenericCompositePolyDataMapper2Wrap()
{ }

VtkGenericCompositePolyDataMapper2Wrap::VtkGenericCompositePolyDataMapper2Wrap(vtkSmartPointer<vtkGenericCompositePolyDataMapper2> _native)
{ native = _native; }

VtkGenericCompositePolyDataMapper2Wrap::~VtkGenericCompositePolyDataMapper2Wrap()
{ }

void VtkGenericCompositePolyDataMapper2Wrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGenericCompositePolyDataMapper2").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GenericCompositePolyDataMapper2").ToLocalChecked(), ConstructorGetter);
}

void VtkGenericCompositePolyDataMapper2Wrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGenericCompositePolyDataMapper2Wrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkOpenGLPolyDataMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkOpenGLPolyDataMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGenericCompositePolyDataMapper2Wrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCompositeDataDisplayAttributes", GetCompositeDataDisplayAttributes);
	Nan::SetPrototypeMethod(tpl, "getCompositeDataDisplayAttributes", GetCompositeDataDisplayAttributes);

	Nan::SetPrototypeMethod(tpl, "GetIsOpaque", GetIsOpaque);
	Nan::SetPrototypeMethod(tpl, "getIsOpaque", GetIsOpaque);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RemoveBlockColors", RemoveBlockColors);
	Nan::SetPrototypeMethod(tpl, "removeBlockColors", RemoveBlockColors);

	Nan::SetPrototypeMethod(tpl, "RemoveBlockOpacities", RemoveBlockOpacities);
	Nan::SetPrototypeMethod(tpl, "removeBlockOpacities", RemoveBlockOpacities);

	Nan::SetPrototypeMethod(tpl, "RemoveBlockVisibilites", RemoveBlockVisibilites);
	Nan::SetPrototypeMethod(tpl, "removeBlockVisibilites", RemoveBlockVisibilites);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCompositeDataDisplayAttributes", SetCompositeDataDisplayAttributes);
	Nan::SetPrototypeMethod(tpl, "setCompositeDataDisplayAttributes", SetCompositeDataDisplayAttributes);

	ptpl.Reset( tpl );
}

void VtkGenericCompositePolyDataMapper2Wrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGenericCompositePolyDataMapper2> native = vtkSmartPointer<vtkGenericCompositePolyDataMapper2>::New();
		VtkGenericCompositePolyDataMapper2Wrap* obj = new VtkGenericCompositePolyDataMapper2Wrap(native);
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

void VtkGenericCompositePolyDataMapper2Wrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkGenericCompositePolyDataMapper2Wrap>(info.Holder());
	vtkGenericCompositePolyDataMapper2 *native = (vtkGenericCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericCompositePolyDataMapper2Wrap::GetCompositeDataDisplayAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkGenericCompositePolyDataMapper2Wrap>(info.Holder());
	vtkGenericCompositePolyDataMapper2 *native = (vtkGenericCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	vtkCompositeDataDisplayAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompositeDataDisplayAttributes();
		VtkCompositeDataDisplayAttributesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeDataDisplayAttributesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataDisplayAttributesWrap *w = new VtkCompositeDataDisplayAttributesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericCompositePolyDataMapper2Wrap::GetIsOpaque(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkGenericCompositePolyDataMapper2Wrap>(info.Holder());
	vtkGenericCompositePolyDataMapper2 *native = (vtkGenericCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIsOpaque();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericCompositePolyDataMapper2Wrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkGenericCompositePolyDataMapper2Wrap>(info.Holder());
	vtkGenericCompositePolyDataMapper2 *native = (vtkGenericCompositePolyDataMapper2 *)wrapper->native.GetPointer();
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

void VtkGenericCompositePolyDataMapper2Wrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkGenericCompositePolyDataMapper2Wrap>(info.Holder());
	vtkGenericCompositePolyDataMapper2 *native = (vtkGenericCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	vtkGenericCompositePolyDataMapper2 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGenericCompositePolyDataMapper2Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericCompositePolyDataMapper2Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericCompositePolyDataMapper2Wrap *w = new VtkGenericCompositePolyDataMapper2Wrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericCompositePolyDataMapper2Wrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkGenericCompositePolyDataMapper2Wrap>(info.Holder());
	vtkGenericCompositePolyDataMapper2 *native = (vtkGenericCompositePolyDataMapper2 *)wrapper->native.GetPointer();
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

void VtkGenericCompositePolyDataMapper2Wrap::RemoveBlockColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkGenericCompositePolyDataMapper2Wrap>(info.Holder());
	vtkGenericCompositePolyDataMapper2 *native = (vtkGenericCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockColors();
}

void VtkGenericCompositePolyDataMapper2Wrap::RemoveBlockOpacities(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkGenericCompositePolyDataMapper2Wrap>(info.Holder());
	vtkGenericCompositePolyDataMapper2 *native = (vtkGenericCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockOpacities();
}

void VtkGenericCompositePolyDataMapper2Wrap::RemoveBlockVisibilites(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkGenericCompositePolyDataMapper2Wrap>(info.Holder());
	vtkGenericCompositePolyDataMapper2 *native = (vtkGenericCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockVisibilites();
}

void VtkGenericCompositePolyDataMapper2Wrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkGenericCompositePolyDataMapper2Wrap>(info.Holder());
	vtkGenericCompositePolyDataMapper2 *native = (vtkGenericCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericCompositePolyDataMapper2 * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGenericCompositePolyDataMapper2Wrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericCompositePolyDataMapper2Wrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericCompositePolyDataMapper2Wrap *w = new VtkGenericCompositePolyDataMapper2Wrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericCompositePolyDataMapper2Wrap::SetCompositeDataDisplayAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkGenericCompositePolyDataMapper2Wrap>(info.Holder());
	vtkGenericCompositePolyDataMapper2 *native = (vtkGenericCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompositeDataDisplayAttributesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompositeDataDisplayAttributesWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompositeDataDisplayAttributes(
			(vtkCompositeDataDisplayAttributes *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

