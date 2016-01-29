/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLCompositeDataWriterWrap.h"
#include "vtkXMLUniformGridAMRWriterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLUniformGridAMRWriterWrap::ptpl;

VtkXMLUniformGridAMRWriterWrap::VtkXMLUniformGridAMRWriterWrap()
{ }

VtkXMLUniformGridAMRWriterWrap::VtkXMLUniformGridAMRWriterWrap(vtkSmartPointer<vtkXMLUniformGridAMRWriter> _native)
{ native = _native; }

VtkXMLUniformGridAMRWriterWrap::~VtkXMLUniformGridAMRWriterWrap()
{ }

void VtkXMLUniformGridAMRWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLUniformGridAMRWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLUniformGridAMRWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLUniformGridAMRWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLUniformGridAMRWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLCompositeDataWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLCompositeDataWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLUniformGridAMRWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

	ptpl.Reset( tpl );
}

void VtkXMLUniformGridAMRWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLUniformGridAMRWriter> native = vtkSmartPointer<vtkXMLUniformGridAMRWriter>::New();
		VtkXMLUniformGridAMRWriterWrap* obj = new VtkXMLUniformGridAMRWriterWrap(native);
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

void VtkXMLUniformGridAMRWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUniformGridAMRWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUniformGridAMRWriterWrap>(info.Holder());
	vtkXMLUniformGridAMRWriter *native = (vtkXMLUniformGridAMRWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLUniformGridAMRWriterWrap::GetDefaultFileExtension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUniformGridAMRWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUniformGridAMRWriterWrap>(info.Holder());
	vtkXMLUniformGridAMRWriter *native = (vtkXMLUniformGridAMRWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultFileExtension();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLUniformGridAMRWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUniformGridAMRWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUniformGridAMRWriterWrap>(info.Holder());
	vtkXMLUniformGridAMRWriter *native = (vtkXMLUniformGridAMRWriter *)wrapper->native.GetPointer();
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

void VtkXMLUniformGridAMRWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUniformGridAMRWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUniformGridAMRWriterWrap>(info.Holder());
	vtkXMLUniformGridAMRWriter *native = (vtkXMLUniformGridAMRWriter *)wrapper->native.GetPointer();
	vtkXMLUniformGridAMRWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkXMLUniformGridAMRWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLUniformGridAMRWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLUniformGridAMRWriterWrap *w = new VtkXMLUniformGridAMRWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLUniformGridAMRWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUniformGridAMRWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUniformGridAMRWriterWrap>(info.Holder());
	vtkXMLUniformGridAMRWriter *native = (vtkXMLUniformGridAMRWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLUniformGridAMRWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkXMLUniformGridAMRWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLUniformGridAMRWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLUniformGridAMRWriterWrap *w = new VtkXMLUniformGridAMRWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

