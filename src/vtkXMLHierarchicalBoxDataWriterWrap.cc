/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLUniformGridAMRWriterWrap.h"
#include "vtkXMLHierarchicalBoxDataWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkXMLHierarchicalBoxDataWriterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkXMLHierarchicalBoxDataWriterWrap::ptpl;

VtkXMLHierarchicalBoxDataWriterWrap::VtkXMLHierarchicalBoxDataWriterWrap()
{ }

VtkXMLHierarchicalBoxDataWriterWrap::VtkXMLHierarchicalBoxDataWriterWrap(vtkSmartPointer<vtkXMLHierarchicalBoxDataWriter> _native)
{ native = _native; }

VtkXMLHierarchicalBoxDataWriterWrap::~VtkXMLHierarchicalBoxDataWriterWrap()
{ }

void VtkXMLHierarchicalBoxDataWriterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLUniformGridAMRWriterWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLUniformGridAMRWriterWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkXMLHierarchicalBoxDataWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkXMLHierarchicalBoxDataWriter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("XMLHierarchicalBoxDataWriter").ToLocalChecked(),tpl->GetFunction());
}

void VtkXMLHierarchicalBoxDataWriterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDefaultFileExtension", GetDefaultFileExtension);
	Nan::SetPrototypeMethod(tpl, "getDefaultFileExtension", GetDefaultFileExtension);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkXMLHierarchicalBoxDataWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLHierarchicalBoxDataWriter> native = vtkSmartPointer<vtkXMLHierarchicalBoxDataWriter>::New();
		VtkXMLHierarchicalBoxDataWriterWrap* obj = new VtkXMLHierarchicalBoxDataWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLHierarchicalBoxDataWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLHierarchicalBoxDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLHierarchicalBoxDataWriterWrap>(info.Holder());
	vtkXMLHierarchicalBoxDataWriter *native = (vtkXMLHierarchicalBoxDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLHierarchicalBoxDataWriterWrap::GetDefaultFileExtension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLHierarchicalBoxDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLHierarchicalBoxDataWriterWrap>(info.Holder());
	vtkXMLHierarchicalBoxDataWriter *native = (vtkXMLHierarchicalBoxDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultFileExtension();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLHierarchicalBoxDataWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLHierarchicalBoxDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLHierarchicalBoxDataWriterWrap>(info.Holder());
	vtkXMLHierarchicalBoxDataWriter *native = (vtkXMLHierarchicalBoxDataWriter *)wrapper->native.GetPointer();
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

void VtkXMLHierarchicalBoxDataWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLHierarchicalBoxDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLHierarchicalBoxDataWriterWrap>(info.Holder());
	vtkXMLHierarchicalBoxDataWriter *native = (vtkXMLHierarchicalBoxDataWriter *)wrapper->native.GetPointer();
	vtkXMLHierarchicalBoxDataWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkXMLHierarchicalBoxDataWriterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLHierarchicalBoxDataWriterWrap *w = new VtkXMLHierarchicalBoxDataWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLHierarchicalBoxDataWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLHierarchicalBoxDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLHierarchicalBoxDataWriterWrap>(info.Holder());
	vtkXMLHierarchicalBoxDataWriter *native = (vtkXMLHierarchicalBoxDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLHierarchicalBoxDataWriter * r;
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
			Nan::New<v8::Function>(VtkXMLHierarchicalBoxDataWriterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLHierarchicalBoxDataWriterWrap *w = new VtkXMLHierarchicalBoxDataWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
