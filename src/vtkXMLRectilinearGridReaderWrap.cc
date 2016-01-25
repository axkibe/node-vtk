/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLStructuredDataReaderWrap.h"
#include "vtkXMLRectilinearGridReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRectilinearGridWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkXMLRectilinearGridReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkXMLRectilinearGridReaderWrap::ptpl;

VtkXMLRectilinearGridReaderWrap::VtkXMLRectilinearGridReaderWrap()
{ }

VtkXMLRectilinearGridReaderWrap::VtkXMLRectilinearGridReaderWrap(vtkSmartPointer<vtkXMLRectilinearGridReader> _native)
{ native = _native; }

VtkXMLRectilinearGridReaderWrap::~VtkXMLRectilinearGridReaderWrap()
{ }

void VtkXMLRectilinearGridReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLStructuredDataReaderWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLStructuredDataReaderWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkXMLRectilinearGridReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkXMLRectilinearGridReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("XMLRectilinearGridReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkXMLRectilinearGridReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkXMLRectilinearGridReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLRectilinearGridReader> native = vtkSmartPointer<vtkXMLRectilinearGridReader>::New();
		VtkXMLRectilinearGridReaderWrap* obj = new VtkXMLRectilinearGridReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLRectilinearGridReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLRectilinearGridReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLRectilinearGridReaderWrap>(info.Holder());
	vtkXMLRectilinearGridReader *native = (vtkXMLRectilinearGridReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLRectilinearGridReaderWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLRectilinearGridReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLRectilinearGridReaderWrap>(info.Holder());
	vtkXMLRectilinearGridReader *native = (vtkXMLRectilinearGridReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkRectilinearGrid * r;
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
			Nan::New<v8::Function>(VtkRectilinearGridWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRectilinearGridWrap *w = new VtkRectilinearGridWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkRectilinearGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
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

void VtkXMLRectilinearGridReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLRectilinearGridReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLRectilinearGridReaderWrap>(info.Holder());
	vtkXMLRectilinearGridReader *native = (vtkXMLRectilinearGridReader *)wrapper->native.GetPointer();
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

void VtkXMLRectilinearGridReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLRectilinearGridReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLRectilinearGridReaderWrap>(info.Holder());
	vtkXMLRectilinearGridReader *native = (vtkXMLRectilinearGridReader *)wrapper->native.GetPointer();
	vtkXMLRectilinearGridReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkXMLRectilinearGridReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLRectilinearGridReaderWrap *w = new VtkXMLRectilinearGridReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLRectilinearGridReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLRectilinearGridReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLRectilinearGridReaderWrap>(info.Holder());
	vtkXMLRectilinearGridReader *native = (vtkXMLRectilinearGridReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLRectilinearGridReader * r;
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
			Nan::New<v8::Function>(VtkXMLRectilinearGridReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLRectilinearGridReaderWrap *w = new VtkXMLRectilinearGridReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

