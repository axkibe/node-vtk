/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageWriterWrap.h"
#include "vtkBMPWriterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkUnsignedCharArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBMPWriterWrap::ptpl;

VtkBMPWriterWrap::VtkBMPWriterWrap()
{ }

VtkBMPWriterWrap::VtkBMPWriterWrap(vtkSmartPointer<vtkBMPWriter> _native)
{ native = _native; }

VtkBMPWriterWrap::~VtkBMPWriterWrap()
{ }

void VtkBMPWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBMPWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BMPWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkBMPWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBMPWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBMPWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetResult", GetResult);
	Nan::SetPrototypeMethod(tpl, "getResult", GetResult);

	Nan::SetPrototypeMethod(tpl, "GetWriteToMemory", GetWriteToMemory);
	Nan::SetPrototypeMethod(tpl, "getWriteToMemory", GetWriteToMemory);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetResult", SetResult);
	Nan::SetPrototypeMethod(tpl, "setResult", SetResult);

	Nan::SetPrototypeMethod(tpl, "SetWriteToMemory", SetWriteToMemory);
	Nan::SetPrototypeMethod(tpl, "setWriteToMemory", SetWriteToMemory);

	Nan::SetPrototypeMethod(tpl, "WriteToMemoryOff", WriteToMemoryOff);
	Nan::SetPrototypeMethod(tpl, "writeToMemoryOff", WriteToMemoryOff);

	Nan::SetPrototypeMethod(tpl, "WriteToMemoryOn", WriteToMemoryOn);
	Nan::SetPrototypeMethod(tpl, "writeToMemoryOn", WriteToMemoryOn);

#ifdef VTK_NODE_PLUS_VTKBMPWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKBMPWRITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkBMPWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBMPWriter> native = vtkSmartPointer<vtkBMPWriter>::New();
		VtkBMPWriterWrap* obj = new VtkBMPWriterWrap(native);
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

void VtkBMPWriterWrap::GetResult(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBMPWriterWrap>(info.Holder());
	vtkBMPWriter *native = (vtkBMPWriter *)wrapper->native.GetPointer();
	vtkUnsignedCharArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResult();
	VtkUnsignedCharArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnsignedCharArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBMPWriterWrap::GetWriteToMemory(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBMPWriterWrap>(info.Holder());
	vtkBMPWriter *native = (vtkBMPWriter *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteToMemory();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBMPWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBMPWriterWrap>(info.Holder());
	vtkBMPWriter *native = (vtkBMPWriter *)wrapper->native.GetPointer();
	vtkBMPWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkBMPWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBMPWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBMPWriterWrap *w = new VtkBMPWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBMPWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBMPWriterWrap>(info.Holder());
	vtkBMPWriter *native = (vtkBMPWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkBMPWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkBMPWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBMPWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBMPWriterWrap *w = new VtkBMPWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBMPWriterWrap::SetResult(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBMPWriterWrap>(info.Holder());
	vtkBMPWriter *native = (vtkBMPWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkUnsignedCharArrayWrap *a0 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResult(
			(vtkUnsignedCharArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBMPWriterWrap::SetWriteToMemory(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBMPWriterWrap>(info.Holder());
	vtkBMPWriter *native = (vtkBMPWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteToMemory(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBMPWriterWrap::WriteToMemoryOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBMPWriterWrap>(info.Holder());
	vtkBMPWriter *native = (vtkBMPWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToMemoryOff();
}

void VtkBMPWriterWrap::WriteToMemoryOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBMPWriterWrap>(info.Holder());
	vtkBMPWriter *native = (vtkBMPWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToMemoryOn();
}
