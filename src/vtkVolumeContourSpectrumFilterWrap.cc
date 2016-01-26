/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectAlgorithmWrap.h"
#include "vtkVolumeContourSpectrumFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTableWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkVolumeContourSpectrumFilterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkVolumeContourSpectrumFilterWrap::ptpl;

VtkVolumeContourSpectrumFilterWrap::VtkVolumeContourSpectrumFilterWrap()
{ }

VtkVolumeContourSpectrumFilterWrap::VtkVolumeContourSpectrumFilterWrap(vtkSmartPointer<vtkVolumeContourSpectrumFilter> _native)
{ native = _native; }

VtkVolumeContourSpectrumFilterWrap::~VtkVolumeContourSpectrumFilterWrap()
{ }

void VtkVolumeContourSpectrumFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVolumeContourSpectrumFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VolumeContourSpectrumFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkVolumeContourSpectrumFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVolumeContourSpectrumFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVolumeContourSpectrumFilterWrap").ToLocalChecked());
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

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkVolumeContourSpectrumFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVolumeContourSpectrumFilter> native = vtkSmartPointer<vtkVolumeContourSpectrumFilter>::New();
		VtkVolumeContourSpectrumFilterWrap* obj = new VtkVolumeContourSpectrumFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkVolumeContourSpectrumFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeContourSpectrumFilterWrap>(info.Holder());
	vtkVolumeContourSpectrumFilter *native = (vtkVolumeContourSpectrumFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeContourSpectrumFilterWrap::GetNumberOfSamples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeContourSpectrumFilterWrap>(info.Holder());
	vtkVolumeContourSpectrumFilter *native = (vtkVolumeContourSpectrumFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSamples();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeContourSpectrumFilterWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeContourSpectrumFilterWrap>(info.Holder());
	vtkVolumeContourSpectrumFilter *native = (vtkVolumeContourSpectrumFilter *)wrapper->native.GetPointer();
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
		Nan::New<v8::Function>(VtkTableWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableWrap *w = new VtkTableWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeContourSpectrumFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeContourSpectrumFilterWrap>(info.Holder());
	vtkVolumeContourSpectrumFilter *native = (vtkVolumeContourSpectrumFilter *)wrapper->native.GetPointer();
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

void VtkVolumeContourSpectrumFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeContourSpectrumFilterWrap>(info.Holder());
	vtkVolumeContourSpectrumFilter *native = (vtkVolumeContourSpectrumFilter *)wrapper->native.GetPointer();
	vtkVolumeContourSpectrumFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkVolumeContourSpectrumFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkVolumeContourSpectrumFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumeContourSpectrumFilterWrap *w = new VtkVolumeContourSpectrumFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeContourSpectrumFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeContourSpectrumFilterWrap>(info.Holder());
	vtkVolumeContourSpectrumFilter *native = (vtkVolumeContourSpectrumFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVolumeContourSpectrumFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkVolumeContourSpectrumFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkVolumeContourSpectrumFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVolumeContourSpectrumFilterWrap *w = new VtkVolumeContourSpectrumFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeContourSpectrumFilterWrap::SetNumberOfSamples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeContourSpectrumFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeContourSpectrumFilterWrap>(info.Holder());
	vtkVolumeContourSpectrumFilter *native = (vtkVolumeContourSpectrumFilter *)wrapper->native.GetPointer();
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

