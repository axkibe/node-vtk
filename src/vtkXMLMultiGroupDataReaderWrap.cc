/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLMultiBlockDataReaderWrap.h"
#include "vtkXMLMultiGroupDataReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkXMLMultiGroupDataReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkXMLMultiGroupDataReaderWrap::ptpl;

VtkXMLMultiGroupDataReaderWrap::VtkXMLMultiGroupDataReaderWrap()
{ }

VtkXMLMultiGroupDataReaderWrap::VtkXMLMultiGroupDataReaderWrap(vtkSmartPointer<vtkXMLMultiGroupDataReader> _native)
{ native = _native; }

VtkXMLMultiGroupDataReaderWrap::~VtkXMLMultiGroupDataReaderWrap()
{ }

void VtkXMLMultiGroupDataReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLMultiBlockDataReaderWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLMultiBlockDataReaderWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkXMLMultiGroupDataReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkXMLMultiGroupDataReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("XMLMultiGroupDataReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkXMLMultiGroupDataReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
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

void VtkXMLMultiGroupDataReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLMultiGroupDataReader> native = vtkSmartPointer<vtkXMLMultiGroupDataReader>::New();
		VtkXMLMultiGroupDataReaderWrap* obj = new VtkXMLMultiGroupDataReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLMultiGroupDataReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLMultiGroupDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLMultiGroupDataReaderWrap>(info.Holder());
	vtkXMLMultiGroupDataReader *native = (vtkXMLMultiGroupDataReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLMultiGroupDataReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLMultiGroupDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLMultiGroupDataReaderWrap>(info.Holder());
	vtkXMLMultiGroupDataReader *native = (vtkXMLMultiGroupDataReader *)wrapper->native.GetPointer();
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

void VtkXMLMultiGroupDataReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLMultiGroupDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLMultiGroupDataReaderWrap>(info.Holder());
	vtkXMLMultiGroupDataReader *native = (vtkXMLMultiGroupDataReader *)wrapper->native.GetPointer();
	vtkXMLMultiGroupDataReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkXMLMultiGroupDataReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLMultiGroupDataReaderWrap *w = new VtkXMLMultiGroupDataReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLMultiGroupDataReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLMultiGroupDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLMultiGroupDataReaderWrap>(info.Holder());
	vtkXMLMultiGroupDataReader *native = (vtkXMLMultiGroupDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLMultiGroupDataReader * r;
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
			Nan::New<v8::Function>(VtkXMLMultiGroupDataReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLMultiGroupDataReaderWrap *w = new VtkXMLMultiGroupDataReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

