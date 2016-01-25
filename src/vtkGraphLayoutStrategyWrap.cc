/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGraphLayoutStrategyWrap.h"
#include "vtkGraphWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGraphLayoutStrategyWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkGraphLayoutStrategyWrap::ptpl;

VtkGraphLayoutStrategyWrap::VtkGraphLayoutStrategyWrap()
{ }

VtkGraphLayoutStrategyWrap::VtkGraphLayoutStrategyWrap(vtkSmartPointer<vtkGraphLayoutStrategy> _native)
{ native = _native; }

VtkGraphLayoutStrategyWrap::~VtkGraphLayoutStrategyWrap()
{ }

void VtkGraphLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkGraphLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkGraphLayoutStrategy").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("GraphLayoutStrategy").ToLocalChecked(),tpl->GetFunction());
}

void VtkGraphLayoutStrategyWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEdgeWeightField", GetEdgeWeightField);
	Nan::SetPrototypeMethod(tpl, "getEdgeWeightField", GetEdgeWeightField);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsLayoutComplete", IsLayoutComplete);
	Nan::SetPrototypeMethod(tpl, "isLayoutComplete", IsLayoutComplete);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEdgeWeightField", SetEdgeWeightField);
	Nan::SetPrototypeMethod(tpl, "setEdgeWeightField", SetEdgeWeightField);

	Nan::SetPrototypeMethod(tpl, "SetGraph", SetGraph);
	Nan::SetPrototypeMethod(tpl, "setGraph", SetGraph);

}

void VtkGraphLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkGraphLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutStrategyWrap>(info.Holder());
	vtkGraphLayoutStrategy *native = (vtkGraphLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphLayoutStrategyWrap::GetEdgeWeightField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutStrategyWrap>(info.Holder());
	vtkGraphLayoutStrategy *native = (vtkGraphLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeWeightField();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphLayoutStrategyWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutStrategyWrap>(info.Holder());
	vtkGraphLayoutStrategy *native = (vtkGraphLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkGraphLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutStrategyWrap>(info.Holder());
	vtkGraphLayoutStrategy *native = (vtkGraphLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkGraphLayoutStrategyWrap::IsLayoutComplete(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutStrategyWrap>(info.Holder());
	vtkGraphLayoutStrategy *native = (vtkGraphLayoutStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsLayoutComplete();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutStrategyWrap>(info.Holder());
	vtkGraphLayoutStrategy *native = (vtkGraphLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkGraphLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutStrategyWrap>(info.Holder());
	vtkGraphLayoutStrategy *native = (vtkGraphLayoutStrategy *)wrapper->native.GetPointer();
	vtkGraphLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGraphLayoutStrategyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphLayoutStrategyWrap *w = new VtkGraphLayoutStrategyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutStrategyWrap>(info.Holder());
	vtkGraphLayoutStrategy *native = (vtkGraphLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGraphLayoutStrategy * r;
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
			Nan::New<v8::Function>(VtkGraphLayoutStrategyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphLayoutStrategyWrap *w = new VtkGraphLayoutStrategyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphLayoutStrategyWrap::SetEdgeWeightField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutStrategyWrap>(info.Holder());
	vtkGraphLayoutStrategy *native = (vtkGraphLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdgeWeightField(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphLayoutStrategyWrap::SetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGraphLayoutStrategyWrap>(info.Holder());
	vtkGraphLayoutStrategy *native = (vtkGraphLayoutStrategy *)wrapper->native.GetPointer();
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
