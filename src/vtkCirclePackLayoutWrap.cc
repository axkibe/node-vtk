/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTreeAlgorithmWrap.h"
#include "vtkCirclePackLayoutWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCirclePackLayoutStrategyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCirclePackLayoutWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkCirclePackLayoutWrap::ptpl;

VtkCirclePackLayoutWrap::VtkCirclePackLayoutWrap()
{ }

VtkCirclePackLayoutWrap::VtkCirclePackLayoutWrap(vtkSmartPointer<vtkCirclePackLayout> _native)
{ native = _native; }

VtkCirclePackLayoutWrap::~VtkCirclePackLayoutWrap()
{ }

void VtkCirclePackLayoutWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCirclePackLayout").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CirclePackLayout").ToLocalChecked(), ConstructorGetter);
}

void VtkCirclePackLayoutWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCirclePackLayoutWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTreeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTreeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCirclePackLayoutWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCirclesFieldName", GetCirclesFieldName);
	Nan::SetPrototypeMethod(tpl, "getCirclesFieldName", GetCirclesFieldName);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLayoutStrategy", GetLayoutStrategy);
	Nan::SetPrototypeMethod(tpl, "getLayoutStrategy", GetLayoutStrategy);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCirclesFieldName", SetCirclesFieldName);
	Nan::SetPrototypeMethod(tpl, "setCirclesFieldName", SetCirclesFieldName);

	Nan::SetPrototypeMethod(tpl, "SetLayoutStrategy", SetLayoutStrategy);
	Nan::SetPrototypeMethod(tpl, "setLayoutStrategy", SetLayoutStrategy);

	Nan::SetPrototypeMethod(tpl, "SetSizeArrayName", SetSizeArrayName);
	Nan::SetPrototypeMethod(tpl, "setSizeArrayName", SetSizeArrayName);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkCirclePackLayoutWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCirclePackLayout> native = vtkSmartPointer<vtkCirclePackLayout>::New();
		VtkCirclePackLayoutWrap* obj = new VtkCirclePackLayoutWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCirclePackLayoutWrap::GetCirclesFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackLayoutWrap>(info.Holder());
	vtkCirclePackLayout *native = (vtkCirclePackLayout *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCirclesFieldName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCirclePackLayoutWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackLayoutWrap>(info.Holder());
	vtkCirclePackLayout *native = (vtkCirclePackLayout *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCirclePackLayoutWrap::GetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackLayoutWrap>(info.Holder());
	vtkCirclePackLayout *native = (vtkCirclePackLayout *)wrapper->native.GetPointer();
	vtkCirclePackLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLayoutStrategy();
		VtkCirclePackLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCirclePackLayoutStrategyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCirclePackLayoutStrategyWrap *w = new VtkCirclePackLayoutStrategyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCirclePackLayoutWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackLayoutWrap>(info.Holder());
	vtkCirclePackLayout *native = (vtkCirclePackLayout *)wrapper->native.GetPointer();
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

void VtkCirclePackLayoutWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackLayoutWrap>(info.Holder());
	vtkCirclePackLayout *native = (vtkCirclePackLayout *)wrapper->native.GetPointer();
	vtkCirclePackLayout * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCirclePackLayoutWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCirclePackLayoutWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCirclePackLayoutWrap *w = new VtkCirclePackLayoutWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCirclePackLayoutWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackLayoutWrap>(info.Holder());
	vtkCirclePackLayout *native = (vtkCirclePackLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCirclePackLayout * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCirclePackLayoutWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkCirclePackLayoutWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCirclePackLayoutWrap *w = new VtkCirclePackLayoutWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCirclePackLayoutWrap::SetCirclesFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackLayoutWrap>(info.Holder());
	vtkCirclePackLayout *native = (vtkCirclePackLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCirclesFieldName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCirclePackLayoutWrap::SetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackLayoutWrap>(info.Holder());
	vtkCirclePackLayout *native = (vtkCirclePackLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCirclePackLayoutStrategyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCirclePackLayoutStrategyWrap *a0 = ObjectWrap::Unwrap<VtkCirclePackLayoutStrategyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLayoutStrategy(
			(vtkCirclePackLayoutStrategy *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCirclePackLayoutWrap::SetSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackLayoutWrap>(info.Holder());
	vtkCirclePackLayout *native = (vtkCirclePackLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSizeArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

