/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLDataReaderWrap.h"
#include "vtkXMLGenericDataObjectReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkHierarchicalBoxDataSetWrap.h"
#include "vtkHyperOctreeWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkMultiBlockDataSetWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkRectilinearGridWrap.h"
#include "vtkStructuredGridWrap.h"
#include "vtkUnstructuredGridWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkXMLGenericDataObjectReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkXMLGenericDataObjectReaderWrap::ptpl;

VtkXMLGenericDataObjectReaderWrap::VtkXMLGenericDataObjectReaderWrap()
{ }

VtkXMLGenericDataObjectReaderWrap::VtkXMLGenericDataObjectReaderWrap(vtkSmartPointer<vtkXMLGenericDataObjectReader> _native)
{ native = _native; }

VtkXMLGenericDataObjectReaderWrap::~VtkXMLGenericDataObjectReaderWrap()
{ }

void VtkXMLGenericDataObjectReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLDataReaderWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLDataReaderWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkXMLGenericDataObjectReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkXMLGenericDataObjectReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("XMLGenericDataObjectReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkXMLGenericDataObjectReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHierarchicalBoxDataSetOutput", GetHierarchicalBoxDataSetOutput);
	Nan::SetPrototypeMethod(tpl, "getHierarchicalBoxDataSetOutput", GetHierarchicalBoxDataSetOutput);

	Nan::SetPrototypeMethod(tpl, "GetHyperOctreeOutput", GetHyperOctreeOutput);
	Nan::SetPrototypeMethod(tpl, "getHyperOctreeOutput", GetHyperOctreeOutput);

	Nan::SetPrototypeMethod(tpl, "GetImageDataOutput", GetImageDataOutput);
	Nan::SetPrototypeMethod(tpl, "getImageDataOutput", GetImageDataOutput);

	Nan::SetPrototypeMethod(tpl, "GetMultiBlockDataSetOutput", GetMultiBlockDataSetOutput);
	Nan::SetPrototypeMethod(tpl, "getMultiBlockDataSetOutput", GetMultiBlockDataSetOutput);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "GetPolyDataOutput", GetPolyDataOutput);
	Nan::SetPrototypeMethod(tpl, "getPolyDataOutput", GetPolyDataOutput);

	Nan::SetPrototypeMethod(tpl, "GetRectilinearGridOutput", GetRectilinearGridOutput);
	Nan::SetPrototypeMethod(tpl, "getRectilinearGridOutput", GetRectilinearGridOutput);

	Nan::SetPrototypeMethod(tpl, "GetStructuredGridOutput", GetStructuredGridOutput);
	Nan::SetPrototypeMethod(tpl, "getStructuredGridOutput", GetStructuredGridOutput);

	Nan::SetPrototypeMethod(tpl, "GetUnstructuredGridOutput", GetUnstructuredGridOutput);
	Nan::SetPrototypeMethod(tpl, "getUnstructuredGridOutput", GetUnstructuredGridOutput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetupEmptyOutput", SetupEmptyOutput);
	Nan::SetPrototypeMethod(tpl, "setupEmptyOutput", SetupEmptyOutput);

}

void VtkXMLGenericDataObjectReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLGenericDataObjectReader> native = vtkSmartPointer<vtkXMLGenericDataObjectReader>::New();
		VtkXMLGenericDataObjectReaderWrap* obj = new VtkXMLGenericDataObjectReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLGenericDataObjectReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLGenericDataObjectReaderWrap::GetHierarchicalBoxDataSetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkHierarchicalBoxDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHierarchicalBoxDataSetOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHierarchicalBoxDataSetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHierarchicalBoxDataSetWrap *w = new VtkHierarchicalBoxDataSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLGenericDataObjectReaderWrap::GetHyperOctreeOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkHyperOctree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHyperOctreeOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHyperOctreeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeWrap *w = new VtkHyperOctreeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLGenericDataObjectReaderWrap::GetImageDataOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageDataOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLGenericDataObjectReaderWrap::GetMultiBlockDataSetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkMultiBlockDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMultiBlockDataSetOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMultiBlockDataSetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiBlockDataSetWrap *w = new VtkMultiBlockDataSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLGenericDataObjectReaderWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
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

void VtkXMLGenericDataObjectReaderWrap::GetPolyDataOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
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

void VtkXMLGenericDataObjectReaderWrap::GetRectilinearGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
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

void VtkXMLGenericDataObjectReaderWrap::GetStructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
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

void VtkXMLGenericDataObjectReaderWrap::GetUnstructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
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

void VtkXMLGenericDataObjectReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
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

void VtkXMLGenericDataObjectReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
	vtkXMLGenericDataObjectReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkXMLGenericDataObjectReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLGenericDataObjectReaderWrap *w = new VtkXMLGenericDataObjectReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLGenericDataObjectReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLGenericDataObjectReader * r;
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
			Nan::New<v8::Function>(VtkXMLGenericDataObjectReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLGenericDataObjectReaderWrap *w = new VtkXMLGenericDataObjectReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLGenericDataObjectReaderWrap::SetupEmptyOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLGenericDataObjectReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLGenericDataObjectReaderWrap>(info.Holder());
	vtkXMLGenericDataObjectReader *native = (vtkXMLGenericDataObjectReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetupEmptyOutput();
}

