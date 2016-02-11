/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageExportWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageExportWrap::ptpl;

VtkImageExportWrap::VtkImageExportWrap()
{ }

VtkImageExportWrap::VtkImageExportWrap(vtkSmartPointer<vtkImageExport> _native)
{ native = _native; }

VtkImageExportWrap::~VtkImageExportWrap()
{ }

void VtkImageExportWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageExport").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageExport").ToLocalChecked(), ConstructorGetter);
}

void VtkImageExportWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageExportWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageExportWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Export", Export);
	Nan::SetPrototypeMethod(tpl, "export", Export);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataDimensions", GetDataDimensions);
	Nan::SetPrototypeMethod(tpl, "getDataDimensions", GetDataDimensions);

	Nan::SetPrototypeMethod(tpl, "GetDataExtent", GetDataExtent);
	Nan::SetPrototypeMethod(tpl, "getDataExtent", GetDataExtent);

	Nan::SetPrototypeMethod(tpl, "GetDataNumberOfScalarComponents", GetDataNumberOfScalarComponents);
	Nan::SetPrototypeMethod(tpl, "getDataNumberOfScalarComponents", GetDataNumberOfScalarComponents);

	Nan::SetPrototypeMethod(tpl, "GetDataOrigin", GetDataOrigin);
	Nan::SetPrototypeMethod(tpl, "getDataOrigin", GetDataOrigin);

	Nan::SetPrototypeMethod(tpl, "GetDataScalarType", GetDataScalarType);
	Nan::SetPrototypeMethod(tpl, "getDataScalarType", GetDataScalarType);

	Nan::SetPrototypeMethod(tpl, "GetDataScalarTypeAsString", GetDataScalarTypeAsString);
	Nan::SetPrototypeMethod(tpl, "getDataScalarTypeAsString", GetDataScalarTypeAsString);

	Nan::SetPrototypeMethod(tpl, "GetDataSpacing", GetDataSpacing);
	Nan::SetPrototypeMethod(tpl, "getDataSpacing", GetDataSpacing);

	Nan::SetPrototypeMethod(tpl, "GetImageLowerLeft", GetImageLowerLeft);
	Nan::SetPrototypeMethod(tpl, "getImageLowerLeft", GetImageLowerLeft);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "ImageLowerLeftOff", ImageLowerLeftOff);
	Nan::SetPrototypeMethod(tpl, "imageLowerLeftOff", ImageLowerLeftOff);

	Nan::SetPrototypeMethod(tpl, "ImageLowerLeftOn", ImageLowerLeftOn);
	Nan::SetPrototypeMethod(tpl, "imageLowerLeftOn", ImageLowerLeftOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetImageLowerLeft", SetImageLowerLeft);
	Nan::SetPrototypeMethod(tpl, "setImageLowerLeft", SetImageLowerLeft);

	ptpl.Reset( tpl );
}

void VtkImageExportWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageExport> native = vtkSmartPointer<vtkImageExport>::New();
		VtkImageExportWrap* obj = new VtkImageExportWrap(native);
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

void VtkImageExportWrap::Export(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Export();
}

void VtkImageExportWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageExportWrap::GetDataDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataDimensions();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkImageExportWrap::GetDataExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataExtent();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkImageExportWrap::GetDataNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataNumberOfScalarComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageExportWrap::GetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataOrigin();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkImageExportWrap::GetDataScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageExportWrap::GetDataScalarTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataScalarTypeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageExportWrap::GetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataSpacing();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkImageExportWrap::GetImageLowerLeft(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageLowerLeft();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageExportWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
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

void VtkImageExportWrap::ImageLowerLeftOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ImageLowerLeftOff();
}

void VtkImageExportWrap::ImageLowerLeftOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ImageLowerLeftOn();
}

void VtkImageExportWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
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

void VtkImageExportWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
	vtkImageExport * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageExportWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageExportWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageExportWrap *w = new VtkImageExportWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageExportWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageExport * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImageExportWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageExportWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageExportWrap *w = new VtkImageExportWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageExportWrap::SetImageLowerLeft(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageExportWrap *wrapper = ObjectWrap::Unwrap<VtkImageExportWrap>(info.Holder());
	vtkImageExport *native = (vtkImageExport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImageLowerLeft(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

