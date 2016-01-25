/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCompositeDataPipelineWrap.h"
#include "vtkThreadedCompositeDataPipelineWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkThreadedCompositeDataPipelineWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkThreadedCompositeDataPipelineWrap::ptpl;

VtkThreadedCompositeDataPipelineWrap::VtkThreadedCompositeDataPipelineWrap()
{ }

VtkThreadedCompositeDataPipelineWrap::VtkThreadedCompositeDataPipelineWrap(vtkSmartPointer<vtkThreadedCompositeDataPipeline> _native)
{ native = _native; }

VtkThreadedCompositeDataPipelineWrap::~VtkThreadedCompositeDataPipelineWrap()
{ }

void VtkThreadedCompositeDataPipelineWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCompositeDataPipelineWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCompositeDataPipelineWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkThreadedCompositeDataPipelineWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkThreadedCompositeDataPipeline").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ThreadedCompositeDataPipeline").ToLocalChecked(),tpl->GetFunction());
}

void VtkThreadedCompositeDataPipelineWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
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

void VtkThreadedCompositeDataPipelineWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkThreadedCompositeDataPipeline> native = vtkSmartPointer<vtkThreadedCompositeDataPipeline>::New();
		VtkThreadedCompositeDataPipelineWrap* obj = new VtkThreadedCompositeDataPipelineWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkThreadedCompositeDataPipelineWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedCompositeDataPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedCompositeDataPipelineWrap>(info.Holder());
	vtkThreadedCompositeDataPipeline *native = (vtkThreadedCompositeDataPipeline *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkThreadedCompositeDataPipelineWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedCompositeDataPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedCompositeDataPipelineWrap>(info.Holder());
	vtkThreadedCompositeDataPipeline *native = (vtkThreadedCompositeDataPipeline *)wrapper->native.GetPointer();
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

void VtkThreadedCompositeDataPipelineWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedCompositeDataPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedCompositeDataPipelineWrap>(info.Holder());
	vtkThreadedCompositeDataPipeline *native = (vtkThreadedCompositeDataPipeline *)wrapper->native.GetPointer();
	vtkThreadedCompositeDataPipeline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkThreadedCompositeDataPipelineWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkThreadedCompositeDataPipelineWrap *w = new VtkThreadedCompositeDataPipelineWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkThreadedCompositeDataPipelineWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedCompositeDataPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedCompositeDataPipelineWrap>(info.Holder());
	vtkThreadedCompositeDataPipeline *native = (vtkThreadedCompositeDataPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkThreadedCompositeDataPipeline * r;
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
			Nan::New<v8::Function>(VtkThreadedCompositeDataPipelineWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkThreadedCompositeDataPipelineWrap *w = new VtkThreadedCompositeDataPipelineWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
