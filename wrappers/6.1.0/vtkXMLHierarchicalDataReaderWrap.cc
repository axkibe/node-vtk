/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLMultiGroupDataReaderWrap.h"
#include "vtkXMLHierarchicalDataReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLHierarchicalDataReaderWrap::ptpl;

VtkXMLHierarchicalDataReaderWrap::VtkXMLHierarchicalDataReaderWrap()
{ }

VtkXMLHierarchicalDataReaderWrap::VtkXMLHierarchicalDataReaderWrap(vtkSmartPointer<vtkXMLHierarchicalDataReader> _native)
{ native = _native; }

VtkXMLHierarchicalDataReaderWrap::~VtkXMLHierarchicalDataReaderWrap()
{ }

void VtkXMLHierarchicalDataReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLHierarchicalDataReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLHierarchicalDataReader").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLHierarchicalDataReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLHierarchicalDataReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLMultiGroupDataReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLMultiGroupDataReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLHierarchicalDataReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkXMLHierarchicalDataReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLHierarchicalDataReader> native = vtkSmartPointer<vtkXMLHierarchicalDataReader>::New();
		VtkXMLHierarchicalDataReaderWrap* obj = new VtkXMLHierarchicalDataReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLHierarchicalDataReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLHierarchicalDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLHierarchicalDataReaderWrap>(info.Holder());
	vtkXMLHierarchicalDataReader *native = (vtkXMLHierarchicalDataReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLHierarchicalDataReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLHierarchicalDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLHierarchicalDataReaderWrap>(info.Holder());
	vtkXMLHierarchicalDataReader *native = (vtkXMLHierarchicalDataReader *)wrapper->native.GetPointer();
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

void VtkXMLHierarchicalDataReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLHierarchicalDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLHierarchicalDataReaderWrap>(info.Holder());
	vtkXMLHierarchicalDataReader *native = (vtkXMLHierarchicalDataReader *)wrapper->native.GetPointer();
	vtkXMLHierarchicalDataReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkXMLHierarchicalDataReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLHierarchicalDataReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLHierarchicalDataReaderWrap *w = new VtkXMLHierarchicalDataReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLHierarchicalDataReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLHierarchicalDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLHierarchicalDataReaderWrap>(info.Holder());
	vtkXMLHierarchicalDataReader *native = (vtkXMLHierarchicalDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLHierarchicalDataReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkXMLHierarchicalDataReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLHierarchicalDataReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLHierarchicalDataReaderWrap *w = new VtkXMLHierarchicalDataReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
