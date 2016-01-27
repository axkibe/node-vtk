/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkThreadedImageAlgorithmWrap::ptpl;

VtkThreadedImageAlgorithmWrap::VtkThreadedImageAlgorithmWrap()
{ }

VtkThreadedImageAlgorithmWrap::VtkThreadedImageAlgorithmWrap(vtkSmartPointer<vtkThreadedImageAlgorithm> _native)
{ native = _native; }

VtkThreadedImageAlgorithmWrap::~VtkThreadedImageAlgorithmWrap()
{ }

void VtkThreadedImageAlgorithmWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkThreadedImageAlgorithm").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ThreadedImageAlgorithm").ToLocalChecked(), ConstructorGetter);
}

void VtkThreadedImageAlgorithmWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkThreadedImageAlgorithmWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkThreadedImageAlgorithmWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfThreads", GetNumberOfThreads);
	Nan::SetPrototypeMethod(tpl, "getNumberOfThreads", GetNumberOfThreads);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfThreadsMaxValue", GetNumberOfThreadsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfThreadsMaxValue", GetNumberOfThreadsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfThreadsMinValue", GetNumberOfThreadsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfThreadsMinValue", GetNumberOfThreadsMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfThreads", SetNumberOfThreads);
	Nan::SetPrototypeMethod(tpl, "setNumberOfThreads", SetNumberOfThreads);

	ptpl.Reset( tpl );
}

void VtkThreadedImageAlgorithmWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkThreadedImageAlgorithmWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedImageAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedImageAlgorithmWrap>(info.Holder());
	vtkThreadedImageAlgorithm *native = (vtkThreadedImageAlgorithm *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkThreadedImageAlgorithmWrap::GetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedImageAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedImageAlgorithmWrap>(info.Holder());
	vtkThreadedImageAlgorithm *native = (vtkThreadedImageAlgorithm *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfThreads();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThreadedImageAlgorithmWrap::GetNumberOfThreadsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedImageAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedImageAlgorithmWrap>(info.Holder());
	vtkThreadedImageAlgorithm *native = (vtkThreadedImageAlgorithm *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfThreadsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThreadedImageAlgorithmWrap::GetNumberOfThreadsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedImageAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedImageAlgorithmWrap>(info.Holder());
	vtkThreadedImageAlgorithm *native = (vtkThreadedImageAlgorithm *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfThreadsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThreadedImageAlgorithmWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedImageAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedImageAlgorithmWrap>(info.Holder());
	vtkThreadedImageAlgorithm *native = (vtkThreadedImageAlgorithm *)wrapper->native.GetPointer();
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

void VtkThreadedImageAlgorithmWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedImageAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedImageAlgorithmWrap>(info.Holder());
	vtkThreadedImageAlgorithm *native = (vtkThreadedImageAlgorithm *)wrapper->native.GetPointer();
	vtkThreadedImageAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkThreadedImageAlgorithmWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkThreadedImageAlgorithmWrap *w = new VtkThreadedImageAlgorithmWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkThreadedImageAlgorithmWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedImageAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedImageAlgorithmWrap>(info.Holder());
	vtkThreadedImageAlgorithm *native = (vtkThreadedImageAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkThreadedImageAlgorithm * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkThreadedImageAlgorithmWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkThreadedImageAlgorithmWrap *w = new VtkThreadedImageAlgorithmWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThreadedImageAlgorithmWrap::SetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedImageAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedImageAlgorithmWrap>(info.Holder());
	vtkThreadedImageAlgorithm *native = (vtkThreadedImageAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfThreads(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
