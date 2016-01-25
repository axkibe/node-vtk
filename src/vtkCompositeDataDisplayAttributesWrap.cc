/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkCompositeDataDisplayAttributesWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCompositeDataDisplayAttributesWrap::constructor;

VtkCompositeDataDisplayAttributesWrap::VtkCompositeDataDisplayAttributesWrap()
{ }

VtkCompositeDataDisplayAttributesWrap::VtkCompositeDataDisplayAttributesWrap(vtkSmartPointer<vtkCompositeDataDisplayAttributes> _native)
{ native = _native; }

VtkCompositeDataDisplayAttributesWrap::~VtkCompositeDataDisplayAttributesWrap()
{ }

void VtkCompositeDataDisplayAttributesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkCompositeDataDisplayAttributesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkCompositeDataDisplayAttributes").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CompositeDataDisplayAttributes").ToLocalChecked(),tpl->GetFunction());
}

void VtkCompositeDataDisplayAttributesWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

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

}

void VtkCompositeDataDisplayAttributesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCompositeDataDisplayAttributes> native = vtkSmartPointer<vtkCompositeDataDisplayAttributes>::New();
		VtkCompositeDataDisplayAttributesWrap* obj = new VtkCompositeDataDisplayAttributesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCompositeDataDisplayAttributesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompositeDataDisplayAttributesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
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

void VtkCompositeDataDisplayAttributesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	vtkCompositeDataDisplayAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCompositeDataDisplayAttributesWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataDisplayAttributesWrap *w = new VtkCompositeDataDisplayAttributesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataDisplayAttributesWrap::RemoveBlockColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockColors();
}

void VtkCompositeDataDisplayAttributesWrap::RemoveBlockOpacities(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockOpacities();
}

void VtkCompositeDataDisplayAttributesWrap::RemoveBlockVisibilites(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockVisibilites();
}

void VtkCompositeDataDisplayAttributesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompositeDataDisplayAttributes * r;
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
			Nan::New<v8::Function>(VtkCompositeDataDisplayAttributesWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositeDataDisplayAttributesWrap *w = new VtkCompositeDataDisplayAttributesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

