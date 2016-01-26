/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkExodusIICacheWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkExodusIICacheWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkExodusIICacheWrap::ptpl;

VtkExodusIICacheWrap::VtkExodusIICacheWrap()
{ }

VtkExodusIICacheWrap::VtkExodusIICacheWrap(vtkSmartPointer<vtkExodusIICache> _native)
{ native = _native; }

VtkExodusIICacheWrap::~VtkExodusIICacheWrap()
{ }

void VtkExodusIICacheWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExodusIICache").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExodusIICache").ToLocalChecked(), ConstructorGetter);
}

void VtkExodusIICacheWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExodusIICacheWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExodusIICacheWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Clear", Clear);
	Nan::SetPrototypeMethod(tpl, "clear", Clear);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSpaceLeft", GetSpaceLeft);
	Nan::SetPrototypeMethod(tpl, "getSpaceLeft", GetSpaceLeft);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReduceToSize", ReduceToSize);
	Nan::SetPrototypeMethod(tpl, "reduceToSize", ReduceToSize);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCacheCapacity", SetCacheCapacity);
	Nan::SetPrototypeMethod(tpl, "setCacheCapacity", SetCacheCapacity);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkExodusIICacheWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExodusIICache> native = vtkSmartPointer<vtkExodusIICache>::New();
		VtkExodusIICacheWrap* obj = new VtkExodusIICacheWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExodusIICacheWrap::Clear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIICacheWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIICacheWrap>(info.Holder());
	vtkExodusIICache *native = (vtkExodusIICache *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Clear();
}

void VtkExodusIICacheWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIICacheWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIICacheWrap>(info.Holder());
	vtkExodusIICache *native = (vtkExodusIICache *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExodusIICacheWrap::GetSpaceLeft(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIICacheWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIICacheWrap>(info.Holder());
	vtkExodusIICache *native = (vtkExodusIICache *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSpaceLeft();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExodusIICacheWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIICacheWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIICacheWrap>(info.Holder());
	vtkExodusIICache *native = (vtkExodusIICache *)wrapper->native.GetPointer();
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

void VtkExodusIICacheWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIICacheWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIICacheWrap>(info.Holder());
	vtkExodusIICache *native = (vtkExodusIICache *)wrapper->native.GetPointer();
	vtkExodusIICache * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkExodusIICacheWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkExodusIICacheWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExodusIICacheWrap *w = new VtkExodusIICacheWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExodusIICacheWrap::ReduceToSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIICacheWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIICacheWrap>(info.Holder());
	vtkExodusIICache *native = (vtkExodusIICache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->ReduceToSize(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusIICacheWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIICacheWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIICacheWrap>(info.Holder());
	vtkExodusIICache *native = (vtkExodusIICache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExodusIICache * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkExodusIICacheWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkExodusIICacheWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExodusIICacheWrap *w = new VtkExodusIICacheWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusIICacheWrap::SetCacheCapacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusIICacheWrap *wrapper = ObjectWrap::Unwrap<VtkExodusIICacheWrap>(info.Holder());
	vtkExodusIICache *native = (vtkExodusIICache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCacheCapacity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

