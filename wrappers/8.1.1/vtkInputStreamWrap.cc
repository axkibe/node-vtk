/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkInputStreamWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInputStreamWrap::ptpl;

VtkInputStreamWrap::VtkInputStreamWrap()
{ }

VtkInputStreamWrap::VtkInputStreamWrap(vtkSmartPointer<vtkInputStream> _native)
{ native = _native; }

VtkInputStreamWrap::~VtkInputStreamWrap()
{ }

void VtkInputStreamWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInputStream").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InputStream").ToLocalChecked(), ConstructorGetter);
}

void VtkInputStreamWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInputStreamWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInputStreamWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EndReading", EndReading);
	Nan::SetPrototypeMethod(tpl, "endReading", EndReading);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "StartReading", StartReading);
	Nan::SetPrototypeMethod(tpl, "startReading", StartReading);

#ifdef VTK_NODE_PLUS_VTKINPUTSTREAMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINPUTSTREAMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkInputStreamWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInputStream> native = vtkSmartPointer<vtkInputStream>::New();
		VtkInputStreamWrap* obj = new VtkInputStreamWrap(native);
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

void VtkInputStreamWrap::EndReading(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkInputStreamWrap>(info.Holder());
	vtkInputStream *native = (vtkInputStream *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndReading();
}

void VtkInputStreamWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkInputStreamWrap>(info.Holder());
	vtkInputStream *native = (vtkInputStream *)wrapper->native.GetPointer();
	vtkInputStream * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInputStreamWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInputStreamWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInputStreamWrap *w = new VtkInputStreamWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInputStreamWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkInputStreamWrap>(info.Holder());
	vtkInputStream *native = (vtkInputStream *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkInputStream * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkInputStreamWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInputStreamWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInputStreamWrap *w = new VtkInputStreamWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInputStreamWrap::StartReading(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInputStreamWrap *wrapper = ObjectWrap::Unwrap<VtkInputStreamWrap>(info.Holder());
	vtkInputStream *native = (vtkInputStream *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StartReading();
}
