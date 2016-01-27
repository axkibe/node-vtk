/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUndirectedGraphWrap.h"
#include "vtkMutableUndirectedGraphWrap.h"
#include "vtkObjectWrap.h"
#include "vtkVariantArrayWrap.h"
#include "vtkIdTypeArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMutableUndirectedGraphWrap::ptpl;

VtkMutableUndirectedGraphWrap::VtkMutableUndirectedGraphWrap()
{ }

VtkMutableUndirectedGraphWrap::VtkMutableUndirectedGraphWrap(vtkSmartPointer<vtkMutableUndirectedGraph> _native)
{ native = _native; }

VtkMutableUndirectedGraphWrap::~VtkMutableUndirectedGraphWrap()
{ }

void VtkMutableUndirectedGraphWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMutableUndirectedGraph").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MutableUndirectedGraph").ToLocalChecked(), ConstructorGetter);
}

void VtkMutableUndirectedGraphWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMutableUndirectedGraphWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUndirectedGraphWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUndirectedGraphWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMutableUndirectedGraphWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

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

	ptpl.Reset( tpl );
}

void VtkMutableUndirectedGraphWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMutableUndirectedGraph> native = vtkSmartPointer<vtkMutableUndirectedGraph>::New();
		VtkMutableUndirectedGraphWrap* obj = new VtkMutableUndirectedGraphWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMutableUndirectedGraphWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableUndirectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkMutableUndirectedGraphWrap>(info.Holder());
	vtkMutableUndirectedGraph *native = (vtkMutableUndirectedGraph *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMutableUndirectedGraphWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableUndirectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkMutableUndirectedGraphWrap>(info.Holder());
	vtkMutableUndirectedGraph *native = (vtkMutableUndirectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkMutableUndirectedGraphWrap::LazyAddVertex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableUndirectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkMutableUndirectedGraphWrap>(info.Holder());
	vtkMutableUndirectedGraph *native = (vtkMutableUndirectedGraph *)wrapper->native.GetPointer();
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

void VtkMutableUndirectedGraphWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableUndirectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkMutableUndirectedGraphWrap>(info.Holder());
	vtkMutableUndirectedGraph *native = (vtkMutableUndirectedGraph *)wrapper->native.GetPointer();
	vtkMutableUndirectedGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMutableUndirectedGraphWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMutableUndirectedGraphWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMutableUndirectedGraphWrap *w = new VtkMutableUndirectedGraphWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMutableUndirectedGraphWrap::RemoveEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableUndirectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkMutableUndirectedGraphWrap>(info.Holder());
	vtkMutableUndirectedGraph *native = (vtkMutableUndirectedGraph *)wrapper->native.GetPointer();
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

void VtkMutableUndirectedGraphWrap::RemoveVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableUndirectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkMutableUndirectedGraphWrap>(info.Holder());
	vtkMutableUndirectedGraph *native = (vtkMutableUndirectedGraph *)wrapper->native.GetPointer();
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

void VtkMutableUndirectedGraphWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMutableUndirectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkMutableUndirectedGraphWrap>(info.Holder());
	vtkMutableUndirectedGraph *native = (vtkMutableUndirectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMutableUndirectedGraph * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMutableUndirectedGraphWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMutableUndirectedGraphWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMutableUndirectedGraphWrap *w = new VtkMutableUndirectedGraphWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

