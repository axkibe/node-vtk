/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkBYUReaderWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBYUReaderWrap::ptpl;

VtkBYUReaderWrap::VtkBYUReaderWrap()
{ }

VtkBYUReaderWrap::VtkBYUReaderWrap(vtkSmartPointer<vtkBYUReader> _native)
{ native = _native; }

VtkBYUReaderWrap::~VtkBYUReaderWrap()
{ }

void VtkBYUReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBYUReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BYUReader").ToLocalChecked(), ConstructorGetter);
}

void VtkBYUReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBYUReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBYUReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CanReadFile", CanReadFile);
	Nan::SetPrototypeMethod(tpl, "canReadFile", CanReadFile);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDisplacementFileName", GetDisplacementFileName);
	Nan::SetPrototypeMethod(tpl, "getDisplacementFileName", GetDisplacementFileName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetGeometryFileName", GetGeometryFileName);
	Nan::SetPrototypeMethod(tpl, "getGeometryFileName", GetGeometryFileName);

	Nan::SetPrototypeMethod(tpl, "GetPartNumber", GetPartNumber);
	Nan::SetPrototypeMethod(tpl, "getPartNumber", GetPartNumber);

	Nan::SetPrototypeMethod(tpl, "GetPartNumberMaxValue", GetPartNumberMaxValue);
	Nan::SetPrototypeMethod(tpl, "getPartNumberMaxValue", GetPartNumberMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetPartNumberMinValue", GetPartNumberMinValue);
	Nan::SetPrototypeMethod(tpl, "getPartNumberMinValue", GetPartNumberMinValue);

	Nan::SetPrototypeMethod(tpl, "GetReadDisplacement", GetReadDisplacement);
	Nan::SetPrototypeMethod(tpl, "getReadDisplacement", GetReadDisplacement);

	Nan::SetPrototypeMethod(tpl, "GetReadScalar", GetReadScalar);
	Nan::SetPrototypeMethod(tpl, "getReadScalar", GetReadScalar);

	Nan::SetPrototypeMethod(tpl, "GetReadTexture", GetReadTexture);
	Nan::SetPrototypeMethod(tpl, "getReadTexture", GetReadTexture);

	Nan::SetPrototypeMethod(tpl, "GetScalarFileName", GetScalarFileName);
	Nan::SetPrototypeMethod(tpl, "getScalarFileName", GetScalarFileName);

	Nan::SetPrototypeMethod(tpl, "GetTextureFileName", GetTextureFileName);
	Nan::SetPrototypeMethod(tpl, "getTextureFileName", GetTextureFileName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReadDisplacementOff", ReadDisplacementOff);
	Nan::SetPrototypeMethod(tpl, "readDisplacementOff", ReadDisplacementOff);

	Nan::SetPrototypeMethod(tpl, "ReadDisplacementOn", ReadDisplacementOn);
	Nan::SetPrototypeMethod(tpl, "readDisplacementOn", ReadDisplacementOn);

	Nan::SetPrototypeMethod(tpl, "ReadScalarOff", ReadScalarOff);
	Nan::SetPrototypeMethod(tpl, "readScalarOff", ReadScalarOff);

	Nan::SetPrototypeMethod(tpl, "ReadScalarOn", ReadScalarOn);
	Nan::SetPrototypeMethod(tpl, "readScalarOn", ReadScalarOn);

	Nan::SetPrototypeMethod(tpl, "ReadTextureOff", ReadTextureOff);
	Nan::SetPrototypeMethod(tpl, "readTextureOff", ReadTextureOff);

	Nan::SetPrototypeMethod(tpl, "ReadTextureOn", ReadTextureOn);
	Nan::SetPrototypeMethod(tpl, "readTextureOn", ReadTextureOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDisplacementFileName", SetDisplacementFileName);
	Nan::SetPrototypeMethod(tpl, "setDisplacementFileName", SetDisplacementFileName);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetGeometryFileName", SetGeometryFileName);
	Nan::SetPrototypeMethod(tpl, "setGeometryFileName", SetGeometryFileName);

	Nan::SetPrototypeMethod(tpl, "SetPartNumber", SetPartNumber);
	Nan::SetPrototypeMethod(tpl, "setPartNumber", SetPartNumber);

	Nan::SetPrototypeMethod(tpl, "SetReadDisplacement", SetReadDisplacement);
	Nan::SetPrototypeMethod(tpl, "setReadDisplacement", SetReadDisplacement);

	Nan::SetPrototypeMethod(tpl, "SetReadScalar", SetReadScalar);
	Nan::SetPrototypeMethod(tpl, "setReadScalar", SetReadScalar);

	Nan::SetPrototypeMethod(tpl, "SetReadTexture", SetReadTexture);
	Nan::SetPrototypeMethod(tpl, "setReadTexture", SetReadTexture);

	Nan::SetPrototypeMethod(tpl, "SetScalarFileName", SetScalarFileName);
	Nan::SetPrototypeMethod(tpl, "setScalarFileName", SetScalarFileName);

	Nan::SetPrototypeMethod(tpl, "SetTextureFileName", SetTextureFileName);
	Nan::SetPrototypeMethod(tpl, "setTextureFileName", SetTextureFileName);

#ifdef VTK_NODE_PLUS_VTKBYUREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKBYUREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkBYUReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBYUReader> native = vtkSmartPointer<vtkBYUReader>::New();
		VtkBYUReaderWrap* obj = new VtkBYUReaderWrap(native);
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

void VtkBYUReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
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

void VtkBYUReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBYUReaderWrap::GetDisplacementFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplacementFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBYUReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBYUReaderWrap::GetGeometryFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGeometryFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBYUReaderWrap::GetPartNumber(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPartNumber();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBYUReaderWrap::GetPartNumberMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPartNumberMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBYUReaderWrap::GetPartNumberMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPartNumberMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBYUReaderWrap::GetReadDisplacement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReadDisplacement();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBYUReaderWrap::GetReadScalar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReadScalar();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBYUReaderWrap::GetReadTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReadTexture();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBYUReaderWrap::GetScalarFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBYUReaderWrap::GetTextureFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBYUReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
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

void VtkBYUReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	vtkBYUReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkBYUReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBYUReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBYUReaderWrap *w = new VtkBYUReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBYUReaderWrap::ReadDisplacementOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadDisplacementOff();
}

void VtkBYUReaderWrap::ReadDisplacementOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadDisplacementOn();
}

void VtkBYUReaderWrap::ReadScalarOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadScalarOff();
}

void VtkBYUReaderWrap::ReadScalarOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadScalarOn();
}

void VtkBYUReaderWrap::ReadTextureOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadTextureOff();
}

void VtkBYUReaderWrap::ReadTextureOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadTextureOn();
}

void VtkBYUReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBYUReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkBYUReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBYUReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBYUReaderWrap *w = new VtkBYUReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUReaderWrap::SetDisplacementFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplacementFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
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

void VtkBYUReaderWrap::SetGeometryFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGeometryFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUReaderWrap::SetPartNumber(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPartNumber(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUReaderWrap::SetReadDisplacement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReadDisplacement(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUReaderWrap::SetReadScalar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReadScalar(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUReaderWrap::SetReadTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReadTexture(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUReaderWrap::SetScalarFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUReaderWrap::SetTextureFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBYUReaderWrap>(info.Holder());
	vtkBYUReader *native = (vtkBYUReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextureFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

