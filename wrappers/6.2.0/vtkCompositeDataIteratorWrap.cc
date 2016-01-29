/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkCompositeDataIteratorWrap.h"
#include "vtkCompositeDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompositeDataIteratorWrap::ptpl;

VtkCompositeDataIteratorWrap::VtkCompositeDataIteratorWrap()
{ }

VtkCompositeDataIteratorWrap::VtkCompositeDataIteratorWrap(vtkSmartPointer<vtkCompositeDataIterator> _native)
{ native = _native; }

VtkCompositeDataIteratorWrap::~VtkCompositeDataIteratorWrap()
{ }

void VtkCompositeDataIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompositeDataIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompositeDataIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkCompositeDataIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompositeDataIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompositeDataIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataSet", GetDataSet);
	Nan::SetPrototypeMethod(tpl, "getDataSet", GetDataSet);

	Nan::SetPrototypeMethod(tpl, "GetReverse", GetReverse);
	Nan::SetPrototypeMethod(tpl, "getReverse", GetReverse);

	Nan::SetPrototypeMethod(tpl, "GetSkipEmptyNodes", GetSkipEmptyNodes);
	Nan::SetPrototypeMethod(tpl, "getSkipEmptyNodes", GetSkipEmptyNodes);

	Nan::SetPrototypeMethod(tpl, "InitReverseTraversal", InitReverseTraversal);
	Nan::SetPrototypeMethod(tpl, "initReverseTraversal", InitReverseTraversal);

	Nan::SetPrototypeMethod(tpl, "InitTraversal", InitTraversal);
	Nan::SetPrototypeMethod(tpl, "initTraversal", InitTraversal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDataSet", SetDataSet);
	Nan::SetPrototypeMethod(tpl, "setDataSet", SetDataSet);

	Nan::SetPrototypeMethod(tpl, "SetSkipEmptyNodes", SetSkipEmptyNodes);
	Nan::SetPrototypeMethod(tpl, "setSkipEmptyNodes", SetSkipEmptyNodes);

	Nan::SetPrototypeMethod(tpl, "SkipEmptyNodesOff", SkipEmptyNodesOff);
	Nan::SetPrototypeMethod(tpl, "skipEmptyNodesOff", SkipEmptyNodesOff);

	Nan::SetPrototypeMethod(tpl, "SkipEmptyNodesOn", SkipEmptyNodesOn);
	Nan::SetPrototypeMethod(tpl, "skipEmptyNodesOn", SkipEmptyNodesOn);

	ptpl.Reset( tpl );
}

void VtkCompositeDataIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCompositeDataIteratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompositeDataIteratorWrap::GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	vtkCompositeDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataSet();
		VtkCompositeDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataSetWrap *w = new VtkCompositeDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataIteratorWrap::GetReverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReverse();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompositeDataIteratorWrap::GetSkipEmptyNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSkipEmptyNodes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompositeDataIteratorWrap::InitReverseTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitReverseTraversal();
}

void VtkCompositeDataIteratorWrap::InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitTraversal();
}

void VtkCompositeDataIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
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

void VtkCompositeDataIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	vtkCompositeDataIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCompositeDataIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeDataIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataIteratorWrap *w = new VtkCompositeDataIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompositeDataIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCompositeDataIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompositeDataIteratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositeDataIteratorWrap *w = new VtkCompositeDataIteratorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataIteratorWrap::SetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompositeDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompositeDataSetWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataSet(
			(vtkCompositeDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataIteratorWrap::SetSkipEmptyNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSkipEmptyNodes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataIteratorWrap::SkipEmptyNodesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SkipEmptyNodesOff();
}

void VtkCompositeDataIteratorWrap::SkipEmptyNodesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SkipEmptyNodesOn();
}

