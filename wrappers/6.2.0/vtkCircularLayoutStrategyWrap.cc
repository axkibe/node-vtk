/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGraphLayoutStrategyWrap.h"
#include "vtkCircularLayoutStrategyWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCircularLayoutStrategyWrap::ptpl;

VtkCircularLayoutStrategyWrap::VtkCircularLayoutStrategyWrap()
{ }

VtkCircularLayoutStrategyWrap::VtkCircularLayoutStrategyWrap(vtkSmartPointer<vtkCircularLayoutStrategy> _native)
{ native = _native; }

VtkCircularLayoutStrategyWrap::~VtkCircularLayoutStrategyWrap()
{ }

void VtkCircularLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCircularLayoutStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CircularLayoutStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkCircularLayoutStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCircularLayoutStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCircularLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKCIRCULARLAYOUTSTRATEGYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCIRCULARLAYOUTSTRATEGYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCircularLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCircularLayoutStrategy> native = vtkSmartPointer<vtkCircularLayoutStrategy>::New();
		VtkCircularLayoutStrategyWrap* obj = new VtkCircularLayoutStrategyWrap(native);
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

void VtkCircularLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCircularLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCircularLayoutStrategyWrap>(info.Holder());
	vtkCircularLayoutStrategy *native = (vtkCircularLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCircularLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCircularLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCircularLayoutStrategyWrap>(info.Holder());
	vtkCircularLayoutStrategy *native = (vtkCircularLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkCircularLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCircularLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCircularLayoutStrategyWrap>(info.Holder());
	vtkCircularLayoutStrategy *native = (vtkCircularLayoutStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkCircularLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCircularLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCircularLayoutStrategyWrap>(info.Holder());
	vtkCircularLayoutStrategy *native = (vtkCircularLayoutStrategy *)wrapper->native.GetPointer();
	vtkCircularLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCircularLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCircularLayoutStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCircularLayoutStrategyWrap *w = new VtkCircularLayoutStrategyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCircularLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCircularLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCircularLayoutStrategyWrap>(info.Holder());
	vtkCircularLayoutStrategy *native = (vtkCircularLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCircularLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkCircularLayoutStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCircularLayoutStrategyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCircularLayoutStrategyWrap *w = new VtkCircularLayoutStrategyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

