/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkAVSucdReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAVSucdReaderWrap::ptpl;

VtkAVSucdReaderWrap::VtkAVSucdReaderWrap()
{ }

VtkAVSucdReaderWrap::VtkAVSucdReaderWrap(vtkSmartPointer<vtkAVSucdReader> _native)
{ native = _native; }

VtkAVSucdReaderWrap::~VtkAVSucdReaderWrap()
{ }

void VtkAVSucdReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAVSucdReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AVSucdReader").ToLocalChecked(), ConstructorGetter);
}

void VtkAVSucdReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAVSucdReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAVSucdReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BinaryFileOff", BinaryFileOff);
	Nan::SetPrototypeMethod(tpl, "binaryFileOff", BinaryFileOff);

	Nan::SetPrototypeMethod(tpl, "BinaryFileOn", BinaryFileOn);
	Nan::SetPrototypeMethod(tpl, "binaryFileOn", BinaryFileOn);

	Nan::SetPrototypeMethod(tpl, "DisableAllCellArrays", DisableAllCellArrays);
	Nan::SetPrototypeMethod(tpl, "disableAllCellArrays", DisableAllCellArrays);

	Nan::SetPrototypeMethod(tpl, "DisableAllPointArrays", DisableAllPointArrays);
	Nan::SetPrototypeMethod(tpl, "disableAllPointArrays", DisableAllPointArrays);

	Nan::SetPrototypeMethod(tpl, "EnableAllCellArrays", EnableAllCellArrays);
	Nan::SetPrototypeMethod(tpl, "enableAllCellArrays", EnableAllCellArrays);

	Nan::SetPrototypeMethod(tpl, "EnableAllPointArrays", EnableAllPointArrays);
	Nan::SetPrototypeMethod(tpl, "enableAllPointArrays", EnableAllPointArrays);

	Nan::SetPrototypeMethod(tpl, "GetBinaryFile", GetBinaryFile);
	Nan::SetPrototypeMethod(tpl, "getBinaryFile", GetBinaryFile);

	Nan::SetPrototypeMethod(tpl, "GetByteOrder", GetByteOrder);
	Nan::SetPrototypeMethod(tpl, "getByteOrder", GetByteOrder);

	Nan::SetPrototypeMethod(tpl, "GetByteOrderAsString", GetByteOrderAsString);
	Nan::SetPrototypeMethod(tpl, "getByteOrderAsString", GetByteOrderAsString);

	Nan::SetPrototypeMethod(tpl, "GetCellArrayName", GetCellArrayName);
	Nan::SetPrototypeMethod(tpl, "getCellArrayName", GetCellArrayName);

	Nan::SetPrototypeMethod(tpl, "GetCellArrayStatus", GetCellArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getCellArrayStatus", GetCellArrayStatus);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCellArrays", GetNumberOfCellArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCellArrays", GetNumberOfCellArrays);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCellComponents", GetNumberOfCellComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCellComponents", GetNumberOfCellComponents);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCellFields", GetNumberOfCellFields);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCellFields", GetNumberOfCellFields);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCells", GetNumberOfCells);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCells", GetNumberOfCells);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFields", GetNumberOfFields);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFields", GetNumberOfFields);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfNodeComponents", GetNumberOfNodeComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfNodeComponents", GetNumberOfNodeComponents);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfNodeFields", GetNumberOfNodeFields);
	Nan::SetPrototypeMethod(tpl, "getNumberOfNodeFields", GetNumberOfNodeFields);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfNodes", GetNumberOfNodes);
	Nan::SetPrototypeMethod(tpl, "getNumberOfNodes", GetNumberOfNodes);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPointArrays", GetNumberOfPointArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPointArrays", GetNumberOfPointArrays);

	Nan::SetPrototypeMethod(tpl, "GetPointArrayName", GetPointArrayName);
	Nan::SetPrototypeMethod(tpl, "getPointArrayName", GetPointArrayName);

	Nan::SetPrototypeMethod(tpl, "GetPointArrayStatus", GetPointArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getPointArrayStatus", GetPointArrayStatus);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBinaryFile", SetBinaryFile);
	Nan::SetPrototypeMethod(tpl, "setBinaryFile", SetBinaryFile);

	Nan::SetPrototypeMethod(tpl, "SetByteOrder", SetByteOrder);
	Nan::SetPrototypeMethod(tpl, "setByteOrder", SetByteOrder);

	Nan::SetPrototypeMethod(tpl, "SetByteOrderToBigEndian", SetByteOrderToBigEndian);
	Nan::SetPrototypeMethod(tpl, "setByteOrderToBigEndian", SetByteOrderToBigEndian);

	Nan::SetPrototypeMethod(tpl, "SetByteOrderToLittleEndian", SetByteOrderToLittleEndian);
	Nan::SetPrototypeMethod(tpl, "setByteOrderToLittleEndian", SetByteOrderToLittleEndian);

	Nan::SetPrototypeMethod(tpl, "SetCellArrayStatus", SetCellArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setCellArrayStatus", SetCellArrayStatus);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetPointArrayStatus", SetPointArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setPointArrayStatus", SetPointArrayStatus);

	ptpl.Reset( tpl );
}

void VtkAVSucdReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAVSucdReader> native = vtkSmartPointer<vtkAVSucdReader>::New();
		VtkAVSucdReaderWrap* obj = new VtkAVSucdReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAVSucdReaderWrap::BinaryFileOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BinaryFileOff();
}

void VtkAVSucdReaderWrap::BinaryFileOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BinaryFileOn();
}

void VtkAVSucdReaderWrap::DisableAllCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisableAllCellArrays();
}

void VtkAVSucdReaderWrap::DisableAllPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisableAllPointArrays();
}

void VtkAVSucdReaderWrap::EnableAllCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableAllCellArrays();
}

void VtkAVSucdReaderWrap::EnableAllPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableAllPointArrays();
}

void VtkAVSucdReaderWrap::GetBinaryFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBinaryFile();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAVSucdReaderWrap::GetByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetByteOrder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAVSucdReaderWrap::GetByteOrderAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetByteOrderAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAVSucdReaderWrap::GetCellArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
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

void VtkAVSucdReaderWrap::GetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
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

void VtkAVSucdReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAVSucdReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAVSucdReaderWrap::GetNumberOfCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCellArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAVSucdReaderWrap::GetNumberOfCellComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCellComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAVSucdReaderWrap::GetNumberOfCellFields(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCellFields();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAVSucdReaderWrap::GetNumberOfCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAVSucdReaderWrap::GetNumberOfFields(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFields();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAVSucdReaderWrap::GetNumberOfNodeComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfNodeComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAVSucdReaderWrap::GetNumberOfNodeFields(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfNodeFields();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAVSucdReaderWrap::GetNumberOfNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfNodes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAVSucdReaderWrap::GetNumberOfPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPointArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAVSucdReaderWrap::GetPointArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
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

void VtkAVSucdReaderWrap::GetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
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

void VtkAVSucdReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
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

void VtkAVSucdReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	vtkAVSucdReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAVSucdReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAVSucdReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAVSucdReaderWrap *w = new VtkAVSucdReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAVSucdReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAVSucdReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAVSucdReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAVSucdReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAVSucdReaderWrap *w = new VtkAVSucdReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAVSucdReaderWrap::SetBinaryFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBinaryFile(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAVSucdReaderWrap::SetByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
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

void VtkAVSucdReaderWrap::SetByteOrderToBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetByteOrderToBigEndian();
}

void VtkAVSucdReaderWrap::SetByteOrderToLittleEndian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetByteOrderToLittleEndian();
}

void VtkAVSucdReaderWrap::SetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
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

void VtkAVSucdReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
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

void VtkAVSucdReaderWrap::SetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAVSucdReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAVSucdReaderWrap>(info.Holder());
	vtkAVSucdReader *native = (vtkAVSucdReader *)wrapper->native.GetPointer();
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

