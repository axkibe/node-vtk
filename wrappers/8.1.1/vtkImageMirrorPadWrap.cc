/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImagePadFilterWrap.h"
#include "vtkImageMirrorPadWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageMirrorPadWrap::ptpl;

VtkImageMirrorPadWrap::VtkImageMirrorPadWrap()
{ }

VtkImageMirrorPadWrap::VtkImageMirrorPadWrap(vtkSmartPointer<vtkImageMirrorPad> _native)
{ native = _native; }

VtkImageMirrorPadWrap::~VtkImageMirrorPadWrap()
{ }

void VtkImageMirrorPadWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageMirrorPad").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageMirrorPad").ToLocalChecked(), ConstructorGetter);
}

void VtkImageMirrorPadWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageMirrorPadWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImagePadFilterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImagePadFilterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageMirrorPadWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKIMAGEMIRRORPADWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGEMIRRORPADWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageMirrorPadWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageMirrorPad> native = vtkSmartPointer<vtkImageMirrorPad>::New();
		VtkImageMirrorPadWrap* obj = new VtkImageMirrorPadWrap(native);
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

void VtkImageMirrorPadWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMirrorPadWrap *wrapper = ObjectWrap::Unwrap<VtkImageMirrorPadWrap>(info.Holder());
	vtkImageMirrorPad *native = (vtkImageMirrorPad *)wrapper->native.GetPointer();
	vtkImageMirrorPad * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageMirrorPadWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageMirrorPadWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageMirrorPadWrap *w = new VtkImageMirrorPadWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageMirrorPadWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMirrorPadWrap *wrapper = ObjectWrap::Unwrap<VtkImageMirrorPadWrap>(info.Holder());
	vtkImageMirrorPad *native = (vtkImageMirrorPad *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkImageMirrorPad * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkImageMirrorPadWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageMirrorPadWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageMirrorPadWrap *w = new VtkImageMirrorPadWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

