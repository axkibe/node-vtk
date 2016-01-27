/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkGenericMovieWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGenericMovieWriterWrap::ptpl;

VtkGenericMovieWriterWrap::VtkGenericMovieWriterWrap()
{ }

VtkGenericMovieWriterWrap::VtkGenericMovieWriterWrap(vtkSmartPointer<vtkGenericMovieWriter> _native)
{ native = _native; }

VtkGenericMovieWriterWrap::~VtkGenericMovieWriterWrap()
{ }

void VtkGenericMovieWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGenericMovieWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GenericMovieWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkGenericMovieWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGenericMovieWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGenericMovieWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "End", End);
	Nan::SetPrototypeMethod(tpl, "end", End);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetError", GetError);
	Nan::SetPrototypeMethod(tpl, "getError", GetError);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "Start", Start);
	Nan::SetPrototypeMethod(tpl, "start", Start);

	Nan::SetPrototypeMethod(tpl, "Write", Write);
	Nan::SetPrototypeMethod(tpl, "write", Write);

	ptpl.Reset( tpl );
}

void VtkGenericMovieWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGenericMovieWriterWrap::End(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericMovieWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericMovieWriterWrap>(info.Holder());
	vtkGenericMovieWriter *native = (vtkGenericMovieWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->End();
}

void VtkGenericMovieWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericMovieWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericMovieWriterWrap>(info.Holder());
	vtkGenericMovieWriter *native = (vtkGenericMovieWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericMovieWriterWrap::GetError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericMovieWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericMovieWriterWrap>(info.Holder());
	vtkGenericMovieWriter *native = (vtkGenericMovieWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericMovieWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericMovieWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericMovieWriterWrap>(info.Holder());
	vtkGenericMovieWriter *native = (vtkGenericMovieWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericMovieWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericMovieWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericMovieWriterWrap>(info.Holder());
	vtkGenericMovieWriter *native = (vtkGenericMovieWriter *)wrapper->native.GetPointer();
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

void VtkGenericMovieWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericMovieWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericMovieWriterWrap>(info.Holder());
	vtkGenericMovieWriter *native = (vtkGenericMovieWriter *)wrapper->native.GetPointer();
	vtkGenericMovieWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGenericMovieWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericMovieWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericMovieWriterWrap *w = new VtkGenericMovieWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericMovieWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericMovieWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericMovieWriterWrap>(info.Holder());
	vtkGenericMovieWriter *native = (vtkGenericMovieWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericMovieWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGenericMovieWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericMovieWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericMovieWriterWrap *w = new VtkGenericMovieWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericMovieWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericMovieWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericMovieWriterWrap>(info.Holder());
	vtkGenericMovieWriter *native = (vtkGenericMovieWriter *)wrapper->native.GetPointer();
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

void VtkGenericMovieWriterWrap::Start(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericMovieWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericMovieWriterWrap>(info.Holder());
	vtkGenericMovieWriter *native = (vtkGenericMovieWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Start();
}

void VtkGenericMovieWriterWrap::Write(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericMovieWriterWrap *wrapper = ObjectWrap::Unwrap<VtkGenericMovieWriterWrap>(info.Holder());
	vtkGenericMovieWriter *native = (vtkGenericMovieWriter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Write();
}

