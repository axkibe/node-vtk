/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkMergeDataObjectFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMergeDataObjectFilterWrap::ptpl;

VtkMergeDataObjectFilterWrap::VtkMergeDataObjectFilterWrap()
{ }

VtkMergeDataObjectFilterWrap::VtkMergeDataObjectFilterWrap(vtkSmartPointer<vtkMergeDataObjectFilter> _native)
{ native = _native; }

VtkMergeDataObjectFilterWrap::~VtkMergeDataObjectFilterWrap()
{ }

void VtkMergeDataObjectFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMergeDataObjectFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MergeDataObjectFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkMergeDataObjectFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMergeDataObjectFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMergeDataObjectFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataObject", GetDataObject);
	Nan::SetPrototypeMethod(tpl, "getDataObject", GetDataObject);

	Nan::SetPrototypeMethod(tpl, "GetOutputField", GetOutputField);
	Nan::SetPrototypeMethod(tpl, "getOutputField", GetOutputField);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDataObjectInputData", SetDataObjectInputData);
	Nan::SetPrototypeMethod(tpl, "setDataObjectInputData", SetDataObjectInputData);

	Nan::SetPrototypeMethod(tpl, "SetOutputField", SetOutputField);
	Nan::SetPrototypeMethod(tpl, "setOutputField", SetOutputField);

	Nan::SetPrototypeMethod(tpl, "SetOutputFieldToCellDataField", SetOutputFieldToCellDataField);
	Nan::SetPrototypeMethod(tpl, "setOutputFieldToCellDataField", SetOutputFieldToCellDataField);

	Nan::SetPrototypeMethod(tpl, "SetOutputFieldToDataObjectField", SetOutputFieldToDataObjectField);
	Nan::SetPrototypeMethod(tpl, "setOutputFieldToDataObjectField", SetOutputFieldToDataObjectField);

	Nan::SetPrototypeMethod(tpl, "SetOutputFieldToPointDataField", SetOutputFieldToPointDataField);
	Nan::SetPrototypeMethod(tpl, "setOutputFieldToPointDataField", SetOutputFieldToPointDataField);

	ptpl.Reset( tpl );
}

void VtkMergeDataObjectFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMergeDataObjectFilter> native = vtkSmartPointer<vtkMergeDataObjectFilter>::New();
		VtkMergeDataObjectFilterWrap* obj = new VtkMergeDataObjectFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMergeDataObjectFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeDataObjectFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMergeDataObjectFilterWrap>(info.Holder());
	vtkMergeDataObjectFilter *native = (vtkMergeDataObjectFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMergeDataObjectFilterWrap::GetDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeDataObjectFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMergeDataObjectFilterWrap>(info.Holder());
	vtkMergeDataObjectFilter *native = (vtkMergeDataObjectFilter *)wrapper->native.GetPointer();
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObject();
		VtkDataObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMergeDataObjectFilterWrap::GetOutputField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeDataObjectFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMergeDataObjectFilterWrap>(info.Holder());
	vtkMergeDataObjectFilter *native = (vtkMergeDataObjectFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputField();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMergeDataObjectFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeDataObjectFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMergeDataObjectFilterWrap>(info.Holder());
	vtkMergeDataObjectFilter *native = (vtkMergeDataObjectFilter *)wrapper->native.GetPointer();
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

void VtkMergeDataObjectFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeDataObjectFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMergeDataObjectFilterWrap>(info.Holder());
	vtkMergeDataObjectFilter *native = (vtkMergeDataObjectFilter *)wrapper->native.GetPointer();
	vtkMergeDataObjectFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMergeDataObjectFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMergeDataObjectFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMergeDataObjectFilterWrap *w = new VtkMergeDataObjectFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMergeDataObjectFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeDataObjectFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMergeDataObjectFilterWrap>(info.Holder());
	vtkMergeDataObjectFilter *native = (vtkMergeDataObjectFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMergeDataObjectFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMergeDataObjectFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMergeDataObjectFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMergeDataObjectFilterWrap *w = new VtkMergeDataObjectFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMergeDataObjectFilterWrap::SetDataObjectInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeDataObjectFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMergeDataObjectFilterWrap>(info.Holder());
	vtkMergeDataObjectFilter *native = (vtkMergeDataObjectFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataObjectInputData(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMergeDataObjectFilterWrap::SetOutputField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeDataObjectFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMergeDataObjectFilterWrap>(info.Holder());
	vtkMergeDataObjectFilter *native = (vtkMergeDataObjectFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputField(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMergeDataObjectFilterWrap::SetOutputFieldToCellDataField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeDataObjectFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMergeDataObjectFilterWrap>(info.Holder());
	vtkMergeDataObjectFilter *native = (vtkMergeDataObjectFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputFieldToCellDataField();
}

void VtkMergeDataObjectFilterWrap::SetOutputFieldToDataObjectField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeDataObjectFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMergeDataObjectFilterWrap>(info.Holder());
	vtkMergeDataObjectFilter *native = (vtkMergeDataObjectFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputFieldToDataObjectField();
}

void VtkMergeDataObjectFilterWrap::SetOutputFieldToPointDataField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMergeDataObjectFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMergeDataObjectFilterWrap>(info.Holder());
	vtkMergeDataObjectFilter *native = (vtkMergeDataObjectFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputFieldToPointDataField();
}

