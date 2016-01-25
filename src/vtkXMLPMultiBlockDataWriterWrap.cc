/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLMultiBlockDataWriterWrap.h"
#include "vtkXMLPMultiBlockDataWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkXMLPMultiBlockDataWriterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkXMLPMultiBlockDataWriterWrap::ptpl;

VtkXMLPMultiBlockDataWriterWrap::VtkXMLPMultiBlockDataWriterWrap()
{ }

VtkXMLPMultiBlockDataWriterWrap::VtkXMLPMultiBlockDataWriterWrap(vtkSmartPointer<vtkXMLPMultiBlockDataWriter> _native)
{ native = _native; }

VtkXMLPMultiBlockDataWriterWrap::~VtkXMLPMultiBlockDataWriterWrap()
{ }

void VtkXMLPMultiBlockDataWriterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLMultiBlockDataWriterWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLMultiBlockDataWriterWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkXMLPMultiBlockDataWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkXMLPMultiBlockDataWriter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("XMLPMultiBlockDataWriter").ToLocalChecked(),tpl->GetFunction());
}

void VtkXMLPMultiBlockDataWriterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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

}

void VtkXMLPMultiBlockDataWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLPMultiBlockDataWriter> native = vtkSmartPointer<vtkXMLPMultiBlockDataWriter>::New();
		VtkXMLPMultiBlockDataWriterWrap* obj = new VtkXMLPMultiBlockDataWriterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLPMultiBlockDataWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPMultiBlockDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPMultiBlockDataWriterWrap>(info.Holder());
	vtkXMLPMultiBlockDataWriter *native = (vtkXMLPMultiBlockDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLPMultiBlockDataWriterWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPMultiBlockDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPMultiBlockDataWriterWrap>(info.Holder());
	vtkXMLPMultiBlockDataWriter *native = (vtkXMLPMultiBlockDataWriter *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMultiProcessControllerWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLPMultiBlockDataWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPMultiBlockDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPMultiBlockDataWriterWrap>(info.Holder());
	vtkXMLPMultiBlockDataWriter *native = (vtkXMLPMultiBlockDataWriter *)wrapper->native.GetPointer();
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

void VtkXMLPMultiBlockDataWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPMultiBlockDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPMultiBlockDataWriterWrap>(info.Holder());
	vtkXMLPMultiBlockDataWriter *native = (vtkXMLPMultiBlockDataWriter *)wrapper->native.GetPointer();
	vtkXMLPMultiBlockDataWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkXMLPMultiBlockDataWriterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLPMultiBlockDataWriterWrap *w = new VtkXMLPMultiBlockDataWriterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLPMultiBlockDataWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPMultiBlockDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPMultiBlockDataWriterWrap>(info.Holder());
	vtkXMLPMultiBlockDataWriter *native = (vtkXMLPMultiBlockDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLPMultiBlockDataWriter * r;
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
			Nan::New<v8::Function>(VtkXMLPMultiBlockDataWriterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLPMultiBlockDataWriterWrap *w = new VtkXMLPMultiBlockDataWriterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLPMultiBlockDataWriterWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPMultiBlockDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPMultiBlockDataWriterWrap>(info.Holder());
	vtkXMLPMultiBlockDataWriter *native = (vtkXMLPMultiBlockDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkXMLPMultiBlockDataWriterWrap::SetWriteMetaFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPMultiBlockDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPMultiBlockDataWriterWrap>(info.Holder());
	vtkXMLPMultiBlockDataWriter *native = (vtkXMLPMultiBlockDataWriter *)wrapper->native.GetPointer();
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
