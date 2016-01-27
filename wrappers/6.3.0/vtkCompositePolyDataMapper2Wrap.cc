/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPainterPolyDataMapperWrap.h"
#include "vtkCompositePolyDataMapper2Wrap.h"
#include "vtkObjectWrap.h"
#include "vtkCompositeDataDisplayAttributesWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompositePolyDataMapper2Wrap::ptpl;

VtkCompositePolyDataMapper2Wrap::VtkCompositePolyDataMapper2Wrap()
{ }

VtkCompositePolyDataMapper2Wrap::VtkCompositePolyDataMapper2Wrap(vtkSmartPointer<vtkCompositePolyDataMapper2> _native)
{ native = _native; }

VtkCompositePolyDataMapper2Wrap::~VtkCompositePolyDataMapper2Wrap()
{ }

void VtkCompositePolyDataMapper2Wrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompositePolyDataMapper2").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompositePolyDataMapper2").ToLocalChecked(), ConstructorGetter);
}

void VtkCompositePolyDataMapper2Wrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompositePolyDataMapper2Wrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPainterPolyDataMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPainterPolyDataMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompositePolyDataMapper2Wrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCompositeDataDisplayAttributes", GetCompositeDataDisplayAttributes);
	Nan::SetPrototypeMethod(tpl, "getCompositeDataDisplayAttributes", GetCompositeDataDisplayAttributes);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

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

void VtkCompositePolyDataMapper2Wrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCompositePolyDataMapper2> native = vtkSmartPointer<vtkCompositePolyDataMapper2>::New();
		VtkCompositePolyDataMapper2Wrap* obj = new VtkCompositePolyDataMapper2Wrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCompositePolyDataMapper2Wrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapper2Wrap>(info.Holder());
	vtkCompositePolyDataMapper2 *native = (vtkCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompositePolyDataMapper2Wrap::GetCompositeDataDisplayAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapper2Wrap>(info.Holder());
	vtkCompositePolyDataMapper2 *native = (vtkCompositePolyDataMapper2 *)wrapper->native.GetPointer();
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
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositePolyDataMapper2Wrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapper2Wrap>(info.Holder());
	vtkCompositePolyDataMapper2 *native = (vtkCompositePolyDataMapper2 *)wrapper->native.GetPointer();
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

void VtkCompositePolyDataMapper2Wrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapper2Wrap>(info.Holder());
	vtkCompositePolyDataMapper2 *native = (vtkCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	vtkCompositePolyDataMapper2 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCompositePolyDataMapper2Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositePolyDataMapper2Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositePolyDataMapper2Wrap *w = new VtkCompositePolyDataMapper2Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositePolyDataMapper2Wrap::RemoveBlockColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapper2Wrap>(info.Holder());
	vtkCompositePolyDataMapper2 *native = (vtkCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockColors();
}

void VtkCompositePolyDataMapper2Wrap::RemoveBlockOpacities(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapper2Wrap>(info.Holder());
	vtkCompositePolyDataMapper2 *native = (vtkCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockOpacities();
}

void VtkCompositePolyDataMapper2Wrap::RemoveBlockVisibilites(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapper2Wrap>(info.Holder());
	vtkCompositePolyDataMapper2 *native = (vtkCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockVisibilites();
}

void VtkCompositePolyDataMapper2Wrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapper2Wrap>(info.Holder());
	vtkCompositePolyDataMapper2 *native = (vtkCompositePolyDataMapper2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompositePolyDataMapper2 * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCompositePolyDataMapper2Wrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompositePolyDataMapper2Wrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositePolyDataMapper2Wrap *w = new VtkCompositePolyDataMapper2Wrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositePolyDataMapper2Wrap::SetCompositeDataDisplayAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositePolyDataMapper2Wrap *wrapper = ObjectWrap::Unwrap<VtkCompositePolyDataMapper2Wrap>(info.Holder());
	vtkCompositePolyDataMapper2 *native = (vtkCompositePolyDataMapper2 *)wrapper->native.GetPointer();
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

