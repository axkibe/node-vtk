/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkEdgeLayoutStrategyWrap.h"
#include "vtkPassThroughEdgeStrategyWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPassThroughEdgeStrategyWrap::ptpl;

VtkPassThroughEdgeStrategyWrap::VtkPassThroughEdgeStrategyWrap()
{ }

VtkPassThroughEdgeStrategyWrap::VtkPassThroughEdgeStrategyWrap(vtkSmartPointer<vtkPassThroughEdgeStrategy> _native)
{ native = _native; }

VtkPassThroughEdgeStrategyWrap::~VtkPassThroughEdgeStrategyWrap()
{ }

void VtkPassThroughEdgeStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPassThroughEdgeStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PassThroughEdgeStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkPassThroughEdgeStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPassThroughEdgeStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkEdgeLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkEdgeLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPassThroughEdgeStrategyWrap").ToLocalChecked());
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

	ptpl.Reset( tpl );
}

void VtkPassThroughEdgeStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPassThroughEdgeStrategy> native = vtkSmartPointer<vtkPassThroughEdgeStrategy>::New();
		VtkPassThroughEdgeStrategyWrap* obj = new VtkPassThroughEdgeStrategyWrap(native);
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

void VtkPassThroughEdgeStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassThroughEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkPassThroughEdgeStrategyWrap>(info.Holder());
	vtkPassThroughEdgeStrategy *native = (vtkPassThroughEdgeStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPassThroughEdgeStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassThroughEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkPassThroughEdgeStrategyWrap>(info.Holder());
	vtkPassThroughEdgeStrategy *native = (vtkPassThroughEdgeStrategy *)wrapper->native.GetPointer();
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

void VtkPassThroughEdgeStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassThroughEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkPassThroughEdgeStrategyWrap>(info.Holder());
	vtkPassThroughEdgeStrategy *native = (vtkPassThroughEdgeStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkPassThroughEdgeStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassThroughEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkPassThroughEdgeStrategyWrap>(info.Holder());
	vtkPassThroughEdgeStrategy *native = (vtkPassThroughEdgeStrategy *)wrapper->native.GetPointer();
	vtkPassThroughEdgeStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPassThroughEdgeStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPassThroughEdgeStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPassThroughEdgeStrategyWrap *w = new VtkPassThroughEdgeStrategyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPassThroughEdgeStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassThroughEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkPassThroughEdgeStrategyWrap>(info.Holder());
	vtkPassThroughEdgeStrategy *native = (vtkPassThroughEdgeStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPassThroughEdgeStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkPassThroughEdgeStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPassThroughEdgeStrategyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPassThroughEdgeStrategyWrap *w = new VtkPassThroughEdgeStrategyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

