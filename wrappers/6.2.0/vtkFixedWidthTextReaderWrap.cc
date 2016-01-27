/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTableAlgorithmWrap.h"
#include "vtkFixedWidthTextReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFixedWidthTextReaderWrap::ptpl;

VtkFixedWidthTextReaderWrap::VtkFixedWidthTextReaderWrap()
{ }

VtkFixedWidthTextReaderWrap::VtkFixedWidthTextReaderWrap(vtkSmartPointer<vtkFixedWidthTextReader> _native)
{ native = _native; }

VtkFixedWidthTextReaderWrap::~VtkFixedWidthTextReaderWrap()
{ }

void VtkFixedWidthTextReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFixedWidthTextReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FixedWidthTextReader").ToLocalChecked(), ConstructorGetter);
}

void VtkFixedWidthTextReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFixedWidthTextReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFixedWidthTextReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFieldWidth", GetFieldWidth);
	Nan::SetPrototypeMethod(tpl, "getFieldWidth", GetFieldWidth);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "HaveHeadersOff", HaveHeadersOff);
	Nan::SetPrototypeMethod(tpl, "haveHeadersOff", HaveHeadersOff);

	Nan::SetPrototypeMethod(tpl, "HaveHeadersOn", HaveHeadersOn);
	Nan::SetPrototypeMethod(tpl, "haveHeadersOn", HaveHeadersOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFieldWidth", SetFieldWidth);
	Nan::SetPrototypeMethod(tpl, "setFieldWidth", SetFieldWidth);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "StripWhiteSpaceOff", StripWhiteSpaceOff);
	Nan::SetPrototypeMethod(tpl, "stripWhiteSpaceOff", StripWhiteSpaceOff);

	Nan::SetPrototypeMethod(tpl, "StripWhiteSpaceOn", StripWhiteSpaceOn);
	Nan::SetPrototypeMethod(tpl, "stripWhiteSpaceOn", StripWhiteSpaceOn);

	ptpl.Reset( tpl );
}

void VtkFixedWidthTextReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFixedWidthTextReader> native = vtkSmartPointer<vtkFixedWidthTextReader>::New();
		VtkFixedWidthTextReaderWrap* obj = new VtkFixedWidthTextReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkFixedWidthTextReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedWidthTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkFixedWidthTextReaderWrap>(info.Holder());
	vtkFixedWidthTextReader *native = (vtkFixedWidthTextReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFixedWidthTextReaderWrap::GetFieldWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedWidthTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkFixedWidthTextReaderWrap>(info.Holder());
	vtkFixedWidthTextReader *native = (vtkFixedWidthTextReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFixedWidthTextReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedWidthTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkFixedWidthTextReaderWrap>(info.Holder());
	vtkFixedWidthTextReader *native = (vtkFixedWidthTextReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFixedWidthTextReaderWrap::HaveHeadersOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedWidthTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkFixedWidthTextReaderWrap>(info.Holder());
	vtkFixedWidthTextReader *native = (vtkFixedWidthTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HaveHeadersOff();
}

void VtkFixedWidthTextReaderWrap::HaveHeadersOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedWidthTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkFixedWidthTextReaderWrap>(info.Holder());
	vtkFixedWidthTextReader *native = (vtkFixedWidthTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HaveHeadersOn();
}

void VtkFixedWidthTextReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedWidthTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkFixedWidthTextReaderWrap>(info.Holder());
	vtkFixedWidthTextReader *native = (vtkFixedWidthTextReader *)wrapper->native.GetPointer();
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

void VtkFixedWidthTextReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedWidthTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkFixedWidthTextReaderWrap>(info.Holder());
	vtkFixedWidthTextReader *native = (vtkFixedWidthTextReader *)wrapper->native.GetPointer();
	vtkFixedWidthTextReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkFixedWidthTextReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFixedWidthTextReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFixedWidthTextReaderWrap *w = new VtkFixedWidthTextReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFixedWidthTextReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedWidthTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkFixedWidthTextReaderWrap>(info.Holder());
	vtkFixedWidthTextReader *native = (vtkFixedWidthTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkFixedWidthTextReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkFixedWidthTextReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFixedWidthTextReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFixedWidthTextReaderWrap *w = new VtkFixedWidthTextReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFixedWidthTextReaderWrap::SetFieldWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedWidthTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkFixedWidthTextReaderWrap>(info.Holder());
	vtkFixedWidthTextReader *native = (vtkFixedWidthTextReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFieldWidth(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFixedWidthTextReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedWidthTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkFixedWidthTextReaderWrap>(info.Holder());
	vtkFixedWidthTextReader *native = (vtkFixedWidthTextReader *)wrapper->native.GetPointer();
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

void VtkFixedWidthTextReaderWrap::StripWhiteSpaceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedWidthTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkFixedWidthTextReaderWrap>(info.Holder());
	vtkFixedWidthTextReader *native = (vtkFixedWidthTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StripWhiteSpaceOff();
}

void VtkFixedWidthTextReaderWrap::StripWhiteSpaceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedWidthTextReaderWrap *wrapper = ObjectWrap::Unwrap<VtkFixedWidthTextReaderWrap>(info.Holder());
	vtkFixedWidthTextReader *native = (vtkFixedWidthTextReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StripWhiteSpaceOn();
}
