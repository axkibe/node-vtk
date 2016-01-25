/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkCompositeDataIteratorWrap.h"
#include "vtkCompositeDataSetWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCompositeDataIteratorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkCompositeDataIteratorWrap::ptpl;

VtkCompositeDataIteratorWrap::VtkCompositeDataIteratorWrap()
{ }

VtkCompositeDataIteratorWrap::VtkCompositeDataIteratorWrap(vtkSmartPointer<vtkCompositeDataIterator> _native)
{ native = _native; }

VtkCompositeDataIteratorWrap::~VtkCompositeDataIteratorWrap()
{ }

void VtkCompositeDataIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkCompositeDataIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkCompositeDataIterator").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CompositeDataIterator").ToLocalChecked(),tpl->GetFunction());
}

void VtkCompositeDataIteratorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentDataObject", GetCurrentDataObject);
	Nan::SetPrototypeMethod(tpl, "getCurrentDataObject", GetCurrentDataObject);

	Nan::SetPrototypeMethod(tpl, "GetCurrentMetaData", GetCurrentMetaData);
	Nan::SetPrototypeMethod(tpl, "getCurrentMetaData", GetCurrentMetaData);

	Nan::SetPrototypeMethod(tpl, "GetDataSet", GetDataSet);
	Nan::SetPrototypeMethod(tpl, "getDataSet", GetDataSet);

	Nan::SetPrototypeMethod(tpl, "GetReverse", GetReverse);
	Nan::SetPrototypeMethod(tpl, "getReverse", GetReverse);

	Nan::SetPrototypeMethod(tpl, "GetSkipEmptyNodes", GetSkipEmptyNodes);
	Nan::SetPrototypeMethod(tpl, "getSkipEmptyNodes", GetSkipEmptyNodes);

	Nan::SetPrototypeMethod(tpl, "GoToFirstItem", GoToFirstItem);
	Nan::SetPrototypeMethod(tpl, "goToFirstItem", GoToFirstItem);

	Nan::SetPrototypeMethod(tpl, "GoToNextItem", GoToNextItem);
	Nan::SetPrototypeMethod(tpl, "goToNextItem", GoToNextItem);

	Nan::SetPrototypeMethod(tpl, "HasCurrentMetaData", HasCurrentMetaData);
	Nan::SetPrototypeMethod(tpl, "hasCurrentMetaData", HasCurrentMetaData);

	Nan::SetPrototypeMethod(tpl, "InitReverseTraversal", InitReverseTraversal);
	Nan::SetPrototypeMethod(tpl, "initReverseTraversal", InitReverseTraversal);

	Nan::SetPrototypeMethod(tpl, "InitTraversal", InitTraversal);
	Nan::SetPrototypeMethod(tpl, "initTraversal", InitTraversal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsDoneWithTraversal", IsDoneWithTraversal);
	Nan::SetPrototypeMethod(tpl, "isDoneWithTraversal", IsDoneWithTraversal);

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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
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

void VtkCompositeDataIteratorWrap::GetCurrentDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentDataObject();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDataObjectWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataIteratorWrap::GetCurrentMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	vtkInformation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentMetaData();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationWrap *w = new VtkInformationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCompositeDataSetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataSetWrap *w = new VtkCompositeDataSetWrap();
	w->native.TakeReference(r);
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

void VtkCompositeDataIteratorWrap::GoToFirstItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GoToFirstItem();
}

void VtkCompositeDataIteratorWrap::GoToNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GoToNextItem();
}

void VtkCompositeDataIteratorWrap::HasCurrentMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasCurrentMetaData();
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

void VtkCompositeDataIteratorWrap::IsDoneWithTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsDoneWithTraversal();
	info.GetReturnValue().Set(Nan::New(r));
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCompositeDataIteratorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataIteratorWrap *w = new VtkCompositeDataIteratorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info.Holder());
	vtkCompositeDataIterator *native = (vtkCompositeDataIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkCompositeDataIteratorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositeDataIteratorWrap *w = new VtkCompositeDataIteratorWrap();
		w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsObject())
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
