/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTableAlgorithmWrap.h"
#include "vtkStreamingStatisticsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkStatisticsAlgorithmWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStreamingStatisticsWrap::ptpl;

VtkStreamingStatisticsWrap::VtkStreamingStatisticsWrap()
{ }

VtkStreamingStatisticsWrap::VtkStreamingStatisticsWrap(vtkSmartPointer<vtkStreamingStatistics> _native)
{ native = _native; }

VtkStreamingStatisticsWrap::~VtkStreamingStatisticsWrap()
{ }

void VtkStreamingStatisticsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStreamingStatistics").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StreamingStatistics").ToLocalChecked(), ConstructorGetter);
}

void VtkStreamingStatisticsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStreamingStatisticsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStreamingStatisticsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetStatisticsAlgorithm", SetStatisticsAlgorithm);
	Nan::SetPrototypeMethod(tpl, "setStatisticsAlgorithm", SetStatisticsAlgorithm);

	ptpl.Reset( tpl );
}

void VtkStreamingStatisticsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStreamingStatistics> native = vtkSmartPointer<vtkStreamingStatistics>::New();
		VtkStreamingStatisticsWrap* obj = new VtkStreamingStatisticsWrap(native);
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

void VtkStreamingStatisticsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingStatisticsWrap>(info.Holder());
	vtkStreamingStatistics *native = (vtkStreamingStatistics *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStreamingStatisticsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingStatisticsWrap>(info.Holder());
	vtkStreamingStatistics *native = (vtkStreamingStatistics *)wrapper->native.GetPointer();
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

void VtkStreamingStatisticsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingStatisticsWrap>(info.Holder());
	vtkStreamingStatistics *native = (vtkStreamingStatistics *)wrapper->native.GetPointer();
	vtkStreamingStatistics * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkStreamingStatisticsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStreamingStatisticsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStreamingStatisticsWrap *w = new VtkStreamingStatisticsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStreamingStatisticsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingStatisticsWrap>(info.Holder());
	vtkStreamingStatistics *native = (vtkStreamingStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStreamingStatistics * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkStreamingStatisticsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStreamingStatisticsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStreamingStatisticsWrap *w = new VtkStreamingStatisticsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStreamingStatisticsWrap::SetStatisticsAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStreamingStatisticsWrap *wrapper = ObjectWrap::Unwrap<VtkStreamingStatisticsWrap>(info.Holder());
	vtkStreamingStatistics *native = (vtkStreamingStatistics *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStatisticsAlgorithmWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStatisticsAlgorithmWrap *a0 = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStatisticsAlgorithm(
			(vtkStatisticsAlgorithm *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

