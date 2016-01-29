/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageIterateFilterWrap.h"
#include "vtkImageDecomposeFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageDecomposeFilterWrap::ptpl;

VtkImageDecomposeFilterWrap::VtkImageDecomposeFilterWrap()
{ }

VtkImageDecomposeFilterWrap::VtkImageDecomposeFilterWrap(vtkSmartPointer<vtkImageDecomposeFilter> _native)
{ native = _native; }

VtkImageDecomposeFilterWrap::~VtkImageDecomposeFilterWrap()
{ }

void VtkImageDecomposeFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageDecomposeFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageDecomposeFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkImageDecomposeFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageDecomposeFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageIterateFilterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageIterateFilterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageDecomposeFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimensionality", GetDimensionality);
	Nan::SetPrototypeMethod(tpl, "getDimensionality", GetDimensionality);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDimensionality", SetDimensionality);
	Nan::SetPrototypeMethod(tpl, "setDimensionality", SetDimensionality);

	ptpl.Reset( tpl );
}

void VtkImageDecomposeFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageDecomposeFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDecomposeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDecomposeFilterWrap>(info.Holder());
	vtkImageDecomposeFilter *native = (vtkImageDecomposeFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageDecomposeFilterWrap::GetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDecomposeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDecomposeFilterWrap>(info.Holder());
	vtkImageDecomposeFilter *native = (vtkImageDecomposeFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionality();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageDecomposeFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDecomposeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDecomposeFilterWrap>(info.Holder());
	vtkImageDecomposeFilter *native = (vtkImageDecomposeFilter *)wrapper->native.GetPointer();
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

void VtkImageDecomposeFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDecomposeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDecomposeFilterWrap>(info.Holder());
	vtkImageDecomposeFilter *native = (vtkImageDecomposeFilter *)wrapper->native.GetPointer();
	vtkImageDecomposeFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageDecomposeFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDecomposeFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDecomposeFilterWrap *w = new VtkImageDecomposeFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageDecomposeFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDecomposeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDecomposeFilterWrap>(info.Holder());
	vtkImageDecomposeFilter *native = (vtkImageDecomposeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageDecomposeFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageDecomposeFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageDecomposeFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageDecomposeFilterWrap *w = new VtkImageDecomposeFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageDecomposeFilterWrap::SetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageDecomposeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageDecomposeFilterWrap>(info.Holder());
	vtkImageDecomposeFilter *native = (vtkImageDecomposeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDimensionality(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

