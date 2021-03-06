/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAlgorithmWrap.h"
#include "vtkXMLWriterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkDataCompressorWrap.h"
#include "vtkDataObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLWriterWrap::ptpl;

VtkXMLWriterWrap::VtkXMLWriterWrap()
{ }

VtkXMLWriterWrap::VtkXMLWriterWrap(vtkSmartPointer<vtkXMLWriter> _native)
{ native = _native; }

VtkXMLWriterWrap::~VtkXMLWriterWrap()
{ }

void VtkXMLWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EncodeAppendedDataOff", EncodeAppendedDataOff);
	Nan::SetPrototypeMethod(tpl, "encodeAppendedDataOff", EncodeAppendedDataOff);

	Nan::SetPrototypeMethod(tpl, "EncodeAppendedDataOn", EncodeAppendedDataOn);
	Nan::SetPrototypeMethod(tpl, "encodeAppendedDataOn", EncodeAppendedDataOn);

	Nan::SetPrototypeMethod(tpl, "GetByteOrder", GetByteOrder);
	Nan::SetPrototypeMethod(tpl, "getByteOrder", GetByteOrder);

	Nan::SetPrototypeMethod(tpl, "GetCompressor", GetCompressor);
	Nan::SetPrototypeMethod(tpl, "getCompressor", GetCompressor);

	Nan::SetPrototypeMethod(tpl, "GetDataMode", GetDataMode);
	Nan::SetPrototypeMethod(tpl, "getDataMode", GetDataMode);

	Nan::SetPrototypeMethod(tpl, "GetEncodeAppendedData", GetEncodeAppendedData);
	Nan::SetPrototypeMethod(tpl, "getEncodeAppendedData", GetEncodeAppendedData);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetHeaderType", GetHeaderType);
	Nan::SetPrototypeMethod(tpl, "getHeaderType", GetHeaderType);

	Nan::SetPrototypeMethod(tpl, "GetIdType", GetIdType);
	Nan::SetPrototypeMethod(tpl, "getIdType", GetIdType);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTimeSteps", GetNumberOfTimeSteps);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTimeSteps", GetNumberOfTimeSteps);

	Nan::SetPrototypeMethod(tpl, "GetWriteToOutputString", GetWriteToOutputString);
	Nan::SetPrototypeMethod(tpl, "getWriteToOutputString", GetWriteToOutputString);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetByteOrder", SetByteOrder);
	Nan::SetPrototypeMethod(tpl, "setByteOrder", SetByteOrder);

	Nan::SetPrototypeMethod(tpl, "SetByteOrderToBigEndian", SetByteOrderToBigEndian);
	Nan::SetPrototypeMethod(tpl, "setByteOrderToBigEndian", SetByteOrderToBigEndian);

	Nan::SetPrototypeMethod(tpl, "SetByteOrderToLittleEndian", SetByteOrderToLittleEndian);
	Nan::SetPrototypeMethod(tpl, "setByteOrderToLittleEndian", SetByteOrderToLittleEndian);

	Nan::SetPrototypeMethod(tpl, "SetCompressor", SetCompressor);
	Nan::SetPrototypeMethod(tpl, "setCompressor", SetCompressor);

	Nan::SetPrototypeMethod(tpl, "SetCompressorType", SetCompressorType);
	Nan::SetPrototypeMethod(tpl, "setCompressorType", SetCompressorType);

	Nan::SetPrototypeMethod(tpl, "SetCompressorTypeToLZ4", SetCompressorTypeToLZ4);
	Nan::SetPrototypeMethod(tpl, "setCompressorTypeToLZ4", SetCompressorTypeToLZ4);

	Nan::SetPrototypeMethod(tpl, "SetCompressorTypeToNone", SetCompressorTypeToNone);
	Nan::SetPrototypeMethod(tpl, "setCompressorTypeToNone", SetCompressorTypeToNone);

	Nan::SetPrototypeMethod(tpl, "SetCompressorTypeToZLib", SetCompressorTypeToZLib);
	Nan::SetPrototypeMethod(tpl, "setCompressorTypeToZLib", SetCompressorTypeToZLib);

	Nan::SetPrototypeMethod(tpl, "SetDataMode", SetDataMode);
	Nan::SetPrototypeMethod(tpl, "setDataMode", SetDataMode);

	Nan::SetPrototypeMethod(tpl, "SetDataModeToAppended", SetDataModeToAppended);
	Nan::SetPrototypeMethod(tpl, "setDataModeToAppended", SetDataModeToAppended);

	Nan::SetPrototypeMethod(tpl, "SetDataModeToAscii", SetDataModeToAscii);
	Nan::SetPrototypeMethod(tpl, "setDataModeToAscii", SetDataModeToAscii);

	Nan::SetPrototypeMethod(tpl, "SetDataModeToBinary", SetDataModeToBinary);
	Nan::SetPrototypeMethod(tpl, "setDataModeToBinary", SetDataModeToBinary);

	Nan::SetPrototypeMethod(tpl, "SetEncodeAppendedData", SetEncodeAppendedData);
	Nan::SetPrototypeMethod(tpl, "setEncodeAppendedData", SetEncodeAppendedData);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetHeaderType", SetHeaderType);
	Nan::SetPrototypeMethod(tpl, "setHeaderType", SetHeaderType);

	Nan::SetPrototypeMethod(tpl, "SetHeaderTypeToUInt32", SetHeaderTypeToUInt32);
	Nan::SetPrototypeMethod(tpl, "setHeaderTypeToUInt32", SetHeaderTypeToUInt32);

	Nan::SetPrototypeMethod(tpl, "SetHeaderTypeToUInt64", SetHeaderTypeToUInt64);
	Nan::SetPrototypeMethod(tpl, "setHeaderTypeToUInt64", SetHeaderTypeToUInt64);

	Nan::SetPrototypeMethod(tpl, "SetIdType", SetIdType);
	Nan::SetPrototypeMethod(tpl, "setIdType", SetIdType);

	Nan::SetPrototypeMethod(tpl, "SetIdTypeToInt32", SetIdTypeToInt32);
	Nan::SetPrototypeMethod(tpl, "setIdTypeToInt32", SetIdTypeToInt32);

	Nan::SetPrototypeMethod(tpl, "SetIdTypeToInt64", SetIdTypeToInt64);
	Nan::SetPrototypeMethod(tpl, "setIdTypeToInt64", SetIdTypeToInt64);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfTimeSteps", SetNumberOfTimeSteps);
	Nan::SetPrototypeMethod(tpl, "setNumberOfTimeSteps", SetNumberOfTimeSteps);

	Nan::SetPrototypeMethod(tpl, "SetWriteToOutputString", SetWriteToOutputString);
	Nan::SetPrototypeMethod(tpl, "setWriteToOutputString", SetWriteToOutputString);

	Nan::SetPrototypeMethod(tpl, "Start", Start);
	Nan::SetPrototypeMethod(tpl, "start", Start);

	Nan::SetPrototypeMethod(tpl, "Stop", Stop);
	Nan::SetPrototypeMethod(tpl, "stop", Stop);

	Nan::SetPrototypeMethod(tpl, "Write", Write);
	Nan::SetPrototypeMethod(tpl, "write", Write);

	Nan::SetPrototypeMethod(tpl, "WriteNextTime", WriteNextTime);
	Nan::SetPrototypeMethod(tpl, "writeNextTime", WriteNextTime);

	Nan::SetPrototypeMethod(tpl, "WriteToOutputStringOff", WriteToOutputStringOff);
	Nan::SetPrototypeMethod(tpl, "writeToOutputStringOff", WriteToOutputStringOff);

	Nan::SetPrototypeMethod(tpl, "WriteToOutputStringOn", WriteToOutputStringOn);
	Nan::SetPrototypeMethod(tpl, "writeToOutputStringOn", WriteToOutputStringOn);

