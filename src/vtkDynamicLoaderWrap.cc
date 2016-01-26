/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkDynamicLoaderWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDynamicLoaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkDynamicLoaderWrap::ptpl;

VtkDynamicLoaderWrap::VtkDynamicLoaderWrap()
{ }

VtkDynamicLoaderWrap::VtkDynamicLoaderWrap(vtkSmartPointer<vtkDynamicLoader> _native)
{ native = _native; }

VtkDynamicLoaderWrap::~VtkDynamicLoaderWrap()
{ }

void VtkDynamicLoaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDynamicLoader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DynamicLoader").ToLocalChecked(), ConstructorGetter);
}

void VtkDynamicLoaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDynamicLoaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDynamicLoaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LastError", LastError);
	Nan::SetPrototypeMethod(tpl, "lastError", LastError);

	Nan::SetPrototypeMethod(tpl, "LibExtension", LibExtension);
	Nan::SetPrototypeMethod(tpl, "libExtension", LibExtension);

	Nan::SetPrototypeMethod(tpl, "LibPrefix", LibPrefix);
	Nan::SetPrototypeMethod(tpl, "libPrefix", LibPrefix);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkDynamicLoaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDynamicLoader> native = vtkSmartPointer<vtkDynamicLoader>::New();
		VtkDynamicLoaderWrap* obj = new VtkDynamicLoaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDynamicLoaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDynamicLoaderWrap *wrapper = ObjectWrap::Unwrap<VtkDynamicLoaderWrap>(info.Holder());
	vtkDynamicLoader *native = (vtkDynamicLoader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDynamicLoaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDynamicLoaderWrap *wrapper = ObjectWrap::Unwrap<VtkDynamicLoaderWrap>(info.Holder());
	vtkDynamicLoader *native = (vtkDynamicLoader *)wrapper->native.GetPointer();
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

void VtkDynamicLoaderWrap::LastError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDynamicLoaderWrap *wrapper = ObjectWrap::Unwrap<VtkDynamicLoaderWrap>(info.Holder());
	vtkDynamicLoader *native = (vtkDynamicLoader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->LastError();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDynamicLoaderWrap::LibExtension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDynamicLoaderWrap *wrapper = ObjectWrap::Unwrap<VtkDynamicLoaderWrap>(info.Holder());
	vtkDynamicLoader *native = (vtkDynamicLoader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->LibExtension();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDynamicLoaderWrap::LibPrefix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDynamicLoaderWrap *wrapper = ObjectWrap::Unwrap<VtkDynamicLoaderWrap>(info.Holder());
	vtkDynamicLoader *native = (vtkDynamicLoader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->LibPrefix();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDynamicLoaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDynamicLoaderWrap *wrapper = ObjectWrap::Unwrap<VtkDynamicLoaderWrap>(info.Holder());
	vtkDynamicLoader *native = (vtkDynamicLoader *)wrapper->native.GetPointer();
	vtkDynamicLoader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDynamicLoaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDynamicLoaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDynamicLoaderWrap *w = new VtkDynamicLoaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDynamicLoaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDynamicLoaderWrap *wrapper = ObjectWrap::Unwrap<VtkDynamicLoaderWrap>(info.Holder());
	vtkDynamicLoader *native = (vtkDynamicLoader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDynamicLoader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDynamicLoaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkDynamicLoaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDynamicLoaderWrap *w = new VtkDynamicLoaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

