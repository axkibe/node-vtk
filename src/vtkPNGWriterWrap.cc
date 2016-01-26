/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageWriterWrap.h"
#include "vtkPNGWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkUnsignedCharArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPNGWriterWrap::ptpl;

VtkPNGWriterWrap::VtkPNGWriterWrap()
{ }

VtkPNGWriterWrap::VtkPNGWriterWrap(vtkSmartPointer<vtkPNGWriter> _native)
{ native = _native; }

VtkPNGWriterWrap::~VtkPNGWriterWrap()
{ }

void VtkPNGWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPNGWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PNGWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkPNGWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPNGWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPNGWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCompressionLevel", GetCompressionLevel);
	Nan::SetPrototypeMethod(tpl, "getCompressionLevel", GetCompressionLevel);

	Nan::SetPrototypeMethod(tpl, "GetCompressionLevelMaxValue", GetCompressionLevelMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCompressionLevelMaxValue", GetCompressionLevelMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCompressionLevelMinValue", GetCompressionLevelMinValue);
	Nan::SetPrototypeMethod(tpl, "getCompressionLevelMinValue", GetCompressionLevelMinValue);

	Nan::SetPrototypeMethod(tpl, "GetResult", GetResult);
	Nan::SetPrototypeMethod(tpl, "getResult", GetResult);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCompressionLevel", SetCompressionLevel);
	Nan::SetPrototypeMethod(tpl, "setCompressionLevel", SetCompressionLevel);

	Nan::SetPrototypeMethod(tpl, "SetResult", SetResult);
	Nan::SetPrototypeMethod(tpl, "setResult", SetResult);

	Nan::SetPrototypeMethod(tpl, "Write", Write);
	Nan::SetPrototypeMethod(tpl, "write", Write);

	Nan::SetPrototypeMethod(tpl, "WriteToMemoryOff", WriteToMemoryOff);
	Nan::SetPrototypeMethod(tpl, "writeToMemoryOff", WriteToMemoryOff);

	Nan::SetPrototypeMethod(tpl, "WriteToMemoryOn", WriteToMemoryOn);
	Nan::SetPrototypeMethod(tpl, "writeToMemoryOn", WriteToMemoryOn);

	ptpl.Reset( tpl );
}

void VtkPNGWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPNGWriter> native = vtkSmartPointer<vtkPNGWriter>::New();
		VtkPNGWriterWrap* obj = new VtkPNGWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPNGWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPNGWriterWrap>(info.Holder());
	vtkPNGWriter *native = (vtkPNGWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPNGWriterWrap::GetCompressionLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPNGWriterWrap>(info.Holder());
	vtkPNGWriter *native = (vtkPNGWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompressionLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPNGWriterWrap::GetCompressionLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPNGWriterWrap>(info.Holder());
	vtkPNGWriter *native = (vtkPNGWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompressionLevelMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPNGWriterWrap::GetCompressionLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPNGWriterWrap>(info.Holder());
	vtkPNGWriter *native = (vtkPNGWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompressionLevelMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPNGWriterWrap::GetResult(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPNGWriterWrap>(info.Holder());
	vtkPNGWriter *native = (vtkPNGWriter *)wrapper->native.GetPointer();
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
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPNGWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPNGWriterWrap>(info.Holder());
	vtkPNGWriter *native = (vtkPNGWriter *)wrapper->native.GetPointer();
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

void VtkPNGWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPNGWriterWrap>(info.Holder());
	vtkPNGWriter *native = (vtkPNGWriter *)wrapper->native.GetPointer();
	vtkPNGWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPNGWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPNGWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPNGWriterWrap *w = new VtkPNGWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPNGWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPNGWriterWrap>(info.Holder());
	vtkPNGWriter *native = (vtkPNGWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPNGWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPNGWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPNGWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPNGWriterWrap *w = new VtkPNGWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPNGWriterWrap::SetCompressionLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPNGWriterWrap>(info.Holder());
	vtkPNGWriter *native = (vtkPNGWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompressionLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPNGWriterWrap::SetResult(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPNGWriterWrap>(info.Holder());
	vtkPNGWriter *native = (vtkPNGWriter *)wrapper->native.GetPointer();
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

void VtkPNGWriterWrap::Write(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPNGWriterWrap>(info.Holder());
	vtkPNGWriter *native = (vtkPNGWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Write();
}

void VtkPNGWriterWrap::WriteToMemoryOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPNGWriterWrap>(info.Holder());
	vtkPNGWriter *native = (vtkPNGWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToMemoryOff();
}

void VtkPNGWriterWrap::WriteToMemoryOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPNGWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPNGWriterWrap>(info.Holder());
	vtkPNGWriter *native = (vtkPNGWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToMemoryOn();
}

