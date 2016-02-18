/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkWriterWrap.h"
#include "vtkDelimitedTextWriterWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDelimitedTextWriterWrap::ptpl;

VtkDelimitedTextWriterWrap::VtkDelimitedTextWriterWrap()
{ }

VtkDelimitedTextWriterWrap::VtkDelimitedTextWriterWrap(vtkSmartPointer<vtkDelimitedTextWriter> _native)
{ native = _native; }

VtkDelimitedTextWriterWrap::~VtkDelimitedTextWriterWrap()
{ }

void VtkDelimitedTextWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDelimitedTextWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DelimitedTextWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkDelimitedTextWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDelimitedTextWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDelimitedTextWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFieldDelimiter", GetFieldDelimiter);
	Nan::SetPrototypeMethod(tpl, "getFieldDelimiter", GetFieldDelimiter);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetStringDelimiter", GetStringDelimiter);
	Nan::SetPrototypeMethod(tpl, "getStringDelimiter", GetStringDelimiter);

	Nan::SetPrototypeMethod(tpl, "GetUseStringDelimiter", GetUseStringDelimiter);
	Nan::SetPrototypeMethod(tpl, "getUseStringDelimiter", GetUseStringDelimiter);

	Nan::SetPrototypeMethod(tpl, "GetWriteToOutputString", GetWriteToOutputString);
	Nan::SetPrototypeMethod(tpl, "getWriteToOutputString", GetWriteToOutputString);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RegisterAndGetOutputString", RegisterAndGetOutputString);
	Nan::SetPrototypeMethod(tpl, "registerAndGetOutputString", RegisterAndGetOutputString);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFieldDelimiter", SetFieldDelimiter);
	Nan::SetPrototypeMethod(tpl, "setFieldDelimiter", SetFieldDelimiter);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetStringDelimiter", SetStringDelimiter);
	Nan::SetPrototypeMethod(tpl, "setStringDelimiter", SetStringDelimiter);

	Nan::SetPrototypeMethod(tpl, "SetUseStringDelimiter", SetUseStringDelimiter);
	Nan::SetPrototypeMethod(tpl, "setUseStringDelimiter", SetUseStringDelimiter);

	Nan::SetPrototypeMethod(tpl, "SetWriteToOutputString", SetWriteToOutputString);
	Nan::SetPrototypeMethod(tpl, "setWriteToOutputString", SetWriteToOutputString);

	Nan::SetPrototypeMethod(tpl, "WriteToOutputStringOff", WriteToOutputStringOff);
	Nan::SetPrototypeMethod(tpl, "writeToOutputStringOff", WriteToOutputStringOff);

	Nan::SetPrototypeMethod(tpl, "WriteToOutputStringOn", WriteToOutputStringOn);
	Nan::SetPrototypeMethod(tpl, "writeToOutputStringOn", WriteToOutputStringOn);

#ifdef VTK_NODE_PLUS_VTKDELIMITEDTEXTWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDELIMITEDTEXTWRITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkDelimitedTextWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDelimitedTextWriter> native = vtkSmartPointer<vtkDelimitedTextWriter>::New();
		VtkDelimitedTextWriterWrap* obj = new VtkDelimitedTextWriterWrap(native);
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

void VtkDelimitedTextWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextWriterWrap::GetFieldDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldDelimiter();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextWriterWrap::GetStringDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStringDelimiter();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextWriterWrap::GetUseStringDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseStringDelimiter();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelimitedTextWriterWrap::GetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteToOutputString();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDelimitedTextWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
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

void VtkDelimitedTextWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
	vtkDelimitedTextWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDelimitedTextWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDelimitedTextWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDelimitedTextWriterWrap *w = new VtkDelimitedTextWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDelimitedTextWriterWrap::RegisterAndGetOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RegisterAndGetOutputString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDelimitedTextWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDelimitedTextWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkDelimitedTextWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDelimitedTextWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDelimitedTextWriterWrap *w = new VtkDelimitedTextWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextWriterWrap::SetFieldDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFieldDelimiter(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
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

void VtkDelimitedTextWriterWrap::SetStringDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStringDelimiter(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextWriterWrap::SetUseStringDelimiter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseStringDelimiter(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDelimitedTextWriterWrap::SetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
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

void VtkDelimitedTextWriterWrap::WriteToOutputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToOutputStringOff();
}

void VtkDelimitedTextWriterWrap::WriteToOutputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDelimitedTextWriterWrap *wrapper = ObjectWrap::Unwrap<VtkDelimitedTextWriterWrap>(info.Holder());
	vtkDelimitedTextWriter *native = (vtkDelimitedTextWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToOutputStringOn();
}

