/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataRepresentationWrap.h"
#include "vtkRenderedRepresentationWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRenderedRepresentationWrap::ptpl;

VtkRenderedRepresentationWrap::VtkRenderedRepresentationWrap()
{ }

VtkRenderedRepresentationWrap::VtkRenderedRepresentationWrap(vtkSmartPointer<vtkRenderedRepresentation> _native)
{ native = _native; }

VtkRenderedRepresentationWrap::~VtkRenderedRepresentationWrap()
{ }

void VtkRenderedRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRenderedRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RenderedRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkRenderedRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRenderedRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRenderedRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetLabelRenderMode", GetLabelRenderMode);
	Nan::SetPrototypeMethod(tpl, "getLabelRenderMode", GetLabelRenderMode);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLabelRenderMode", SetLabelRenderMode);
	Nan::SetPrototypeMethod(tpl, "setLabelRenderMode", SetLabelRenderMode);

#ifdef VTK_NODE_PLUS_VTKRENDEREDREPRESENTATIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKRENDEREDREPRESENTATIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkRenderedRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRenderedRepresentation> native = vtkSmartPointer<vtkRenderedRepresentation>::New();
		VtkRenderedRepresentationWrap* obj = new VtkRenderedRepresentationWrap(native);
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

void VtkRenderedRepresentationWrap::GetLabelRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedRepresentationWrap>(info.Holder());
	vtkRenderedRepresentation *native = (vtkRenderedRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelRenderMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRenderedRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedRepresentationWrap>(info.Holder());
	vtkRenderedRepresentation *native = (vtkRenderedRepresentation *)wrapper->native.GetPointer();
	vtkRenderedRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkRenderedRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderedRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderedRepresentationWrap *w = new VtkRenderedRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderedRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedRepresentationWrap>(info.Holder());
	vtkRenderedRepresentation *native = (vtkRenderedRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkRenderedRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkRenderedRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRenderedRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRenderedRepresentationWrap *w = new VtkRenderedRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderedRepresentationWrap::SetLabelRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedRepresentationWrap>(info.Holder());
	vtkRenderedRepresentation *native = (vtkRenderedRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelRenderMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

