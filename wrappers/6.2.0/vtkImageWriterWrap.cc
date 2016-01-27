/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageWriterWrap::ptpl;

VtkImageWriterWrap::VtkImageWriterWrap()
{ }

VtkImageWriterWrap::VtkImageWriterWrap(vtkSmartPointer<vtkImageWriter> _native)
{ native = _native; }

VtkImageWriterWrap::~VtkImageWriterWrap()
{ }

void VtkImageWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkImageWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeleteFiles", DeleteFiles);
	Nan::SetPrototypeMethod(tpl, "deleteFiles", DeleteFiles);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileDimensionality", GetFileDimensionality);
	Nan::SetPrototypeMethod(tpl, "getFileDimensionality", GetFileDimensionality);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetFilePattern", GetFilePattern);
	Nan::SetPrototypeMethod(tpl, "getFilePattern", GetFilePattern);

	Nan::SetPrototypeMethod(tpl, "GetFilePrefix", GetFilePrefix);
	Nan::SetPrototypeMethod(tpl, "getFilePrefix", GetFilePrefix);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileDimensionality", SetFileDimensionality);
	Nan::SetPrototypeMethod(tpl, "setFileDimensionality", SetFileDimensionality);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetFilePattern", SetFilePattern);
	Nan::SetPrototypeMethod(tpl, "setFilePattern", SetFilePattern);

	Nan::SetPrototypeMethod(tpl, "SetFilePrefix", SetFilePrefix);
	Nan::SetPrototypeMethod(tpl, "setFilePrefix", SetFilePrefix);

	Nan::SetPrototypeMethod(tpl, "Write", Write);
	Nan::SetPrototypeMethod(tpl, "write", Write);

	ptpl.Reset( tpl );
}

void VtkImageWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageWriter> native = vtkSmartPointer<vtkImageWriter>::New();
		VtkImageWriterWrap* obj = new VtkImageWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageWriterWrap::DeleteFiles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeleteFiles();
}

void VtkImageWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageWriterWrap::GetFileDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileDimensionality();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageWriterWrap::GetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilePattern();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageWriterWrap::GetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilePrefix();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageWriterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
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

void VtkImageWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
	vtkImageWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageWriterWrap *w = new VtkImageWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageWriterWrap *w = new VtkImageWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageWriterWrap::SetFileDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileDimensionality(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
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

void VtkImageWriterWrap::SetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilePattern(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageWriterWrap::SetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilePrefix(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageWriterWrap::Write(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageWriterWrap *wrapper = ObjectWrap::Unwrap<VtkImageWriterWrap>(info.Holder());
	vtkImageWriter *native = (vtkImageWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Write();
}

