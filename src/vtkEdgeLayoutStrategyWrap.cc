/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkEdgeLayoutStrategyWrap.h"
#include "vtkGraphWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkEdgeLayoutStrategyWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkEdgeLayoutStrategyWrap::ptpl;

VtkEdgeLayoutStrategyWrap::VtkEdgeLayoutStrategyWrap()
{ }

VtkEdgeLayoutStrategyWrap::VtkEdgeLayoutStrategyWrap(vtkSmartPointer<vtkEdgeLayoutStrategy> _native)
{ native = _native; }

VtkEdgeLayoutStrategyWrap::~VtkEdgeLayoutStrategyWrap()
{ }

void VtkEdgeLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkEdgeLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkEdgeLayoutStrategy").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("EdgeLayoutStrategy").ToLocalChecked(),tpl->GetFunction());
}

void VtkEdgeLayoutStrategyWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEdgeWeightArrayName", GetEdgeWeightArrayName);
	Nan::SetPrototypeMethod(tpl, "getEdgeWeightArrayName", GetEdgeWeightArrayName);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEdgeWeightArrayName", SetEdgeWeightArrayName);
	Nan::SetPrototypeMethod(tpl, "setEdgeWeightArrayName", SetEdgeWeightArrayName);

	Nan::SetPrototypeMethod(tpl, "SetGraph", SetGraph);
	Nan::SetPrototypeMethod(tpl, "setGraph", SetGraph);

}

void VtkEdgeLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkEdgeLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutStrategyWrap>(info.Holder());
	vtkEdgeLayoutStrategy *native = (vtkEdgeLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEdgeLayoutStrategyWrap::GetEdgeWeightArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutStrategyWrap>(info.Holder());
	vtkEdgeLayoutStrategy *native = (vtkEdgeLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeWeightArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEdgeLayoutStrategyWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutStrategyWrap>(info.Holder());
	vtkEdgeLayoutStrategy *native = (vtkEdgeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkEdgeLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutStrategyWrap>(info.Holder());
	vtkEdgeLayoutStrategy *native = (vtkEdgeLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkEdgeLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutStrategyWrap>(info.Holder());
	vtkEdgeLayoutStrategy *native = (vtkEdgeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkEdgeLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutStrategyWrap>(info.Holder());
	vtkEdgeLayoutStrategy *native = (vtkEdgeLayoutStrategy *)wrapper->native.GetPointer();
	vtkEdgeLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
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

void VtkEdgeLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutStrategyWrap>(info.Holder());
	vtkEdgeLayoutStrategy *native = (vtkEdgeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkEdgeLayoutStrategy * r;
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
			Nan::New<v8::Function>(VtkEdgeLayoutStrategyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEdgeLayoutStrategyWrap *w = new VtkEdgeLayoutStrategyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEdgeLayoutStrategyWrap::SetEdgeWeightArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutStrategyWrap>(info.Holder());
	vtkEdgeLayoutStrategy *native = (vtkEdgeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdgeWeightArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEdgeLayoutStrategyWrap::SetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeLayoutStrategyWrap>(info.Holder());
	vtkEdgeLayoutStrategy *native = (vtkEdgeLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGraph(
			(vtkGraph *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
