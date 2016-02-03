/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkNetCDFCAMReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkNetCDFCAMReaderWrap::ptpl;

VtkNetCDFCAMReaderWrap::VtkNetCDFCAMReaderWrap()
{ }

VtkNetCDFCAMReaderWrap::VtkNetCDFCAMReaderWrap(vtkSmartPointer<vtkNetCDFCAMReader> _native)
{ native = _native; }

VtkNetCDFCAMReaderWrap::~VtkNetCDFCAMReaderWrap()
{ }

void VtkNetCDFCAMReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkNetCDFCAMReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("NetCDFCAMReader").ToLocalChecked(), ConstructorGetter);
}

void VtkNetCDFCAMReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkNetCDFCAMReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkNetCDFCAMReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CanReadFile", CanReadFile);
	Nan::SetPrototypeMethod(tpl, "canReadFile", CanReadFile);

	Nan::SetPrototypeMethod(tpl, "GetCellLayerRight", GetCellLayerRight);
	Nan::SetPrototypeMethod(tpl, "getCellLayerRight", GetCellLayerRight);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetConnectivityFileName", GetConnectivityFileName);
	Nan::SetPrototypeMethod(tpl, "getConnectivityFileName", GetConnectivityFileName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetSingleLevel", GetSingleLevel);
	Nan::SetPrototypeMethod(tpl, "getSingleLevel", GetSingleLevel);

	Nan::SetPrototypeMethod(tpl, "GetSingleLevelMaxValue", GetSingleLevelMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSingleLevelMaxValue", GetSingleLevelMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSingleLevelMinValue", GetSingleLevelMinValue);
	Nan::SetPrototypeMethod(tpl, "getSingleLevelMinValue", GetSingleLevelMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellLayerRight", SetCellLayerRight);
	Nan::SetPrototypeMethod(tpl, "setCellLayerRight", SetCellLayerRight);

	Nan::SetPrototypeMethod(tpl, "SetConnectivityFileName", SetConnectivityFileName);
	Nan::SetPrototypeMethod(tpl, "setConnectivityFileName", SetConnectivityFileName);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetSingleLevel", SetSingleLevel);
	Nan::SetPrototypeMethod(tpl, "setSingleLevel", SetSingleLevel);

	Nan::SetPrototypeMethod(tpl, "SingleLevelOff", SingleLevelOff);
	Nan::SetPrototypeMethod(tpl, "singleLevelOff", SingleLevelOff);

	Nan::SetPrototypeMethod(tpl, "SingleLevelOn", SingleLevelOn);
	Nan::SetPrototypeMethod(tpl, "singleLevelOn", SingleLevelOn);

	ptpl.Reset( tpl );
}

void VtkNetCDFCAMReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkNetCDFCAMReader> native = vtkSmartPointer<vtkNetCDFCAMReader>::New();
		VtkNetCDFCAMReaderWrap* obj = new VtkNetCDFCAMReaderWrap(native);
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

void VtkNetCDFCAMReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
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

void VtkNetCDFCAMReaderWrap::GetCellLayerRight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellLayerRight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNetCDFCAMReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNetCDFCAMReaderWrap::GetConnectivityFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetConnectivityFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNetCDFCAMReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNetCDFCAMReaderWrap::GetSingleLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSingleLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNetCDFCAMReaderWrap::GetSingleLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSingleLevelMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNetCDFCAMReaderWrap::GetSingleLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSingleLevelMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNetCDFCAMReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
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

void VtkNetCDFCAMReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	vtkNetCDFCAMReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkNetCDFCAMReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkNetCDFCAMReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNetCDFCAMReaderWrap *w = new VtkNetCDFCAMReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNetCDFCAMReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkNetCDFCAMReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkNetCDFCAMReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkNetCDFCAMReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNetCDFCAMReaderWrap *w = new VtkNetCDFCAMReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFCAMReaderWrap::SetCellLayerRight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellLayerRight(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFCAMReaderWrap::SetConnectivityFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetConnectivityFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFCAMReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
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

void VtkNetCDFCAMReaderWrap::SetSingleLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSingleLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFCAMReaderWrap::SingleLevelOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SingleLevelOff();
}

void VtkNetCDFCAMReaderWrap::SingleLevelOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCAMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCAMReaderWrap>(info.Holder());
	vtkNetCDFCAMReader *native = (vtkNetCDFCAMReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SingleLevelOn();
}

