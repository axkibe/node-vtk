/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectAlgorithmWrap.h"
#include "vtkAreaContourSpectrumFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTableWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAreaContourSpectrumFilterWrap::ptpl;

VtkAreaContourSpectrumFilterWrap::VtkAreaContourSpectrumFilterWrap()
{ }

VtkAreaContourSpectrumFilterWrap::VtkAreaContourSpectrumFilterWrap(vtkSmartPointer<vtkAreaContourSpectrumFilter> _native)
{ native = _native; }

VtkAreaContourSpectrumFilterWrap::~VtkAreaContourSpectrumFilterWrap()
{ }

void VtkAreaContourSpectrumFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAreaContourSpectrumFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AreaContourSpectrumFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkAreaContourSpectrumFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAreaContourSpectrumFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAreaContourSpectrumFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSamples", GetNumberOfSamples);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSamples", GetNumberOfSamples);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfSamples", SetNumberOfSamples);
	Nan::SetPrototypeMethod(tpl, "setNumberOfSamples", SetNumberOfSamples);

	ptpl.Reset( tpl );
}

void VtkAreaContourSpectrumFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAreaContourSpectrumFilter> native = vtkSmartPointer<vtkAreaContourSpectrumFilter>::New();
		VtkAreaContourSpectrumFilterWrap* obj = new VtkAreaContourSpectrumFilterWrap(native);
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

void VtkAreaContourSpectrumFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAreaContourSpectrumFilterWrap>(info.Holder());
	vtkAreaContourSpectrumFilter *native = (vtkAreaContourSpectrumFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAreaContourSpectrumFilterWrap::GetNumberOfSamples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAreaContourSpectrumFilterWrap>(info.Holder());
	vtkAreaContourSpectrumFilter *native = (vtkAreaContourSpectrumFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSamples();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAreaContourSpectrumFilterWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAreaContourSpectrumFilterWrap>(info.Holder());
	vtkAreaContourSpectrumFilter *native = (vtkAreaContourSpectrumFilter *)wrapper->native.GetPointer();
	vtkTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
	VtkTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTableWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableWrap *w = new VtkTableWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAreaContourSpectrumFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAreaContourSpectrumFilterWrap>(info.Holder());
	vtkAreaContourSpectrumFilter *native = (vtkAreaContourSpectrumFilter *)wrapper->native.GetPointer();
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

void VtkAreaContourSpectrumFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAreaContourSpectrumFilterWrap>(info.Holder());
	vtkAreaContourSpectrumFilter *native = (vtkAreaContourSpectrumFilter *)wrapper->native.GetPointer();
	vtkAreaContourSpectrumFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAreaContourSpectrumFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAreaContourSpectrumFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAreaContourSpectrumFilterWrap *w = new VtkAreaContourSpectrumFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAreaContourSpectrumFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAreaContourSpectrumFilterWrap>(info.Holder());
	vtkAreaContourSpectrumFilter *native = (vtkAreaContourSpectrumFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAreaContourSpectrumFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkAreaContourSpectrumFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAreaContourSpectrumFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAreaContourSpectrumFilterWrap *w = new VtkAreaContourSpectrumFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAreaContourSpectrumFilterWrap::SetNumberOfSamples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkAreaContourSpectrumFilterWrap>(info.Holder());
	vtkAreaContourSpectrumFilter *native = (vtkAreaContourSpectrumFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfSamples(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

