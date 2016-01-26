/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLPUniformGridAMRWriterWrap.h"
#include "vtkXMLPHierarchicalBoxDataWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkXMLPHierarchicalBoxDataWriterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkXMLPHierarchicalBoxDataWriterWrap::ptpl;

VtkXMLPHierarchicalBoxDataWriterWrap::VtkXMLPHierarchicalBoxDataWriterWrap()
{ }

VtkXMLPHierarchicalBoxDataWriterWrap::VtkXMLPHierarchicalBoxDataWriterWrap(vtkSmartPointer<vtkXMLPHierarchicalBoxDataWriter> _native)
{ native = _native; }

VtkXMLPHierarchicalBoxDataWriterWrap::~VtkXMLPHierarchicalBoxDataWriterWrap()
{ }

void VtkXMLPHierarchicalBoxDataWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLPHierarchicalBoxDataWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLPHierarchicalBoxDataWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLPHierarchicalBoxDataWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLPHierarchicalBoxDataWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLPUniformGridAMRWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLPUniformGridAMRWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLPHierarchicalBoxDataWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkXMLPHierarchicalBoxDataWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLPHierarchicalBoxDataWriter> native = vtkSmartPointer<vtkXMLPHierarchicalBoxDataWriter>::New();
		VtkXMLPHierarchicalBoxDataWriterWrap* obj = new VtkXMLPHierarchicalBoxDataWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLPHierarchicalBoxDataWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPHierarchicalBoxDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPHierarchicalBoxDataWriterWrap>(info.Holder());
	vtkXMLPHierarchicalBoxDataWriter *native = (vtkXMLPHierarchicalBoxDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLPHierarchicalBoxDataWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPHierarchicalBoxDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPHierarchicalBoxDataWriterWrap>(info.Holder());
	vtkXMLPHierarchicalBoxDataWriter *native = (vtkXMLPHierarchicalBoxDataWriter *)wrapper->native.GetPointer();
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

void VtkXMLPHierarchicalBoxDataWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPHierarchicalBoxDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPHierarchicalBoxDataWriterWrap>(info.Holder());
	vtkXMLPHierarchicalBoxDataWriter *native = (vtkXMLPHierarchicalBoxDataWriter *)wrapper->native.GetPointer();
	vtkXMLPHierarchicalBoxDataWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkXMLPHierarchicalBoxDataWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkXMLPHierarchicalBoxDataWriterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLPHierarchicalBoxDataWriterWrap *w = new VtkXMLPHierarchicalBoxDataWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLPHierarchicalBoxDataWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPHierarchicalBoxDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPHierarchicalBoxDataWriterWrap>(info.Holder());
	vtkXMLPHierarchicalBoxDataWriter *native = (vtkXMLPHierarchicalBoxDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLPHierarchicalBoxDataWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkXMLPHierarchicalBoxDataWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkXMLPHierarchicalBoxDataWriterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLPHierarchicalBoxDataWriterWrap *w = new VtkXMLPHierarchicalBoxDataWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

