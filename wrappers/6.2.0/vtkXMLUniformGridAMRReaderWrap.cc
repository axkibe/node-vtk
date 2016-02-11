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
Nan::Persistent<v8::FunctionTemplate> VtkXMLUniformGridAMRReaderWrap::ptpl;

VtkXMLUniformGridAMRReaderWrap::VtkXMLUniformGridAMRReaderWrap()
{ }

VtkXMLUniformGridAMRReaderWrap::VtkXMLUniformGridAMRReaderWrap(vtkSmartPointer<vtkXMLUniformGridAMRReader> _native)
{ native = _native; }

VtkXMLUniformGridAMRReaderWrap::~VtkXMLUniformGridAMRReaderWrap()
{ }

void VtkXMLUniformGridAMRReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLUniformGridAMRReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLUniformGridAMRReader").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLUniformGridAMRReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLUniformGridAMRReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLCompositeDataReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLCompositeDataReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLUniformGridAMRReaderWrap").ToLocalChecked());
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
		VtkXMLUniformGridAMRReaderWrap* obj = new VtkXMLUniformGridAMRReaderWrap(native);
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
	VtkXMLUniformGridAMRReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLUniformGridAMRReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLUniformGridAMRReaderWrap *w = new VtkXMLUniformGridAMRReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLUniformGridAMRReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLUniformGridAMRReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLUniformGridAMRReaderWrap>(info.Holder());
	vtkXMLUniformGridAMRReader *native = (vtkXMLUniformGridAMRReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
		VtkXMLUniformGridAMRReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLUniformGridAMRReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLUniformGridAMRReaderWrap *w = new VtkXMLUniformGridAMRReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

