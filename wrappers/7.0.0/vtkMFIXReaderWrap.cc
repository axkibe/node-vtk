/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkMFIXReaderWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMFIXReaderWrap::ptpl;

VtkMFIXReaderWrap::VtkMFIXReaderWrap()
{ }

VtkMFIXReaderWrap::VtkMFIXReaderWrap(vtkSmartPointer<vtkMFIXReader> _native)
{ native = _native; }

VtkMFIXReaderWrap::~VtkMFIXReaderWrap()
{ }

void VtkMFIXReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMFIXReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MFIXReader").ToLocalChecked(), ConstructorGetter);
}

void VtkMFIXReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMFIXReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMFIXReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DisableAllCellArrays", DisableAllCellArrays);
	Nan::SetPrototypeMethod(tpl, "disableAllCellArrays", DisableAllCellArrays);

	Nan::SetPrototypeMethod(tpl, "EnableAllCellArrays", EnableAllCellArrays);
	Nan::SetPrototypeMethod(tpl, "enableAllCellArrays", EnableAllCellArrays);

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

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCellFields", GetNumberOfCellFields);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCellFields", GetNumberOfCellFields);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCells", GetNumberOfCells);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCells", GetNumberOfCells);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPoints", GetNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPoints", GetNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTimeSteps", GetNumberOfTimeSteps);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTimeSteps", GetNumberOfTimeSteps);

	Nan::SetPrototypeMethod(tpl, "GetTimeStep", GetTimeStep);
	Nan::SetPrototypeMethod(tpl, "getTimeStep", GetTimeStep);

	Nan::SetPrototypeMethod(tpl, "GetTimeStepRange", GetTimeStepRange);
	Nan::SetPrototypeMethod(tpl, "getTimeStepRange", GetTimeStepRange);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellArrayStatus", SetCellArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setCellArrayStatus", SetCellArrayStatus);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetTimeStep", SetTimeStep);
	Nan::SetPrototypeMethod(tpl, "setTimeStep", SetTimeStep);

	Nan::SetPrototypeMethod(tpl, "SetTimeStepRange", SetTimeStepRange);
	Nan::SetPrototypeMethod(tpl, "setTimeStepRange", SetTimeStepRange);

#ifdef VTK_NODE_PLUS_VTKMFIXREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMFIXREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMFIXReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMFIXReader> native = vtkSmartPointer<vtkMFIXReader>::New();
		VtkMFIXReaderWrap* obj = new VtkMFIXReaderWrap(native);
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

void VtkMFIXReaderWrap::DisableAllCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisableAllCellArrays();
}

void VtkMFIXReaderWrap::EnableAllCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableAllCellArrays();
}

void VtkMFIXReaderWrap::GetCellArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
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

void VtkMFIXReaderWrap::GetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
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

void VtkMFIXReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMFIXReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMFIXReaderWrap::GetNumberOfCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCellArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMFIXReaderWrap::GetNumberOfCellFields(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCellFields();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMFIXReaderWrap::GetNumberOfCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMFIXReaderWrap::GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMFIXReaderWrap::GetNumberOfTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTimeSteps();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMFIXReaderWrap::GetTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeStep();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMFIXReaderWrap::GetTimeStepRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
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

void VtkMFIXReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
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

void VtkMFIXReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
	vtkMFIXReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMFIXReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMFIXReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMFIXReaderWrap *w = new VtkMFIXReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMFIXReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMFIXReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkMFIXReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMFIXReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMFIXReaderWrap *w = new VtkMFIXReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMFIXReaderWrap::SetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
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

void VtkMFIXReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
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

void VtkMFIXReaderWrap::SetTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
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

void VtkMFIXReaderWrap::SetTimeStepRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMFIXReaderWrap *wrapper = ObjectWrap::Unwrap<VtkMFIXReaderWrap>(info.Holder());
	vtkMFIXReader *native = (vtkMFIXReader *)wrapper->native.GetPointer();
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

