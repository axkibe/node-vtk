/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLUniformGridAMRReaderWrap.h"
#include "vtkXMLHierarchicalBoxDataReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkXMLHierarchicalBoxDataReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkXMLHierarchicalBoxDataReaderWrap::ptpl;

VtkXMLHierarchicalBoxDataReaderWrap::VtkXMLHierarchicalBoxDataReaderWrap()
{ }

VtkXMLHierarchicalBoxDataReaderWrap::VtkXMLHierarchicalBoxDataReaderWrap(vtkSmartPointer<vtkXMLHierarchicalBoxDataReader> _native)
{ native = _native; }

VtkXMLHierarchicalBoxDataReaderWrap::~VtkXMLHierarchicalBoxDataReaderWrap()
{ }

void VtkXMLHierarchicalBoxDataReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLUniformGridAMRReaderWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLUniformGridAMRReaderWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkXMLHierarchicalBoxDataReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkXMLHierarchicalBoxDataReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("XMLHierarchicalBoxDataReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkXMLHierarchicalBoxDataReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkXMLHierarchicalBoxDataReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLHierarchicalBoxDataReader> native = vtkSmartPointer<vtkXMLHierarchicalBoxDataReader>::New();
		VtkXMLHierarchicalBoxDataReaderWrap* obj = new VtkXMLHierarchicalBoxDataReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLHierarchicalBoxDataReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLHierarchicalBoxDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLHierarchicalBoxDataReaderWrap>(info.Holder());
	vtkXMLHierarchicalBoxDataReader *native = (vtkXMLHierarchicalBoxDataReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLHierarchicalBoxDataReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLHierarchicalBoxDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLHierarchicalBoxDataReaderWrap>(info.Holder());
	vtkXMLHierarchicalBoxDataReader *native = (vtkXMLHierarchicalBoxDataReader *)wrapper->native.GetPointer();
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

void VtkXMLHierarchicalBoxDataReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLHierarchicalBoxDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLHierarchicalBoxDataReaderWrap>(info.Holder());
	vtkXMLHierarchicalBoxDataReader *native = (vtkXMLHierarchicalBoxDataReader *)wrapper->native.GetPointer();
	vtkXMLHierarchicalBoxDataReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkXMLHierarchicalBoxDataReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLHierarchicalBoxDataReaderWrap *w = new VtkXMLHierarchicalBoxDataReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLHierarchicalBoxDataReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLHierarchicalBoxDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLHierarchicalBoxDataReaderWrap>(info.Holder());
	vtkXMLHierarchicalBoxDataReader *native = (vtkXMLHierarchicalBoxDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLHierarchicalBoxDataReader * r;
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
			Nan::New<v8::Function>(VtkXMLHierarchicalBoxDataReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLHierarchicalBoxDataReaderWrap *w = new VtkXMLHierarchicalBoxDataReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

