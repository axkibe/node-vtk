/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkHardwareSelectorWrap.h"
#include "vtkOpenGLHardwareSelectorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLHardwareSelectorWrap::ptpl;

VtkOpenGLHardwareSelectorWrap::VtkOpenGLHardwareSelectorWrap()
{ }

VtkOpenGLHardwareSelectorWrap::VtkOpenGLHardwareSelectorWrap(vtkSmartPointer<vtkOpenGLHardwareSelector> _native)
{ native = _native; }

VtkOpenGLHardwareSelectorWrap::~VtkOpenGLHardwareSelectorWrap()
{ }

void VtkOpenGLHardwareSelectorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLHardwareSelector").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLHardwareSelector").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLHardwareSelectorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLHardwareSelectorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHardwareSelectorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHardwareSelectorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLHardwareSelectorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BeginRenderProp", BeginRenderProp);
	Nan::SetPrototypeMethod(tpl, "beginRenderProp", BeginRenderProp);

	Nan::SetPrototypeMethod(tpl, "BeginSelection", BeginSelection);
	Nan::SetPrototypeMethod(tpl, "beginSelection", BeginSelection);

	Nan::SetPrototypeMethod(tpl, "EndRenderProp", EndRenderProp);
	Nan::SetPrototypeMethod(tpl, "endRenderProp", EndRenderProp);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RenderCompositeIndex", RenderCompositeIndex);
	Nan::SetPrototypeMethod(tpl, "renderCompositeIndex", RenderCompositeIndex);

	Nan::SetPrototypeMethod(tpl, "RenderProcessId", RenderProcessId);
	Nan::SetPrototypeMethod(tpl, "renderProcessId", RenderProcessId);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKOPENGLHARDWARESELECTORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKOPENGLHARDWARESELECTORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkOpenGLHardwareSelectorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLHardwareSelector> native = vtkSmartPointer<vtkOpenGLHardwareSelector>::New();
		VtkOpenGLHardwareSelectorWrap* obj = new VtkOpenGLHardwareSelectorWrap(native);
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

void VtkOpenGLHardwareSelectorWrap::BeginRenderProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSelectorWrap>(info.Holder());
	vtkOpenGLHardwareSelector *native = (vtkOpenGLHardwareSelector *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BeginRenderProp();
}

void VtkOpenGLHardwareSelectorWrap::BeginSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSelectorWrap>(info.Holder());
	vtkOpenGLHardwareSelector *native = (vtkOpenGLHardwareSelector *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BeginSelection();
}

void VtkOpenGLHardwareSelectorWrap::EndRenderProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSelectorWrap>(info.Holder());
	vtkOpenGLHardwareSelector *native = (vtkOpenGLHardwareSelector *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndRenderProp();
}

void VtkOpenGLHardwareSelectorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSelectorWrap>(info.Holder());
	vtkOpenGLHardwareSelector *native = (vtkOpenGLHardwareSelector *)wrapper->native.GetPointer();
	vtkOpenGLHardwareSelector * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkOpenGLHardwareSelectorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOpenGLHardwareSelectorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLHardwareSelectorWrap *w = new VtkOpenGLHardwareSelectorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLHardwareSelectorWrap::RenderCompositeIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSelectorWrap>(info.Holder());
	vtkOpenGLHardwareSelector *native = (vtkOpenGLHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RenderCompositeIndex(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLHardwareSelectorWrap::RenderProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSelectorWrap>(info.Holder());
	vtkOpenGLHardwareSelector *native = (vtkOpenGLHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RenderProcessId(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLHardwareSelectorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSelectorWrap>(info.Holder());
	vtkOpenGLHardwareSelector *native = (vtkOpenGLHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkOpenGLHardwareSelector * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkOpenGLHardwareSelectorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOpenGLHardwareSelectorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLHardwareSelectorWrap *w = new VtkOpenGLHardwareSelectorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
