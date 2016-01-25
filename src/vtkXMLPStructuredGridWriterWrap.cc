/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLPStructuredDataWriterWrap.h"
#include "vtkXMLPStructuredGridWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkStructuredGridWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkXMLPStructuredGridWriterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkXMLPStructuredGridWriterWrap::ptpl;

VtkXMLPStructuredGridWriterWrap::VtkXMLPStructuredGridWriterWrap()
{ }

VtkXMLPStructuredGridWriterWrap::VtkXMLPStructuredGridWriterWrap(vtkSmartPointer<vtkXMLPStructuredGridWriter> _native)
{ native = _native; }

VtkXMLPStructuredGridWriterWrap::~VtkXMLPStructuredGridWriterWrap()
{ }

void VtkXMLPStructuredGridWriterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLPStructuredDataWriterWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLPStructuredDataWriterWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkXMLPStructuredGridWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkXMLPStructuredGridWriter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("XMLPStructuredGridWriter").ToLocalChecked(),tpl->GetFunction());
}

void VtkXMLPStructuredGridWriterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDefaultFileExtension", GetDefaultFileExtension);
	Nan::SetPrototypeMethod(tpl, "getDefaultFileExtension", GetDefaultFileExtension);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkXMLPStructuredGridWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLPStructuredGridWriter> native = vtkSmartPointer<vtkXMLPStructuredGridWriter>::New();
		VtkXMLPStructuredGridWriterWrap* obj = new VtkXMLPStructuredGridWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLPStructuredGridWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPStructuredGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPStructuredGridWriterWrap>(info.Holder());
	vtkXMLPStructuredGridWriter *native = (vtkXMLPStructuredGridWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLPStructuredGridWriterWrap::GetDefaultFileExtension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPStructuredGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPStructuredGridWriterWrap>(info.Holder());
	vtkXMLPStructuredGridWriter *native = (vtkXMLPStructuredGridWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultFileExtension();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLPStructuredGridWriterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPStructuredGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPStructuredGridWriterWrap>(info.Holder());
	vtkXMLPStructuredGridWriter *native = (vtkXMLPStructuredGridWriter *)wrapper->native.GetPointer();
	vtkStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
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

void VtkXMLPStructuredGridWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPStructuredGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPStructuredGridWriterWrap>(info.Holder());
	vtkXMLPStructuredGridWriter *native = (vtkXMLPStructuredGridWriter *)wrapper->native.GetPointer();
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

void VtkXMLPStructuredGridWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPStructuredGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPStructuredGridWriterWrap>(info.Holder());
	vtkXMLPStructuredGridWriter *native = (vtkXMLPStructuredGridWriter *)wrapper->native.GetPointer();
	vtkXMLPStructuredGridWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkXMLPStructuredGridWriterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLPStructuredGridWriterWrap *w = new VtkXMLPStructuredGridWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLPStructuredGridWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPStructuredGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPStructuredGridWriterWrap>(info.Holder());
	vtkXMLPStructuredGridWriter *native = (vtkXMLPStructuredGridWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLPStructuredGridWriter * r;
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
			Nan::New<v8::Function>(VtkXMLPStructuredGridWriterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLPStructuredGridWriterWrap *w = new VtkXMLPStructuredGridWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
