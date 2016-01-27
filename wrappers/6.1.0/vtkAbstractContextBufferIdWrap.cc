/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkAbstractContextBufferIdWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractContextBufferIdWrap::ptpl;

VtkAbstractContextBufferIdWrap::VtkAbstractContextBufferIdWrap()
{ }

VtkAbstractContextBufferIdWrap::VtkAbstractContextBufferIdWrap(vtkSmartPointer<vtkAbstractContextBufferId> _native)
{ native = _native; }

VtkAbstractContextBufferIdWrap::~VtkAbstractContextBufferIdWrap()
{ }

void VtkAbstractContextBufferIdWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractContextBufferId").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractContextBufferId").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractContextBufferIdWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractContextBufferIdWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractContextBufferIdWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Allocate", Allocate);
	Nan::SetPrototypeMethod(tpl, "allocate", Allocate);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHeight", GetHeight);
	Nan::SetPrototypeMethod(tpl, "getHeight", GetHeight);

	Nan::SetPrototypeMethod(tpl, "GetWidth", GetWidth);
	Nan::SetPrototypeMethod(tpl, "getWidth", GetWidth);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHeight", SetHeight);
	Nan::SetPrototypeMethod(tpl, "setHeight", SetHeight);

	Nan::SetPrototypeMethod(tpl, "SetValues", SetValues);
	Nan::SetPrototypeMethod(tpl, "setValues", SetValues);

	Nan::SetPrototypeMethod(tpl, "SetWidth", SetWidth);
	Nan::SetPrototypeMethod(tpl, "setWidth", SetWidth);

	ptpl.Reset( tpl );
}

void VtkAbstractContextBufferIdWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAbstractContextBufferIdWrap::Allocate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractContextBufferIdWrap>(info.Holder());
	vtkAbstractContextBufferId *native = (vtkAbstractContextBufferId *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Allocate();
}

void VtkAbstractContextBufferIdWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractContextBufferIdWrap>(info.Holder());
	vtkAbstractContextBufferId *native = (vtkAbstractContextBufferId *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractContextBufferIdWrap::GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractContextBufferIdWrap>(info.Holder());
	vtkAbstractContextBufferId *native = (vtkAbstractContextBufferId *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractContextBufferIdWrap::GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractContextBufferIdWrap>(info.Holder());
	vtkAbstractContextBufferId *native = (vtkAbstractContextBufferId *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractContextBufferIdWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractContextBufferIdWrap>(info.Holder());
	vtkAbstractContextBufferId *native = (vtkAbstractContextBufferId *)wrapper->native.GetPointer();
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

void VtkAbstractContextBufferIdWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractContextBufferIdWrap>(info.Holder());
	vtkAbstractContextBufferId *native = (vtkAbstractContextBufferId *)wrapper->native.GetPointer();
	vtkAbstractContextBufferId * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAbstractContextBufferIdWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractContextBufferIdWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractContextBufferIdWrap *w = new VtkAbstractContextBufferIdWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractContextBufferIdWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractContextBufferIdWrap>(info.Holder());
	vtkAbstractContextBufferId *native = (vtkAbstractContextBufferId *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReleaseGraphicsResources();
}

void VtkAbstractContextBufferIdWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractContextBufferIdWrap>(info.Holder());
	vtkAbstractContextBufferId *native = (vtkAbstractContextBufferId *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAbstractContextBufferId * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAbstractContextBufferIdWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAbstractContextBufferIdWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractContextBufferIdWrap *w = new VtkAbstractContextBufferIdWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractContextBufferIdWrap::SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractContextBufferIdWrap>(info.Holder());
	vtkAbstractContextBufferId *native = (vtkAbstractContextBufferId *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeight(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractContextBufferIdWrap::SetValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractContextBufferIdWrap>(info.Holder());
	vtkAbstractContextBufferId *native = (vtkAbstractContextBufferId *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetValues(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractContextBufferIdWrap::SetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractContextBufferIdWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractContextBufferIdWrap>(info.Holder());
	vtkAbstractContextBufferId *native = (vtkAbstractContextBufferId *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWidth(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

