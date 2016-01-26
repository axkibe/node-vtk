/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAlgorithmWrap.h"
#include "vtkRenderLargeImageWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRenderLargeImageWrap::ptpl;

VtkRenderLargeImageWrap::VtkRenderLargeImageWrap()
{ }

VtkRenderLargeImageWrap::VtkRenderLargeImageWrap(vtkSmartPointer<vtkRenderLargeImage> _native)
{ native = _native; }

VtkRenderLargeImageWrap::~VtkRenderLargeImageWrap()
{ }

void VtkRenderLargeImageWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRenderLargeImage").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RenderLargeImage").ToLocalChecked(), ConstructorGetter);
}

void VtkRenderLargeImageWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRenderLargeImageWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRenderLargeImageWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetMagnification", GetMagnification);
	Nan::SetPrototypeMethod(tpl, "getMagnification", GetMagnification);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	Nan::SetPrototypeMethod(tpl, "SetMagnification", SetMagnification);
	Nan::SetPrototypeMethod(tpl, "setMagnification", SetMagnification);

	ptpl.Reset( tpl );
}

void VtkRenderLargeImageWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRenderLargeImage> native = vtkSmartPointer<vtkRenderLargeImage>::New();
		VtkRenderLargeImageWrap* obj = new VtkRenderLargeImageWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRenderLargeImageWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderLargeImageWrap *wrapper = ObjectWrap::Unwrap<VtkRenderLargeImageWrap>(info.Holder());
	vtkRenderLargeImage *native = (vtkRenderLargeImage *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRenderLargeImageWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderLargeImageWrap *wrapper = ObjectWrap::Unwrap<VtkRenderLargeImageWrap>(info.Holder());
	vtkRenderLargeImage *native = (vtkRenderLargeImage *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderLargeImageWrap::GetMagnification(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderLargeImageWrap *wrapper = ObjectWrap::Unwrap<VtkRenderLargeImageWrap>(info.Holder());
	vtkRenderLargeImage *native = (vtkRenderLargeImage *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMagnification();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRenderLargeImageWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderLargeImageWrap *wrapper = ObjectWrap::Unwrap<VtkRenderLargeImageWrap>(info.Holder());
	vtkRenderLargeImage *native = (vtkRenderLargeImage *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderLargeImageWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderLargeImageWrap *wrapper = ObjectWrap::Unwrap<VtkRenderLargeImageWrap>(info.Holder());
	vtkRenderLargeImage *native = (vtkRenderLargeImage *)wrapper->native.GetPointer();
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

void VtkRenderLargeImageWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderLargeImageWrap *wrapper = ObjectWrap::Unwrap<VtkRenderLargeImageWrap>(info.Holder());
	vtkRenderLargeImage *native = (vtkRenderLargeImage *)wrapper->native.GetPointer();
	vtkRenderLargeImage * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRenderLargeImageWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderLargeImageWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderLargeImageWrap *w = new VtkRenderLargeImageWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderLargeImageWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderLargeImageWrap *wrapper = ObjectWrap::Unwrap<VtkRenderLargeImageWrap>(info.Holder());
	vtkRenderLargeImage *native = (vtkRenderLargeImage *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRenderLargeImage * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRenderLargeImageWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRenderLargeImageWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRenderLargeImageWrap *w = new VtkRenderLargeImageWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderLargeImageWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderLargeImageWrap *wrapper = ObjectWrap::Unwrap<VtkRenderLargeImageWrap>(info.Holder());
	vtkRenderLargeImage *native = (vtkRenderLargeImage *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderLargeImageWrap::SetMagnification(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderLargeImageWrap *wrapper = ObjectWrap::Unwrap<VtkRenderLargeImageWrap>(info.Holder());
	vtkRenderLargeImage *native = (vtkRenderLargeImage *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMagnification(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

