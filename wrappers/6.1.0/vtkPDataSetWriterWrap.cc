/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetWriterWrap.h"
#include "vtkPDataSetWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPDataSetWriterWrap::ptpl;

VtkPDataSetWriterWrap::VtkPDataSetWriterWrap()
{ }

VtkPDataSetWriterWrap::VtkPDataSetWriterWrap(vtkSmartPointer<vtkPDataSetWriter> _native)
{ native = _native; }

VtkPDataSetWriterWrap::~VtkPDataSetWriterWrap()
{ }

void VtkPDataSetWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPDataSetWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PDataSetWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkPDataSetWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPDataSetWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPDataSetWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEndPiece", GetEndPiece);
	Nan::SetPrototypeMethod(tpl, "getEndPiece", GetEndPiece);

	Nan::SetPrototypeMethod(tpl, "GetFilePattern", GetFilePattern);
	Nan::SetPrototypeMethod(tpl, "getFilePattern", GetFilePattern);

	Nan::SetPrototypeMethod(tpl, "GetGhostLevel", GetGhostLevel);
	Nan::SetPrototypeMethod(tpl, "getGhostLevel", GetGhostLevel);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPieces", GetNumberOfPieces);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPieces", GetNumberOfPieces);

	Nan::SetPrototypeMethod(tpl, "GetStartPiece", GetStartPiece);
	Nan::SetPrototypeMethod(tpl, "getStartPiece", GetStartPiece);

	Nan::SetPrototypeMethod(tpl, "GetUseRelativeFileNames", GetUseRelativeFileNames);
	Nan::SetPrototypeMethod(tpl, "getUseRelativeFileNames", GetUseRelativeFileNames);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEndPiece", SetEndPiece);
	Nan::SetPrototypeMethod(tpl, "setEndPiece", SetEndPiece);

	Nan::SetPrototypeMethod(tpl, "SetFilePattern", SetFilePattern);
	Nan::SetPrototypeMethod(tpl, "setFilePattern", SetFilePattern);

	Nan::SetPrototypeMethod(tpl, "SetGhostLevel", SetGhostLevel);
	Nan::SetPrototypeMethod(tpl, "setGhostLevel", SetGhostLevel);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfPieces", SetNumberOfPieces);
	Nan::SetPrototypeMethod(tpl, "setNumberOfPieces", SetNumberOfPieces);

	Nan::SetPrototypeMethod(tpl, "SetStartPiece", SetStartPiece);
	Nan::SetPrototypeMethod(tpl, "setStartPiece", SetStartPiece);

	Nan::SetPrototypeMethod(tpl, "SetUseRelativeFileNames", SetUseRelativeFileNames);
	Nan::SetPrototypeMethod(tpl, "setUseRelativeFileNames", SetUseRelativeFileNames);

	Nan::SetPrototypeMethod(tpl, "UseRelativeFileNamesOff", UseRelativeFileNamesOff);
	Nan::SetPrototypeMethod(tpl, "useRelativeFileNamesOff", UseRelativeFileNamesOff);

	Nan::SetPrototypeMethod(tpl, "UseRelativeFileNamesOn", UseRelativeFileNamesOn);
	Nan::SetPrototypeMethod(tpl, "useRelativeFileNamesOn", UseRelativeFileNamesOn);

	Nan::SetPrototypeMethod(tpl, "Write", Write);
	Nan::SetPrototypeMethod(tpl, "write", Write);

	ptpl.Reset( tpl );
}

void VtkPDataSetWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPDataSetWriter> native = vtkSmartPointer<vtkPDataSetWriter>::New();
		VtkPDataSetWriterWrap* obj = new VtkPDataSetWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPDataSetWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPDataSetWriterWrap::GetEndPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndPiece();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPDataSetWriterWrap::GetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilePattern();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPDataSetWriterWrap::GetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGhostLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPDataSetWriterWrap::GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPieces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPDataSetWriterWrap::GetStartPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartPiece();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPDataSetWriterWrap::GetUseRelativeFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseRelativeFileNames();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPDataSetWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
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

void VtkPDataSetWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	vtkPDataSetWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPDataSetWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPDataSetWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPDataSetWriterWrap *w = new VtkPDataSetWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPDataSetWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPDataSetWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPDataSetWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPDataSetWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPDataSetWriterWrap *w = new VtkPDataSetWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPDataSetWriterWrap::SetEndPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEndPiece(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPDataSetWriterWrap::SetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilePattern(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPDataSetWriterWrap::SetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGhostLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPDataSetWriterWrap::SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfPieces(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPDataSetWriterWrap::SetStartPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStartPiece(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPDataSetWriterWrap::SetUseRelativeFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseRelativeFileNames(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPDataSetWriterWrap::UseRelativeFileNamesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseRelativeFileNamesOff();
}

void VtkPDataSetWriterWrap::UseRelativeFileNamesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseRelativeFileNamesOn();
}

void VtkPDataSetWriterWrap::Write(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPDataSetWriterWrap *wrapper = ObjectWrap::Unwrap<VtkPDataSetWriterWrap>(info.Holder());
	vtkPDataSetWriter *native = (vtkPDataSetWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Write();
	info.GetReturnValue().Set(Nan::New(r));
}

