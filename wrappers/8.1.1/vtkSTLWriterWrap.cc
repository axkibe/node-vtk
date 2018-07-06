/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkWriterWrap.h"
#include "vtkSTLWriterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPolyDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSTLWriterWrap::ptpl;

VtkSTLWriterWrap::VtkSTLWriterWrap()
{ }

VtkSTLWriterWrap::VtkSTLWriterWrap(vtkSmartPointer<vtkSTLWriter> _native)
{ native = _native; }

VtkSTLWriterWrap::~VtkSTLWriterWrap()
{ }

void VtkSTLWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSTLWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("STLWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkSTLWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSTLWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSTLWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetFileType", GetFileType);
	Nan::SetPrototypeMethod(tpl, "getFileType", GetFileType);

	Nan::SetPrototypeMethod(tpl, "GetFileTypeMaxValue", GetFileTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getFileTypeMaxValue", GetFileTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetFileTypeMinValue", GetFileTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getFileTypeMinValue", GetFileTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetHeader", GetHeader);
	Nan::SetPrototypeMethod(tpl, "getHeader", GetHeader);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetFileType", SetFileType);
	Nan::SetPrototypeMethod(tpl, "setFileType", SetFileType);

	Nan::SetPrototypeMethod(tpl, "SetFileTypeToASCII", SetFileTypeToASCII);
	Nan::SetPrototypeMethod(tpl, "setFileTypeToASCII", SetFileTypeToASCII);

	Nan::SetPrototypeMethod(tpl, "SetFileTypeToBinary", SetFileTypeToBinary);
	Nan::SetPrototypeMethod(tpl, "setFileTypeToBinary", SetFileTypeToBinary);

	Nan::SetPrototypeMethod(tpl, "SetHeader", SetHeader);
	Nan::SetPrototypeMethod(tpl, "setHeader", SetHeader);

#ifdef VTK_NODE_PLUS_VTKSTLWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSTLWRITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSTLWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSTLWriter> native = vtkSmartPointer<vtkSTLWriter>::New();
		VtkSTLWriterWrap* obj = new VtkSTLWriterWrap(native);
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

void VtkSTLWriterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSTLWriterWrap>(info.Holder());
	vtkSTLWriter *native = (vtkSTLWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSTLWriterWrap::GetFileType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSTLWriterWrap>(info.Holder());
	vtkSTLWriter *native = (vtkSTLWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSTLWriterWrap::GetFileTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSTLWriterWrap>(info.Holder());
	vtkSTLWriter *native = (vtkSTLWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSTLWriterWrap::GetFileTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSTLWriterWrap>(info.Holder());
	vtkSTLWriter *native = (vtkSTLWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSTLWriterWrap::GetHeader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSTLWriterWrap>(info.Holder());
	vtkSTLWriter *native = (vtkSTLWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeader();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSTLWriterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSTLWriterWrap>(info.Holder());
	vtkSTLWriter *native = (vtkSTLWriter *)wrapper->native.GetPointer();
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

void VtkSTLWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSTLWriterWrap>(info.Holder());
	vtkSTLWriter *native = (vtkSTLWriter *)wrapper->native.GetPointer();
	vtkSTLWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSTLWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSTLWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSTLWriterWrap *w = new VtkSTLWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSTLWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSTLWriterWrap>(info.Holder());
	vtkSTLWriter *native = (vtkSTLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkSTLWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkSTLWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSTLWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSTLWriterWrap *w = new VtkSTLWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSTLWriterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSTLWriterWrap>(info.Holder());
	vtkSTLWriter *native = (vtkSTLWriter *)wrapper->native.GetPointer();
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

void VtkSTLWriterWrap::SetFileType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSTLWriterWrap>(info.Holder());
	vtkSTLWriter *native = (vtkSTLWriter *)wrapper->native.GetPointer();
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

void VtkSTLWriterWrap::SetFileTypeToASCII(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSTLWriterWrap>(info.Holder());
	vtkSTLWriter *native = (vtkSTLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetFileTypeToASCII();
}

void VtkSTLWriterWrap::SetFileTypeToBinary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSTLWriterWrap>(info.Holder());
	vtkSTLWriter *native = (vtkSTLWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetFileTypeToBinary();
}

void VtkSTLWriterWrap::SetHeader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSTLWriterWrap *wrapper = ObjectWrap::Unwrap<VtkSTLWriterWrap>(info.Holder());
	vtkSTLWriter *native = (vtkSTLWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeader(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

