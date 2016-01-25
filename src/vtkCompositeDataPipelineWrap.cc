/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStreamingDemandDrivenPipelineWrap.h"
#include "vtkCompositeDataPipelineWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationObjectBaseKeyWrap.h"
#include "vtkInformationIntegerVectorKeyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCompositeDataPipelineWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkCompositeDataPipelineWrap::ptpl;

VtkCompositeDataPipelineWrap::VtkCompositeDataPipelineWrap()
{ }

VtkCompositeDataPipelineWrap::VtkCompositeDataPipelineWrap(vtkSmartPointer<vtkCompositeDataPipeline> _native)
{ native = _native; }

VtkCompositeDataPipelineWrap::~VtkCompositeDataPipelineWrap()
{ }

void VtkCompositeDataPipelineWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStreamingDemandDrivenPipelineWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStreamingDemandDrivenPipelineWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkCompositeDataPipelineWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkCompositeDataPipeline").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CompositeDataPipeline").ToLocalChecked(),tpl->GetFunction());
}

void VtkCompositeDataPipelineWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "COMPOSITE_DATA_META_DATA", COMPOSITE_DATA_META_DATA);

	Nan::SetPrototypeMethod(tpl, "COMPOSITE_INDICES", COMPOSITE_INDICES);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCompositeOutputData", GetCompositeOutputData);
	Nan::SetPrototypeMethod(tpl, "getCompositeOutputData", GetCompositeOutputData);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LOAD_REQUESTED_BLOCKS", LOAD_REQUESTED_BLOCKS);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "UPDATE_COMPOSITE_INDICES", UPDATE_COMPOSITE_INDICES);

}

void VtkCompositeDataPipelineWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCompositeDataPipeline> native = vtkSmartPointer<vtkCompositeDataPipeline>::New();
		VtkCompositeDataPipelineWrap* obj = new VtkCompositeDataPipelineWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCompositeDataPipelineWrap::COMPOSITE_DATA_META_DATA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataPipelineWrap>(info.Holder());
	vtkCompositeDataPipeline *native = (vtkCompositeDataPipeline *)wrapper->native.GetPointer();
	vtkInformationObjectBaseKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->COMPOSITE_DATA_META_DATA();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationObjectBaseKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationObjectBaseKeyWrap *w = new VtkInformationObjectBaseKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataPipelineWrap::COMPOSITE_INDICES(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataPipelineWrap>(info.Holder());
	vtkCompositeDataPipeline *native = (vtkCompositeDataPipeline *)wrapper->native.GetPointer();
	vtkInformationIntegerVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->COMPOSITE_INDICES();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationIntegerVectorKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerVectorKeyWrap *w = new VtkInformationIntegerVectorKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataPipelineWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataPipelineWrap>(info.Holder());
	vtkCompositeDataPipeline *native = (vtkCompositeDataPipeline *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompositeDataPipelineWrap::GetCompositeOutputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataPipelineWrap>(info.Holder());
	vtkCompositeDataPipeline *native = (vtkCompositeDataPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDataObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetCompositeOutputData(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkDataObjectWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataObjectWrap *w = new VtkDataObjectWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataPipelineWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataPipelineWrap>(info.Holder());
	vtkCompositeDataPipeline *native = (vtkCompositeDataPipeline *)wrapper->native.GetPointer();
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

void VtkCompositeDataPipelineWrap::LOAD_REQUESTED_BLOCKS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataPipelineWrap>(info.Holder());
	vtkCompositeDataPipeline *native = (vtkCompositeDataPipeline *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->LOAD_REQUESTED_BLOCKS();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationIntegerKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataPipelineWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataPipelineWrap>(info.Holder());
	vtkCompositeDataPipeline *native = (vtkCompositeDataPipeline *)wrapper->native.GetPointer();
	vtkCompositeDataPipeline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCompositeDataPipelineWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataPipelineWrap *w = new VtkCompositeDataPipelineWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataPipelineWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataPipelineWrap>(info.Holder());
	vtkCompositeDataPipeline *native = (vtkCompositeDataPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompositeDataPipeline * r;
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
			Nan::New<v8::Function>(VtkCompositeDataPipelineWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositeDataPipelineWrap *w = new VtkCompositeDataPipelineWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataPipelineWrap::UPDATE_COMPOSITE_INDICES(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataPipelineWrap>(info.Holder());
	vtkCompositeDataPipeline *native = (vtkCompositeDataPipeline *)wrapper->native.GetPointer();
	vtkInformationIntegerVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->UPDATE_COMPOSITE_INDICES();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationIntegerVectorKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerVectorKeyWrap *w = new VtkInformationIntegerVectorKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

