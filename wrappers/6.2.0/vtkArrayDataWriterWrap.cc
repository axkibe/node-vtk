/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWriterWrap.h"
#include "vtkArrayDataWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkArrayDataWriterWrap::ptpl;

VtkArrayDataWriterWrap::VtkArrayDataWriterWrap()
{ }

VtkArrayDataWriterWrap::VtkArrayDataWriterWrap(vtkSmartPointer<vtkArrayDataWriter> _native)
{ native = _native; }

VtkArrayDataWriterWrap::~VtkArrayDataWriterWrap()
{ }

void VtkArrayDataWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkArrayDataWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ArrayDataWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkArrayDataWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkArrayDataWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkArrayDataWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BinaryOff", BinaryOff);
	Nan::SetPrototypeMethod(tpl, "binaryOff", BinaryOff);

	Nan::SetPrototypeMethod(tpl, "BinaryOn", BinaryOn);
	Nan::SetPrototypeMethod(tpl, "binaryOn", BinaryOn);

	Nan::SetPrototypeMethod(tpl, "GetBinary", GetBinary);
	Nan::SetPrototypeMethod(tpl, "getBinary", GetBinary);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetWriteToOutputString", GetWriteToOutputString);
	Nan::SetPrototypeMethod(tpl, "getWriteToOutputString", GetWriteToOutputString);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBinary", SetBinary);
	Nan::SetPrototypeMethod(tpl, "setBinary", SetBinary);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetWriteToOutputString", SetWriteToOutputString);
	Nan::SetPrototypeMethod(tpl, "setWriteToOutputString", SetWriteToOutputString);

	Nan::SetPrototypeMethod(tpl, "Write", Write);
	Nan::SetPrototypeMethod(tpl, "write", Write);

	Nan::SetPrototypeMethod(tpl, "WriteToOutputStringOff", WriteToOutputStringOff);
	Nan::SetPrototypeMethod(tpl, "writeToOutputStringOff", WriteToOutputStringOff);

	Nan::SetPrototypeMethod(tpl, "WriteToOutputStringOn", WriteToOutputStringOn);
	Nan::SetPrototypeMethod(tpl, "writeToOutputStringOn", WriteToOutputStringOn);

	ptpl.Reset( tpl );
}

void VtkArrayDataWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkArrayDataWriter> native = vtkSmartPointer<vtkArrayDataWriter>::New();
		VtkArrayDataWriterWrap* obj = new VtkArrayDataWriterWrap(native);
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

void VtkArrayDataWriterWrap::BinaryOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BinaryOff();
}

void VtkArrayDataWriterWrap::BinaryOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BinaryOn();
}

void VtkArrayDataWriterWrap::GetBinary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBinary();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrayDataWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkArrayDataWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkArrayDataWriterWrap::GetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteToOutputString();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrayDataWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
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

void VtkArrayDataWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
	vtkArrayDataWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkArrayDataWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkArrayDataWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkArrayDataWriterWrap *w = new VtkArrayDataWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkArrayDataWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkArrayDataWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkArrayDataWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkArrayDataWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkArrayDataWriterWrap *w = new VtkArrayDataWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayDataWriterWrap::SetBinary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBinary(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayDataWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayDataWriterWrap::SetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteToOutputString(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrayDataWriterWrap::Write(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Write();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrayDataWriterWrap::WriteToOutputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToOutputStringOff();
}

void VtkArrayDataWriterWrap::WriteToOutputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrayDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkArrayDataWriterWrap>(info.Holder());
	vtkArrayDataWriter *native = (vtkArrayDataWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToOutputStringOn();
}

