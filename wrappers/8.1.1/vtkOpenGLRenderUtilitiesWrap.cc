/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkOpenGLRenderUtilitiesWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLRenderUtilitiesWrap::ptpl;

VtkOpenGLRenderUtilitiesWrap::VtkOpenGLRenderUtilitiesWrap()
{ }

VtkOpenGLRenderUtilitiesWrap::VtkOpenGLRenderUtilitiesWrap(vtkSmartPointer<vtkOpenGLRenderUtilities> _native)
{ native = _native; }

VtkOpenGLRenderUtilitiesWrap::~VtkOpenGLRenderUtilitiesWrap()
{ }

void VtkOpenGLRenderUtilitiesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLRenderUtilities").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLRenderUtilities").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLRenderUtilitiesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLRenderUtilitiesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLRenderUtilitiesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DrawFullScreenQuad", DrawFullScreenQuad);
	Nan::SetPrototypeMethod(tpl, "drawFullScreenQuad", DrawFullScreenQuad);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKOPENGLRENDERUTILITIESWRAP_INITPTPL
	VTK_NODE_PLUS_VTKOPENGLRENDERUTILITIESWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkOpenGLRenderUtilitiesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkOpenGLRenderUtilitiesWrap::DrawFullScreenQuad(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderUtilitiesWrap>(info.Holder());
	vtkOpenGLRenderUtilities *native = (vtkOpenGLRenderUtilities *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DrawFullScreenQuad();
}

void VtkOpenGLRenderUtilitiesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderUtilitiesWrap>(info.Holder());
	vtkOpenGLRenderUtilities *native = (vtkOpenGLRenderUtilities *)wrapper->native.GetPointer();
	vtkOpenGLRenderUtilities * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkOpenGLRenderUtilitiesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOpenGLRenderUtilitiesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLRenderUtilitiesWrap *w = new VtkOpenGLRenderUtilitiesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLRenderUtilitiesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderUtilitiesWrap>(info.Holder());
	vtkOpenGLRenderUtilities *native = (vtkOpenGLRenderUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkOpenGLRenderUtilities * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkOpenGLRenderUtilitiesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOpenGLRenderUtilitiesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLRenderUtilitiesWrap *w = new VtkOpenGLRenderUtilitiesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

