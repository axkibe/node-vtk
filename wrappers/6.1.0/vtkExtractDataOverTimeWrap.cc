/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPointSetAlgorithmWrap.h"
#include "vtkExtractDataOverTimeWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractDataOverTimeWrap::ptpl;

VtkExtractDataOverTimeWrap::VtkExtractDataOverTimeWrap()
{ }

VtkExtractDataOverTimeWrap::VtkExtractDataOverTimeWrap(vtkSmartPointer<vtkExtractDataOverTime> _native)
{ native = _native; }

VtkExtractDataOverTimeWrap::~VtkExtractDataOverTimeWrap()
{ }

void VtkExtractDataOverTimeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractDataOverTime").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractDataOverTime").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractDataOverTimeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractDataOverTimeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractDataOverTimeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTimeSteps", GetNumberOfTimeSteps);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTimeSteps", GetNumberOfTimeSteps);

	Nan::SetPrototypeMethod(tpl, "GetPointIndex", GetPointIndex);
	Nan::SetPrototypeMethod(tpl, "getPointIndex", GetPointIndex);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPointIndex", SetPointIndex);
	Nan::SetPrototypeMethod(tpl, "setPointIndex", SetPointIndex);

	ptpl.Reset( tpl );
}

void VtkExtractDataOverTimeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractDataOverTime> native = vtkSmartPointer<vtkExtractDataOverTime>::New();
		VtkExtractDataOverTimeWrap* obj = new VtkExtractDataOverTimeWrap(native);
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

void VtkExtractDataOverTimeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractDataOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractDataOverTimeWrap>(info.Holder());
	vtkExtractDataOverTime *native = (vtkExtractDataOverTime *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractDataOverTimeWrap::GetNumberOfTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractDataOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractDataOverTimeWrap>(info.Holder());
	vtkExtractDataOverTime *native = (vtkExtractDataOverTime *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTimeSteps();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractDataOverTimeWrap::GetPointIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractDataOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractDataOverTimeWrap>(info.Holder());
	vtkExtractDataOverTime *native = (vtkExtractDataOverTime *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractDataOverTimeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractDataOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractDataOverTimeWrap>(info.Holder());
	vtkExtractDataOverTime *native = (vtkExtractDataOverTime *)wrapper->native.GetPointer();
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

void VtkExtractDataOverTimeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractDataOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractDataOverTimeWrap>(info.Holder());
	vtkExtractDataOverTime *native = (vtkExtractDataOverTime *)wrapper->native.GetPointer();
	vtkExtractDataOverTime * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkExtractDataOverTimeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractDataOverTimeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractDataOverTimeWrap *w = new VtkExtractDataOverTimeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractDataOverTimeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractDataOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractDataOverTimeWrap>(info.Holder());
	vtkExtractDataOverTime *native = (vtkExtractDataOverTime *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractDataOverTime * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkExtractDataOverTimeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractDataOverTimeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractDataOverTimeWrap *w = new VtkExtractDataOverTimeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractDataOverTimeWrap::SetPointIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractDataOverTimeWrap *wrapper = ObjectWrap::Unwrap<VtkExtractDataOverTimeWrap>(info.Holder());
	vtkExtractDataOverTime *native = (vtkExtractDataOverTime *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointIndex(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

