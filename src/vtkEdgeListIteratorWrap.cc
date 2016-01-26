/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkEdgeListIteratorWrap.h"
#include "vtkGraphWrap.h"
#include "vtkGraphEdgeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkEdgeListIteratorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkEdgeListIteratorWrap::ptpl;

VtkEdgeListIteratorWrap::VtkEdgeListIteratorWrap()
{ }

VtkEdgeListIteratorWrap::VtkEdgeListIteratorWrap(vtkSmartPointer<vtkEdgeListIterator> _native)
{ native = _native; }

VtkEdgeListIteratorWrap::~VtkEdgeListIteratorWrap()
{ }

void VtkEdgeListIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkEdgeListIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("EdgeListIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkEdgeListIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkEdgeListIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkEdgeListIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGraph", GetGraph);
	Nan::SetPrototypeMethod(tpl, "getGraph", GetGraph);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NextGraphEdge", NextGraphEdge);
	Nan::SetPrototypeMethod(tpl, "nextGraphEdge", NextGraphEdge);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGraph", SetGraph);
	Nan::SetPrototypeMethod(tpl, "setGraph", SetGraph);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkEdgeListIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkEdgeListIterator> native = vtkSmartPointer<vtkEdgeListIterator>::New();
		VtkEdgeListIteratorWrap* obj = new VtkEdgeListIteratorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkEdgeListIteratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeListIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeListIteratorWrap>(info.Holder());
	vtkEdgeListIterator *native = (vtkEdgeListIterator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkEdgeListIteratorWrap::GetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeListIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeListIteratorWrap>(info.Holder());
	vtkEdgeListIterator *native = (vtkEdgeListIterator *)wrapper->native.GetPointer();
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
		Nan::New<v8::Function>(VtkGraphWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphWrap *w = new VtkGraphWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEdgeListIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeListIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeListIteratorWrap>(info.Holder());
	vtkEdgeListIterator *native = (vtkEdgeListIterator *)wrapper->native.GetPointer();
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

void VtkEdgeListIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeListIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeListIteratorWrap>(info.Holder());
	vtkEdgeListIterator *native = (vtkEdgeListIterator *)wrapper->native.GetPointer();
	vtkEdgeListIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkEdgeListIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkEdgeListIteratorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEdgeListIteratorWrap *w = new VtkEdgeListIteratorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEdgeListIteratorWrap::NextGraphEdge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeListIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeListIteratorWrap>(info.Holder());
	vtkEdgeListIterator *native = (vtkEdgeListIterator *)wrapper->native.GetPointer();
	vtkGraphEdge * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NextGraphEdge();
		VtkGraphEdgeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGraphEdgeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphEdgeWrap *w = new VtkGraphEdgeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEdgeListIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeListIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeListIteratorWrap>(info.Holder());
	vtkEdgeListIterator *native = (vtkEdgeListIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkEdgeListIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkEdgeListIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkEdgeListIteratorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEdgeListIteratorWrap *w = new VtkEdgeListIteratorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEdgeListIteratorWrap::SetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEdgeListIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkEdgeListIteratorWrap>(info.Holder());
	vtkEdgeListIterator *native = (vtkEdgeListIterator *)wrapper->native.GetPointer();
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

