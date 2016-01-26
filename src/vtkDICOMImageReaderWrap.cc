/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageReader2Wrap.h"
#include "vtkDICOMImageReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDICOMImageReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkDICOMImageReaderWrap::ptpl;

VtkDICOMImageReaderWrap::VtkDICOMImageReaderWrap()
{ }

VtkDICOMImageReaderWrap::VtkDICOMImageReaderWrap(vtkSmartPointer<vtkDICOMImageReader> _native)
{ native = _native; }

VtkDICOMImageReaderWrap::~VtkDICOMImageReaderWrap()
{ }

void VtkDICOMImageReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDICOMImageReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DICOMImageReader").ToLocalChecked(), ConstructorGetter);
}

void VtkDICOMImageReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDICOMImageReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageReader2Wrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageReader2Wrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDICOMImageReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CanReadFile", CanReadFile);
	Nan::SetPrototypeMethod(tpl, "canReadFile", CanReadFile);

	Nan::SetPrototypeMethod(tpl, "GetBitsAllocated", GetBitsAllocated);
	Nan::SetPrototypeMethod(tpl, "getBitsAllocated", GetBitsAllocated);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDescriptiveName", GetDescriptiveName);
	Nan::SetPrototypeMethod(tpl, "getDescriptiveName", GetDescriptiveName);

	Nan::SetPrototypeMethod(tpl, "GetDirectoryName", GetDirectoryName);
	Nan::SetPrototypeMethod(tpl, "getDirectoryName", GetDirectoryName);

	Nan::SetPrototypeMethod(tpl, "GetFileExtensions", GetFileExtensions);
	Nan::SetPrototypeMethod(tpl, "getFileExtensions", GetFileExtensions);

	Nan::SetPrototypeMethod(tpl, "GetHeight", GetHeight);
	Nan::SetPrototypeMethod(tpl, "getHeight", GetHeight);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfComponents", GetNumberOfComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfComponents", GetNumberOfComponents);

	Nan::SetPrototypeMethod(tpl, "GetPatientName", GetPatientName);
	Nan::SetPrototypeMethod(tpl, "getPatientName", GetPatientName);

	Nan::SetPrototypeMethod(tpl, "GetPixelRepresentation", GetPixelRepresentation);
	Nan::SetPrototypeMethod(tpl, "getPixelRepresentation", GetPixelRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetStudyID", GetStudyID);
	Nan::SetPrototypeMethod(tpl, "getStudyID", GetStudyID);

	Nan::SetPrototypeMethod(tpl, "GetStudyUID", GetStudyUID);
	Nan::SetPrototypeMethod(tpl, "getStudyUID", GetStudyUID);

	Nan::SetPrototypeMethod(tpl, "GetTransferSyntaxUID", GetTransferSyntaxUID);
	Nan::SetPrototypeMethod(tpl, "getTransferSyntaxUID", GetTransferSyntaxUID);

	Nan::SetPrototypeMethod(tpl, "GetWidth", GetWidth);
	Nan::SetPrototypeMethod(tpl, "getWidth", GetWidth);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDirectoryName", SetDirectoryName);
	Nan::SetPrototypeMethod(tpl, "setDirectoryName", SetDirectoryName);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkDICOMImageReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDICOMImageReader> native = vtkSmartPointer<vtkDICOMImageReader>::New();
		VtkDICOMImageReaderWrap* obj = new VtkDICOMImageReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDICOMImageReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CanReadFile(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDICOMImageReaderWrap::GetBitsAllocated(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBitsAllocated();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDICOMImageReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDICOMImageReaderWrap::GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescriptiveName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDICOMImageReaderWrap::GetDirectoryName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDirectoryName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDICOMImageReaderWrap::GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileExtensions();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDICOMImageReaderWrap::GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDICOMImageReaderWrap::GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDICOMImageReaderWrap::GetPatientName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPatientName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDICOMImageReaderWrap::GetPixelRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPixelRepresentation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDICOMImageReaderWrap::GetStudyID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStudyID();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDICOMImageReaderWrap::GetStudyUID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStudyUID();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDICOMImageReaderWrap::GetTransferSyntaxUID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransferSyntaxUID();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDICOMImageReaderWrap::GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDICOMImageReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
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

void VtkDICOMImageReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	vtkDICOMImageReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDICOMImageReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDICOMImageReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDICOMImageReaderWrap *w = new VtkDICOMImageReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDICOMImageReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDICOMImageReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDICOMImageReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkDICOMImageReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDICOMImageReaderWrap *w = new VtkDICOMImageReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDICOMImageReaderWrap::SetDirectoryName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDirectoryName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDICOMImageReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDICOMImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDICOMImageReaderWrap>(info.Holder());
	vtkDICOMImageReader *native = (vtkDICOMImageReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

