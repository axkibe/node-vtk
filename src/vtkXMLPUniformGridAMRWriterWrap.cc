/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLUniformGridAMRWriterWrap.h"
#include "vtkXMLPUniformGridAMRWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLPUniformGridAMRWriterWrap::ptpl;

VtkXMLPUniformGridAMRWriterWrap::VtkXMLPUniformGridAMRWriterWrap()
{ }

VtkXMLPUniformGridAMRWriterWrap::VtkXMLPUniformGridAMRWriterWrap(vtkSmartPointer<vtkXMLPUniformGridAMRWriter> _native)
{ native = _native; }

VtkXMLPUniformGridAMRWriterWrap::~VtkXMLPUniformGridAMRWriterWrap()
{ }

void VtkXMLPUniformGridAMRWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLPUniformGridAMRWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLPUniformGridAMRWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLPUniformGridAMRWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLPUniformGridAMRWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLUniformGridAMRWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLUniformGridAMRWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLPUniformGridAMRWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

	Nan::SetPrototypeMethod(tpl, "SetWriteMetaFile", SetWriteMetaFile);
	Nan::SetPrototypeMethod(tpl, "setWriteMetaFile", SetWriteMetaFile);

	ptpl.Reset( tpl );
}

void VtkXMLPUniformGridAMRWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLPUniformGridAMRWriter> native = vtkSmartPointer<vtkXMLPUniformGridAMRWriter>::New();
		VtkXMLPUniformGridAMRWriterWrap* obj = new VtkXMLPUniformGridAMRWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLPUniformGridAMRWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPUniformGridAMRWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPUniformGridAMRWriterWrap>(info.Holder());
	vtkXMLPUniformGridAMRWriter *native = (vtkXMLPUniformGridAMRWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLPUniformGridAMRWriterWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPUniformGridAMRWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPUniformGridAMRWriterWrap>(info.Holder());
	vtkXMLPUniformGridAMRWriter *native = (vtkXMLPUniformGridAMRWriter *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
		VtkMultiProcessControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLPUniformGridAMRWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPUniformGridAMRWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPUniformGridAMRWriterWrap>(info.Holder());
	vtkXMLPUniformGridAMRWriter *native = (vtkXMLPUniformGridAMRWriter *)wrapper->native.GetPointer();
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

void VtkXMLPUniformGridAMRWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPUniformGridAMRWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPUniformGridAMRWriterWrap>(info.Holder());
	vtkXMLPUniformGridAMRWriter *native = (vtkXMLPUniformGridAMRWriter *)wrapper->native.GetPointer();
	vtkXMLPUniformGridAMRWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkXMLPUniformGridAMRWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLPUniformGridAMRWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLPUniformGridAMRWriterWrap *w = new VtkXMLPUniformGridAMRWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLPUniformGridAMRWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPUniformGridAMRWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPUniformGridAMRWriterWrap>(info.Holder());
	vtkXMLPUniformGridAMRWriter *native = (vtkXMLPUniformGridAMRWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLPUniformGridAMRWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkXMLPUniformGridAMRWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLPUniformGridAMRWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLPUniformGridAMRWriterWrap *w = new VtkXMLPUniformGridAMRWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLPUniformGridAMRWriterWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPUniformGridAMRWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPUniformGridAMRWriterWrap>(info.Holder());
	vtkXMLPUniformGridAMRWriter *native = (vtkXMLPUniformGridAMRWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMultiProcessControllerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetController(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLPUniformGridAMRWriterWrap::SetWriteMetaFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPUniformGridAMRWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPUniformGridAMRWriterWrap>(info.Holder());
	vtkXMLPUniformGridAMRWriter *native = (vtkXMLPUniformGridAMRWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteMetaFile(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

