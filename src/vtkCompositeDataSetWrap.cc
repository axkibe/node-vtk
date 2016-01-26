/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectWrap.h"
#include "vtkCompositeDataSetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCompositeDataIteratorWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"
#include "vtkInformationStringKeyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompositeDataSetWrap::ptpl;

VtkCompositeDataSetWrap::VtkCompositeDataSetWrap()
{ }

VtkCompositeDataSetWrap::VtkCompositeDataSetWrap(vtkSmartPointer<vtkCompositeDataSet> _native)
{ native = _native; }

VtkCompositeDataSetWrap::~VtkCompositeDataSetWrap()
{ }

void VtkCompositeDataSetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompositeDataSet").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompositeDataSet").ToLocalChecked(), ConstructorGetter);
}

void VtkCompositeDataSetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompositeDataSetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompositeDataSetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CopyStructure", CopyStructure);
	Nan::SetPrototypeMethod(tpl, "copyStructure", CopyStructure);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetDataSet", GetDataSet);
	Nan::SetPrototypeMethod(tpl, "getDataSet", GetDataSet);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NAME", NAME);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NewIterator", NewIterator);
	Nan::SetPrototypeMethod(tpl, "newIterator", NewIterator);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDataSet", SetDataSet);
	Nan::SetPrototypeMethod(tpl, "setDataSet", SetDataSet);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkCompositeDataSetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkCompositeDataSetWrap::CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompositeDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompositeDataSetWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyStructure(
			(vtkCompositeDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataSetWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataSetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompositeDataSetWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkCompositeDataSet * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
				VtkCompositeDataSetWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkCompositeDataSetWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkCompositeDataSetWrap *w = new VtkCompositeDataSetWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkCompositeDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
			VtkCompositeDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompositeDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositeDataSetWrap *w = new VtkCompositeDataSetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataSetWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompositeDataSetWrap::GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompositeDataIteratorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompositeDataIteratorWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info[0]->ToObject());
		vtkDataObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetDataSet(
			(vtkCompositeDataIterator *) a0->native.GetPointer()
		);
			VtkDataObjectWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataObjectWrap *w = new VtkDataObjectWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataSetWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkCompositeDataSetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
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

void VtkCompositeDataSetWrap::NAME(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
	vtkInformationStringKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NAME();
		VtkInformationStringKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationStringKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationStringKeyWrap *w = new VtkInformationStringKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataSetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
	vtkCompositeDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCompositeDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataSetWrap *w = new VtkCompositeDataSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataSetWrap::NewIterator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
	vtkCompositeDataIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewIterator();
		VtkCompositeDataIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeDataIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataIteratorWrap *w = new VtkCompositeDataIteratorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataSetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompositeDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCompositeDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompositeDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositeDataSetWrap *w = new VtkCompositeDataSetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataSetWrap::SetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCompositeDataIteratorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCompositeDataIteratorWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetDataSet(
				(vtkCompositeDataIterator *) a0->native.GetPointer(),
				(vtkDataObject *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataSetWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataSetWrap>(info.Holder());
	vtkCompositeDataSet *native = (vtkCompositeDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

