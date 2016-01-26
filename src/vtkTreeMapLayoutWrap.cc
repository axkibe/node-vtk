/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTreeAlgorithmWrap.h"
#include "vtkTreeMapLayoutWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTreeMapLayoutStrategyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTreeMapLayoutWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTreeMapLayoutWrap::ptpl;

VtkTreeMapLayoutWrap::VtkTreeMapLayoutWrap()
{ }

VtkTreeMapLayoutWrap::VtkTreeMapLayoutWrap(vtkSmartPointer<vtkTreeMapLayout> _native)
{ native = _native; }

VtkTreeMapLayoutWrap::~VtkTreeMapLayoutWrap()
{ }

void VtkTreeMapLayoutWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTreeMapLayout").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TreeMapLayout").ToLocalChecked(), ConstructorGetter);
}

void VtkTreeMapLayoutWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTreeMapLayoutWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTreeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTreeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTreeMapLayoutWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLayoutStrategy", GetLayoutStrategy);
	Nan::SetPrototypeMethod(tpl, "getLayoutStrategy", GetLayoutStrategy);

	Nan::SetPrototypeMethod(tpl, "GetRectanglesFieldName", GetRectanglesFieldName);
	Nan::SetPrototypeMethod(tpl, "getRectanglesFieldName", GetRectanglesFieldName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLayoutStrategy", SetLayoutStrategy);
	Nan::SetPrototypeMethod(tpl, "setLayoutStrategy", SetLayoutStrategy);

	Nan::SetPrototypeMethod(tpl, "SetRectanglesFieldName", SetRectanglesFieldName);
	Nan::SetPrototypeMethod(tpl, "setRectanglesFieldName", SetRectanglesFieldName);

	Nan::SetPrototypeMethod(tpl, "SetSizeArrayName", SetSizeArrayName);
	Nan::SetPrototypeMethod(tpl, "setSizeArrayName", SetSizeArrayName);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkTreeMapLayoutWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTreeMapLayout> native = vtkSmartPointer<vtkTreeMapLayout>::New();
		VtkTreeMapLayoutWrap* obj = new VtkTreeMapLayoutWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTreeMapLayoutWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapLayoutWrap>(info.Holder());
	vtkTreeMapLayout *native = (vtkTreeMapLayout *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTreeMapLayoutWrap::GetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapLayoutWrap>(info.Holder());
	vtkTreeMapLayout *native = (vtkTreeMapLayout *)wrapper->native.GetPointer();
	vtkTreeMapLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLayoutStrategy();
		VtkTreeMapLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTreeMapLayoutStrategyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeMapLayoutStrategyWrap *w = new VtkTreeMapLayoutStrategyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeMapLayoutWrap::GetRectanglesFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapLayoutWrap>(info.Holder());
	vtkTreeMapLayout *native = (vtkTreeMapLayout *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRectanglesFieldName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTreeMapLayoutWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapLayoutWrap>(info.Holder());
	vtkTreeMapLayout *native = (vtkTreeMapLayout *)wrapper->native.GetPointer();
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

void VtkTreeMapLayoutWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapLayoutWrap>(info.Holder());
	vtkTreeMapLayout *native = (vtkTreeMapLayout *)wrapper->native.GetPointer();
	vtkTreeMapLayout * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTreeMapLayoutWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTreeMapLayoutWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeMapLayoutWrap *w = new VtkTreeMapLayoutWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeMapLayoutWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapLayoutWrap>(info.Holder());
	vtkTreeMapLayout *native = (vtkTreeMapLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTreeMapLayout * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTreeMapLayoutWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkTreeMapLayoutWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTreeMapLayoutWrap *w = new VtkTreeMapLayoutWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeMapLayoutWrap::SetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapLayoutWrap>(info.Holder());
	vtkTreeMapLayout *native = (vtkTreeMapLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTreeMapLayoutStrategyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTreeMapLayoutStrategyWrap *a0 = ObjectWrap::Unwrap<VtkTreeMapLayoutStrategyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLayoutStrategy(
			(vtkTreeMapLayoutStrategy *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeMapLayoutWrap::SetRectanglesFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapLayoutWrap>(info.Holder());
	vtkTreeMapLayout *native = (vtkTreeMapLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRectanglesFieldName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeMapLayoutWrap::SetSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapLayoutWrap>(info.Holder());
	vtkTreeMapLayout *native = (vtkTreeMapLayout *)wrapper->native.GetPointer();
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

