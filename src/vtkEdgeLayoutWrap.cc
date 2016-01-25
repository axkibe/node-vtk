/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphAlgorithmWrap.h"
#include "vtkEdgeLayoutWrap.h"
#include "vtkObjectWrap.h"
#include "vtkEdgeLayoutStrategyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkEdgeLayoutWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkEdgeLayoutWrap::ptpl;

VtkEdgeLayoutWrap::VtkEdgeLayoutWrap()
{ }

VtkEdgeLayoutWrap::VtkEdgeLayoutWrap(vtkSmartPointer<vtkEdgeLayout> _native)
{ native = _native; }

VtkEdgeLayoutWrap::~VtkEdgeLayoutWrap()
{ }

void VtkEdgeLayoutWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkEdgeLayoutWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkEdgeLayout").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("EdgeLayout").ToLocalChecked(),tpl->GetFunction());
}

void VtkEdgeLayoutWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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

	Nan::SetPrototypeMethod(tpl, "SetLayoutStrategy", SetLayoutStrategy);
	Nan::SetPrototypeMethod(tpl, "setLayoutStrategy", SetLayoutStrategy);

}

void VtkEdgeLayoutWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkEdgeLayout> native = vtkSmartPointer<vtkEdgeLayout>::New();
		VtkEdgeLayoutWrap* obj = new VtkEdgeLayoutWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkEdgeLayoutWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutWrap>(info.Holder());
	vtkEdgeLayout *native = (vtkEdgeLayout *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEdgeLayoutWrap::GetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutWrap>(info.Holder());
	vtkEdgeLayout *native = (vtkEdgeLayout *)wrapper->native.GetPointer();
	vtkEdgeLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLayoutStrategy();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkEdgeLayoutStrategyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEdgeLayoutStrategyWrap *w = new VtkEdgeLayoutStrategyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEdgeLayoutWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutWrap>(info.Holder());
	vtkEdgeLayout *native = (vtkEdgeLayout *)wrapper->native.GetPointer();
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

void VtkEdgeLayoutWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutWrap>(info.Holder());
	vtkEdgeLayout *native = (vtkEdgeLayout *)wrapper->native.GetPointer();
	vtkEdgeLayout * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkEdgeLayoutWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEdgeLayoutWrap *w = new VtkEdgeLayoutWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEdgeLayoutWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutWrap>(info.Holder());
	vtkEdgeLayout *native = (vtkEdgeLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkEdgeLayout * r;
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
			Nan::New<v8::Function>(VtkEdgeLayoutWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEdgeLayoutWrap *w = new VtkEdgeLayoutWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEdgeLayoutWrap::SetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutWrap>(info.Holder());
	vtkEdgeLayout *native = (vtkEdgeLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkEdgeLayoutStrategyWrap *a0 = ObjectWrap::Unwrap<VtkEdgeLayoutStrategyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLayoutStrategy(
			(vtkEdgeLayoutStrategy *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

