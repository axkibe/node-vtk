/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAMRBaseReaderWrap.h"
#include "vtkAMREnzoReaderWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAMREnzoReaderWrap::ptpl;

VtkAMREnzoReaderWrap::VtkAMREnzoReaderWrap()
{ }

VtkAMREnzoReaderWrap::VtkAMREnzoReaderWrap(vtkSmartPointer<vtkAMREnzoReader> _native)
{ native = _native; }

VtkAMREnzoReaderWrap::~VtkAMREnzoReaderWrap()
{ }

void VtkAMREnzoReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAMREnzoReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AMREnzoReader").ToLocalChecked(), ConstructorGetter);
}

void VtkAMREnzoReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAMREnzoReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAMRBaseReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAMRBaseReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAMREnzoReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ConvertToCGSOff", ConvertToCGSOff);
	Nan::SetPrototypeMethod(tpl, "convertToCGSOff", ConvertToCGSOff);

	Nan::SetPrototypeMethod(tpl, "ConvertToCGSOn", ConvertToCGSOn);
	Nan::SetPrototypeMethod(tpl, "convertToCGSOn", ConvertToCGSOn);

	Nan::SetPrototypeMethod(tpl, "GetConvertToCGS", GetConvertToCGS);
	Nan::SetPrototypeMethod(tpl, "getConvertToCGS", GetConvertToCGS);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfBlocks", GetNumberOfBlocks);
	Nan::SetPrototypeMethod(tpl, "getNumberOfBlocks", GetNumberOfBlocks);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfLevels", GetNumberOfLevels);
	Nan::SetPrototypeMethod(tpl, "getNumberOfLevels", GetNumberOfLevels);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetConvertToCGS", SetConvertToCGS);
	Nan::SetPrototypeMethod(tpl, "setConvertToCGS", SetConvertToCGS);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

#ifdef VTK_NODE_PLUS_VTKAMRENZOREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKAMRENZOREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAMREnzoReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAMREnzoReader> native = vtkSmartPointer<vtkAMREnzoReader>::New();
		VtkAMREnzoReaderWrap* obj = new VtkAMREnzoReaderWrap(native);
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

void VtkAMREnzoReaderWrap::ConvertToCGSOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoReaderWrap>(info.Holder());
	vtkAMREnzoReader *native = (vtkAMREnzoReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConvertToCGSOff();
}

void VtkAMREnzoReaderWrap::ConvertToCGSOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoReaderWrap>(info.Holder());
	vtkAMREnzoReader *native = (vtkAMREnzoReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConvertToCGSOn();
}

void VtkAMREnzoReaderWrap::GetConvertToCGS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoReaderWrap>(info.Holder());
	vtkAMREnzoReader *native = (vtkAMREnzoReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetConvertToCGS();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMREnzoReaderWrap::GetNumberOfBlocks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoReaderWrap>(info.Holder());
	vtkAMREnzoReader *native = (vtkAMREnzoReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfBlocks();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMREnzoReaderWrap::GetNumberOfLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoReaderWrap>(info.Holder());
	vtkAMREnzoReader *native = (vtkAMREnzoReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfLevels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAMREnzoReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoReaderWrap>(info.Holder());
	vtkAMREnzoReader *native = (vtkAMREnzoReader *)wrapper->native.GetPointer();
	vtkAMREnzoReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAMREnzoReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAMREnzoReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMREnzoReaderWrap *w = new VtkAMREnzoReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMREnzoReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoReaderWrap>(info.Holder());
	vtkAMREnzoReader *native = (vtkAMREnzoReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkAMREnzoReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkAMREnzoReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAMREnzoReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMREnzoReaderWrap *w = new VtkAMREnzoReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMREnzoReaderWrap::SetConvertToCGS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoReaderWrap>(info.Holder());
	vtkAMREnzoReader *native = (vtkAMREnzoReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetConvertToCGS(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMREnzoReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMREnzoReaderWrap *wrapper = ObjectWrap::Unwrap<VtkAMREnzoReaderWrap>(info.Holder());
	vtkAMREnzoReader *native = (vtkAMREnzoReader *)wrapper->native.GetPointer();
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

