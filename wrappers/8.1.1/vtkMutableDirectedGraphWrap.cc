/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDirectedGraphWrap.h"
#include "vtkMutableDirectedGraphWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkVariantArrayWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMutableDirectedGraphWrap::ptpl;

VtkMutableDirectedGraphWrap::VtkMutableDirectedGraphWrap()
{ }

VtkMutableDirectedGraphWrap::VtkMutableDirectedGraphWrap(vtkSmartPointer<vtkMutableDirectedGraph> _native)
{ native = _native; }

VtkMutableDirectedGraphWrap::~VtkMutableDirectedGraphWrap()
{ }

void VtkMutableDirectedGraphWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMutableDirectedGraph").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MutableDirectedGraph").ToLocalChecked(), ConstructorGetter);
}

void VtkMutableDirectedGraphWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMutableDirectedGraphWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDirectedGraphWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDirectedGraphWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMutableDirectedGraphWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "LazyAddVertex", LazyAddVertex);
	Nan::SetPrototypeMethod(tpl, "lazyAddVertex", LazyAddVertex);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveEdges", RemoveEdges);
	Nan::SetPrototypeMethod(tpl, "removeEdges", RemoveEdges);

	Nan::SetPrototypeMethod(tpl, "RemoveVertices", RemoveVertices);
	Nan::SetPrototypeMethod(tpl, "removeVertices", RemoveVertices);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKMUTABLEDIRECTEDGRAPHWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMUTABLEDIRECTEDGRAPHWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMutableDirectedGraphWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMutableDirectedGraph> native = vtkSmartPointer<vtkMutableDirectedGraph>::New();
		VtkMutableDirectedGraphWrap* obj = new VtkMutableDirectedGraphWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMutableDirectedGraphWrap::LazyAddVertex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableDirectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkMutableDirectedGraphWrap>(info.Holder());
	vtkMutableDirectedGraph *native = (vtkMutableDirectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkVariantArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkVariantArrayWrap *a0 = ObjectWrap::Unwrap<VtkVariantArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->LazyAddVertex(
			(vtkVariantArray *) a0->native.GetPointer()
		);
		return;
	}
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LazyAddVertex();
}

void VtkMutableDirectedGraphWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableDirectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkMutableDirectedGraphWrap>(info.Holder());
	vtkMutableDirectedGraph *native = (vtkMutableDirectedGraph *)wrapper->native.GetPointer();
	vtkMutableDirectedGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMutableDirectedGraphWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMutableDirectedGraphWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMutableDirectedGraphWrap *w = new VtkMutableDirectedGraphWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMutableDirectedGraphWrap::RemoveEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableDirectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkMutableDirectedGraphWrap>(info.Holder());
	vtkMutableDirectedGraph *native = (vtkMutableDirectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdTypeArrayWrap *a0 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveEdges(
			(vtkIdTypeArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMutableDirectedGraphWrap::RemoveVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableDirectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkMutableDirectedGraphWrap>(info.Holder());
	vtkMutableDirectedGraph *native = (vtkMutableDirectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdTypeArrayWrap *a0 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveVertices(
			(vtkIdTypeArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMutableDirectedGraphWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableDirectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkMutableDirectedGraphWrap>(info.Holder());
	vtkMutableDirectedGraph *native = (vtkMutableDirectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkMutableDirectedGraph * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkMutableDirectedGraphWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMutableDirectedGraphWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMutableDirectedGraphWrap *w = new VtkMutableDirectedGraphWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

