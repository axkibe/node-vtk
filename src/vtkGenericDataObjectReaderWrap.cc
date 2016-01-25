/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataReaderWrap.h"
#include "vtkGenericDataObjectReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkGraphWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkRectilinearGridWrap.h"
#include "vtkStructuredGridWrap.h"
#include "vtkStructuredPointsWrap.h"
#include "vtkTableWrap.h"
#include "vtkTreeWrap.h"
#include "vtkUnstructuredGridWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGenericDataObjectReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkGenericDataObjectReaderWrap::ptpl;

VtkGenericDataObjectReaderWrap::VtkGenericDataObjectReaderWrap()
{ }

VtkGenericDataObjectReaderWrap::VtkGenericDataObjectReaderWrap(vtkSmartPointer<vtkGenericDataObjectReader> _native)
{ native = _native; }

VtkGenericDataObjectReaderWrap::~VtkGenericDataObjectReaderWrap()
{ }

void VtkGenericDataObjectReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataReaderWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataReaderWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkGenericDataObjectReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkGenericDataObjectReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("GenericDataObjectReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkGenericDataObjectReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGraphOutput", GetGraphOutput);
	Nan::SetPrototypeMethod(tpl, "getGraphOutput", GetGraphOutput);

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

	Nan::SetPrototypeMethod(tpl, "GetTableOutput", GetTableOutput);
	Nan::SetPrototypeMethod(tpl, "getTableOutput", GetTableOutput);

	Nan::SetPrototypeMethod(tpl, "GetTreeOutput", GetTreeOutput);
	Nan::SetPrototypeMethod(tpl, "getTreeOutput", GetTreeOutput);

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

}

void VtkGenericDataObjectReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGenericDataObjectReader> native = vtkSmartPointer<vtkGenericDataObjectReader>::New();
		VtkGenericDataObjectReaderWrap* obj = new VtkGenericDataObjectReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGenericDataObjectReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericDataObjectReaderWrap::GetGraphOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGraphOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGraphWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphWrap *w = new VtkGraphWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataObjectReaderWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDataObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOutput(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkDataObjectWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataObjectWrap *w = new VtkDataObjectWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDataObjectWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataObjectReaderWrap::GetPolyDataOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolyDataOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataObjectReaderWrap::GetRectilinearGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkRectilinearGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRectilinearGridOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRectilinearGridWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRectilinearGridWrap *w = new VtkRectilinearGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataObjectReaderWrap::GetStructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStructuredGridOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStructuredGridWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridWrap *w = new VtkStructuredGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataObjectReaderWrap::GetStructuredPointsOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkStructuredPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStructuredPointsOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStructuredPointsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredPointsWrap *w = new VtkStructuredPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataObjectReaderWrap::GetTableOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTableOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTableWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableWrap *w = new VtkTableWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataObjectReaderWrap::GetTreeOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTreeOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTreeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeWrap *w = new VtkTreeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataObjectReaderWrap::GetUnstructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkUnstructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUnstructuredGridOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkUnstructuredGridWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataObjectReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
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

void VtkGenericDataObjectReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkGenericDataObjectReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGenericDataObjectReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericDataObjectReaderWrap *w = new VtkGenericDataObjectReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataObjectReaderWrap::ReadOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ReadOutputType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericDataObjectReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataObjectReaderWrap>(info.Holder());
	vtkGenericDataObjectReader *native = (vtkGenericDataObjectReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericDataObjectReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkGenericDataObjectReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericDataObjectReaderWrap *w = new VtkGenericDataObjectReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
