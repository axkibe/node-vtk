/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkCollectionWrap.h"
#include "vtkAssemblyPathsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAssemblyPathWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAssemblyPathsWrap::ptpl;

VtkAssemblyPathsWrap::VtkAssemblyPathsWrap()
{ }

VtkAssemblyPathsWrap::VtkAssemblyPathsWrap(vtkSmartPointer<vtkAssemblyPaths> _native)
{ native = _native; }

VtkAssemblyPathsWrap::~VtkAssemblyPathsWrap()
{ }

void VtkAssemblyPathsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAssemblyPaths").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AssemblyPaths").ToLocalChecked(), ConstructorGetter);
}

void VtkAssemblyPathsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAssemblyPathsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCollectionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCollectionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAssemblyPathsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddItem", AddItem);
	Nan::SetPrototypeMethod(tpl, "addItem", AddItem);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNextItem", GetNextItem);
	Nan::SetPrototypeMethod(tpl, "getNextItem", GetNextItem);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsItemPresent", IsItemPresent);
	Nan::SetPrototypeMethod(tpl, "isItemPresent", IsItemPresent);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveItem", RemoveItem);
	Nan::SetPrototypeMethod(tpl, "removeItem", RemoveItem);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKASSEMBLYPATHSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKASSEMBLYPATHSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAssemblyPathsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAssemblyPaths> native = vtkSmartPointer<vtkAssemblyPaths>::New();
		VtkAssemblyPathsWrap* obj = new VtkAssemblyPathsWrap(native);
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

void VtkAssemblyPathsWrap::AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathsWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathsWrap>(info.Holder());
	vtkAssemblyPaths *native = (vtkAssemblyPaths *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAssemblyPathWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAssemblyPathWrap *a0 = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddItem(
			(vtkAssemblyPath *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssemblyPathsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathsWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathsWrap>(info.Holder());
	vtkAssemblyPaths *native = (vtkAssemblyPaths *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAssemblyPathsWrap::GetNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathsWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathsWrap>(info.Holder());
	vtkAssemblyPaths *native = (vtkAssemblyPaths *)wrapper->native.GetPointer();
	vtkAssemblyPath * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextItem();
	VtkAssemblyPathWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAssemblyPathWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssemblyPathWrap *w = new VtkAssemblyPathWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssemblyPathsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathsWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathsWrap>(info.Holder());
	vtkAssemblyPaths *native = (vtkAssemblyPaths *)wrapper->native.GetPointer();
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

void VtkAssemblyPathsWrap::IsItemPresent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathsWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathsWrap>(info.Holder());
	vtkAssemblyPaths *native = (vtkAssemblyPaths *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAssemblyPathWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAssemblyPathWrap *a0 = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsItemPresent(
			(vtkAssemblyPath *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssemblyPathsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathsWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathsWrap>(info.Holder());
	vtkAssemblyPaths *native = (vtkAssemblyPaths *)wrapper->native.GetPointer();
	vtkAssemblyPaths * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAssemblyPathsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAssemblyPathsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssemblyPathsWrap *w = new VtkAssemblyPathsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssemblyPathsWrap::RemoveItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathsWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathsWrap>(info.Holder());
	vtkAssemblyPaths *native = (vtkAssemblyPaths *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAssemblyPathWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAssemblyPathWrap *a0 = ObjectWrap::Unwrap<VtkAssemblyPathWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveItem(
			(vtkAssemblyPath *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssemblyPathsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssemblyPathsWrap *wrapper = ObjectWrap::Unwrap<VtkAssemblyPathsWrap>(info.Holder());
	vtkAssemblyPaths *native = (vtkAssemblyPaths *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAssemblyPaths * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkAssemblyPathsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAssemblyPathsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAssemblyPathsWrap *w = new VtkAssemblyPathsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

