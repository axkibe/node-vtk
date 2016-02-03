/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageWriterWrap.h"
#include "vtkMetaImageWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMetaImageWriterWrap::ptpl;

VtkMetaImageWriterWrap::VtkMetaImageWriterWrap()
{ }

VtkMetaImageWriterWrap::VtkMetaImageWriterWrap(vtkSmartPointer<vtkMetaImageWriter> _native)
{ native = _native; }

VtkMetaImageWriterWrap::~VtkMetaImageWriterWrap()
{ }

void VtkMetaImageWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMetaImageWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MetaImageWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkMetaImageWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMetaImageWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMetaImageWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCompression", GetCompression);
	Nan::SetPrototypeMethod(tpl, "getCompression", GetCompression);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetRAWFileName", GetRAWFileName);
	Nan::SetPrototypeMethod(tpl, "getRAWFileName", GetRAWFileName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCompression", SetCompression);
	Nan::SetPrototypeMethod(tpl, "setCompression", SetCompression);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetRAWFileName", SetRAWFileName);
	Nan::SetPrototypeMethod(tpl, "setRAWFileName", SetRAWFileName);

	Nan::SetPrototypeMethod(tpl, "Write", Write);
	Nan::SetPrototypeMethod(tpl, "write", Write);

	ptpl.Reset( tpl );
}

void VtkMetaImageWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMetaImageWriter> native = vtkSmartPointer<vtkMetaImageWriter>::New();
		VtkMetaImageWriterWrap* obj = new VtkMetaImageWriterWrap(native);
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

void VtkMetaImageWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageWriterWrap::GetCompression(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompression();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMetaImageWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageWriterWrap::GetRAWFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRAWFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
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

void VtkMetaImageWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	vtkMetaImageWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMetaImageWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMetaImageWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMetaImageWriterWrap *w = new VtkMetaImageWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMetaImageWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMetaImageWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMetaImageWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMetaImageWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMetaImageWriterWrap *w = new VtkMetaImageWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMetaImageWriterWrap::SetCompression(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompression(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMetaImageWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
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

void VtkMetaImageWriterWrap::SetRAWFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRAWFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMetaImageWriterWrap::Write(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageWriterWrap>(info.Holder());
	vtkMetaImageWriter *native = (vtkMetaImageWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Write();
}

