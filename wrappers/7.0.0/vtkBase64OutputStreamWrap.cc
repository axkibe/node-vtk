/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkOutputStreamWrap.h"
#include "vtkBase64OutputStreamWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBase64OutputStreamWrap::ptpl;

VtkBase64OutputStreamWrap::VtkBase64OutputStreamWrap()
{ }

VtkBase64OutputStreamWrap::VtkBase64OutputStreamWrap(vtkSmartPointer<vtkBase64OutputStream> _native)
{ native = _native; }

VtkBase64OutputStreamWrap::~VtkBase64OutputStreamWrap()
{ }

void VtkBase64OutputStreamWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBase64OutputStream").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Base64OutputStream").ToLocalChecked(), ConstructorGetter);
}

void VtkBase64OutputStreamWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBase64OutputStreamWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkOutputStreamWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkOutputStreamWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBase64OutputStreamWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EndWriting", EndWriting);
	Nan::SetPrototypeMethod(tpl, "endWriting", EndWriting);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "StartWriting", StartWriting);
	Nan::SetPrototypeMethod(tpl, "startWriting", StartWriting);

	ptpl.Reset( tpl );
}

void VtkBase64OutputStreamWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBase64OutputStream> native = vtkSmartPointer<vtkBase64OutputStream>::New();
		VtkBase64OutputStreamWrap* obj = new VtkBase64OutputStreamWrap(native);
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

void VtkBase64OutputStreamWrap::EndWriting(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBase64OutputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkBase64OutputStreamWrap>(info.Holder());
	vtkBase64OutputStream *native = (vtkBase64OutputStream *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->EndWriting();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBase64OutputStreamWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBase64OutputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkBase64OutputStreamWrap>(info.Holder());
	vtkBase64OutputStream *native = (vtkBase64OutputStream *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBase64OutputStreamWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBase64OutputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkBase64OutputStreamWrap>(info.Holder());
	vtkBase64OutputStream *native = (vtkBase64OutputStream *)wrapper->native.GetPointer();
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

void VtkBase64OutputStreamWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBase64OutputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkBase64OutputStreamWrap>(info.Holder());
	vtkBase64OutputStream *native = (vtkBase64OutputStream *)wrapper->native.GetPointer();
	vtkBase64OutputStream * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkBase64OutputStreamWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBase64OutputStreamWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBase64OutputStreamWrap *w = new VtkBase64OutputStreamWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBase64OutputStreamWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBase64OutputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkBase64OutputStreamWrap>(info.Holder());
	vtkBase64OutputStream *native = (vtkBase64OutputStream *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBase64OutputStream * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkBase64OutputStreamWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBase64OutputStreamWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBase64OutputStreamWrap *w = new VtkBase64OutputStreamWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBase64OutputStreamWrap::StartWriting(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBase64OutputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkBase64OutputStreamWrap>(info.Holder());
	vtkBase64OutputStream *native = (vtkBase64OutputStream *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->StartWriting();
	info.GetReturnValue().Set(Nan::New(r));
}

