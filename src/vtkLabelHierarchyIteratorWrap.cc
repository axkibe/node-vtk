/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkLabelHierarchyIteratorWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkLabelHierarchyWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkLabelHierarchyIteratorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkLabelHierarchyIteratorWrap::ptpl;

VtkLabelHierarchyIteratorWrap::VtkLabelHierarchyIteratorWrap()
{ }

VtkLabelHierarchyIteratorWrap::VtkLabelHierarchyIteratorWrap(vtkSmartPointer<vtkLabelHierarchyIterator> _native)
{ native = _native; }

VtkLabelHierarchyIteratorWrap::~VtkLabelHierarchyIteratorWrap()
{ }

void VtkLabelHierarchyIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLabelHierarchyIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LabelHierarchyIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkLabelHierarchyIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLabelHierarchyIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLabelHierarchyIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Begin", Begin);
	Nan::SetPrototypeMethod(tpl, "begin", Begin);

	Nan::SetPrototypeMethod(tpl, "BoxAllNodes", BoxAllNodes);
	Nan::SetPrototypeMethod(tpl, "boxAllNodes", BoxAllNodes);

	Nan::SetPrototypeMethod(tpl, "BoxNode", BoxNode);
	Nan::SetPrototypeMethod(tpl, "boxNode", BoxNode);

	Nan::SetPrototypeMethod(tpl, "GetAllBounds", GetAllBounds);
	Nan::SetPrototypeMethod(tpl, "getAllBounds", GetAllBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHierarchy", GetHierarchy);
	Nan::SetPrototypeMethod(tpl, "getHierarchy", GetHierarchy);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetType", GetType);
	Nan::SetPrototypeMethod(tpl, "getType", GetType);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Next", Next);
	Nan::SetPrototypeMethod(tpl, "next", Next);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAllBounds", SetAllBounds);
	Nan::SetPrototypeMethod(tpl, "setAllBounds", SetAllBounds);

	Nan::SetPrototypeMethod(tpl, "SetTraversedBounds", SetTraversedBounds);
	Nan::SetPrototypeMethod(tpl, "setTraversedBounds", SetTraversedBounds);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkLabelHierarchyIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkLabelHierarchyIteratorWrap::Begin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdTypeArrayWrap *a0 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Begin(
			(vtkIdTypeArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyIteratorWrap::BoxAllNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->BoxAllNodes(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyIteratorWrap::BoxNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BoxNode();
}

void VtkLabelHierarchyIteratorWrap::GetAllBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAllBounds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabelHierarchyIteratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLabelHierarchyIteratorWrap::GetHierarchy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
	vtkLabelHierarchy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHierarchy();
		VtkLabelHierarchyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLabelHierarchyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLabelHierarchyWrap *w = new VtkLabelHierarchyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelHierarchyIteratorWrap::GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabelHierarchyIteratorWrap::GetType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabelHierarchyIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
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

void VtkLabelHierarchyIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
	vtkLabelHierarchyIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkLabelHierarchyIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLabelHierarchyIteratorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLabelHierarchyIteratorWrap *w = new VtkLabelHierarchyIteratorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelHierarchyIteratorWrap::Next(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Next();
}

void VtkLabelHierarchyIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLabelHierarchyIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkLabelHierarchyIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkLabelHierarchyIteratorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLabelHierarchyIteratorWrap *w = new VtkLabelHierarchyIteratorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyIteratorWrap::SetAllBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAllBounds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelHierarchyIteratorWrap::SetTraversedBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelHierarchyIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelHierarchyIteratorWrap>(info.Holder());
	vtkLabelHierarchyIterator *native = (vtkLabelHierarchyIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTraversedBounds(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

