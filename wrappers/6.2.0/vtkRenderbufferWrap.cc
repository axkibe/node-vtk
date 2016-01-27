/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkRenderbufferWrap.h"
#include "vtkRenderWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRenderbufferWrap::ptpl;

VtkRenderbufferWrap::VtkRenderbufferWrap()
{ }

VtkRenderbufferWrap::VtkRenderbufferWrap(vtkSmartPointer<vtkRenderbuffer> _native)
{ native = _native; }

VtkRenderbufferWrap::~VtkRenderbufferWrap()
{ }

void VtkRenderbufferWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRenderbuffer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Renderbuffer").ToLocalChecked(), ConstructorGetter);
}

void VtkRenderbufferWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRenderbufferWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRenderbufferWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetContext", GetContext);
	Nan::SetPrototypeMethod(tpl, "getContext", GetContext);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetContext", SetContext);
	Nan::SetPrototypeMethod(tpl, "setContext", SetContext);

	ptpl.Reset( tpl );
}

void VtkRenderbufferWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRenderbuffer> native = vtkSmartPointer<vtkRenderbuffer>::New();
		VtkRenderbufferWrap* obj = new VtkRenderbufferWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRenderbufferWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderbufferWrap *wrapper = ObjectWrap::Unwrap<VtkRenderbufferWrap>(info.Holder());
	vtkRenderbuffer *native = (vtkRenderbuffer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRenderbufferWrap::GetContext(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderbufferWrap *wrapper = ObjectWrap::Unwrap<VtkRenderbufferWrap>(info.Holder());
	vtkRenderbuffer *native = (vtkRenderbuffer *)wrapper->native.GetPointer();
	vtkRenderWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContext();
		VtkRenderWindowWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderWindowWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderWindowWrap *w = new VtkRenderWindowWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderbufferWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderbufferWrap *wrapper = ObjectWrap::Unwrap<VtkRenderbufferWrap>(info.Holder());
	vtkRenderbuffer *native = (vtkRenderbuffer *)wrapper->native.GetPointer();
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

void VtkRenderbufferWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderbufferWrap *wrapper = ObjectWrap::Unwrap<VtkRenderbufferWrap>(info.Holder());
	vtkRenderbuffer *native = (vtkRenderbuffer *)wrapper->native.GetPointer();
	vtkRenderbuffer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRenderbufferWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderbufferWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderbufferWrap *w = new VtkRenderbufferWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderbufferWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderbufferWrap *wrapper = ObjectWrap::Unwrap<VtkRenderbufferWrap>(info.Holder());
	vtkRenderbuffer *native = (vtkRenderbuffer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRenderbuffer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRenderbufferWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRenderbufferWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRenderbufferWrap *w = new VtkRenderbufferWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderbufferWrap::SetContext(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderbufferWrap *wrapper = ObjectWrap::Unwrap<VtkRenderbufferWrap>(info.Holder());
	vtkRenderbuffer *native = (vtkRenderbuffer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetContext(
			(vtkRenderWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

