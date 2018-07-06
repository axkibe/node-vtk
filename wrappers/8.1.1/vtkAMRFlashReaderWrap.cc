/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAMRBaseReaderWrap.h"
#include "vtkAMRFlashReaderWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAMRFlashReaderWrap::ptpl;

VtkAMRFlashReaderWrap::VtkAMRFlashReaderWrap()
{ }

VtkAMRFlashReaderWrap::VtkAMRFlashReaderWrap(vtkSmartPointer<vtkAMRFlashReader> _native)
{ native = _native; }

VtkAMRFlashReaderWrap::~VtkAMRFlashReaderWrap()
{ }

void VtkAMRFlashReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAMRFlashReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AMRFlashReader").ToLocalChecked(), ConstructorGetter);
}

void VtkAMRFlashReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAMRFlashReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAMRBaseReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAMRBaseReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAMRFlashReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfBlocks", GetNumberOfBlocks);
	Nan::SetPrototypeMethod(tpl, "getNumberOfBlocks", GetNumberOfBlocks);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfLevels", GetNumberOfLevels);
	Nan::SetPrototypeMethod(tpl, "getNumberOfLevels", GetNumberOfLevels);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

#ifdef VTK_NODE_PLUS_VTKAMRFLASHREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKAMRFLASHREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAMRFlashReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAMRFlashReader> native = vtkSmartPointer<vtkAMRFlashReader>::New();
		VtkAMRFlashReaderWrap* obj = new VtkAMRFlashReaderWrap(native);
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

void VtkAMRFlashReaderWrap::GetNumberOfBlocks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashReaderWrap>(info.Holder());
	vtkAMRFlashReader *native = (vtkAMRFlashReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfBlocks();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRFlashReaderWrap::GetNumberOfLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashReaderWrap>(info.Holder());
	vtkAMRFlashReader *native = (vtkAMRFlashReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfLevels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMRFlashReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashReaderWrap>(info.Holder());
	vtkAMRFlashReader *native = (vtkAMRFlashReader *)wrapper->native.GetPointer();
	vtkAMRFlashReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAMRFlashReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAMRFlashReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMRFlashReaderWrap *w = new VtkAMRFlashReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRFlashReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashReaderWrap>(info.Holder());
	vtkAMRFlashReader *native = (vtkAMRFlashReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkAMRFlashReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkAMRFlashReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAMRFlashReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMRFlashReaderWrap *w = new VtkAMRFlashReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRFlashReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRFlashReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMRFlashReaderWrap>(info.Holder());
	vtkAMRFlashReader *native = (vtkAMRFlashReader *)wrapper->native.GetPointer();
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

