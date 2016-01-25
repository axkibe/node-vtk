/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectTreeWrap.h"
#include "vtkMultiBlockDataSetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"
#include "vtkCompositeDataIteratorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkMultiBlockDataSetWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkMultiBlockDataSetWrap::ptpl;

VtkMultiBlockDataSetWrap::VtkMultiBlockDataSetWrap()
{ }

VtkMultiBlockDataSetWrap::VtkMultiBlockDataSetWrap(vtkSmartPointer<vtkMultiBlockDataSet> _native)
{ native = _native; }

VtkMultiBlockDataSetWrap::~VtkMultiBlockDataSetWrap()
{ }

void VtkMultiBlockDataSetWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectTreeWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectTreeWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkMultiBlockDataSetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkMultiBlockDataSet").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("MultiBlockDataSet").ToLocalChecked(),tpl->GetFunction());
}

void VtkMultiBlockDataSetWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetMetaData", GetMetaData);
	Nan::SetPrototypeMethod(tpl, "getMetaData", GetMetaData);

	Nan::SetPrototypeMethod(tpl, "HasMetaData", HasMetaData);
	Nan::SetPrototypeMethod(tpl, "hasMetaData", HasMetaData);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkMultiBlockDataSetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMultiBlockDataSet> native = vtkSmartPointer<vtkMultiBlockDataSet>::New();
		VtkMultiBlockDataSetWrap* obj = new VtkMultiBlockDataSetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMultiBlockDataSetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiBlockDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkMultiBlockDataSetWrap>(info.Holder());
	vtkMultiBlockDataSet *native = (vtkMultiBlockDataSet *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMultiBlockDataSetWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiBlockDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkMultiBlockDataSetWrap>(info.Holder());
	vtkMultiBlockDataSet *native = (vtkMultiBlockDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkMultiBlockDataSet * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::Function>(VtkMultiBlockDataSetWrap::constructor);
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkMultiBlockDataSetWrap *w = new VtkMultiBlockDataSetWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkMultiBlockDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkMultiBlockDataSetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMultiBlockDataSetWrap *w = new VtkMultiBlockDataSetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMultiBlockDataSetWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiBlockDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkMultiBlockDataSetWrap>(info.Holder());
	vtkMultiBlockDataSet *native = (vtkMultiBlockDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMultiBlockDataSetWrap::GetMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiBlockDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkMultiBlockDataSetWrap>(info.Holder());
	vtkMultiBlockDataSet *native = (vtkMultiBlockDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkCompositeDataIteratorWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info[0]->ToObject());
		vtkInformation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetMetaData(
			(vtkCompositeDataIterator *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkInformationWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationWrap *w = new VtkInformationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMultiBlockDataSetWrap::HasMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiBlockDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkMultiBlockDataSetWrap>(info.Holder());
	vtkMultiBlockDataSet *native = (vtkMultiBlockDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkCompositeDataIteratorWrap *a0 = ObjectWrap::Unwrap<VtkCompositeDataIteratorWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->HasMetaData(
			(vtkCompositeDataIterator *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMultiBlockDataSetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiBlockDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkMultiBlockDataSetWrap>(info.Holder());
	vtkMultiBlockDataSet *native = (vtkMultiBlockDataSet *)wrapper->native.GetPointer();
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

void VtkMultiBlockDataSetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiBlockDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkMultiBlockDataSetWrap>(info.Holder());
	vtkMultiBlockDataSet *native = (vtkMultiBlockDataSet *)wrapper->native.GetPointer();
	vtkMultiBlockDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMultiBlockDataSetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiBlockDataSetWrap *w = new VtkMultiBlockDataSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMultiBlockDataSetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMultiBlockDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkMultiBlockDataSetWrap>(info.Holder());
	vtkMultiBlockDataSet *native = (vtkMultiBlockDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMultiBlockDataSet * r;
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
			Nan::New<v8::Function>(VtkMultiBlockDataSetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMultiBlockDataSetWrap *w = new VtkMultiBlockDataSetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

