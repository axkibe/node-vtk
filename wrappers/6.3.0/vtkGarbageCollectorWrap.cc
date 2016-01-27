/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGarbageCollectorWrap.h"
#include "vtkObjectBaseWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGarbageCollectorWrap::ptpl;

VtkGarbageCollectorWrap::VtkGarbageCollectorWrap()
{ }

VtkGarbageCollectorWrap::VtkGarbageCollectorWrap(vtkSmartPointer<vtkGarbageCollector> _native)
{ native = _native; }

VtkGarbageCollectorWrap::~VtkGarbageCollectorWrap()
{ }

void VtkGarbageCollectorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGarbageCollector").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GarbageCollector").ToLocalChecked(), ConstructorGetter);
}

void VtkGarbageCollectorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGarbageCollectorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGarbageCollectorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Collect", Collect);
	Nan::SetPrototypeMethod(tpl, "collect", Collect);

	Nan::SetPrototypeMethod(tpl, "DeferredCollectionPop", DeferredCollectionPop);
	Nan::SetPrototypeMethod(tpl, "deferredCollectionPop", DeferredCollectionPop);

	Nan::SetPrototypeMethod(tpl, "DeferredCollectionPush", DeferredCollectionPush);
	Nan::SetPrototypeMethod(tpl, "deferredCollectionPush", DeferredCollectionPush);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkGarbageCollectorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGarbageCollector> native = vtkSmartPointer<vtkGarbageCollector>::New();
		VtkGarbageCollectorWrap* obj = new VtkGarbageCollectorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGarbageCollectorWrap::Collect(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGarbageCollectorWrap *wrapper = ObjectWrap::Unwrap<VtkGarbageCollectorWrap>(info.Holder());
	vtkGarbageCollector *native = (vtkGarbageCollector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Collect(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		return;
	}
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Collect();
}

void VtkGarbageCollectorWrap::DeferredCollectionPop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGarbageCollectorWrap *wrapper = ObjectWrap::Unwrap<VtkGarbageCollectorWrap>(info.Holder());
	vtkGarbageCollector *native = (vtkGarbageCollector *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeferredCollectionPop();
}

void VtkGarbageCollectorWrap::DeferredCollectionPush(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGarbageCollectorWrap *wrapper = ObjectWrap::Unwrap<VtkGarbageCollectorWrap>(info.Holder());
	vtkGarbageCollector *native = (vtkGarbageCollector *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeferredCollectionPush();
}

void VtkGarbageCollectorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGarbageCollectorWrap *wrapper = ObjectWrap::Unwrap<VtkGarbageCollectorWrap>(info.Holder());
	vtkGarbageCollector *native = (vtkGarbageCollector *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGarbageCollectorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGarbageCollectorWrap *wrapper = ObjectWrap::Unwrap<VtkGarbageCollectorWrap>(info.Holder());
	vtkGarbageCollector *native = (vtkGarbageCollector *)wrapper->native.GetPointer();
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

void VtkGarbageCollectorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGarbageCollectorWrap *wrapper = ObjectWrap::Unwrap<VtkGarbageCollectorWrap>(info.Holder());
	vtkGarbageCollector *native = (vtkGarbageCollector *)wrapper->native.GetPointer();
	vtkGarbageCollector * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGarbageCollectorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGarbageCollectorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGarbageCollectorWrap *w = new VtkGarbageCollectorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGarbageCollectorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGarbageCollectorWrap *wrapper = ObjectWrap::Unwrap<VtkGarbageCollectorWrap>(info.Holder());
	vtkGarbageCollector *native = (vtkGarbageCollector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGarbageCollector * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGarbageCollectorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGarbageCollectorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGarbageCollectorWrap *w = new VtkGarbageCollectorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
