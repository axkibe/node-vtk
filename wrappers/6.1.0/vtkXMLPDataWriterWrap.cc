/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkXMLWriterWrap.h"
#include "vtkXMLPDataWriterWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLPDataWriterWrap::ptpl;

VtkXMLPDataWriterWrap::VtkXMLPDataWriterWrap()
{ }

VtkXMLPDataWriterWrap::VtkXMLPDataWriterWrap(vtkSmartPointer<vtkXMLPDataWriter> _native)
{ native = _native; }

VtkXMLPDataWriterWrap::~VtkXMLPDataWriterWrap()
{ }

void VtkXMLPDataWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLPDataWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLPDataWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLPDataWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLPDataWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLPDataWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEndPiece", GetEndPiece);
	Nan::SetPrototypeMethod(tpl, "getEndPiece", GetEndPiece);

	Nan::SetPrototypeMethod(tpl, "GetGhostLevel", GetGhostLevel);
	Nan::SetPrototypeMethod(tpl, "getGhostLevel", GetGhostLevel);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPieces", GetNumberOfPieces);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPieces", GetNumberOfPieces);

	Nan::SetPrototypeMethod(tpl, "GetStartPiece", GetStartPiece);
	Nan::SetPrototypeMethod(tpl, "getStartPiece", GetStartPiece);

	Nan::SetPrototypeMethod(tpl, "GetWriteSummaryFile", GetWriteSummaryFile);
	Nan::SetPrototypeMethod(tpl, "getWriteSummaryFile", GetWriteSummaryFile);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEndPiece", SetEndPiece);
	Nan::SetPrototypeMethod(tpl, "setEndPiece", SetEndPiece);

	Nan::SetPrototypeMethod(tpl, "SetGhostLevel", SetGhostLevel);
	Nan::SetPrototypeMethod(tpl, "setGhostLevel", SetGhostLevel);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfPieces", SetNumberOfPieces);
	Nan::SetPrototypeMethod(tpl, "setNumberOfPieces", SetNumberOfPieces);

	Nan::SetPrototypeMethod(tpl, "SetStartPiece", SetStartPiece);
	Nan::SetPrototypeMethod(tpl, "setStartPiece", SetStartPiece);

	Nan::SetPrototypeMethod(tpl, "SetWriteSummaryFile", SetWriteSummaryFile);
	Nan::SetPrototypeMethod(tpl, "setWriteSummaryFile", SetWriteSummaryFile);

	Nan::SetPrototypeMethod(tpl, "WriteSummaryFileOff", WriteSummaryFileOff);
	Nan::SetPrototypeMethod(tpl, "writeSummaryFileOff", WriteSummaryFileOff);

	Nan::SetPrototypeMethod(tpl, "WriteSummaryFileOn", WriteSummaryFileOn);
	Nan::SetPrototypeMethod(tpl, "writeSummaryFileOn", WriteSummaryFileOn);

#ifdef VTK_NODE_PLUS_VTKXMLPDATAWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKXMLPDATAWRITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkXMLPDataWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkXMLPDataWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLPDataWriterWrap::GetEndPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEndPiece();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLPDataWriterWrap::GetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGhostLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLPDataWriterWrap::GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPieces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLPDataWriterWrap::GetStartPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartPiece();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLPDataWriterWrap::GetWriteSummaryFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteSummaryFile();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLPDataWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
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

void VtkXMLPDataWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
	vtkXMLPDataWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkXMLPDataWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLPDataWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLPDataWriterWrap *w = new VtkXMLPDataWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLPDataWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLPDataWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkXMLPDataWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLPDataWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLPDataWriterWrap *w = new VtkXMLPDataWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLPDataWriterWrap::SetEndPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
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

void VtkXMLPDataWriterWrap::SetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
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

void VtkXMLPDataWriterWrap::SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
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

void VtkXMLPDataWriterWrap::SetStartPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
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

void VtkXMLPDataWriterWrap::SetWriteSummaryFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteSummaryFile(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLPDataWriterWrap::WriteSummaryFileOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteSummaryFileOff();
}

void VtkXMLPDataWriterWrap::WriteSummaryFileOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPDataWriterWrap>(info.Holder());
	vtkXMLPDataWriter *native = (vtkXMLPDataWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteSummaryFileOn();
}

