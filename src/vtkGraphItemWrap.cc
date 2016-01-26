/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkContextItemWrap.h"
#include "vtkGraphItemWrap.h"
#include "vtkObjectWrap.h"
#include "vtkGraphWrap.h"
#include "vtkIncrementalForceLayoutWrap.h"
#include "vtkRenderWindowInteractorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGraphItemWrap::ptpl;

VtkGraphItemWrap::VtkGraphItemWrap()
{ }

VtkGraphItemWrap::VtkGraphItemWrap(vtkSmartPointer<vtkGraphItem> _native)
{ native = _native; }

VtkGraphItemWrap::~VtkGraphItemWrap()
{ }

void VtkGraphItemWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGraphItem").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GraphItem").ToLocalChecked(), ConstructorGetter);
}

void VtkGraphItemWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGraphItemWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGraphItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGraph", GetGraph);
	Nan::SetPrototypeMethod(tpl, "getGraph", GetGraph);

	Nan::SetPrototypeMethod(tpl, "GetLayout", GetLayout);
	Nan::SetPrototypeMethod(tpl, "getLayout", GetLayout);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGraph", SetGraph);
	Nan::SetPrototypeMethod(tpl, "setGraph", SetGraph);

	Nan::SetPrototypeMethod(tpl, "StartLayoutAnimation", StartLayoutAnimation);
	Nan::SetPrototypeMethod(tpl, "startLayoutAnimation", StartLayoutAnimation);

	Nan::SetPrototypeMethod(tpl, "StopLayoutAnimation", StopLayoutAnimation);
	Nan::SetPrototypeMethod(tpl, "stopLayoutAnimation", StopLayoutAnimation);

	Nan::SetPrototypeMethod(tpl, "UpdateLayout", UpdateLayout);
	Nan::SetPrototypeMethod(tpl, "updateLayout", UpdateLayout);

	ptpl.Reset( tpl );
}

void VtkGraphItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGraphItem> native = vtkSmartPointer<vtkGraphItem>::New();
		VtkGraphItemWrap* obj = new VtkGraphItemWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGraphItemWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphItemWrap *wrapper = ObjectWrap::Unwrap<VtkGraphItemWrap>(info.Holder());
	vtkGraphItem *native = (vtkGraphItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphItemWrap::GetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphItemWrap *wrapper = ObjectWrap::Unwrap<VtkGraphItemWrap>(info.Holder());
	vtkGraphItem *native = (vtkGraphItem *)wrapper->native.GetPointer();
	vtkGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGraph();
		VtkGraphWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGraphWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphWrap *w = new VtkGraphWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphItemWrap::GetLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphItemWrap *wrapper = ObjectWrap::Unwrap<VtkGraphItemWrap>(info.Holder());
	vtkGraphItem *native = (vtkGraphItem *)wrapper->native.GetPointer();
	vtkIncrementalForceLayout * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLayout();
		VtkIncrementalForceLayoutWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIncrementalForceLayoutWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalForceLayoutWrap *w = new VtkIncrementalForceLayoutWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphItemWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphItemWrap *wrapper = ObjectWrap::Unwrap<VtkGraphItemWrap>(info.Holder());
	vtkGraphItem *native = (vtkGraphItem *)wrapper->native.GetPointer();
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

void VtkGraphItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphItemWrap *wrapper = ObjectWrap::Unwrap<VtkGraphItemWrap>(info.Holder());
	vtkGraphItem *native = (vtkGraphItem *)wrapper->native.GetPointer();
	vtkGraphItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGraphItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGraphItemWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphItemWrap *w = new VtkGraphItemWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphItemWrap *wrapper = ObjectWrap::Unwrap<VtkGraphItemWrap>(info.Holder());
	vtkGraphItem *native = (vtkGraphItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGraphItem * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGraphItemWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGraphItemWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphItemWrap *w = new VtkGraphItemWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphItemWrap::SetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphItemWrap *wrapper = ObjectWrap::Unwrap<VtkGraphItemWrap>(info.Holder());
	vtkGraphItem *native = (vtkGraphItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[0]))
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

void VtkGraphItemWrap::StartLayoutAnimation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphItemWrap *wrapper = ObjectWrap::Unwrap<VtkGraphItemWrap>(info.Holder());
	vtkGraphItem *native = (vtkGraphItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowInteractorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowInteractorWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowInteractorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->StartLayoutAnimation(
			(vtkRenderWindowInteractor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphItemWrap::StopLayoutAnimation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphItemWrap *wrapper = ObjectWrap::Unwrap<VtkGraphItemWrap>(info.Holder());
	vtkGraphItem *native = (vtkGraphItem *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->StopLayoutAnimation();
}

void VtkGraphItemWrap::UpdateLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphItemWrap *wrapper = ObjectWrap::Unwrap<VtkGraphItemWrap>(info.Holder());
	vtkGraphItem *native = (vtkGraphItem *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UpdateLayout();
}

