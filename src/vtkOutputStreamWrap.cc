/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkOutputStreamWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOutputStreamWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkOutputStreamWrap::ptpl;

VtkOutputStreamWrap::VtkOutputStreamWrap()
{ }

VtkOutputStreamWrap::VtkOutputStreamWrap(vtkSmartPointer<vtkOutputStream> _native)
{ native = _native; }

VtkOutputStreamWrap::~VtkOutputStreamWrap()
{ }

void VtkOutputStreamWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkOutputStreamWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkOutputStream").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("OutputStream").ToLocalChecked(),tpl->GetFunction());
}

void VtkOutputStreamWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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

}

void VtkOutputStreamWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOutputStream> native = vtkSmartPointer<vtkOutputStream>::New();
		VtkOutputStreamWrap* obj = new VtkOutputStreamWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOutputStreamWrap::EndWriting(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkOutputStreamWrap>(info.Holder());
	vtkOutputStream *native = (vtkOutputStream *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->EndWriting();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOutputStreamWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkOutputStreamWrap>(info.Holder());
	vtkOutputStream *native = (vtkOutputStream *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOutputStreamWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkOutputStreamWrap>(info.Holder());
	vtkOutputStream *native = (vtkOutputStream *)wrapper->native.GetPointer();
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

void VtkOutputStreamWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkOutputStreamWrap>(info.Holder());
	vtkOutputStream *native = (vtkOutputStream *)wrapper->native.GetPointer();
	vtkOutputStream * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOutputStreamWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOutputStreamWrap *w = new VtkOutputStreamWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOutputStreamWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkOutputStreamWrap>(info.Holder());
	vtkOutputStream *native = (vtkOutputStream *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOutputStream * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkOutputStreamWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOutputStreamWrap *w = new VtkOutputStreamWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOutputStreamWrap::StartWriting(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkOutputStreamWrap>(info.Holder());
	vtkOutputStream *native = (vtkOutputStream *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->StartWriting();
	info.GetReturnValue().Set(Nan::New(r));
}
