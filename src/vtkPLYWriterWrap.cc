/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWriterWrap.h"
#include "vtkPLYWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkScalarsToColorsWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPLYWriterWrap::ptpl;

VtkPLYWriterWrap::VtkPLYWriterWrap()
{ }

VtkPLYWriterWrap::VtkPLYWriterWrap(vtkSmartPointer<vtkPLYWriter> _native)
{ native = _native; }

VtkPLYWriterWrap::~VtkPLYWriterWrap()
{ }

void VtkPLYWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPLYWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PLYWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkPLYWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPLYWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPLYWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetArrayName", GetArrayName);
	Nan::SetPrototypeMethod(tpl, "getArrayName", GetArrayName);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColorMode", GetColorMode);
	Nan::SetPrototypeMethod(tpl, "getColorMode", GetColorMode);

	Nan::SetPrototypeMethod(tpl, "GetComponent", GetComponent);
	Nan::SetPrototypeMethod(tpl, "getComponent", GetComponent);

	Nan::SetPrototypeMethod(tpl, "GetComponentMaxValue", GetComponentMaxValue);
	Nan::SetPrototypeMethod(tpl, "getComponentMaxValue", GetComponentMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetComponentMinValue", GetComponentMinValue);
	Nan::SetPrototypeMethod(tpl, "getComponentMinValue", GetComponentMinValue);

	Nan::SetPrototypeMethod(tpl, "GetDataByteOrder", GetDataByteOrder);
	Nan::SetPrototypeMethod(tpl, "getDataByteOrder", GetDataByteOrder);

	Nan::SetPrototypeMethod(tpl, "GetDataByteOrderMaxValue", GetDataByteOrderMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDataByteOrderMaxValue", GetDataByteOrderMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDataByteOrderMinValue", GetDataByteOrderMinValue);
	Nan::SetPrototypeMethod(tpl, "getDataByteOrderMinValue", GetDataByteOrderMinValue);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetFileType", GetFileType);
	Nan::SetPrototypeMethod(tpl, "getFileType", GetFileType);

	Nan::SetPrototypeMethod(tpl, "GetFileTypeMaxValue", GetFileTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getFileTypeMaxValue", GetFileTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetFileTypeMinValue", GetFileTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getFileTypeMinValue", GetFileTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetLookupTable", GetLookupTable);
	Nan::SetPrototypeMethod(tpl, "getLookupTable", GetLookupTable);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetArrayName", SetArrayName);
	Nan::SetPrototypeMethod(tpl, "setArrayName", SetArrayName);

	Nan::SetPrototypeMethod(tpl, "SetColorMode", SetColorMode);
	Nan::SetPrototypeMethod(tpl, "setColorMode", SetColorMode);

	Nan::SetPrototypeMethod(tpl, "SetColorModeToDefault", SetColorModeToDefault);
	Nan::SetPrototypeMethod(tpl, "setColorModeToDefault", SetColorModeToDefault);

	Nan::SetPrototypeMethod(tpl, "SetColorModeToOff", SetColorModeToOff);
	Nan::SetPrototypeMethod(tpl, "setColorModeToOff", SetColorModeToOff);

	Nan::SetPrototypeMethod(tpl, "SetColorModeToUniformCellColor", SetColorModeToUniformCellColor);
	Nan::SetPrototypeMethod(tpl, "setColorModeToUniformCellColor", SetColorModeToUniformCellColor);

	Nan::SetPrototypeMethod(tpl, "SetColorModeToUniformColor", SetColorModeToUniformColor);
	Nan::SetPrototypeMethod(tpl, "setColorModeToUniformColor", SetColorModeToUniformColor);

	Nan::SetPrototypeMethod(tpl, "SetColorModeToUniformPointColor", SetColorModeToUniformPointColor);
	Nan::SetPrototypeMethod(tpl, "setColorModeToUniformPointColor", SetColorModeToUniformPointColor);

	Nan::SetPrototypeMethod(tpl, "SetComponent", SetComponent);
	Nan::SetPrototypeMethod(tpl, "setComponent", SetComponent);

	Nan::SetPrototypeMethod(tpl, "SetDataByteOrder", SetDataByteOrder);
	Nan::SetPrototypeMethod(tpl, "setDataByteOrder", SetDataByteOrder);

	Nan::SetPrototypeMethod(tpl, "SetDataByteOrderToBigEndian", SetDataByteOrderToBigEndian);
	Nan::SetPrototypeMethod(tpl, "setDataByteOrderToBigEndian", SetDataByteOrderToBigEndian);

	Nan::SetPrototypeMethod(tpl, "SetDataByteOrderToLittleEndian", SetDataByteOrderToLittleEndian);
	Nan::SetPrototypeMethod(tpl, "setDataByteOrderToLittleEndian", SetDataByteOrderToLittleEndian);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetFileType", SetFileType);
	Nan::SetPrototypeMethod(tpl, "setFileType", SetFileType);

	Nan::SetPrototypeMethod(tpl, "SetFileTypeToASCII", SetFileTypeToASCII);
	Nan::SetPrototypeMethod(tpl, "setFileTypeToASCII", SetFileTypeToASCII);

	Nan::SetPrototypeMethod(tpl, "SetFileTypeToBinary", SetFileTypeToBinary);
	Nan::SetPrototypeMethod(tpl, "setFileTypeToBinary", SetFileTypeToBinary);

	Nan::SetPrototypeMethod(tpl, "SetLookupTable", SetLookupTable);
	Nan::SetPrototypeMethod(tpl, "setLookupTable", SetLookupTable);

	ptpl.Reset( tpl );
}

void VtkPLYWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPLYWriter> native = vtkSmartPointer<vtkPLYWriter>::New();
		VtkPLYWriterWrap* obj = new VtkPLYWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPLYWriterWrap::GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPLYWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPLYWriterWrap::GetColorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPLYWriterWrap::GetComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPLYWriterWrap::GetComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComponentMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPLYWriterWrap::GetComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComponentMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPLYWriterWrap::GetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataByteOrder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPLYWriterWrap::GetDataByteOrderMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataByteOrderMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPLYWriterWrap::GetDataByteOrderMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataByteOrderMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPLYWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPLYWriterWrap::GetFileType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPLYWriterWrap::GetFileTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPLYWriterWrap::GetFileTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPLYWriterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetInput(
			info[0]->Int32Value()
		);
			VtkPolyDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataWrap *w = new VtkPolyDataWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPLYWriterWrap::GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	vtkScalarsToColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLookupTable();
		VtkScalarsToColorsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarsToColorsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarsToColorsWrap *w = new VtkScalarsToColorsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPLYWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
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

void VtkPLYWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	vtkPLYWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPLYWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPLYWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPLYWriterWrap *w = new VtkPLYWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPLYWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPLYWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPLYWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPLYWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPLYWriterWrap *w = new VtkPLYWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPLYWriterWrap::SetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPLYWriterWrap::SetColorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPLYWriterWrap::SetColorModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetColorModeToDefault();
}

void VtkPLYWriterWrap::SetColorModeToOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetColorModeToOff();
}

void VtkPLYWriterWrap::SetColorModeToUniformCellColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetColorModeToUniformCellColor();
}

void VtkPLYWriterWrap::SetColorModeToUniformColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetColorModeToUniformColor();
}

void VtkPLYWriterWrap::SetColorModeToUniformPointColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetColorModeToUniformPointColor();
}

void VtkPLYWriterWrap::SetComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPLYWriterWrap::SetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
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

void VtkPLYWriterWrap::SetDataByteOrderToBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataByteOrderToBigEndian();
}

void VtkPLYWriterWrap::SetDataByteOrderToLittleEndian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataByteOrderToLittleEndian();
}

void VtkPLYWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
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

void VtkPLYWriterWrap::SetFileType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPLYWriterWrap::SetFileTypeToASCII(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetFileTypeToASCII();
}

void VtkPLYWriterWrap::SetFileTypeToBinary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetFileTypeToBinary();
}

void VtkPLYWriterWrap::SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarsToColorsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarsToColorsWrap *a0 = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLookupTable(
			(vtkScalarsToColors *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

