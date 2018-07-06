/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkEnSightReaderWrap.h"
#include "vtkEnSightGoldReaderWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkEnSightGoldReaderWrap::ptpl;

VtkEnSightGoldReaderWrap::VtkEnSightGoldReaderWrap()
{ }

VtkEnSightGoldReaderWrap::VtkEnSightGoldReaderWrap(vtkSmartPointer<vtkEnSightGoldReader> _native)
{ native = _native; }

VtkEnSightGoldReaderWrap::~VtkEnSightGoldReaderWrap()
{ }

void VtkEnSightGoldReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkEnSightGoldReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("EnSightGoldReader").ToLocalChecked(), ConstructorGetter);
}

void VtkEnSightGoldReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkEnSightGoldReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkEnSightReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkEnSightReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkEnSightGoldReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKENSIGHTGOLDREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKENSIGHTGOLDREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkEnSightGoldReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkEnSightGoldReader> native = vtkSmartPointer<vtkEnSightGoldReader>::New();
		VtkEnSightGoldReaderWrap* obj = new VtkEnSightGoldReaderWrap(native);
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

void VtkEnSightGoldReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightGoldReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightGoldReaderWrap>(info.Holder());
	vtkEnSightGoldReader *native = (vtkEnSightGoldReader *)wrapper->native.GetPointer();
	vtkEnSightGoldReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkEnSightGoldReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkEnSightGoldReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEnSightGoldReaderWrap *w = new VtkEnSightGoldReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEnSightGoldReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightGoldReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightGoldReaderWrap>(info.Holder());
	vtkEnSightGoldReader *native = (vtkEnSightGoldReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkEnSightGoldReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkEnSightGoldReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkEnSightGoldReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEnSightGoldReaderWrap *w = new VtkEnSightGoldReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
