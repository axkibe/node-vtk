/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLWriterWrap.h"
#include "vtkXMLCompositeDataWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLCompositeDataWriterWrap::ptpl;

VtkXMLCompositeDataWriterWrap::VtkXMLCompositeDataWriterWrap()
{ }

VtkXMLCompositeDataWriterWrap::VtkXMLCompositeDataWriterWrap(vtkSmartPointer<vtkXMLCompositeDataWriter> _native)
{ native = _native; }

VtkXMLCompositeDataWriterWrap::~VtkXMLCompositeDataWriterWrap()
{ }

void VtkXMLCompositeDataWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLCompositeDataWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLCompositeDataWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLCompositeDataWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLCompositeDataWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLCompositeDataWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDefaultFileExtension", GetDefaultFileExtension);
	Nan::SetPrototypeMethod(tpl, "getDefaultFileExtension", GetDefaultFileExtension);

	Nan::SetPrototypeMethod(tpl, "GetGhostLevel", GetGhostLevel);
	Nan::SetPrototypeMethod(tpl, "getGhostLevel", GetGhostLevel);

	Nan::SetPrototypeMethod(tpl, "GetWriteMetaFile", GetWriteMetaFile);
	Nan::SetPrototypeMethod(tpl, "getWriteMetaFile", GetWriteMetaFile);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGhostLevel", SetGhostLevel);
	Nan::SetPrototypeMethod(tpl, "setGhostLevel", SetGhostLevel);

	Nan::SetPrototypeMethod(tpl, "SetWriteMetaFile", SetWriteMetaFile);
	Nan::SetPrototypeMethod(tpl, "setWriteMetaFile", SetWriteMetaFile);

	ptpl.Reset( tpl );
}

void VtkXMLCompositeDataWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkXMLCompositeDataWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLCompositeDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLCompositeDataWriterWrap>(info.Holder());
	vtkXMLCompositeDataWriter *native = (vtkXMLCompositeDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLCompositeDataWriterWrap::GetDefaultFileExtension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLCompositeDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLCompositeDataWriterWrap>(info.Holder());
	vtkXMLCompositeDataWriter *native = (vtkXMLCompositeDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultFileExtension();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLCompositeDataWriterWrap::GetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLCompositeDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLCompositeDataWriterWrap>(info.Holder());
	vtkXMLCompositeDataWriter *native = (vtkXMLCompositeDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGhostLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLCompositeDataWriterWrap::GetWriteMetaFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLCompositeDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLCompositeDataWriterWrap>(info.Holder());
	vtkXMLCompositeDataWriter *native = (vtkXMLCompositeDataWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteMetaFile();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLCompositeDataWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLCompositeDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLCompositeDataWriterWrap>(info.Holder());
	vtkXMLCompositeDataWriter *native = (vtkXMLCompositeDataWriter *)wrapper->native.GetPointer();
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

void VtkXMLCompositeDataWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLCompositeDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLCompositeDataWriterWrap>(info.Holder());
	vtkXMLCompositeDataWriter *native = (vtkXMLCompositeDataWriter *)wrapper->native.GetPointer();
	vtkXMLCompositeDataWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkXMLCompositeDataWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLCompositeDataWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLCompositeDataWriterWrap *w = new VtkXMLCompositeDataWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLCompositeDataWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLCompositeDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLCompositeDataWriterWrap>(info.Holder());
	vtkXMLCompositeDataWriter *native = (vtkXMLCompositeDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLCompositeDataWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkXMLCompositeDataWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLCompositeDataWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLCompositeDataWriterWrap *w = new VtkXMLCompositeDataWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLCompositeDataWriterWrap::SetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLCompositeDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLCompositeDataWriterWrap>(info.Holder());
	vtkXMLCompositeDataWriter *native = (vtkXMLCompositeDataWriter *)wrapper->native.GetPointer();
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

void VtkXMLCompositeDataWriterWrap::SetWriteMetaFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLCompositeDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLCompositeDataWriterWrap>(info.Holder());
	vtkXMLCompositeDataWriter *native = (vtkXMLCompositeDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteMetaFile(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
