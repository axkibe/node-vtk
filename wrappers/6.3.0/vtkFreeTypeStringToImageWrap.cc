/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStringToImageWrap.h"
#include "vtkFreeTypeStringToImageWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFreeTypeStringToImageWrap::ptpl;

VtkFreeTypeStringToImageWrap::VtkFreeTypeStringToImageWrap()
{ }

VtkFreeTypeStringToImageWrap::VtkFreeTypeStringToImageWrap(vtkSmartPointer<vtkFreeTypeStringToImage> _native)
{ native = _native; }

VtkFreeTypeStringToImageWrap::~VtkFreeTypeStringToImageWrap()
{ }

void VtkFreeTypeStringToImageWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFreeTypeStringToImage").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FreeTypeStringToImage").ToLocalChecked(), ConstructorGetter);
}

void VtkFreeTypeStringToImageWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFreeTypeStringToImageWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStringToImageWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStringToImageWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFreeTypeStringToImageWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkFreeTypeStringToImageWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFreeTypeStringToImage> native = vtkSmartPointer<vtkFreeTypeStringToImage>::New();
		VtkFreeTypeStringToImageWrap* obj = new VtkFreeTypeStringToImageWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkFreeTypeStringToImageWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFreeTypeStringToImageWrap *wrapper = ObjectWrap::Unwrap<VtkFreeTypeStringToImageWrap>(info.Holder());
	vtkFreeTypeStringToImage *native = (vtkFreeTypeStringToImage *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkFreeTypeStringToImageWrap::ptpl))->HasInstance(info[0]))
	{
		VtkFreeTypeStringToImageWrap *a0 = ObjectWrap::Unwrap<VtkFreeTypeStringToImageWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkFreeTypeStringToImage *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFreeTypeStringToImageWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFreeTypeStringToImageWrap *wrapper = ObjectWrap::Unwrap<VtkFreeTypeStringToImageWrap>(info.Holder());
	vtkFreeTypeStringToImage *native = (vtkFreeTypeStringToImage *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFreeTypeStringToImageWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFreeTypeStringToImageWrap *wrapper = ObjectWrap::Unwrap<VtkFreeTypeStringToImageWrap>(info.Holder());
	vtkFreeTypeStringToImage *native = (vtkFreeTypeStringToImage *)wrapper->native.GetPointer();
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

void VtkFreeTypeStringToImageWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFreeTypeStringToImageWrap *wrapper = ObjectWrap::Unwrap<VtkFreeTypeStringToImageWrap>(info.Holder());
	vtkFreeTypeStringToImage *native = (vtkFreeTypeStringToImage *)wrapper->native.GetPointer();
	vtkFreeTypeStringToImage * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkFreeTypeStringToImageWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFreeTypeStringToImageWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFreeTypeStringToImageWrap *w = new VtkFreeTypeStringToImageWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFreeTypeStringToImageWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFreeTypeStringToImageWrap *wrapper = ObjectWrap::Unwrap<VtkFreeTypeStringToImageWrap>(info.Holder());
	vtkFreeTypeStringToImage *native = (vtkFreeTypeStringToImage *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkFreeTypeStringToImage * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkFreeTypeStringToImageWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFreeTypeStringToImageWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFreeTypeStringToImageWrap *w = new VtkFreeTypeStringToImageWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

