/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkOutputStreamWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOutputStreamWrap::ptpl;

VtkOutputStreamWrap::VtkOutputStreamWrap()
{ }

VtkOutputStreamWrap::VtkOutputStreamWrap(vtkSmartPointer<vtkOutputStream> _native)
{ native = _native; }

VtkOutputStreamWrap::~VtkOutputStreamWrap()
{ }

void VtkOutputStreamWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOutputStream").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OutputStream").ToLocalChecked(), ConstructorGetter);
}

void VtkOutputStreamWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOutputStreamWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOutputStreamWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EndWriting", EndWriting);
	Nan::SetPrototypeMethod(tpl, "endWriting", EndWriting);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "StartWriting", StartWriting);
	Nan::SetPrototypeMethod(tpl, "startWriting", StartWriting);

#ifdef VTK_NODE_PLUS_VTKOUTPUTSTREAMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKOUTPUTSTREAMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
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
		VtkOutputStreamWrap* obj = new VtkOutputStreamWrap(native);
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
	VtkOutputStreamWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOutputStreamWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOutputStreamWrap *w = new VtkOutputStreamWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOutputStreamWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkOutputStreamWrap>(info.Holder());
	vtkOutputStream *native = (vtkOutputStream *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkOutputStream * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkOutputStreamWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOutputStreamWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOutputStreamWrap *w = new VtkOutputStreamWrap();
		w->native = r;
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

