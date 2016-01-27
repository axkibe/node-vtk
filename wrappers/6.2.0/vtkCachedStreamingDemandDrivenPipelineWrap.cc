/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStreamingDemandDrivenPipelineWrap.h"
#include "vtkCachedStreamingDemandDrivenPipelineWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCachedStreamingDemandDrivenPipelineWrap::ptpl;

VtkCachedStreamingDemandDrivenPipelineWrap::VtkCachedStreamingDemandDrivenPipelineWrap()
{ }

VtkCachedStreamingDemandDrivenPipelineWrap::VtkCachedStreamingDemandDrivenPipelineWrap(vtkSmartPointer<vtkCachedStreamingDemandDrivenPipeline> _native)
{ native = _native; }

VtkCachedStreamingDemandDrivenPipelineWrap::~VtkCachedStreamingDemandDrivenPipelineWrap()
{ }

void VtkCachedStreamingDemandDrivenPipelineWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCachedStreamingDemandDrivenPipeline").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CachedStreamingDemandDrivenPipeline").ToLocalChecked(), ConstructorGetter);
}

void VtkCachedStreamingDemandDrivenPipelineWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCachedStreamingDemandDrivenPipelineWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStreamingDemandDrivenPipelineWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStreamingDemandDrivenPipelineWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCachedStreamingDemandDrivenPipelineWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCacheSize", GetCacheSize);
	Nan::SetPrototypeMethod(tpl, "getCacheSize", GetCacheSize);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCacheSize", SetCacheSize);
	Nan::SetPrototypeMethod(tpl, "setCacheSize", SetCacheSize);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkCachedStreamingDemandDrivenPipelineWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCachedStreamingDemandDrivenPipeline> native = vtkSmartPointer<vtkCachedStreamingDemandDrivenPipeline>::New();
		VtkCachedStreamingDemandDrivenPipelineWrap* obj = new VtkCachedStreamingDemandDrivenPipelineWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCachedStreamingDemandDrivenPipelineWrap::GetCacheSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachedStreamingDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCachedStreamingDemandDrivenPipelineWrap>(info.Holder());
	vtkCachedStreamingDemandDrivenPipeline *native = (vtkCachedStreamingDemandDrivenPipeline *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCacheSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCachedStreamingDemandDrivenPipelineWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachedStreamingDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCachedStreamingDemandDrivenPipelineWrap>(info.Holder());
	vtkCachedStreamingDemandDrivenPipeline *native = (vtkCachedStreamingDemandDrivenPipeline *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCachedStreamingDemandDrivenPipelineWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachedStreamingDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCachedStreamingDemandDrivenPipelineWrap>(info.Holder());
	vtkCachedStreamingDemandDrivenPipeline *native = (vtkCachedStreamingDemandDrivenPipeline *)wrapper->native.GetPointer();
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

void VtkCachedStreamingDemandDrivenPipelineWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachedStreamingDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCachedStreamingDemandDrivenPipelineWrap>(info.Holder());
	vtkCachedStreamingDemandDrivenPipeline *native = (vtkCachedStreamingDemandDrivenPipeline *)wrapper->native.GetPointer();
	vtkCachedStreamingDemandDrivenPipeline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCachedStreamingDemandDrivenPipelineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCachedStreamingDemandDrivenPipelineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCachedStreamingDemandDrivenPipelineWrap *w = new VtkCachedStreamingDemandDrivenPipelineWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCachedStreamingDemandDrivenPipelineWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachedStreamingDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCachedStreamingDemandDrivenPipelineWrap>(info.Holder());
	vtkCachedStreamingDemandDrivenPipeline *native = (vtkCachedStreamingDemandDrivenPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCachedStreamingDemandDrivenPipeline * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCachedStreamingDemandDrivenPipelineWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCachedStreamingDemandDrivenPipelineWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCachedStreamingDemandDrivenPipelineWrap *w = new VtkCachedStreamingDemandDrivenPipelineWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCachedStreamingDemandDrivenPipelineWrap::SetCacheSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachedStreamingDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCachedStreamingDemandDrivenPipelineWrap>(info.Holder());
	vtkCachedStreamingDemandDrivenPipeline *native = (vtkCachedStreamingDemandDrivenPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCacheSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCachedStreamingDemandDrivenPipelineWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCachedStreamingDemandDrivenPipelineWrap *wrapper = ObjectWrap::Unwrap<VtkCachedStreamingDemandDrivenPipelineWrap>(info.Holder());
	vtkCachedStreamingDemandDrivenPipeline *native = (vtkCachedStreamingDemandDrivenPipeline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Update(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Update();
	info.GetReturnValue().Set(Nan::New(r));
}

