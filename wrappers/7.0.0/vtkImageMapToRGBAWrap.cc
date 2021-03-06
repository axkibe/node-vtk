/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageMapToColorsWrap.h"
#include "vtkImageMapToRGBAWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageMapToRGBAWrap::ptpl;

VtkImageMapToRGBAWrap::VtkImageMapToRGBAWrap()
{ }

VtkImageMapToRGBAWrap::VtkImageMapToRGBAWrap(vtkSmartPointer<vtkImageMapToRGBA> _native)
{ native = _native; }

VtkImageMapToRGBAWrap::~VtkImageMapToRGBAWrap()
{ }

void VtkImageMapToRGBAWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageMapToRGBA").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageMapToRGBA").ToLocalChecked(), ConstructorGetter);
}

void VtkImageMapToRGBAWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageMapToRGBAWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageMapToColorsWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageMapToColorsWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageMapToRGBAWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKIMAGEMAPTORGBAWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGEMAPTORGBAWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageMapToRGBAWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageMapToRGBA> native = vtkSmartPointer<vtkImageMapToRGBA>::New();
		VtkImageMapToRGBAWrap* obj = new VtkImageMapToRGBAWrap(native);
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

void VtkImageMapToRGBAWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapToRGBAWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapToRGBAWrap>(info.Holder());
	vtkImageMapToRGBA *native = (vtkImageMapToRGBA *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageMapToRGBAWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapToRGBAWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapToRGBAWrap>(info.Holder());
	vtkImageMapToRGBA *native = (vtkImageMapToRGBA *)wrapper->native.GetPointer();
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

void VtkImageMapToRGBAWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapToRGBAWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapToRGBAWrap>(info.Holder());
	vtkImageMapToRGBA *native = (vtkImageMapToRGBA *)wrapper->native.GetPointer();
	vtkImageMapToRGBA * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageMapToRGBAWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageMapToRGBAWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageMapToRGBAWrap *w = new VtkImageMapToRGBAWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageMapToRGBAWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapToRGBAWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapToRGBAWrap>(info.Holder());
	vtkImageMapToRGBA *native = (vtkImageMapToRGBA *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageMapToRGBA * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImageMapToRGBAWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageMapToRGBAWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageMapToRGBAWrap *w = new VtkImageMapToRGBAWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

