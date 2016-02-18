/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkCollectionWrap.h"
#include "vtkLightCollectionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkLightWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLightCollectionWrap::ptpl;

VtkLightCollectionWrap::VtkLightCollectionWrap()
{ }

VtkLightCollectionWrap::VtkLightCollectionWrap(vtkSmartPointer<vtkLightCollection> _native)
{ native = _native; }

VtkLightCollectionWrap::~VtkLightCollectionWrap()
{ }

void VtkLightCollectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLightCollection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LightCollection").ToLocalChecked(), ConstructorGetter);
}

void VtkLightCollectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLightCollectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCollectionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCollectionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLightCollectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddItem", AddItem);
	Nan::SetPrototypeMethod(tpl, "addItem", AddItem);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNextItem", GetNextItem);
	Nan::SetPrototypeMethod(tpl, "getNextItem", GetNextItem);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKLIGHTCOLLECTIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKLIGHTCOLLECTIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkLightCollectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLightCollection> native = vtkSmartPointer<vtkLightCollection>::New();
		VtkLightCollectionWrap* obj = new VtkLightCollectionWrap(native);
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

void VtkLightCollectionWrap::AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkLightCollectionWrap>(info.Holder());
	vtkLightCollection *native = (vtkLightCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkLightWrap::ptpl))->HasInstance(info[0]))
	{
		VtkLightWrap *a0 = ObjectWrap::Unwrap<VtkLightWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddItem(
			(vtkLight *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLightCollectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkLightCollectionWrap>(info.Holder());
	vtkLightCollection *native = (vtkLightCollection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLightCollectionWrap::GetNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkLightCollectionWrap>(info.Holder());
	vtkLightCollection *native = (vtkLightCollection *)wrapper->native.GetPointer();
	vtkLight * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextItem();
	VtkLightWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLightWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLightWrap *w = new VtkLightWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLightCollectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkLightCollectionWrap>(info.Holder());
	vtkLightCollection *native = (vtkLightCollection *)wrapper->native.GetPointer();
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

void VtkLightCollectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkLightCollectionWrap>(info.Holder());
	vtkLightCollection *native = (vtkLightCollection *)wrapper->native.GetPointer();
	vtkLightCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkLightCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLightCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLightCollectionWrap *w = new VtkLightCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLightCollectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLightCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkLightCollectionWrap>(info.Holder());
	vtkLightCollection *native = (vtkLightCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLightCollection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkLightCollectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLightCollectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLightCollectionWrap *w = new VtkLightCollectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

