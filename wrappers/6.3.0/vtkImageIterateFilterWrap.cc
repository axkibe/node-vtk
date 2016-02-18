/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageIterateFilterWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageIterateFilterWrap::ptpl;

VtkImageIterateFilterWrap::VtkImageIterateFilterWrap()
{ }

VtkImageIterateFilterWrap::VtkImageIterateFilterWrap(vtkSmartPointer<vtkImageIterateFilter> _native)
{ native = _native; }

VtkImageIterateFilterWrap::~VtkImageIterateFilterWrap()
{ }

void VtkImageIterateFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageIterateFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageIterateFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkImageIterateFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageIterateFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageIterateFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetIteration", GetIteration);
	Nan::SetPrototypeMethod(tpl, "getIteration", GetIteration);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfIterations", GetNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "getNumberOfIterations", GetNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKIMAGEITERATEFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGEITERATEFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageIterateFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkImageIterateFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIterateFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageIterateFilterWrap>(info.Holder());
	vtkImageIterateFilter *native = (vtkImageIterateFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageIterateFilterWrap::GetIteration(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIterateFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageIterateFilterWrap>(info.Holder());
	vtkImageIterateFilter *native = (vtkImageIterateFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIteration();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageIterateFilterWrap::GetNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIterateFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageIterateFilterWrap>(info.Holder());
	vtkImageIterateFilter *native = (vtkImageIterateFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfIterations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageIterateFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIterateFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageIterateFilterWrap>(info.Holder());
	vtkImageIterateFilter *native = (vtkImageIterateFilter *)wrapper->native.GetPointer();
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

void VtkImageIterateFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIterateFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageIterateFilterWrap>(info.Holder());
	vtkImageIterateFilter *native = (vtkImageIterateFilter *)wrapper->native.GetPointer();
	vtkImageIterateFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageIterateFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageIterateFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageIterateFilterWrap *w = new VtkImageIterateFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageIterateFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageIterateFilterWrap *wrapper = ObjectWrap::Unwrap<VtkImageIterateFilterWrap>(info.Holder());
	vtkImageIterateFilter *native = (vtkImageIterateFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageIterateFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImageIterateFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageIterateFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageIterateFilterWrap *w = new VtkImageIterateFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

