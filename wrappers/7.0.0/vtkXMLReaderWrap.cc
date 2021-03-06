/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAlgorithmWrap.h"
#include "vtkXMLReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkDataArraySelectionWrap.h"
#include "vtkInformationWrap.h"
#include "vtkXMLDataParserWrap.h"
#include "vtkCommandWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLReaderWrap::ptpl;

VtkXMLReaderWrap::VtkXMLReaderWrap()
{ }

VtkXMLReaderWrap::VtkXMLReaderWrap(vtkSmartPointer<vtkXMLReader> _native)
{ native = _native; }

VtkXMLReaderWrap::~VtkXMLReaderWrap()
{ }

void VtkXMLReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLReader").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CanReadFile", CanReadFile);
	Nan::SetPrototypeMethod(tpl, "canReadFile", CanReadFile);

	Nan::SetPrototypeMethod(tpl, "CopyOutputInformation", CopyOutputInformation);
	Nan::SetPrototypeMethod(tpl, "copyOutputInformation", CopyOutputInformation);

	Nan::SetPrototypeMethod(tpl, "GetCellArrayName", GetCellArrayName);
	Nan::SetPrototypeMethod(tpl, "getCellArrayName", GetCellArrayName);

	Nan::SetPrototypeMethod(tpl, "GetCellArrayStatus", GetCellArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getCellArrayStatus", GetCellArrayStatus);

	Nan::SetPrototypeMethod(tpl, "GetCellDataArraySelection", GetCellDataArraySelection);
	Nan::SetPrototypeMethod(tpl, "getCellDataArraySelection", GetCellDataArraySelection);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCellArrays", GetNumberOfCellArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCellArrays", GetNumberOfCellArrays);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPointArrays", GetNumberOfPointArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPointArrays", GetNumberOfPointArrays);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTimeSteps", GetNumberOfTimeSteps);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTimeSteps", GetNumberOfTimeSteps);

	Nan::SetPrototypeMethod(tpl, "GetOutputAsDataSet", GetOutputAsDataSet);
	Nan::SetPrototypeMethod(tpl, "getOutputAsDataSet", GetOutputAsDataSet);

	Nan::SetPrototypeMethod(tpl, "GetParserErrorObserver", GetParserErrorObserver);
	Nan::SetPrototypeMethod(tpl, "getParserErrorObserver", GetParserErrorObserver);

	Nan::SetPrototypeMethod(tpl, "GetPointArrayName", GetPointArrayName);
	Nan::SetPrototypeMethod(tpl, "getPointArrayName", GetPointArrayName);

	Nan::SetPrototypeMethod(tpl, "GetPointArrayStatus", GetPointArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getPointArrayStatus", GetPointArrayStatus);

	Nan::SetPrototypeMethod(tpl, "GetPointDataArraySelection", GetPointDataArraySelection);
	Nan::SetPrototypeMethod(tpl, "getPointDataArraySelection", GetPointDataArraySelection);

	Nan::SetPrototypeMethod(tpl, "GetReadFromInputString", GetReadFromInputString);
	Nan::SetPrototypeMethod(tpl, "getReadFromInputString", GetReadFromInputString);

	Nan::SetPrototypeMethod(tpl, "GetReaderErrorObserver", GetReaderErrorObserver);
	Nan::SetPrototypeMethod(tpl, "getReaderErrorObserver", GetReaderErrorObserver);

	Nan::SetPrototypeMethod(tpl, "GetTimeStep", GetTimeStep);
	Nan::SetPrototypeMethod(tpl, "getTimeStep", GetTimeStep);

	Nan::SetPrototypeMethod(tpl, "GetTimeStepRange", GetTimeStepRange);
	Nan::SetPrototypeMethod(tpl, "getTimeStepRange", GetTimeStepRange);

	Nan::SetPrototypeMethod(tpl, "GetXMLParser", GetXMLParser);
	Nan::SetPrototypeMethod(tpl, "getXMLParser", GetXMLParser);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReadFromInputStringOff", ReadFromInputStringOff);
	Nan::SetPrototypeMethod(tpl, "readFromInputStringOff", ReadFromInputStringOff);

	Nan::SetPrototypeMethod(tpl, "ReadFromInputStringOn", ReadFromInputStringOn);
	Nan::SetPrototypeMethod(tpl, "readFromInputStringOn", ReadFromInputStringOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellArrayStatus", SetCellArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setCellArrayStatus", SetCellArrayStatus);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetParserErrorObserver", SetParserErrorObserver);
	Nan::SetPrototypeMethod(tpl, "setParserErrorObserver", SetParserErrorObserver);

	Nan::SetPrototypeMethod(tpl, "SetPointArrayStatus", SetPointArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setPointArrayStatus", SetPointArrayStatus);

	Nan::SetPrototypeMethod(tpl, "SetReadFromInputString", SetReadFromInputString);
	Nan::SetPrototypeMethod(tpl, "setReadFromInputString", SetReadFromInputString);

	Nan::SetPrototypeMethod(tpl, "SetReaderErrorObserver", SetReaderErrorObserver);
	Nan::SetPrototypeMethod(tpl, "setReaderErrorObserver", SetReaderErrorObserver);

	Nan::SetPrototypeMethod(tpl, "SetTimeStep", SetTimeStep);
	Nan::SetPrototypeMethod(tpl, "setTimeStep", SetTimeStep);

	Nan::SetPrototypeMethod(tpl, "SetTimeStepRange", SetTimeStepRange);
	Nan::SetPrototypeMethod(tpl, "setTimeStepRange", SetTimeStepRange);

#ifdef VTK_NODE_PLUS_VTKXMLREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKXMLREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkXMLReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkXMLReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
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

void VtkXMLReaderWrap::CopyOutputInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->CopyOutputInformation(
				(vtkInformation *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLReaderWrap::GetCellArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetCellArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLReaderWrap::GetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetCellArrayStatus(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLReaderWrap::GetCellDataArraySelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	vtkDataArraySelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellDataArraySelection();
	VtkDataArraySelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArraySelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArraySelectionWrap *w = new VtkDataArraySelectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLReaderWrap::GetNumberOfCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCellArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLReaderWrap::GetNumberOfPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPointArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLReaderWrap::GetNumberOfTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTimeSteps();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLReaderWrap::GetOutputAsDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOutputAsDataSet(
			info[0]->Int32Value()
		);
		VtkDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataSetWrap *w = new VtkDataSetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputAsDataSet();
	VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLReaderWrap::GetParserErrorObserver(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	vtkCommand * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParserErrorObserver();
	VtkCommandWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCommandWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCommandWrap *w = new VtkCommandWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLReaderWrap::GetPointArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPointArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLReaderWrap::GetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPointArrayStatus(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLReaderWrap::GetPointDataArraySelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	vtkDataArraySelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointDataArraySelection();
	VtkDataArraySelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArraySelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArraySelectionWrap *w = new VtkDataArraySelectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLReaderWrap::GetReadFromInputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReadFromInputString();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLReaderWrap::GetReaderErrorObserver(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	vtkCommand * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReaderErrorObserver();
	VtkCommandWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCommandWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCommandWrap *w = new VtkCommandWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLReaderWrap::GetTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeStep();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLReaderWrap::GetTimeStepRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeStepRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkXMLReaderWrap::GetXMLParser(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	vtkXMLDataParser * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXMLParser();
	VtkXMLDataParserWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLDataParserWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLDataParserWrap *w = new VtkXMLDataParserWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
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

void VtkXMLReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	vtkXMLReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkXMLReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLReaderWrap *w = new VtkXMLReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLReaderWrap::ReadFromInputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadFromInputStringOff();
}

void VtkXMLReaderWrap::ReadFromInputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadFromInputStringOn();
}

void VtkXMLReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkXMLReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLReaderWrap *w = new VtkXMLReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLReaderWrap::SetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetCellArrayStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
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

void VtkXMLReaderWrap::SetParserErrorObserver(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCommandWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCommandWrap *a0 = ObjectWrap::Unwrap<VtkCommandWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParserErrorObserver(
			(vtkCommand *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLReaderWrap::SetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPointArrayStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLReaderWrap::SetReadFromInputString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReadFromInputString(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLReaderWrap::SetReaderErrorObserver(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCommandWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCommandWrap *a0 = ObjectWrap::Unwrap<VtkCommandWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReaderErrorObserver(
			(vtkCommand *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLReaderWrap::SetTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTimeStep(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLReaderWrap::SetTimeStepRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLReaderWrap>(info.Holder());
	vtkXMLReader *native = (vtkXMLReader *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTimeStepRange(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTimeStepRange(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetTimeStepRange(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

