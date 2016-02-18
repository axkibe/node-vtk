/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGenericEnSightReaderWrap.h"
#include "vtkEnSightMasterServerReaderWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkEnSightMasterServerReaderWrap::ptpl;

VtkEnSightMasterServerReaderWrap::VtkEnSightMasterServerReaderWrap()
{ }

VtkEnSightMasterServerReaderWrap::VtkEnSightMasterServerReaderWrap(vtkSmartPointer<vtkEnSightMasterServerReader> _native)
{ native = _native; }

VtkEnSightMasterServerReaderWrap::~VtkEnSightMasterServerReaderWrap()
{ }

void VtkEnSightMasterServerReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkEnSightMasterServerReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("EnSightMasterServerReader").ToLocalChecked(), ConstructorGetter);
}

void VtkEnSightMasterServerReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkEnSightMasterServerReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGenericEnSightReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGenericEnSightReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkEnSightMasterServerReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CanReadFile", CanReadFile);
	Nan::SetPrototypeMethod(tpl, "canReadFile", CanReadFile);

	Nan::SetPrototypeMethod(tpl, "DetermineFileName", DetermineFileName);
	Nan::SetPrototypeMethod(tpl, "determineFileName", DetermineFileName);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentPiece", GetCurrentPiece);
	Nan::SetPrototypeMethod(tpl, "getCurrentPiece", GetCurrentPiece);

	Nan::SetPrototypeMethod(tpl, "GetPieceCaseFileName", GetPieceCaseFileName);
	Nan::SetPrototypeMethod(tpl, "getPieceCaseFileName", GetPieceCaseFileName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCurrentPiece", SetCurrentPiece);
	Nan::SetPrototypeMethod(tpl, "setCurrentPiece", SetCurrentPiece);

#ifdef VTK_NODE_PLUS_VTKENSIGHTMASTERSERVERREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKENSIGHTMASTERSERVERREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkEnSightMasterServerReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkEnSightMasterServerReader> native = vtkSmartPointer<vtkEnSightMasterServerReader>::New();
		VtkEnSightMasterServerReaderWrap* obj = new VtkEnSightMasterServerReaderWrap(native);
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

void VtkEnSightMasterServerReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightMasterServerReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightMasterServerReaderWrap>(info.Holder());
	vtkEnSightMasterServerReader *native = (vtkEnSightMasterServerReader *)wrapper->native.GetPointer();
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

void VtkEnSightMasterServerReaderWrap::DetermineFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightMasterServerReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightMasterServerReaderWrap>(info.Holder());
	vtkEnSightMasterServerReader *native = (vtkEnSightMasterServerReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->DetermineFileName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEnSightMasterServerReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightMasterServerReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightMasterServerReaderWrap>(info.Holder());
	vtkEnSightMasterServerReader *native = (vtkEnSightMasterServerReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEnSightMasterServerReaderWrap::GetCurrentPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightMasterServerReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightMasterServerReaderWrap>(info.Holder());
	vtkEnSightMasterServerReader *native = (vtkEnSightMasterServerReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentPiece();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEnSightMasterServerReaderWrap::GetPieceCaseFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightMasterServerReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightMasterServerReaderWrap>(info.Holder());
	vtkEnSightMasterServerReader *native = (vtkEnSightMasterServerReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPieceCaseFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEnSightMasterServerReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightMasterServerReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightMasterServerReaderWrap>(info.Holder());
	vtkEnSightMasterServerReader *native = (vtkEnSightMasterServerReader *)wrapper->native.GetPointer();
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

void VtkEnSightMasterServerReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightMasterServerReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightMasterServerReaderWrap>(info.Holder());
	vtkEnSightMasterServerReader *native = (vtkEnSightMasterServerReader *)wrapper->native.GetPointer();
	vtkEnSightMasterServerReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkEnSightMasterServerReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkEnSightMasterServerReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEnSightMasterServerReaderWrap *w = new VtkEnSightMasterServerReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEnSightMasterServerReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightMasterServerReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightMasterServerReaderWrap>(info.Holder());
	vtkEnSightMasterServerReader *native = (vtkEnSightMasterServerReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkEnSightMasterServerReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkEnSightMasterServerReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkEnSightMasterServerReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEnSightMasterServerReaderWrap *w = new VtkEnSightMasterServerReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEnSightMasterServerReaderWrap::SetCurrentPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEnSightMasterServerReaderWrap *wrapper = ObjectWrap::Unwrap<VtkEnSightMasterServerReaderWrap>(info.Holder());
	vtkEnSightMasterServerReader *native = (vtkEnSightMasterServerReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCurrentPiece(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

