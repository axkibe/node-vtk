/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataReaderWrap.h"
#include "vtkDataSetReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkStructuredPointsWrap.h"
#include "vtkStructuredGridWrap.h"
#include "vtkUnstructuredGridWrap.h"
#include "vtkRectilinearGridWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDataSetReaderWrap::ptpl;

VtkDataSetReaderWrap::VtkDataSetReaderWrap()
{ }

VtkDataSetReaderWrap::VtkDataSetReaderWrap(vtkSmartPointer<vtkDataSetReader> _native)
{ native = _native; }

VtkDataSetReaderWrap::~VtkDataSetReaderWrap()
{ }

void VtkDataSetReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDataSetReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DataSetReader").ToLocalChecked(), ConstructorGetter);
}

void VtkDataSetReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDataSetReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDataSetReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "GetPolyDataOutput", GetPolyDataOutput);
	Nan::SetPrototypeMethod(tpl, "getPolyDataOutput", GetPolyDataOutput);

	Nan::SetPrototypeMethod(tpl, "GetRectilinearGridOutput", GetRectilinearGridOutput);
	Nan::SetPrototypeMethod(tpl, "getRectilinearGridOutput", GetRectilinearGridOutput);

	Nan::SetPrototypeMethod(tpl, "GetStructuredGridOutput", GetStructuredGridOutput);
	Nan::SetPrototypeMethod(tpl, "getStructuredGridOutput", GetStructuredGridOutput);

	Nan::SetPrototypeMethod(tpl, "GetStructuredPointsOutput", GetStructuredPointsOutput);
	Nan::SetPrototypeMethod(tpl, "getStructuredPointsOutput", GetStructuredPointsOutput);

	Nan::SetPrototypeMethod(tpl, "GetUnstructuredGridOutput", GetUnstructuredGridOutput);
	Nan::SetPrototypeMethod(tpl, "getUnstructuredGridOutput", GetUnstructuredGridOutput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReadOutputType", ReadOutputType);
	Nan::SetPrototypeMethod(tpl, "readOutputType", ReadOutputType);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkDataSetReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDataSetReader> native = vtkSmartPointer<vtkDataSetReader>::New();
		VtkDataSetReaderWrap* obj = new VtkDataSetReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDataSetReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetReaderWrap>(info.Holder());
	vtkDataSetReader *native = (vtkDataSetReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataSetReaderWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetReaderWrap>(info.Holder());
	vtkDataSetReader *native = (vtkDataSetReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOutput(
			info[0]->Int32Value()
		);
			VtkDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataSetWrap *w = new VtkDataSetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
		VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetReaderWrap::GetPolyDataOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetReaderWrap>(info.Holder());
	vtkDataSetReader *native = (vtkDataSetReader *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolyDataOutput();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetReaderWrap::GetRectilinearGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetReaderWrap>(info.Holder());
	vtkDataSetReader *native = (vtkDataSetReader *)wrapper->native.GetPointer();
	vtkRectilinearGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRectilinearGridOutput();
		VtkRectilinearGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRectilinearGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRectilinearGridWrap *w = new VtkRectilinearGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetReaderWrap::GetStructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetReaderWrap>(info.Holder());
	vtkDataSetReader *native = (vtkDataSetReader *)wrapper->native.GetPointer();
	vtkStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStructuredGridOutput();
		VtkStructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridWrap *w = new VtkStructuredGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetReaderWrap::GetStructuredPointsOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetReaderWrap>(info.Holder());
	vtkDataSetReader *native = (vtkDataSetReader *)wrapper->native.GetPointer();
	vtkStructuredPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStructuredPointsOutput();
		VtkStructuredPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredPointsWrap *w = new VtkStructuredPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetReaderWrap::GetUnstructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetReaderWrap>(info.Holder());
	vtkDataSetReader *native = (vtkDataSetReader *)wrapper->native.GetPointer();
	vtkUnstructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUnstructuredGridOutput();
		VtkUnstructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetReaderWrap>(info.Holder());
	vtkDataSetReader *native = (vtkDataSetReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkDataSetReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetReaderWrap>(info.Holder());
	vtkDataSetReader *native = (vtkDataSetReader *)wrapper->native.GetPointer();
	vtkDataSetReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDataSetReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetReaderWrap *w = new VtkDataSetReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetReaderWrap::ReadOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetReaderWrap>(info.Holder());
	vtkDataSetReader *native = (vtkDataSetReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ReadOutputType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataSetReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetReaderWrap>(info.Holder());
	vtkDataSetReader *native = (vtkDataSetReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDataSetReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDataSetReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataSetReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataSetReaderWrap *w = new VtkDataSetReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

