/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetWriterWrap.h"
#include "vtkSimplePointsWriterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSimplePointsWriterWrap::ptpl;

VtkSimplePointsWriterWrap::VtkSimplePointsWriterWrap()
{ }

VtkSimplePointsWriterWrap::VtkSimplePointsWriterWrap(vtkSmartPointer<vtkSimplePointsWriter> _native)
{ native = _native; }

VtkSimplePointsWriterWrap::~VtkSimplePointsWriterWrap()
{ }

void VtkSimplePointsWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSimplePointsWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SimplePointsWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkSimplePointsWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSimplePointsWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSimplePointsWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetDecimalPrecision", GetDecimalPrecision);
	Nan::SetPrototypeMethod(tpl, "getDecimalPrecision", GetDecimalPrecision);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDecimalPrecision", SetDecimalPrecision);
	Nan::SetPrototypeMethod(tpl, "setDecimalPrecision", SetDecimalPrecision);

#ifdef VTK_NODE_PLUS_VTKSIMPLEPOINTSWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSIMPLEPOINTSWRITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSimplePointsWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSimplePointsWriter> native = vtkSmartPointer<vtkSimplePointsWriter>::New();
		VtkSimplePointsWriterWrap* obj = new VtkSimplePointsWriterWrap(native);
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

void VtkSimplePointsWriterWrap::GetDecimalPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsWriterWrap>(info.Holder());
	vtkSimplePointsWriter *native = (vtkSimplePointsWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDecimalPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSimplePointsWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsWriterWrap>(info.Holder());
	vtkSimplePointsWriter *native = (vtkSimplePointsWriter *)wrapper->native.GetPointer();
	vtkSimplePointsWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSimplePointsWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSimplePointsWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSimplePointsWriterWrap *w = new VtkSimplePointsWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSimplePointsWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsWriterWrap>(info.Holder());
	vtkSimplePointsWriter *native = (vtkSimplePointsWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkSimplePointsWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkSimplePointsWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSimplePointsWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSimplePointsWriterWrap *w = new VtkSimplePointsWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSimplePointsWriterWrap::SetDecimalPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSimplePointsWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSimplePointsWriterWrap>(info.Holder());
	vtkSimplePointsWriter *native = (vtkSimplePointsWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDecimalPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

