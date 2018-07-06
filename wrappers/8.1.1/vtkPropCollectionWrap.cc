/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkCollectionWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPropWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPropCollectionWrap::ptpl;

VtkPropCollectionWrap::VtkPropCollectionWrap()
{ }

VtkPropCollectionWrap::VtkPropCollectionWrap(vtkSmartPointer<vtkPropCollection> _native)
{ native = _native; }

VtkPropCollectionWrap::~VtkPropCollectionWrap()
{ }

void VtkPropCollectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPropCollection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PropCollection").ToLocalChecked(), ConstructorGetter);
}

void VtkPropCollectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPropCollectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCollectionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCollectionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPropCollectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddItem", AddItem);
	Nan::SetPrototypeMethod(tpl, "addItem", AddItem);

	Nan::SetPrototypeMethod(tpl, "GetLastProp", GetLastProp);
	Nan::SetPrototypeMethod(tpl, "getLastProp", GetLastProp);

	Nan::SetPrototypeMethod(tpl, "GetNextProp", GetNextProp);
	Nan::SetPrototypeMethod(tpl, "getNextProp", GetNextProp);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPaths", GetNumberOfPaths);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPaths", GetNumberOfPaths);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKPROPCOLLECTIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPROPCOLLECTIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPropCollectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPropCollection> native = vtkSmartPointer<vtkPropCollection>::New();
		VtkPropCollectionWrap* obj = new VtkPropCollectionWrap(native);
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

void VtkPropCollectionWrap::AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddItem(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPropCollectionWrap::GetLastProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
	vtkProp * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastProp();
	VtkPropWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropWrap *w = new VtkPropWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPropCollectionWrap::GetNextProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
	vtkProp * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextProp();
	VtkPropWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropWrap *w = new VtkPropWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPropCollectionWrap::GetNumberOfPaths(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPaths();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPropCollectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
	vtkPropCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPropCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropCollectionWrap *w = new VtkPropCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPropCollectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPropCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info.Holder());
	vtkPropCollection *native = (vtkPropCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPropCollection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPropCollectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPropCollectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPropCollectionWrap *w = new VtkPropCollectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

