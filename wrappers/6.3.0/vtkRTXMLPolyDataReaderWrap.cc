/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLPolyDataReaderWrap.h"
#include "vtkRTXMLPolyDataReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRTXMLPolyDataReaderWrap::ptpl;

VtkRTXMLPolyDataReaderWrap::VtkRTXMLPolyDataReaderWrap()
{ }

VtkRTXMLPolyDataReaderWrap::VtkRTXMLPolyDataReaderWrap(vtkSmartPointer<vtkRTXMLPolyDataReader> _native)
{ native = _native; }

VtkRTXMLPolyDataReaderWrap::~VtkRTXMLPolyDataReaderWrap()
{ }

void VtkRTXMLPolyDataReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRTXMLPolyDataReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RTXMLPolyDataReader").ToLocalChecked(), ConstructorGetter);
}

void VtkRTXMLPolyDataReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRTXMLPolyDataReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLPolyDataReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLPolyDataReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRTXMLPolyDataReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataLocation", GetDataLocation);
	Nan::SetPrototypeMethod(tpl, "getDataLocation", GetDataLocation);

	Nan::SetPrototypeMethod(tpl, "GetNextFileName", GetNextFileName);
	Nan::SetPrototypeMethod(tpl, "getNextFileName", GetNextFileName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewDataAvailable", NewDataAvailable);
	Nan::SetPrototypeMethod(tpl, "newDataAvailable", NewDataAvailable);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ResetReader", ResetReader);
	Nan::SetPrototypeMethod(tpl, "resetReader", ResetReader);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLocation", SetLocation);
	Nan::SetPrototypeMethod(tpl, "setLocation", SetLocation);

	Nan::SetPrototypeMethod(tpl, "UpdateToNextFile", UpdateToNextFile);
	Nan::SetPrototypeMethod(tpl, "updateToNextFile", UpdateToNextFile);

	ptpl.Reset( tpl );
}

void VtkRTXMLPolyDataReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRTXMLPolyDataReader> native = vtkSmartPointer<vtkRTXMLPolyDataReader>::New();
		VtkRTXMLPolyDataReaderWrap* obj = new VtkRTXMLPolyDataReaderWrap(native);
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

void VtkRTXMLPolyDataReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTXMLPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRTXMLPolyDataReaderWrap>(info.Holder());
	vtkRTXMLPolyDataReader *native = (vtkRTXMLPolyDataReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRTXMLPolyDataReaderWrap::GetDataLocation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTXMLPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRTXMLPolyDataReaderWrap>(info.Holder());
	vtkRTXMLPolyDataReader *native = (vtkRTXMLPolyDataReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataLocation();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRTXMLPolyDataReaderWrap::GetNextFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTXMLPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRTXMLPolyDataReaderWrap>(info.Holder());
	vtkRTXMLPolyDataReader *native = (vtkRTXMLPolyDataReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRTXMLPolyDataReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTXMLPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRTXMLPolyDataReaderWrap>(info.Holder());
	vtkRTXMLPolyDataReader *native = (vtkRTXMLPolyDataReader *)wrapper->native.GetPointer();
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

void VtkRTXMLPolyDataReaderWrap::NewDataAvailable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTXMLPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRTXMLPolyDataReaderWrap>(info.Holder());
	vtkRTXMLPolyDataReader *native = (vtkRTXMLPolyDataReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewDataAvailable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRTXMLPolyDataReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTXMLPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRTXMLPolyDataReaderWrap>(info.Holder());
	vtkRTXMLPolyDataReader *native = (vtkRTXMLPolyDataReader *)wrapper->native.GetPointer();
	vtkRTXMLPolyDataReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRTXMLPolyDataReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRTXMLPolyDataReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRTXMLPolyDataReaderWrap *w = new VtkRTXMLPolyDataReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRTXMLPolyDataReaderWrap::ResetReader(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTXMLPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRTXMLPolyDataReaderWrap>(info.Holder());
	vtkRTXMLPolyDataReader *native = (vtkRTXMLPolyDataReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetReader();
}

void VtkRTXMLPolyDataReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTXMLPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRTXMLPolyDataReaderWrap>(info.Holder());
	vtkRTXMLPolyDataReader *native = (vtkRTXMLPolyDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRTXMLPolyDataReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRTXMLPolyDataReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRTXMLPolyDataReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRTXMLPolyDataReaderWrap *w = new VtkRTXMLPolyDataReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRTXMLPolyDataReaderWrap::SetLocation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTXMLPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRTXMLPolyDataReaderWrap>(info.Holder());
	vtkRTXMLPolyDataReader *native = (vtkRTXMLPolyDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocation(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRTXMLPolyDataReaderWrap::UpdateToNextFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRTXMLPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkRTXMLPolyDataReaderWrap>(info.Holder());
	vtkRTXMLPolyDataReader *native = (vtkRTXMLPolyDataReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UpdateToNextFile();
}

