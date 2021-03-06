/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkRenderPassWrap.h"
#include "vtkOpenGLRenderPassWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkInformationObjectBaseVectorKeyWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLRenderPassWrap::ptpl;

VtkOpenGLRenderPassWrap::VtkOpenGLRenderPassWrap()
{ }

VtkOpenGLRenderPassWrap::VtkOpenGLRenderPassWrap(vtkSmartPointer<vtkOpenGLRenderPass> _native)
{ native = _native; }

VtkOpenGLRenderPassWrap::~VtkOpenGLRenderPassWrap()
{ }

void VtkOpenGLRenderPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLRenderPass").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLRenderPass").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLRenderPassWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLRenderPassWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderPassWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderPassWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLRenderPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetActiveDrawBuffers", GetActiveDrawBuffers);
	Nan::SetPrototypeMethod(tpl, "getActiveDrawBuffers", GetActiveDrawBuffers);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RenderPasses", RenderPasses);
	Nan::SetPrototypeMethod(tpl, "renderPasses", RenderPasses);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetActiveDrawBuffers", SetActiveDrawBuffers);
	Nan::SetPrototypeMethod(tpl, "setActiveDrawBuffers", SetActiveDrawBuffers);

#ifdef VTK_NODE_PLUS_VTKOPENGLRENDERPASSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKOPENGLRENDERPASSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkOpenGLRenderPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkOpenGLRenderPassWrap::GetActiveDrawBuffers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderPassWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderPassWrap>(info.Holder());
	vtkOpenGLRenderPass *native = (vtkOpenGLRenderPass *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveDrawBuffers();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLRenderPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderPassWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderPassWrap>(info.Holder());
	vtkOpenGLRenderPass *native = (vtkOpenGLRenderPass *)wrapper->native.GetPointer();
	vtkOpenGLRenderPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkOpenGLRenderPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOpenGLRenderPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLRenderPassWrap *w = new VtkOpenGLRenderPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLRenderPassWrap::RenderPasses(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderPassWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderPassWrap>(info.Holder());
	vtkOpenGLRenderPass *native = (vtkOpenGLRenderPass *)wrapper->native.GetPointer();
	vtkInformationObjectBaseVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RenderPasses();
	VtkInformationObjectBaseVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationObjectBaseVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationObjectBaseVectorKeyWrap *w = new VtkInformationObjectBaseVectorKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLRenderPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderPassWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderPassWrap>(info.Holder());
	vtkOpenGLRenderPass *native = (vtkOpenGLRenderPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkOpenGLRenderPass * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkOpenGLRenderPassWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOpenGLRenderPassWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLRenderPassWrap *w = new VtkOpenGLRenderPassWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLRenderPassWrap::SetActiveDrawBuffers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLRenderPassWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLRenderPassWrap>(info.Holder());
	vtkOpenGLRenderPass *native = (vtkOpenGLRenderPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetActiveDrawBuffers(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

