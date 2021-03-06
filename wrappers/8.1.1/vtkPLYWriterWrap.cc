/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkWriterWrap.h"
#include "vtkPLYWriterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkScalarsToColorsWrap.h"
#include "vtkPolyDataWrap.h"
#include "../../plus/plus.h"

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

	Nan::SetPrototypeMethod(tpl, "EnableAlphaOff", EnableAlphaOff);
	Nan::SetPrototypeMethod(tpl, "enableAlphaOff", EnableAlphaOff);

	Nan::SetPrototypeMethod(tpl, "EnableAlphaOn", EnableAlphaOn);
	Nan::SetPrototypeMethod(tpl, "enableAlphaOn", EnableAlphaOn);

	Nan::SetPrototypeMethod(tpl, "GetAlpha", GetAlpha);
	Nan::SetPrototypeMethod(tpl, "getAlpha", GetAlpha);

	Nan::SetPrototypeMethod(tpl, "GetArrayName", GetArrayName);
	Nan::SetPrototypeMethod(tpl, "getArrayName", GetArrayName);

	Nan::SetPrototypeMethod(tpl, "GetColor", GetColor);
	Nan::SetPrototypeMethod(tpl, "getColor", GetColor);

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

	Nan::SetPrototypeMethod(tpl, "GetEnableAlpha", GetEnableAlpha);
	Nan::SetPrototypeMethod(tpl, "getEnableAlpha", GetEnableAlpha);

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

	Nan::SetPrototypeMethod(tpl, "GetTextureCoordinatesName", GetTextureCoordinatesName);
	Nan::SetPrototypeMethod(tpl, "getTextureCoordinatesName", GetTextureCoordinatesName);

	Nan::SetPrototypeMethod(tpl, "GetTextureCoordinatesNameMaxValue", GetTextureCoordinatesNameMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTextureCoordinatesNameMaxValue", GetTextureCoordinatesNameMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTextureCoordinatesNameMinValue", GetTextureCoordinatesNameMinValue);
	Nan::SetPrototypeMethod(tpl, "getTextureCoordinatesNameMinValue", GetTextureCoordinatesNameMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAlpha", SetAlpha);
	Nan::SetPrototypeMethod(tpl, "setAlpha", SetAlpha);

	Nan::SetPrototypeMethod(tpl, "SetArrayName", SetArrayName);
	Nan::SetPrototypeMethod(tpl, "setArrayName", SetArrayName);

	Nan::SetPrototypeMethod(tpl, "SetColor", SetColor);
	Nan::SetPrototypeMethod(tpl, "setColor", SetColor);

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

	Nan::SetPrototypeMethod(tpl, "SetEnableAlpha", SetEnableAlpha);
	Nan::SetPrototypeMethod(tpl, "setEnableAlpha", SetEnableAlpha);

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

	Nan::SetPrototypeMethod(tpl, "SetTextureCoordinatesName", SetTextureCoordinatesName);
	Nan::SetPrototypeMethod(tpl, "setTextureCoordinatesName", SetTextureCoordinatesName);

	Nan::SetPrototypeMethod(tpl, "SetTextureCoordinatesNameToTextureUV", SetTextureCoordinatesNameToTextureUV);
	Nan::SetPrototypeMethod(tpl, "setTextureCoordinatesNameToTextureUV", SetTextureCoordinatesNameToTextureUV);

	Nan::SetPrototypeMethod(tpl, "SetTextureCoordinatesNameToUV", SetTextureCoordinatesNameToUV);
	Nan::SetPrototypeMethod(tpl, "setTextureCoordinatesNameToUV", SetTextureCoordinatesNameToUV);

#ifdef VTK_NODE_PLUS_VTKPLYWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPLYWRITERWRAP_INITPTPL
#endif
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
		VtkPLYWriterWrap* obj = new VtkPLYWriterWrap(native);
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

void VtkPLYWriterWrap::EnableAlphaOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableAlphaOff();
}

void VtkPLYWriterWrap::EnableAlphaOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableAlphaOn();
}

void VtkPLYWriterWrap::GetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	unsigned char r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlpha();
	info.GetReturnValue().Set(Nan::New(r));
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

void VtkPLYWriterWrap::GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	unsigned char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColor();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(unsigned char));
	Local<v8::Uint8Array> at = v8::Uint8Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(unsigned char));
	info.GetReturnValue().Set(at);
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

void VtkPLYWriterWrap::GetEnableAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnableAlpha();
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
		w->native = r;
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
	w->native = r;
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPLYWriterWrap::GetTextureCoordinatesName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureCoordinatesName();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPLYWriterWrap::GetTextureCoordinatesNameMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureCoordinatesNameMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPLYWriterWrap::GetTextureCoordinatesNameMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureCoordinatesNameMinValue();
	info.GetReturnValue().Set(Nan::New(r));
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPLYWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPLYWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPLYWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPLYWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPLYWriterWrap *w = new VtkPLYWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPLYWriterWrap::SetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAlpha(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPLYWriterWrap::SetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkPLYWriterWrap::SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint8Array())
	{
		v8::Local<v8::Uint8Array>a0(v8::Local<v8::Uint8Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColor(
			(unsigned char *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned char b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsUint32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Uint32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColor(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
			if(info.Length() > 2 && info[2]->IsUint32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetColor(
					info[0]->Uint32Value(),
					info[1]->Uint32Value(),
					info[2]->Uint32Value()
				);
				return;
			}
		}
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

void VtkPLYWriterWrap::SetEnableAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnableAlpha(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPLYWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
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

void VtkPLYWriterWrap::SetTextureCoordinatesName(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		native->SetTextureCoordinatesName(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPLYWriterWrap::SetTextureCoordinatesNameToTextureUV(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTextureCoordinatesNameToTextureUV();
}

void VtkPLYWriterWrap::SetTextureCoordinatesNameToUV(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLYWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPLYWriterWrap>(info.Holder());
	vtkPLYWriter *native = (vtkPLYWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTextureCoordinatesNameToUV();
}

