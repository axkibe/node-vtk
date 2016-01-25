/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTreeMapLayoutStrategyWrap.h"
#include "vtkSquarifyLayoutStrategyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTreeWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSquarifyLayoutStrategyWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkSquarifyLayoutStrategyWrap::ptpl;

VtkSquarifyLayoutStrategyWrap::VtkSquarifyLayoutStrategyWrap()
{ }

VtkSquarifyLayoutStrategyWrap::VtkSquarifyLayoutStrategyWrap(vtkSmartPointer<vtkSquarifyLayoutStrategy> _native)
{ native = _native; }

VtkSquarifyLayoutStrategyWrap::~VtkSquarifyLayoutStrategyWrap()
{ }

void VtkSquarifyLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTreeMapLayoutStrategyWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTreeMapLayoutStrategyWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkSquarifyLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkSquarifyLayoutStrategy").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("SquarifyLayoutStrategy").ToLocalChecked(),tpl->GetFunction());
}

void VtkSquarifyLayoutStrategyWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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

}

void VtkSquarifyLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSquarifyLayoutStrategy> native = vtkSmartPointer<vtkSquarifyLayoutStrategy>::New();
		VtkSquarifyLayoutStrategyWrap* obj = new VtkSquarifyLayoutStrategyWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSquarifyLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSquarifyLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSquarifyLayoutStrategyWrap>(info.Holder());
	vtkSquarifyLayoutStrategy *native = (vtkSquarifyLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSquarifyLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSquarifyLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSquarifyLayoutStrategyWrap>(info.Holder());
	vtkSquarifyLayoutStrategy *native = (vtkSquarifyLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkSquarifyLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSquarifyLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSquarifyLayoutStrategyWrap>(info.Holder());
	vtkSquarifyLayoutStrategy *native = (vtkSquarifyLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTreeWrap *a0 = ObjectWrap::Unwrap<VtkTreeWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject())
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

void VtkSquarifyLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSquarifyLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSquarifyLayoutStrategyWrap>(info.Holder());
	vtkSquarifyLayoutStrategy *native = (vtkSquarifyLayoutStrategy *)wrapper->native.GetPointer();
	vtkSquarifyLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSquarifyLayoutStrategyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSquarifyLayoutStrategyWrap *w = new VtkSquarifyLayoutStrategyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSquarifyLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSquarifyLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkSquarifyLayoutStrategyWrap>(info.Holder());
	vtkSquarifyLayoutStrategy *native = (vtkSquarifyLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSquarifyLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkSquarifyLayoutStrategyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSquarifyLayoutStrategyWrap *w = new VtkSquarifyLayoutStrategyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

