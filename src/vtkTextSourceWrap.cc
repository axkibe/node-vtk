/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkTextSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTextSourceWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTextSourceWrap::ptpl;

VtkTextSourceWrap::VtkTextSourceWrap()
{ }

VtkTextSourceWrap::VtkTextSourceWrap(vtkSmartPointer<vtkTextSource> _native)
{ native = _native; }

VtkTextSourceWrap::~VtkTextSourceWrap()
{ }

void VtkTextSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTextSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TextSource").ToLocalChecked(), ConstructorGetter);
}

void VtkTextSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTextSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTextSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BackingOff", BackingOff);
	Nan::SetPrototypeMethod(tpl, "backingOff", BackingOff);

	Nan::SetPrototypeMethod(tpl, "BackingOn", BackingOn);
	Nan::SetPrototypeMethod(tpl, "backingOn", BackingOn);

	Nan::SetPrototypeMethod(tpl, "GetBacking", GetBacking);
	Nan::SetPrototypeMethod(tpl, "getBacking", GetBacking);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetText", GetText);
	Nan::SetPrototypeMethod(tpl, "getText", GetText);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBackgroundColor", SetBackgroundColor);
	Nan::SetPrototypeMethod(tpl, "setBackgroundColor", SetBackgroundColor);

	Nan::SetPrototypeMethod(tpl, "SetBacking", SetBacking);
	Nan::SetPrototypeMethod(tpl, "setBacking", SetBacking);

	Nan::SetPrototypeMethod(tpl, "SetForegroundColor", SetForegroundColor);
	Nan::SetPrototypeMethod(tpl, "setForegroundColor", SetForegroundColor);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetText", SetText);
	Nan::SetPrototypeMethod(tpl, "setText", SetText);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkTextSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTextSource> native = vtkSmartPointer<vtkTextSource>::New();
		VtkTextSourceWrap* obj = new VtkTextSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTextSourceWrap::BackingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BackingOff();
}

void VtkTextSourceWrap::BackingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BackingOn();
}

void VtkTextSourceWrap::GetBacking(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBacking();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextSourceWrap::GetText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetText();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
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

void VtkTextSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
	vtkTextSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTextSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTextSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextSourceWrap *w = new VtkTextSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTextSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTextSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkTextSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTextSourceWrap *w = new VtkTextSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextSourceWrap::SetBackgroundColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetBackgroundColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextSourceWrap::SetBacking(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBacking(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextSourceWrap::SetForegroundColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetForegroundColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextSourceWrap::SetText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTextSourceWrap>(info.Holder());
	vtkTextSource *native = (vtkTextSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetText(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