#ifdef VTK_NODE_PLUS_VTKXMLWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKXMLWRITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkXMLWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkXMLWriterWrap::EncodeAppendedDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EncodeAppendedDataOff();
}

void VtkXMLWriterWrap::EncodeAppendedDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EncodeAppendedDataOn();
}

void VtkXMLWriterWrap::GetByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetByteOrder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLWriterWrap::GetCompressor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	vtkDataCompressor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompressor();
	VtkDataCompressorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataCompressorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataCompressorWrap *w = new VtkDataCompressorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLWriterWrap::GetDataMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLWriterWrap::GetEncodeAppendedData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEncodeAppendedData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLWriterWrap::GetHeaderType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeaderType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLWriterWrap::GetIdType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIdType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLWriterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDataObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetInput(
			info[0]->Int32Value()
		);
		VtkDataObjectWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataObjectWrap *w = new VtkDataObjectWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	VtkDataObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLWriterWrap::GetNumberOfTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTimeSteps();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLWriterWrap::GetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteToOutputString();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	vtkXMLWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkXMLWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLWriterWrap *w = new VtkXMLWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkXMLWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkXMLWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLWriterWrap *w = new VtkXMLWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLWriterWrap::SetByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetByteOrder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLWriterWrap::SetByteOrderToBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetByteOrderToBigEndian();
}

void VtkXMLWriterWrap::SetByteOrderToLittleEndian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetByteOrderToLittleEndian();
}

void VtkXMLWriterWrap::SetCompressor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataCompressorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataCompressorWrap *a0 = ObjectWrap::Unwrap<VtkDataCompressorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompressor(
			(vtkDataCompressor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLWriterWrap::SetCompressorType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompressorType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLWriterWrap::SetCompressorTypeToLZ4(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCompressorTypeToLZ4();
}

void VtkXMLWriterWrap::SetCompressorTypeToNone(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCompressorTypeToNone();
}

void VtkXMLWriterWrap::SetCompressorTypeToZLib(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCompressorTypeToZLib();
}

void VtkXMLWriterWrap::SetDataMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLWriterWrap::SetDataModeToAppended(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataModeToAppended();
}

void VtkXMLWriterWrap::SetDataModeToAscii(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataModeToAscii();
}

void VtkXMLWriterWrap::SetDataModeToBinary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataModeToBinary();
}

void VtkXMLWriterWrap::SetEncodeAppendedData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEncodeAppendedData(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
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

void VtkXMLWriterWrap::SetHeaderType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeaderType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLWriterWrap::SetHeaderTypeToUInt32(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetHeaderTypeToUInt32();
}

void VtkXMLWriterWrap::SetHeaderTypeToUInt64(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetHeaderTypeToUInt64();
}

void VtkXMLWriterWrap::SetIdType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIdType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLWriterWrap::SetIdTypeToInt32(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIdTypeToInt32();
}

void VtkXMLWriterWrap::SetIdTypeToInt64(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIdTypeToInt64();
}

void VtkXMLWriterWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInputData(
				info[0]->Int32Value(),
				(vtkDataObject *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLWriterWrap::SetNumberOfTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfTimeSteps(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLWriterWrap::SetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteToOutputString(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLWriterWrap::Start(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Start();
}

void VtkXMLWriterWrap::Stop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Stop();
}

void VtkXMLWriterWrap::Write(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Write();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLWriterWrap::WriteNextTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->WriteNextTime(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLWriterWrap::WriteToOutputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToOutputStringOff();
}

void VtkXMLWriterWrap::WriteToOutputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLWriterWrap>(info.Holder());
	vtkXMLWriter *native = (vtkXMLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteToOutputStringOn();
}

