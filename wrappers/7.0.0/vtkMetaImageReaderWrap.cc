/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageReader2Wrap.h"
#include "vtkMetaImageReaderWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMetaImageReaderWrap::ptpl;

VtkMetaImageReaderWrap::VtkMetaImageReaderWrap()
{ }

VtkMetaImageReaderWrap::VtkMetaImageReaderWrap(vtkSmartPointer<vtkMetaImageReader> _native)
{ native = _native; }

VtkMetaImageReaderWrap::~VtkMetaImageReaderWrap()
{ }

void VtkMetaImageReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMetaImageReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MetaImageReader").ToLocalChecked(), ConstructorGetter);
}

void VtkMetaImageReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMetaImageReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageReader2Wrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageReader2Wrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMetaImageReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CanReadFile", CanReadFile);
	Nan::SetPrototypeMethod(tpl, "canReadFile", CanReadFile);

	Nan::SetPrototypeMethod(tpl, "GetAnatomicalOrientation", GetAnatomicalOrientation);
	Nan::SetPrototypeMethod(tpl, "getAnatomicalOrientation", GetAnatomicalOrientation);

	Nan::SetPrototypeMethod(tpl, "GetBitsAllocated", GetBitsAllocated);
	Nan::SetPrototypeMethod(tpl, "getBitsAllocated", GetBitsAllocated);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataByteOrder", GetDataByteOrder);
	Nan::SetPrototypeMethod(tpl, "getDataByteOrder", GetDataByteOrder);

	Nan::SetPrototypeMethod(tpl, "GetDate", GetDate);
	Nan::SetPrototypeMethod(tpl, "getDate", GetDate);

	Nan::SetPrototypeMethod(tpl, "GetDescriptiveName", GetDescriptiveName);
	Nan::SetPrototypeMethod(tpl, "getDescriptiveName", GetDescriptiveName);

	Nan::SetPrototypeMethod(tpl, "GetDistanceUnits", GetDistanceUnits);
	Nan::SetPrototypeMethod(tpl, "getDistanceUnits", GetDistanceUnits);

	Nan::SetPrototypeMethod(tpl, "GetFileExtensions", GetFileExtensions);
	Nan::SetPrototypeMethod(tpl, "getFileExtensions", GetFileExtensions);

	Nan::SetPrototypeMethod(tpl, "GetGantryAngle", GetGantryAngle);
	Nan::SetPrototypeMethod(tpl, "getGantryAngle", GetGantryAngle);

	Nan::SetPrototypeMethod(tpl, "GetHeight", GetHeight);
	Nan::SetPrototypeMethod(tpl, "getHeight", GetHeight);

	Nan::SetPrototypeMethod(tpl, "GetImageNumber", GetImageNumber);
	Nan::SetPrototypeMethod(tpl, "getImageNumber", GetImageNumber);

	Nan::SetPrototypeMethod(tpl, "GetModality", GetModality);
	Nan::SetPrototypeMethod(tpl, "getModality", GetModality);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfComponents", GetNumberOfComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfComponents", GetNumberOfComponents);

	Nan::SetPrototypeMethod(tpl, "GetPatientID", GetPatientID);
	Nan::SetPrototypeMethod(tpl, "getPatientID", GetPatientID);

	Nan::SetPrototypeMethod(tpl, "GetPatientName", GetPatientName);
	Nan::SetPrototypeMethod(tpl, "getPatientName", GetPatientName);

	Nan::SetPrototypeMethod(tpl, "GetPixelRepresentation", GetPixelRepresentation);
	Nan::SetPrototypeMethod(tpl, "getPixelRepresentation", GetPixelRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetRescaleOffset", GetRescaleOffset);
	Nan::SetPrototypeMethod(tpl, "getRescaleOffset", GetRescaleOffset);

	Nan::SetPrototypeMethod(tpl, "GetRescaleSlope", GetRescaleSlope);
	Nan::SetPrototypeMethod(tpl, "getRescaleSlope", GetRescaleSlope);

	Nan::SetPrototypeMethod(tpl, "GetSeries", GetSeries);
	Nan::SetPrototypeMethod(tpl, "getSeries", GetSeries);

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

#ifdef VTK_NODE_PLUS_VTKMETAIMAGEREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMETAIMAGEREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMetaImageReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMetaImageReader> native = vtkSmartPointer<vtkMetaImageReader>::New();
		VtkMetaImageReaderWrap* obj = new VtkMetaImageReaderWrap(native);
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

void VtkMetaImageReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkMetaImageReaderWrap::GetAnatomicalOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAnatomicalOrientation();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetBitsAllocated(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBitsAllocated();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMetaImageReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataByteOrder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMetaImageReaderWrap::GetDate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDate();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescriptiveName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetDistanceUnits(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceUnits();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileExtensions();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetGantryAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGantryAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMetaImageReaderWrap::GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMetaImageReaderWrap::GetImageNumber(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageNumber();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetModality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetModality();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMetaImageReaderWrap::GetPatientID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPatientID();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetPatientName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPatientName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetPixelRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPixelRepresentation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMetaImageReaderWrap::GetRescaleOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRescaleOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMetaImageReaderWrap::GetRescaleSlope(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRescaleSlope();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMetaImageReaderWrap::GetSeries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSeries();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetStudyID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStudyID();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetStudyUID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStudyUID();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetTransferSyntaxUID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransferSyntaxUID();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMetaImageReaderWrap::GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMetaImageReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
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

void VtkMetaImageReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	vtkMetaImageReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMetaImageReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMetaImageReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMetaImageReaderWrap *w = new VtkMetaImageReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMetaImageReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMetaImageReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMetaImageReaderWrap>(info.Holder());
	vtkMetaImageReader *native = (vtkMetaImageReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMetaImageReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkMetaImageReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMetaImageReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMetaImageReaderWrap *w = new VtkMetaImageReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

