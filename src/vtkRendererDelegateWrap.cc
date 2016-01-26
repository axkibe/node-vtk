/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkRendererDelegateWrap.h"
#include "vtkRendererWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkRendererDelegateWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkRendererDelegateWrap::ptpl;

VtkRendererDelegateWrap::VtkRendererDelegateWrap()
{ }

VtkRendererDelegateWrap::VtkRendererDelegateWrap(vtkSmartPointer<vtkRendererDelegate> _native)
{ native = _native; }

VtkRendererDelegateWrap::~VtkRendererDelegateWrap()
{ }

void VtkRendererDelegateWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRendererDelegate").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RendererDelegate").ToLocalChecked(), ConstructorGetter);
}

void VtkRendererDelegateWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRendererDelegateWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRendererDelegateWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "UsedOff", UsedOff);
	Nan::SetPrototypeMethod(tpl, "usedOff", UsedOff);

	Nan::SetPrototypeMethod(tpl, "UsedOn", UsedOn);
	Nan::SetPrototypeMethod(tpl, "usedOn", UsedOn);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkRendererDelegateWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRendererDelegateWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererDelegateWrap *wrapper = ObjectWrap::Unwrap<VtkRendererDelegateWrap>(info.Holder());
	vtkRendererDelegate *native = (vtkRendererDelegate *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRendererDelegateWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererDelegateWrap *wrapper = ObjectWrap::Unwrap<VtkRendererDelegateWrap>(info.Holder());
	vtkRendererDelegate *native = (vtkRendererDelegate *)wrapper->native.GetPointer();
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

void VtkRendererDelegateWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererDelegateWrap *wrapper = ObjectWrap::Unwrap<VtkRendererDelegateWrap>(info.Holder());
	vtkRendererDelegate *native = (vtkRendererDelegate *)wrapper->native.GetPointer();
	vtkRendererDelegate * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRendererDelegateWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRendererDelegateWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererDelegateWrap *w = new VtkRendererDelegateWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRendererDelegateWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererDelegateWrap *wrapper = ObjectWrap::Unwrap<VtkRendererDelegateWrap>(info.Holder());
	vtkRendererDelegate *native = (vtkRendererDelegate *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Render(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRendererDelegateWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererDelegateWrap *wrapper = ObjectWrap::Unwrap<VtkRendererDelegateWrap>(info.Holder());
	vtkRendererDelegate *native = (vtkRendererDelegate *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRendererDelegate * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRendererDelegateWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkRendererDelegateWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRendererDelegateWrap *w = new VtkRendererDelegateWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRendererDelegateWrap::UsedOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererDelegateWrap *wrapper = ObjectWrap::Unwrap<VtkRendererDelegateWrap>(info.Holder());
	vtkRendererDelegate *native = (vtkRendererDelegate *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UsedOff();
}

void VtkRendererDelegateWrap::UsedOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererDelegateWrap *wrapper = ObjectWrap::Unwrap<VtkRendererDelegateWrap>(info.Holder());
	vtkRendererDelegate *native = (vtkRendererDelegate *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UsedOn();
}

