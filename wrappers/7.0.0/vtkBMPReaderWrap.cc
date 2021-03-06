/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageReaderWrap.h"
#include "vtkBMPReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkLookupTableWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBMPReaderWrap::ptpl;

VtkBMPReaderWrap::VtkBMPReaderWrap()
{ }

VtkBMPReaderWrap::VtkBMPReaderWrap(vtkSmartPointer<vtkBMPReader> _native)
{ native = _native; }

VtkBMPReaderWrap::~VtkBMPReaderWrap()
{ }

void VtkBMPReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBMPReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BMPReader").ToLocalChecked(), ConstructorGetter);
}

void VtkBMPReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBMPReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBMPReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Allow8BitBMPOff", Allow8BitBMPOff);
	Nan::SetPrototypeMethod(tpl, "allow8BitBMPOff", Allow8BitBMPOff);

	Nan::SetPrototypeMethod(tpl, "Allow8BitBMPOn", Allow8BitBMPOn);
	Nan::SetPrototypeMethod(tpl, "allow8BitBMPOn", Allow8BitBMPOn);

	Nan::SetPrototypeMethod(tpl, "CanReadFile", CanReadFile);
	Nan::SetPrototypeMethod(tpl, "canReadFile", CanReadFile);

	Nan::SetPrototypeMethod(tpl, "GetAllow8BitBMP", GetAllow8BitBMP);
	Nan::SetPrototypeMethod(tpl, "getAllow8BitBMP", GetAllow8BitBMP);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDepth", GetDepth);
	Nan::SetPrototypeMethod(tpl, "getDepth", GetDepth);

	Nan::SetPrototypeMethod(tpl, "GetDescriptiveName", GetDescriptiveName);
	Nan::SetPrototypeMethod(tpl, "getDescriptiveName", GetDescriptiveName);

	Nan::SetPrototypeMethod(tpl, "GetFileExtensions", GetFileExtensions);
	Nan::SetPrototypeMethod(tpl, "getFileExtensions", GetFileExtensions);

	Nan::SetPrototypeMethod(tpl, "GetLookupTable", GetLookupTable);
	Nan::SetPrototypeMethod(tpl, "getLookupTable", GetLookupTable);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAllow8BitBMP", SetAllow8BitBMP);
	Nan::SetPrototypeMethod(tpl, "setAllow8BitBMP", SetAllow8BitBMP);

#ifdef VTK_NODE_PLUS_VTKBMPREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKBMPREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkBMPReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBMPReader> native = vtkSmartPointer<vtkBMPReader>::New();
		VtkBMPReaderWrap* obj = new VtkBMPReaderWrap(native);
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

void VtkBMPReaderWrap::Allow8BitBMPOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBMPReaderWrap>(info.Holder());
	vtkBMPReader *native = (vtkBMPReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Allow8BitBMPOff();
}

void VtkBMPReaderWrap::Allow8BitBMPOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBMPReaderWrap>(info.Holder());
	vtkBMPReader *native = (vtkBMPReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Allow8BitBMPOn();
}

void VtkBMPReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBMPReaderWrap>(info.Holder());
	vtkBMPReader *native = (vtkBMPReader *)wrapper->native.GetPointer();
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

void VtkBMPReaderWrap::GetAllow8BitBMP(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBMPReaderWrap>(info.Holder());
	vtkBMPReader *native = (vtkBMPReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAllow8BitBMP();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBMPReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBMPReaderWrap>(info.Holder());
	vtkBMPReader *native = (vtkBMPReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBMPReaderWrap::GetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBMPReaderWrap>(info.Holder());
	vtkBMPReader *native = (vtkBMPReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBMPReaderWrap::GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBMPReaderWrap>(info.Holder());
	vtkBMPReader *native = (vtkBMPReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescriptiveName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBMPReaderWrap::GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBMPReaderWrap>(info.Holder());
	vtkBMPReader *native = (vtkBMPReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileExtensions();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBMPReaderWrap::GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBMPReaderWrap>(info.Holder());
	vtkBMPReader *native = (vtkBMPReader *)wrapper->native.GetPointer();
	vtkLookupTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLookupTable();
	VtkLookupTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLookupTableWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLookupTableWrap *w = new VtkLookupTableWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBMPReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBMPReaderWrap>(info.Holder());
	vtkBMPReader *native = (vtkBMPReader *)wrapper->native.GetPointer();
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

void VtkBMPReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBMPReaderWrap>(info.Holder());
	vtkBMPReader *native = (vtkBMPReader *)wrapper->native.GetPointer();
	vtkBMPReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkBMPReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBMPReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBMPReaderWrap *w = new VtkBMPReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBMPReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBMPReaderWrap>(info.Holder());
	vtkBMPReader *native = (vtkBMPReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBMPReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkBMPReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBMPReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBMPReaderWrap *w = new VtkBMPReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBMPReaderWrap::SetAllow8BitBMP(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBMPReaderWrap *wrapper = ObjectWrap::Unwrap<VtkBMPReaderWrap>(info.Holder());
	vtkBMPReader *native = (vtkBMPReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAllow8BitBMP(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

