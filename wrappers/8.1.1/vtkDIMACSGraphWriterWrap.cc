/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataWriterWrap.h"
#include "vtkDIMACSGraphWriterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkGraphWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDIMACSGraphWriterWrap::ptpl;

VtkDIMACSGraphWriterWrap::VtkDIMACSGraphWriterWrap()
{ }

VtkDIMACSGraphWriterWrap::VtkDIMACSGraphWriterWrap(vtkSmartPointer<vtkDIMACSGraphWriter> _native)
{ native = _native; }

VtkDIMACSGraphWriterWrap::~VtkDIMACSGraphWriterWrap()
{ }

void VtkDIMACSGraphWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDIMACSGraphWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DIMACSGraphWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkDIMACSGraphWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDIMACSGraphWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDIMACSGraphWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKDIMACSGRAPHWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDIMACSGRAPHWRITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkDIMACSGraphWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDIMACSGraphWriter> native = vtkSmartPointer<vtkDIMACSGraphWriter>::New();
		VtkDIMACSGraphWriterWrap* obj = new VtkDIMACSGraphWriterWrap(native);
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

void VtkDIMACSGraphWriterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDIMACSGraphWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDIMACSGraphWriterWrap>(info.Holder());
	vtkDIMACSGraphWriter *native = (vtkDIMACSGraphWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkGraph * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetInput(
			info[0]->Int32Value()
		);
		VtkGraphWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGraphWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphWrap *w = new VtkGraphWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	VtkGraphWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGraphWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphWrap *w = new VtkGraphWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDIMACSGraphWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDIMACSGraphWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDIMACSGraphWriterWrap>(info.Holder());
	vtkDIMACSGraphWriter *native = (vtkDIMACSGraphWriter *)wrapper->native.GetPointer();
	vtkDIMACSGraphWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDIMACSGraphWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDIMACSGraphWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDIMACSGraphWriterWrap *w = new VtkDIMACSGraphWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDIMACSGraphWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDIMACSGraphWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDIMACSGraphWriterWrap>(info.Holder());
	vtkDIMACSGraphWriter *native = (vtkDIMACSGraphWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkDIMACSGraphWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkDIMACSGraphWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDIMACSGraphWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDIMACSGraphWriterWrap *w = new VtkDIMACSGraphWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

