/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLCompositeDataReaderWrap.h"
#include "vtkXMLUniformGridAMRReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkXMLUniformGridAMRReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkXMLUniformGridAMRReaderWrap::ptpl;

VtkXMLUniformGridAMRReaderWrap::VtkXMLUniformGridAMRReaderWrap()
{ }

VtkXMLUniformGridAMRReaderWrap::VtkXMLUniformGridAMRReaderWrap(vtkSmartPointer<vtkXMLUniformGridAMRReader> _native)
{ native = _native; }

VtkXMLUniformGridAMRReaderWrap::~VtkXMLUniformGridAMRReaderWrap()
{ }

void VtkXMLUniformGridAMRReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLCompositeDataReaderWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLCompositeDataReaderWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkXMLUniformGridAMRReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkXMLUniformGridAMRReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("XMLUniformGridAMRReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkXMLUniformGridAMRReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
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

void VtkXMLUniformGridAMRReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLUniformGridAMRReader> native = vtkSmartPointer<vtkXMLUniformGridAMRReader>::New();
		VtkXMLUniformGridAMRReaderWrap* obj = new VtkXMLUniformGridAMRReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLUniformGridAMRReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUniformGridAMRReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUniformGridAMRReaderWrap>(info.Holder());
	vtkXMLUniformGridAMRReader *native = (vtkXMLUniformGridAMRReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLUniformGridAMRReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUniformGridAMRReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUniformGridAMRReaderWrap>(info.Holder());
	vtkXMLUniformGridAMRReader *native = (vtkXMLUniformGridAMRReader *)wrapper->native.GetPointer();
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

void VtkXMLUniformGridAMRReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUniformGridAMRReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUniformGridAMRReaderWrap>(info.Holder());
	vtkXMLUniformGridAMRReader *native = (vtkXMLUniformGridAMRReader *)wrapper->native.GetPointer();
	vtkXMLUniformGridAMRReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkXMLUniformGridAMRReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLUniformGridAMRReaderWrap *w = new VtkXMLUniformGridAMRReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLUniformGridAMRReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUniformGridAMRReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUniformGridAMRReaderWrap>(info.Holder());
	vtkXMLUniformGridAMRReader *native = (vtkXMLUniformGridAMRReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLUniformGridAMRReader * r;
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
			Nan::New<v8::Function>(VtkXMLUniformGridAMRReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLUniformGridAMRReaderWrap *w = new VtkXMLUniformGridAMRReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

