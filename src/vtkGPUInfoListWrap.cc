/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGPUInfoListWrap.h"
#include "vtkGPUInfoWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGPUInfoListWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkGPUInfoListWrap::ptpl;

VtkGPUInfoListWrap::VtkGPUInfoListWrap()
{ }

VtkGPUInfoListWrap::VtkGPUInfoListWrap(vtkSmartPointer<vtkGPUInfoList> _native)
{ native = _native; }

VtkGPUInfoListWrap::~VtkGPUInfoListWrap()
{ }

void VtkGPUInfoListWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGPUInfoList").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GPUInfoList").ToLocalChecked(), ConstructorGetter);
}

void VtkGPUInfoListWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGPUInfoListWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGPUInfoListWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGPUInfo", GetGPUInfo);
	Nan::SetPrototypeMethod(tpl, "getGPUInfo", GetGPUInfo);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfGPUs", GetNumberOfGPUs);
	Nan::SetPrototypeMethod(tpl, "getNumberOfGPUs", GetNumberOfGPUs);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Probe", Probe);
	Nan::SetPrototypeMethod(tpl, "probe", Probe);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkGPUInfoListWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGPUInfoList> native = vtkSmartPointer<vtkGPUInfoList>::New();
		VtkGPUInfoListWrap* obj = new VtkGPUInfoListWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGPUInfoListWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGPUInfoListWrap *wrapper = ObjectWrap::Unwrap<VtkGPUInfoListWrap>(info.Holder());
	vtkGPUInfoList *native = (vtkGPUInfoList *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGPUInfoListWrap::GetGPUInfo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGPUInfoListWrap *wrapper = ObjectWrap::Unwrap<VtkGPUInfoListWrap>(info.Holder());
	vtkGPUInfoList *native = (vtkGPUInfoList *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkGPUInfo * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetGPUInfo(
			info[0]->Int32Value()
		);
			VtkGPUInfoWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkGPUInfoWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGPUInfoWrap *w = new VtkGPUInfoWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGPUInfoListWrap::GetNumberOfGPUs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGPUInfoListWrap *wrapper = ObjectWrap::Unwrap<VtkGPUInfoListWrap>(info.Holder());
	vtkGPUInfoList *native = (vtkGPUInfoList *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfGPUs();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGPUInfoListWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGPUInfoListWrap *wrapper = ObjectWrap::Unwrap<VtkGPUInfoListWrap>(info.Holder());
	vtkGPUInfoList *native = (vtkGPUInfoList *)wrapper->native.GetPointer();
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

void VtkGPUInfoListWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGPUInfoListWrap *wrapper = ObjectWrap::Unwrap<VtkGPUInfoListWrap>(info.Holder());
	vtkGPUInfoList *native = (vtkGPUInfoList *)wrapper->native.GetPointer();
	vtkGPUInfoList * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGPUInfoListWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGPUInfoListWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGPUInfoListWrap *w = new VtkGPUInfoListWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGPUInfoListWrap::Probe(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGPUInfoListWrap *wrapper = ObjectWrap::Unwrap<VtkGPUInfoListWrap>(info.Holder());
	vtkGPUInfoList *native = (vtkGPUInfoList *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Probe();
}

void VtkGPUInfoListWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGPUInfoListWrap *wrapper = ObjectWrap::Unwrap<VtkGPUInfoListWrap>(info.Holder());
	vtkGPUInfoList *native = (vtkGPUInfoList *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGPUInfoList * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGPUInfoListWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkGPUInfoListWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGPUInfoListWrap *w = new VtkGPUInfoListWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

