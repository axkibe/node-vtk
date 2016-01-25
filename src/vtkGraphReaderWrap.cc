/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataReaderWrap.h"
#include "vtkGraphReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkGraphWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGraphReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkGraphReaderWrap::ptpl;

VtkGraphReaderWrap::VtkGraphReaderWrap()
{ }

VtkGraphReaderWrap::VtkGraphReaderWrap(vtkSmartPointer<vtkGraphReader> _native)
{ native = _native; }

VtkGraphReaderWrap::~VtkGraphReaderWrap()
{ }

void VtkGraphReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataReaderWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataReaderWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkGraphReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkGraphReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("GraphReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkGraphReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
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

	Nan::SetPrototypeMethod(tpl, "SetOutput", SetOutput);
	Nan::SetPrototypeMethod(tpl, "setOutput", SetOutput);

}

void VtkGraphReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGraphReader> native = vtkSmartPointer<vtkGraphReader>::New();
		VtkGraphReaderWrap* obj = new VtkGraphReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGraphReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGraphReaderWrap>(info.Holder());
	vtkGraphReader *native = (vtkGraphReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphReaderWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGraphReaderWrap>(info.Holder());
	vtkGraphReader *native = (vtkGraphReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkGraph * r;
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
			Nan::New<v8::Function>(VtkGraphWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphWrap *w = new VtkGraphWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGraphWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphWrap *w = new VtkGraphWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGraphReaderWrap>(info.Holder());
	vtkGraphReader *native = (vtkGraphReader *)wrapper->native.GetPointer();
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

void VtkGraphReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGraphReaderWrap>(info.Holder());
	vtkGraphReader *native = (vtkGraphReader *)wrapper->native.GetPointer();
	vtkGraphReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGraphReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphReaderWrap *w = new VtkGraphReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGraphReaderWrap>(info.Holder());
	vtkGraphReader *native = (vtkGraphReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGraphReader * r;
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
			Nan::New<v8::Function>(VtkGraphReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphReaderWrap *w = new VtkGraphReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphReaderWrap::SetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphReaderWrap *wrapper = ObjectWrap::Unwrap<VtkGraphReaderWrap>(info.Holder());
	vtkGraphReader *native = (vtkGraphReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutput(
			(vtkGraph *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
