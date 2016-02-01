/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataArrayWrap.h"
#include "vtkBitArrayWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIdListWrap.h"
#include "vtkAbstractArrayWrap.h"
#include "vtkArrayIteratorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBitArrayWrap::ptpl;

VtkBitArrayWrap::VtkBitArrayWrap()
{ }

VtkBitArrayWrap::VtkBitArrayWrap(vtkSmartPointer<vtkBitArray> _native)
{ native = _native; }

VtkBitArrayWrap::~VtkBitArrayWrap()
{ }

void VtkBitArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBitArray").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BitArray").ToLocalChecked(), ConstructorGetter);
}

void VtkBitArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBitArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataArrayWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataArrayWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBitArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClearLookup", ClearLookup);
	Nan::SetPrototypeMethod(tpl, "clearLookup", ClearLookup);

	Nan::SetPrototypeMethod(tpl, "DataChanged", DataChanged);
	Nan::SetPrototypeMethod(tpl, "dataChanged", DataChanged);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataType", GetDataType);
	Nan::SetPrototypeMethod(tpl, "getDataType", GetDataType);

	Nan::SetPrototypeMethod(tpl, "GetDataTypeSize", GetDataTypeSize);
	Nan::SetPrototypeMethod(tpl, "getDataTypeSize", GetDataTypeSize);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "InsertTuples", InsertTuples);
	Nan::SetPrototypeMethod(tpl, "insertTuples", InsertTuples);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LookupValue", LookupValue);
	Nan::SetPrototypeMethod(tpl, "lookupValue", LookupValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NewIterator", NewIterator);
	Nan::SetPrototypeMethod(tpl, "newIterator", NewIterator);

	Nan::SetPrototypeMethod(tpl, "RemoveFirstTuple", RemoveFirstTuple);
	Nan::SetPrototypeMethod(tpl, "removeFirstTuple", RemoveFirstTuple);

	Nan::SetPrototypeMethod(tpl, "RemoveLastTuple", RemoveLastTuple);
	Nan::SetPrototypeMethod(tpl, "removeLastTuple", RemoveLastTuple);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Squeeze", Squeeze);
	Nan::SetPrototypeMethod(tpl, "squeeze", Squeeze);

	ptpl.Reset( tpl );
}

void VtkBitArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBitArray> native = vtkSmartPointer<vtkBitArray>::New();
		VtkBitArrayWrap* obj = new VtkBitArrayWrap(native);
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

void VtkBitArrayWrap::ClearLookup(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearLookup();
}

void VtkBitArrayWrap::DataChanged(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DataChanged();
}

void VtkBitArrayWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkAbstractArray *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBitArrayWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBitArrayWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBitArrayWrap::GetDataTypeSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBitArrayWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkBitArrayWrap::InsertTuples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdListWrap *a0 = ObjectWrap::Unwrap<VtkIdListWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIdListWrap *a1 = ObjectWrap::Unwrap<VtkIdListWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkAbstractArrayWrap *a2 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->InsertTuples(
					(vtkIdList *) a0->native.GetPointer(),
					(vtkIdList *) a1->native.GetPointer(),
					(vtkAbstractArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBitArrayWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
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

void VtkBitArrayWrap::LookupValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIdListWrap *a1 = ObjectWrap::Unwrap<VtkIdListWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->LookupValue(
				info[0]->Int32Value(),
				(vtkIdList *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBitArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	vtkBitArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBitArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBitArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBitArrayWrap *w = new VtkBitArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBitArrayWrap::NewIterator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	vtkArrayIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewIterator();
		VtkArrayIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkArrayIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkArrayIteratorWrap *w = new VtkArrayIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBitArrayWrap::RemoveFirstTuple(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveFirstTuple();
}

void VtkBitArrayWrap::RemoveLastTuple(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveLastTuple();
}

void VtkBitArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBitArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBitArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBitArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBitArrayWrap *w = new VtkBitArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBitArrayWrap::Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayWrap>(info.Holder());
	vtkBitArray *native = (vtkBitArray *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Squeeze();
}

