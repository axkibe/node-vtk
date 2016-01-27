/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCellIteratorWrap.h"
#include "vtkCellTypesWrap.h"
#include "vtkCellDataWrap.h"
#include "vtkPointDataWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"
#include "vtkFieldDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDataSetWrap::ptpl;

VtkDataSetWrap::VtkDataSetWrap()
{ }

VtkDataSetWrap::VtkDataSetWrap(vtkSmartPointer<vtkDataSet> _native)
{ native = _native; }

VtkDataSetWrap::~VtkDataSetWrap()
{ }

void VtkDataSetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDataSet").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DataSet").ToLocalChecked(), ConstructorGetter);
}

void VtkDataSetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDataSetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDataSetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CheckAttributes", CheckAttributes);
	Nan::SetPrototypeMethod(tpl, "checkAttributes", CheckAttributes);

	Nan::SetPrototypeMethod(tpl, "ComputeBounds", ComputeBounds);
	Nan::SetPrototypeMethod(tpl, "computeBounds", ComputeBounds);

	Nan::SetPrototypeMethod(tpl, "CopyAttributes", CopyAttributes);
	Nan::SetPrototypeMethod(tpl, "copyAttributes", CopyAttributes);

	Nan::SetPrototypeMethod(tpl, "CopyStructure", CopyStructure);
	Nan::SetPrototypeMethod(tpl, "copyStructure", CopyStructure);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetAttributesAsFieldData", GetAttributesAsFieldData);
	Nan::SetPrototypeMethod(tpl, "getAttributesAsFieldData", GetAttributesAsFieldData);

	Nan::SetPrototypeMethod(tpl, "GetCellData", GetCellData);
	Nan::SetPrototypeMethod(tpl, "getCellData", GetCellData);

	Nan::SetPrototypeMethod(tpl, "GetCellTypes", GetCellTypes);
	Nan::SetPrototypeMethod(tpl, "getCellTypes", GetCellTypes);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetLength", GetLength);
	Nan::SetPrototypeMethod(tpl, "getLength", GetLength);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellSize", GetMaxCellSize);
	Nan::SetPrototypeMethod(tpl, "getMaxCellSize", GetMaxCellSize);

	Nan::SetPrototypeMethod(tpl, "GetPointData", GetPointData);
	Nan::SetPrototypeMethod(tpl, "getPointData", GetPointData);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewCellIterator", NewCellIterator);
	Nan::SetPrototypeMethod(tpl, "newCellIterator", NewCellIterator);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "Squeeze", Squeeze);
	Nan::SetPrototypeMethod(tpl, "squeeze", Squeeze);

	ptpl.Reset( tpl );
}

void VtkDataSetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDataSetWrap::CheckAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CheckAttributes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataSetWrap::ComputeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeBounds();
}

void VtkDataSetWrap::CopyAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyAttributes(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetWrap::CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyStructure(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
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

void VtkDataSetWrap::GetAttributesAsFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkFieldData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAttributesAsFieldData(
			info[0]->Int32Value()
		);
			VtkFieldDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFieldDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFieldDataWrap *w = new VtkFieldDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetWrap::GetCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	vtkCellData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellData();
		VtkCellDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellDataWrap *w = new VtkCellDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetWrap::GetCellTypes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCellTypesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCellTypesWrap *a0 = ObjectWrap::Unwrap<VtkCellTypesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetCellTypes(
			(vtkCellTypes *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataSetWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkDataSet * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
				VtkDataSetWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkDataSetWrap *w = new VtkDataSetWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
			VtkDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataSetWrap *w = new VtkDataSetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataSetWrap::GetLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataSetWrap::GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataSetWrap::GetPointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	vtkPointData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointData();
		VtkPointDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointDataWrap *w = new VtkPointDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkDataSetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
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

void VtkDataSetWrap::NewCellIterator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	vtkCellIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewCellIterator();
		VtkCellIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellIteratorWrap *w = new VtkCellIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataSetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataSetWrap *w = new VtkDataSetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataSetWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
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

void VtkDataSetWrap::Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkDataSetWrap>(info.Holder());
	vtkDataSet *native = (vtkDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Squeeze();
}

