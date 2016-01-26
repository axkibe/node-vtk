/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCollectionWrap.h"
#include "vtkAssemblyPathWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPropWrap.h"
#include "vtkMatrix4x4Wrap.h"
#include "vtkAssemblyNodeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAssemblyPathWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkAssemblyPathWrap::ptpl;

VtkAssemblyPathWrap::VtkAssemblyPathWrap()
{ }

VtkAssemblyPathWrap::VtkAssemblyPathWrap(vtkSmartPointer<vtkAssemblyPath> _native)
{ native = _native; }

VtkAssemblyPathWrap::~VtkAssemblyPathWrap()
{ }

void VtkAssemblyPathWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAssemblyPath").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AssemblyPath").ToLocalChecked(), ConstructorGetter);
}

void VtkAssemblyPathWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAssemblyPathWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCollectionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCollectionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAssemblyPathWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddNode", AddNode);
	Nan::SetPrototypeMethod(tpl, "addNode", AddNode);

	Nan::SetPrototypeMethod(tpl, "DeleteLastNode", DeleteLastNode);
	Nan::SetPrototypeMethod(tpl, "deleteLastNode", DeleteLastNode);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFirstNode", GetFirstNode);
	Nan::SetPrototypeMethod(tpl, "getFirstNode", GetFirstNode);

	Nan::SetPrototypeMethod(tpl, "GetLastNode", GetLastNode);
	Nan::SetPrototypeMethod(tpl, "getLastNode", GetLastNode);

	Nan::SetPrototypeMethod(tpl, "GetNextNode", GetNextNode);
	Nan::SetPrototypeMethod(tpl, "getNextNode", GetNextNode);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkAssemblyPathWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAssemblyPath> native = vtkSmartPointer<vtkAssemblyPath>::New();
		VtkAssemblyPathWrap* obj = new VtkAssemblyPathWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAssemblyPathWrap::AddNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info.Holder());
	vtkAssemblyPath *native = (vtkAssemblyPath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[1]))
		{
			VtkMatrix4x4Wrap *a1 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddNode(
				(vtkProp *) a0->native.GetPointer(),
				(vtkMatrix4x4 *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssemblyPathWrap::DeleteLastNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info.Holder());
	vtkAssemblyPath *native = (vtkAssemblyPath *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeleteLastNode();
}

void VtkAssemblyPathWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info.Holder());
	vtkAssemblyPath *native = (vtkAssemblyPath *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAssemblyPathWrap::GetFirstNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info.Holder());
	vtkAssemblyPath *native = (vtkAssemblyPath *)wrapper->native.GetPointer();
	vtkAssemblyNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFirstNode();
		VtkAssemblyNodeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAssemblyNodeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssemblyNodeWrap *w = new VtkAssemblyNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssemblyPathWrap::GetLastNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info.Holder());
	vtkAssemblyPath *native = (vtkAssemblyPath *)wrapper->native.GetPointer();
	vtkAssemblyNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastNode();
		VtkAssemblyNodeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAssemblyNodeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssemblyNodeWrap *w = new VtkAssemblyNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssemblyPathWrap::GetNextNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info.Holder());
	vtkAssemblyPath *native = (vtkAssemblyPath *)wrapper->native.GetPointer();
	vtkAssemblyNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextNode();
		VtkAssemblyNodeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAssemblyNodeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssemblyNodeWrap *w = new VtkAssemblyNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssemblyPathWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info.Holder());
	vtkAssemblyPath *native = (vtkAssemblyPath *)wrapper->native.GetPointer();
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

void VtkAssemblyPathWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info.Holder());
	vtkAssemblyPath *native = (vtkAssemblyPath *)wrapper->native.GetPointer();
	vtkAssemblyPath * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAssemblyPathWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAssemblyPathWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssemblyPathWrap *w = new VtkAssemblyPathWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssemblyPathWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info.Holder());
	vtkAssemblyPath *native = (vtkAssemblyPath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAssemblyPath * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAssemblyPathWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkAssemblyPathWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAssemblyPathWrap *w = new VtkAssemblyPathWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssemblyPathWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info.Holder());
	vtkAssemblyPath *native = (vtkAssemblyPath *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAssemblyPathWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAssemblyPathWrap *a0 = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkAssemblyPath *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

