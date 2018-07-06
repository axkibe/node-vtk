/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGraphLayoutStrategyWrap.h"
#include "vtkPassThroughLayoutStrategyWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPassThroughLayoutStrategyWrap::ptpl;

VtkPassThroughLayoutStrategyWrap::VtkPassThroughLayoutStrategyWrap()
{ }

VtkPassThroughLayoutStrategyWrap::VtkPassThroughLayoutStrategyWrap(vtkSmartPointer<vtkPassThroughLayoutStrategy> _native)
{ native = _native; }

VtkPassThroughLayoutStrategyWrap::~VtkPassThroughLayoutStrategyWrap()
{ }

void VtkPassThroughLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPassThroughLayoutStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PassThroughLayoutStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkPassThroughLayoutStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPassThroughLayoutStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPassThroughLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsLayoutComplete", IsLayoutComplete);
	Nan::SetPrototypeMethod(tpl, "isLayoutComplete", IsLayoutComplete);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKPASSTHROUGHLAYOUTSTRATEGYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPASSTHROUGHLAYOUTSTRATEGYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPassThroughLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPassThroughLayoutStrategy> native = vtkSmartPointer<vtkPassThroughLayoutStrategy>::New();
		VtkPassThroughLayoutStrategyWrap* obj = new VtkPassThroughLayoutStrategyWrap(native);
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

void VtkPassThroughLayoutStrategyWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassThroughLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkPassThroughLayoutStrategyWrap>(info.Holder());
	vtkPassThroughLayoutStrategy *native = (vtkPassThroughLayoutStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkPassThroughLayoutStrategyWrap::IsLayoutComplete(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassThroughLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkPassThroughLayoutStrategyWrap>(info.Holder());
	vtkPassThroughLayoutStrategy *native = (vtkPassThroughLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsLayoutComplete();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPassThroughLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassThroughLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkPassThroughLayoutStrategyWrap>(info.Holder());
	vtkPassThroughLayoutStrategy *native = (vtkPassThroughLayoutStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkPassThroughLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassThroughLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkPassThroughLayoutStrategyWrap>(info.Holder());
	vtkPassThroughLayoutStrategy *native = (vtkPassThroughLayoutStrategy *)wrapper->native.GetPointer();
	vtkPassThroughLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPassThroughLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPassThroughLayoutStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPassThroughLayoutStrategyWrap *w = new VtkPassThroughLayoutStrategyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPassThroughLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassThroughLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkPassThroughLayoutStrategyWrap>(info.Holder());
	vtkPassThroughLayoutStrategy *native = (vtkPassThroughLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPassThroughLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPassThroughLayoutStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPassThroughLayoutStrategyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPassThroughLayoutStrategyWrap *w = new VtkPassThroughLayoutStrategyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
