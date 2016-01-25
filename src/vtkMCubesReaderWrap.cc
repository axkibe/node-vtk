/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkMCubesReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkMCubesReaderWrap::constructor;

VtkMCubesReaderWrap::VtkMCubesReaderWrap()
{ }

VtkMCubesReaderWrap::VtkMCubesReaderWrap(vtkSmartPointer<vtkMCubesReader> _native)
{ native = _native; }

VtkMCubesReaderWrap::~VtkMCubesReaderWrap()
{ }

void VtkMCubesReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkMCubesReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkPolyDataAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkMCubesReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("MCubesReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkMCubesReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CreateDefaultLocator", CreateDefaultLocator);
	Nan::SetPrototypeMethod(tpl, "createDefaultLocator", CreateDefaultLocator);

	Nan::SetPrototypeMethod(tpl, "FlipNormalsOff", FlipNormalsOff);
	Nan::SetPrototypeMethod(tpl, "flipNormalsOff", FlipNormalsOff);

	Nan::SetPrototypeMethod(tpl, "FlipNormalsOn", FlipNormalsOn);
	Nan::SetPrototypeMethod(tpl, "flipNormalsOn", FlipNormalsOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataByteOrder", GetDataByteOrder);
	Nan::SetPrototypeMethod(tpl, "getDataByteOrder", GetDataByteOrder);

	Nan::SetPrototypeMethod(tpl, "GetDataByteOrderAsString", GetDataByteOrderAsString);
	Nan::SetPrototypeMethod(tpl, "getDataByteOrderAsString", GetDataByteOrderAsString);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetFlipNormals", GetFlipNormals);
	Nan::SetPrototypeMethod(tpl, "getFlipNormals", GetFlipNormals);

	Nan::SetPrototypeMethod(tpl, "GetHeaderSize", GetHeaderSize);
	Nan::SetPrototypeMethod(tpl, "getHeaderSize", GetHeaderSize);

	Nan::SetPrototypeMethod(tpl, "GetHeaderSizeMaxValue", GetHeaderSizeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getHeaderSizeMaxValue", GetHeaderSizeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetHeaderSizeMinValue", GetHeaderSizeMinValue);
	Nan::SetPrototypeMethod(tpl, "getHeaderSizeMinValue", GetHeaderSizeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLimitsFileName", GetLimitsFileName);
	Nan::SetPrototypeMethod(tpl, "getLimitsFileName", GetLimitsFileName);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetNormals", GetNormals);
	Nan::SetPrototypeMethod(tpl, "getNormals", GetNormals);

	Nan::SetPrototypeMethod(tpl, "GetSwapBytes", GetSwapBytes);
	Nan::SetPrototypeMethod(tpl, "getSwapBytes", GetSwapBytes);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NormalsOff", NormalsOff);
	Nan::SetPrototypeMethod(tpl, "normalsOff", NormalsOff);

	Nan::SetPrototypeMethod(tpl, "NormalsOn", NormalsOn);
	Nan::SetPrototypeMethod(tpl, "normalsOn", NormalsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDataByteOrder", SetDataByteOrder);
	Nan::SetPrototypeMethod(tpl, "setDataByteOrder", SetDataByteOrder);

	Nan::SetPrototypeMethod(tpl, "SetDataByteOrderToBigEndian", SetDataByteOrderToBigEndian);
	Nan::SetPrototypeMethod(tpl, "setDataByteOrderToBigEndian", SetDataByteOrderToBigEndian);

	Nan::SetPrototypeMethod(tpl, "SetDataByteOrderToLittleEndian", SetDataByteOrderToLittleEndian);
	Nan::SetPrototypeMethod(tpl, "setDataByteOrderToLittleEndian", SetDataByteOrderToLittleEndian);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetFlipNormals", SetFlipNormals);
	Nan::SetPrototypeMethod(tpl, "setFlipNormals", SetFlipNormals);

	Nan::SetPrototypeMethod(tpl, "SetHeaderSize", SetHeaderSize);
	Nan::SetPrototypeMethod(tpl, "setHeaderSize", SetHeaderSize);

	Nan::SetPrototypeMethod(tpl, "SetLimitsFileName", SetLimitsFileName);
	Nan::SetPrototypeMethod(tpl, "setLimitsFileName", SetLimitsFileName);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetNormals", SetNormals);
	Nan::SetPrototypeMethod(tpl, "setNormals", SetNormals);

	Nan::SetPrototypeMethod(tpl, "SetSwapBytes", SetSwapBytes);
	Nan::SetPrototypeMethod(tpl, "setSwapBytes", SetSwapBytes);

	Nan::SetPrototypeMethod(tpl, "SwapBytesOff", SwapBytesOff);
	Nan::SetPrototypeMethod(tpl, "swapBytesOff", SwapBytesOff);

	Nan::SetPrototypeMethod(tpl, "SwapBytesOn", SwapBytesOn);
	Nan::SetPrototypeMethod(tpl, "swapBytesOn", SwapBytesOn);

}

void VtkMCubesReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMCubesReader> native = vtkSmartPointer<vtkMCubesReader>::New();
		VtkMCubesReaderWrap* obj = new VtkMCubesReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMCubesReaderWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkMCubesReaderWrap::FlipNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FlipNormalsOff();
}

void VtkMCubesReaderWrap::FlipNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FlipNormalsOn();
}

void VtkMCubesReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMCubesReaderWrap::GetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataByteOrder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMCubesReaderWrap::GetDataByteOrderAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataByteOrderAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMCubesReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMCubesReaderWrap::GetFlipNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFlipNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMCubesReaderWrap::GetHeaderSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeaderSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMCubesReaderWrap::GetHeaderSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeaderSizeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMCubesReaderWrap::GetHeaderSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeaderSizeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMCubesReaderWrap::GetLimitsFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLimitsFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMCubesReaderWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	vtkIncrementalPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocator();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkIncrementalPointLocatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalPointLocatorWrap *w = new VtkIncrementalPointLocatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMCubesReaderWrap::GetNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMCubesReaderWrap::GetSwapBytes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSwapBytes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMCubesReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
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

void VtkMCubesReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	vtkMCubesReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMCubesReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMCubesReaderWrap *w = new VtkMCubesReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMCubesReaderWrap::NormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalsOff();
}

void VtkMCubesReaderWrap::NormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalsOn();
}

void VtkMCubesReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMCubesReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkMCubesReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMCubesReaderWrap *w = new VtkMCubesReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMCubesReaderWrap::SetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataByteOrder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMCubesReaderWrap::SetDataByteOrderToBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataByteOrderToBigEndian();
}

void VtkMCubesReaderWrap::SetDataByteOrderToLittleEndian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataByteOrderToLittleEndian();
}

void VtkMCubesReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
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

void VtkMCubesReaderWrap::SetFlipNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFlipNormals(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMCubesReaderWrap::SetHeaderSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeaderSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMCubesReaderWrap::SetLimitsFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLimitsFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMCubesReaderWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkIncrementalPointLocatorWrap *a0 = ObjectWrap::Unwrap<VtkIncrementalPointLocatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocator(
			(vtkIncrementalPointLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMCubesReaderWrap::SetNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormals(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMCubesReaderWrap::SetSwapBytes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSwapBytes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMCubesReaderWrap::SwapBytesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SwapBytesOff();
}

void VtkMCubesReaderWrap::SwapBytesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMCubesReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMCubesReaderWrap>(info.Holder());
	vtkMCubesReader *native = (vtkMCubesReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SwapBytesOn();
}

