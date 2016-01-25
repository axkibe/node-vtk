/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDirectedGraphAlgorithmWrap.h"
#include "vtkPipelineGraphSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPipelineGraphSourceWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPipelineGraphSourceWrap::ptpl;

VtkPipelineGraphSourceWrap::VtkPipelineGraphSourceWrap()
{ }

VtkPipelineGraphSourceWrap::VtkPipelineGraphSourceWrap(vtkSmartPointer<vtkPipelineGraphSource> _native)
{ native = _native; }

VtkPipelineGraphSourceWrap::~VtkPipelineGraphSourceWrap()
{ }

void VtkPipelineGraphSourceWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDirectedGraphAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDirectedGraphAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkPipelineGraphSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkPipelineGraphSource").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PipelineGraphSource").ToLocalChecked(),tpl->GetFunction());
}

void VtkPipelineGraphSourceWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddSink", AddSink);
	Nan::SetPrototypeMethod(tpl, "addSink", AddSink);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveSink", RemoveSink);
	Nan::SetPrototypeMethod(tpl, "removeSink", RemoveSink);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkPipelineGraphSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPipelineGraphSource> native = vtkSmartPointer<vtkPipelineGraphSource>::New();
		VtkPipelineGraphSourceWrap* obj = new VtkPipelineGraphSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPipelineGraphSourceWrap::AddSink(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPipelineGraphSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPipelineGraphSourceWrap>(info.Holder());
	vtkPipelineGraphSource *native = (vtkPipelineGraphSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddSink(
			(vtkObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPipelineGraphSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPipelineGraphSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPipelineGraphSourceWrap>(info.Holder());
	vtkPipelineGraphSource *native = (vtkPipelineGraphSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPipelineGraphSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPipelineGraphSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPipelineGraphSourceWrap>(info.Holder());
	vtkPipelineGraphSource *native = (vtkPipelineGraphSource *)wrapper->native.GetPointer();
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

void VtkPipelineGraphSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPipelineGraphSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPipelineGraphSourceWrap>(info.Holder());
	vtkPipelineGraphSource *native = (vtkPipelineGraphSource *)wrapper->native.GetPointer();
	vtkPipelineGraphSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPipelineGraphSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPipelineGraphSourceWrap *w = new VtkPipelineGraphSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPipelineGraphSourceWrap::RemoveSink(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPipelineGraphSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPipelineGraphSourceWrap>(info.Holder());
	vtkPipelineGraphSource *native = (vtkPipelineGraphSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveSink(
			(vtkObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPipelineGraphSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPipelineGraphSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPipelineGraphSourceWrap>(info.Holder());
	vtkPipelineGraphSource *native = (vtkPipelineGraphSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPipelineGraphSource * r;
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
			Nan::New<v8::Function>(VtkPipelineGraphSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPipelineGraphSourceWrap *w = new VtkPipelineGraphSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
