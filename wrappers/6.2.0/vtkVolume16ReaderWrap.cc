/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkVolumeReaderWrap.h"
#include "vtkVolume16ReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTransformWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVolume16ReaderWrap::ptpl;

VtkVolume16ReaderWrap::VtkVolume16ReaderWrap()
{ }

VtkVolume16ReaderWrap::VtkVolume16ReaderWrap(vtkSmartPointer<vtkVolume16Reader> _native)
{ native = _native; }

VtkVolume16ReaderWrap::~VtkVolume16ReaderWrap()
{ }

void VtkVolume16ReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVolume16Reader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Volume16Reader").ToLocalChecked(), ConstructorGetter);
}

void VtkVolume16ReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVolume16ReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkVolumeReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkVolumeReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVolume16ReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataByteOrder", GetDataByteOrder);
	Nan::SetPrototypeMethod(tpl, "getDataByteOrder", GetDataByteOrder);

	Nan::SetPrototypeMethod(tpl, "GetDataByteOrderAsString", GetDataByteOrderAsString);
	Nan::SetPrototypeMethod(tpl, "getDataByteOrderAsString", GetDataByteOrderAsString);

	Nan::SetPrototypeMethod(tpl, "GetHeaderSize", GetHeaderSize);
	Nan::SetPrototypeMethod(tpl, "getHeaderSize", GetHeaderSize);

	Nan::SetPrototypeMethod(tpl, "GetImage", GetImage);
	Nan::SetPrototypeMethod(tpl, "getImage", GetImage);

	Nan::SetPrototypeMethod(tpl, "GetSwapBytes", GetSwapBytes);
	Nan::SetPrototypeMethod(tpl, "getSwapBytes", GetSwapBytes);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDataByteOrder", SetDataByteOrder);
	Nan::SetPrototypeMethod(tpl, "setDataByteOrder", SetDataByteOrder);

	Nan::SetPrototypeMethod(tpl, "SetDataByteOrderToBigEndian", SetDataByteOrderToBigEndian);
	Nan::SetPrototypeMethod(tpl, "setDataByteOrderToBigEndian", SetDataByteOrderToBigEndian);

	Nan::SetPrototypeMethod(tpl, "SetDataByteOrderToLittleEndian", SetDataByteOrderToLittleEndian);
	Nan::SetPrototypeMethod(tpl, "setDataByteOrderToLittleEndian", SetDataByteOrderToLittleEndian);

	Nan::SetPrototypeMethod(tpl, "SetDataDimensions", SetDataDimensions);
	Nan::SetPrototypeMethod(tpl, "setDataDimensions", SetDataDimensions);

	Nan::SetPrototypeMethod(tpl, "SetHeaderSize", SetHeaderSize);
	Nan::SetPrototypeMethod(tpl, "setHeaderSize", SetHeaderSize);

	Nan::SetPrototypeMethod(tpl, "SetSwapBytes", SetSwapBytes);
	Nan::SetPrototypeMethod(tpl, "setSwapBytes", SetSwapBytes);

	Nan::SetPrototypeMethod(tpl, "SetTransform", SetTransform);
	Nan::SetPrototypeMethod(tpl, "setTransform", SetTransform);

	Nan::SetPrototypeMethod(tpl, "SwapBytesOff", SwapBytesOff);
	Nan::SetPrototypeMethod(tpl, "swapBytesOff", SwapBytesOff);

	Nan::SetPrototypeMethod(tpl, "SwapBytesOn", SwapBytesOn);
	Nan::SetPrototypeMethod(tpl, "swapBytesOn", SwapBytesOn);

	ptpl.Reset( tpl );
}

void VtkVolume16ReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVolume16Reader> native = vtkSmartPointer<vtkVolume16Reader>::New();
		VtkVolume16ReaderWrap* obj = new VtkVolume16ReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkVolume16ReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolume16ReaderWrap::GetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataByteOrder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolume16ReaderWrap::GetDataByteOrderAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataByteOrderAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolume16ReaderWrap::GetHeaderSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeaderSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolume16ReaderWrap::GetImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkImageData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetImage(
			info[0]->Int32Value()
		);
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
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolume16ReaderWrap::GetSwapBytes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSwapBytes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolume16ReaderWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	vtkTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransform();
		VtkTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransformWrap *w = new VtkTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolume16ReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
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

void VtkVolume16ReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	vtkVolume16Reader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkVolume16ReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVolume16ReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolume16ReaderWrap *w = new VtkVolume16ReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolume16ReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVolume16Reader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkVolume16ReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVolume16ReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVolume16ReaderWrap *w = new VtkVolume16ReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolume16ReaderWrap::SetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
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

void VtkVolume16ReaderWrap::SetDataByteOrderToBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataByteOrderToBigEndian();
}

void VtkVolume16ReaderWrap::SetDataByteOrderToLittleEndian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataByteOrderToLittleEndian();
}

void VtkVolume16ReaderWrap::SetDataDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetDataDimensions(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolume16ReaderWrap::SetHeaderSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
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

void VtkVolume16ReaderWrap::SetSwapBytes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
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

void VtkVolume16ReaderWrap::SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTransformWrap *a0 = ObjectWrap::Unwrap<VtkTransformWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransform(
			(vtkTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolume16ReaderWrap::SwapBytesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SwapBytesOff();
}

void VtkVolume16ReaderWrap::SwapBytesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolume16ReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolume16ReaderWrap>(info.Holder());
	vtkVolume16Reader *native = (vtkVolume16Reader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SwapBytesOn();
}

