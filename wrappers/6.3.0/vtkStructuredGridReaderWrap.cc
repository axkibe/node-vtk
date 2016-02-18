/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataReaderWrap.h"
#include "vtkStructuredGridReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkStructuredGridWrap.h"
#include "vtkInformationWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStructuredGridReaderWrap::ptpl;

VtkStructuredGridReaderWrap::VtkStructuredGridReaderWrap()
{ }

VtkStructuredGridReaderWrap::VtkStructuredGridReaderWrap(vtkSmartPointer<vtkStructuredGridReader> _native)
{ native = _native; }

VtkStructuredGridReaderWrap::~VtkStructuredGridReaderWrap()
{ }

void VtkStructuredGridReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStructuredGridReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StructuredGridReader").ToLocalChecked(), ConstructorGetter);
}

void VtkStructuredGridReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStructuredGridReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStructuredGridReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReadMetaData", ReadMetaData);
	Nan::SetPrototypeMethod(tpl, "readMetaData", ReadMetaData);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOutput", SetOutput);
	Nan::SetPrototypeMethod(tpl, "setOutput", SetOutput);

#ifdef VTK_NODE_PLUS_VTKSTRUCTUREDGRIDREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSTRUCTUREDGRIDREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkStructuredGridReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStructuredGridReader> native = vtkSmartPointer<vtkStructuredGridReader>::New();
		VtkStructuredGridReaderWrap* obj = new VtkStructuredGridReaderWrap(native);
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

void VtkStructuredGridReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridReaderWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridReaderWrap>(info.Holder());
	vtkStructuredGridReader *native = (vtkStructuredGridReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStructuredGridReaderWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridReaderWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridReaderWrap>(info.Holder());
	vtkStructuredGridReader *native = (vtkStructuredGridReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkStructuredGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOutput(
			info[0]->Int32Value()
		);
		VtkStructuredGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStructuredGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredGridWrap *w = new VtkStructuredGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
	VtkStructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridWrap *w = new VtkStructuredGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredGridReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridReaderWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridReaderWrap>(info.Holder());
	vtkStructuredGridReader *native = (vtkStructuredGridReader *)wrapper->native.GetPointer();
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

void VtkStructuredGridReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridReaderWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridReaderWrap>(info.Holder());
	vtkStructuredGridReader *native = (vtkStructuredGridReader *)wrapper->native.GetPointer();
	vtkStructuredGridReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkStructuredGridReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredGridReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridReaderWrap *w = new VtkStructuredGridReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredGridReaderWrap::ReadMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridReaderWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridReaderWrap>(info.Holder());
	vtkStructuredGridReader *native = (vtkStructuredGridReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->ReadMetaData(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridReaderWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridReaderWrap>(info.Holder());
	vtkStructuredGridReader *native = (vtkStructuredGridReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStructuredGridReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkStructuredGridReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStructuredGridReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredGridReaderWrap *w = new VtkStructuredGridReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridReaderWrap::SetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridReaderWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridReaderWrap>(info.Holder());
	vtkStructuredGridReader *native = (vtkStructuredGridReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStructuredGridWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStructuredGridWrap *a0 = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutput(
			(vtkStructuredGrid *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

