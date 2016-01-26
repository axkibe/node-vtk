/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCirclePackLayoutStrategyWrap.h"
#include "vtkCirclePackFrontChainLayoutStrategyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTreeWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCirclePackFrontChainLayoutStrategyWrap::ptpl;

VtkCirclePackFrontChainLayoutStrategyWrap::VtkCirclePackFrontChainLayoutStrategyWrap()
{ }

VtkCirclePackFrontChainLayoutStrategyWrap::VtkCirclePackFrontChainLayoutStrategyWrap(vtkSmartPointer<vtkCirclePackFrontChainLayoutStrategy> _native)
{ native = _native; }

VtkCirclePackFrontChainLayoutStrategyWrap::~VtkCirclePackFrontChainLayoutStrategyWrap()
{ }

void VtkCirclePackFrontChainLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCirclePackFrontChainLayoutStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CirclePackFrontChainLayoutStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkCirclePackFrontChainLayoutStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCirclePackFrontChainLayoutStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCirclePackLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCirclePackLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCirclePackFrontChainLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHeight", GetHeight);
	Nan::SetPrototypeMethod(tpl, "getHeight", GetHeight);

	Nan::SetPrototypeMethod(tpl, "GetWidth", GetWidth);
	Nan::SetPrototypeMethod(tpl, "getWidth", GetWidth);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHeight", SetHeight);
	Nan::SetPrototypeMethod(tpl, "setHeight", SetHeight);

	Nan::SetPrototypeMethod(tpl, "SetWidth", SetWidth);
	Nan::SetPrototypeMethod(tpl, "setWidth", SetWidth);

	ptpl.Reset( tpl );
}

void VtkCirclePackFrontChainLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCirclePackFrontChainLayoutStrategy> native = vtkSmartPointer<vtkCirclePackFrontChainLayoutStrategy>::New();
		VtkCirclePackFrontChainLayoutStrategyWrap* obj = new VtkCirclePackFrontChainLayoutStrategyWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCirclePackFrontChainLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackFrontChainLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackFrontChainLayoutStrategyWrap>(info.Holder());
	vtkCirclePackFrontChainLayoutStrategy *native = (vtkCirclePackFrontChainLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCirclePackFrontChainLayoutStrategyWrap::GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackFrontChainLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackFrontChainLayoutStrategyWrap>(info.Holder());
	vtkCirclePackFrontChainLayoutStrategy *native = (vtkCirclePackFrontChainLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCirclePackFrontChainLayoutStrategyWrap::GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackFrontChainLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackFrontChainLayoutStrategyWrap>(info.Holder());
	vtkCirclePackFrontChainLayoutStrategy *native = (vtkCirclePackFrontChainLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCirclePackFrontChainLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackFrontChainLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackFrontChainLayoutStrategyWrap>(info.Holder());
	vtkCirclePackFrontChainLayoutStrategy *native = (vtkCirclePackFrontChainLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkCirclePackFrontChainLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackFrontChainLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackFrontChainLayoutStrategyWrap>(info.Holder());
	vtkCirclePackFrontChainLayoutStrategy *native = (vtkCirclePackFrontChainLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTreeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTreeWrap *a0 = ObjectWrap::Unwrap<VtkTreeWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkDataArrayWrap *a2 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Layout(
					(vtkTree *) a0->native.GetPointer(),
					(vtkDataArray *) a1->native.GetPointer(),
					(vtkDataArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCirclePackFrontChainLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackFrontChainLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackFrontChainLayoutStrategyWrap>(info.Holder());
	vtkCirclePackFrontChainLayoutStrategy *native = (vtkCirclePackFrontChainLayoutStrategy *)wrapper->native.GetPointer();
	vtkCirclePackFrontChainLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCirclePackFrontChainLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCirclePackFrontChainLayoutStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCirclePackFrontChainLayoutStrategyWrap *w = new VtkCirclePackFrontChainLayoutStrategyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCirclePackFrontChainLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackFrontChainLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackFrontChainLayoutStrategyWrap>(info.Holder());
	vtkCirclePackFrontChainLayoutStrategy *native = (vtkCirclePackFrontChainLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCirclePackFrontChainLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCirclePackFrontChainLayoutStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCirclePackFrontChainLayoutStrategyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCirclePackFrontChainLayoutStrategyWrap *w = new VtkCirclePackFrontChainLayoutStrategyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCirclePackFrontChainLayoutStrategyWrap::SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackFrontChainLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackFrontChainLayoutStrategyWrap>(info.Holder());
	vtkCirclePackFrontChainLayoutStrategy *native = (vtkCirclePackFrontChainLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeight(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCirclePackFrontChainLayoutStrategyWrap::SetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCirclePackFrontChainLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkCirclePackFrontChainLayoutStrategyWrap>(info.Holder());
	vtkCirclePackFrontChainLayoutStrategy *native = (vtkCirclePackFrontChainLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWidth(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

