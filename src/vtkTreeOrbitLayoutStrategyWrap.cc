/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphLayoutStrategyWrap.h"
#include "vtkTreeOrbitLayoutStrategyWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTreeOrbitLayoutStrategyWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTreeOrbitLayoutStrategyWrap::ptpl;

VtkTreeOrbitLayoutStrategyWrap::VtkTreeOrbitLayoutStrategyWrap()
{ }

VtkTreeOrbitLayoutStrategyWrap::VtkTreeOrbitLayoutStrategyWrap(vtkSmartPointer<vtkTreeOrbitLayoutStrategy> _native)
{ native = _native; }

VtkTreeOrbitLayoutStrategyWrap::~VtkTreeOrbitLayoutStrategyWrap()
{ }

void VtkTreeOrbitLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTreeOrbitLayoutStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TreeOrbitLayoutStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkTreeOrbitLayoutStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTreeOrbitLayoutStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTreeOrbitLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetChildRadiusFactor", GetChildRadiusFactor);
	Nan::SetPrototypeMethod(tpl, "getChildRadiusFactor", GetChildRadiusFactor);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLeafSpacing", GetLeafSpacing);
	Nan::SetPrototypeMethod(tpl, "getLeafSpacing", GetLeafSpacing);

	Nan::SetPrototypeMethod(tpl, "GetLeafSpacingMaxValue", GetLeafSpacingMaxValue);
	Nan::SetPrototypeMethod(tpl, "getLeafSpacingMaxValue", GetLeafSpacingMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetLeafSpacingMinValue", GetLeafSpacingMinValue);
	Nan::SetPrototypeMethod(tpl, "getLeafSpacingMinValue", GetLeafSpacingMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLogSpacingValue", GetLogSpacingValue);
	Nan::SetPrototypeMethod(tpl, "getLogSpacingValue", GetLogSpacingValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetChildRadiusFactor", SetChildRadiusFactor);
	Nan::SetPrototypeMethod(tpl, "setChildRadiusFactor", SetChildRadiusFactor);

	Nan::SetPrototypeMethod(tpl, "SetLeafSpacing", SetLeafSpacing);
	Nan::SetPrototypeMethod(tpl, "setLeafSpacing", SetLeafSpacing);

	Nan::SetPrototypeMethod(tpl, "SetLogSpacingValue", SetLogSpacingValue);
	Nan::SetPrototypeMethod(tpl, "setLogSpacingValue", SetLogSpacingValue);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkTreeOrbitLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTreeOrbitLayoutStrategy> native = vtkSmartPointer<vtkTreeOrbitLayoutStrategy>::New();
		VtkTreeOrbitLayoutStrategyWrap* obj = new VtkTreeOrbitLayoutStrategyWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTreeOrbitLayoutStrategyWrap::GetChildRadiusFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeOrbitLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkTreeOrbitLayoutStrategyWrap>(info.Holder());
	vtkTreeOrbitLayoutStrategy *native = (vtkTreeOrbitLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetChildRadiusFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeOrbitLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeOrbitLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkTreeOrbitLayoutStrategyWrap>(info.Holder());
	vtkTreeOrbitLayoutStrategy *native = (vtkTreeOrbitLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTreeOrbitLayoutStrategyWrap::GetLeafSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeOrbitLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkTreeOrbitLayoutStrategyWrap>(info.Holder());
	vtkTreeOrbitLayoutStrategy *native = (vtkTreeOrbitLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeafSpacing();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeOrbitLayoutStrategyWrap::GetLeafSpacingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeOrbitLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkTreeOrbitLayoutStrategyWrap>(info.Holder());
	vtkTreeOrbitLayoutStrategy *native = (vtkTreeOrbitLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeafSpacingMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeOrbitLayoutStrategyWrap::GetLeafSpacingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeOrbitLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkTreeOrbitLayoutStrategyWrap>(info.Holder());
	vtkTreeOrbitLayoutStrategy *native = (vtkTreeOrbitLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeafSpacingMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeOrbitLayoutStrategyWrap::GetLogSpacingValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeOrbitLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkTreeOrbitLayoutStrategyWrap>(info.Holder());
	vtkTreeOrbitLayoutStrategy *native = (vtkTreeOrbitLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLogSpacingValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeOrbitLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeOrbitLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkTreeOrbitLayoutStrategyWrap>(info.Holder());
	vtkTreeOrbitLayoutStrategy *native = (vtkTreeOrbitLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkTreeOrbitLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeOrbitLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkTreeOrbitLayoutStrategyWrap>(info.Holder());
	vtkTreeOrbitLayoutStrategy *native = (vtkTreeOrbitLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkTreeOrbitLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeOrbitLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkTreeOrbitLayoutStrategyWrap>(info.Holder());
	vtkTreeOrbitLayoutStrategy *native = (vtkTreeOrbitLayoutStrategy *)wrapper->native.GetPointer();
	vtkTreeOrbitLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTreeOrbitLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTreeOrbitLayoutStrategyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeOrbitLayoutStrategyWrap *w = new VtkTreeOrbitLayoutStrategyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeOrbitLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeOrbitLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkTreeOrbitLayoutStrategyWrap>(info.Holder());
	vtkTreeOrbitLayoutStrategy *native = (vtkTreeOrbitLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTreeOrbitLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTreeOrbitLayoutStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkTreeOrbitLayoutStrategyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTreeOrbitLayoutStrategyWrap *w = new VtkTreeOrbitLayoutStrategyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeOrbitLayoutStrategyWrap::SetChildRadiusFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeOrbitLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkTreeOrbitLayoutStrategyWrap>(info.Holder());
	vtkTreeOrbitLayoutStrategy *native = (vtkTreeOrbitLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetChildRadiusFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeOrbitLayoutStrategyWrap::SetLeafSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeOrbitLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkTreeOrbitLayoutStrategyWrap>(info.Holder());
	vtkTreeOrbitLayoutStrategy *native = (vtkTreeOrbitLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLeafSpacing(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeOrbitLayoutStrategyWrap::SetLogSpacingValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeOrbitLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkTreeOrbitLayoutStrategyWrap>(info.Holder());
	vtkTreeOrbitLayoutStrategy *native = (vtkTreeOrbitLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLogSpacingValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

