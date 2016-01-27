/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectWrap.h"
#include "vtkGenericDataSetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCellTypesWrap.h"
#include "vtkGenericCellIteratorWrap.h"
#include "vtkGenericPointIteratorWrap.h"
#include "vtkGenericAttributeCollectionWrap.h"
#include "vtkDataSetAttributesWrap.h"
#include "vtkGenericCellTessellatorWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGenericDataSetWrap::ptpl;

VtkGenericDataSetWrap::VtkGenericDataSetWrap()
{ }

VtkGenericDataSetWrap::VtkGenericDataSetWrap(vtkSmartPointer<vtkGenericDataSet> _native)
{ native = _native; }

VtkGenericDataSetWrap::~VtkGenericDataSetWrap()
{ }

void VtkGenericDataSetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGenericDataSet").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GenericDataSet").ToLocalChecked(), ConstructorGetter);
}

void VtkGenericDataSetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGenericDataSetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGenericDataSetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeBounds", ComputeBounds);
	Nan::SetPrototypeMethod(tpl, "computeBounds", ComputeBounds);

	Nan::SetPrototypeMethod(tpl, "GetAttributes", GetAttributes);
	Nan::SetPrototypeMethod(tpl, "getAttributes", GetAttributes);

	Nan::SetPrototypeMethod(tpl, "GetCellDimension", GetCellDimension);
	Nan::SetPrototypeMethod(tpl, "getCellDimension", GetCellDimension);

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

	Nan::SetPrototypeMethod(tpl, "GetTessellator", GetTessellator);
	Nan::SetPrototypeMethod(tpl, "getTessellator", GetTessellator);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewBoundaryIterator", NewBoundaryIterator);
	Nan::SetPrototypeMethod(tpl, "newBoundaryIterator", NewBoundaryIterator);

	Nan::SetPrototypeMethod(tpl, "NewCellIterator", NewCellIterator);
	Nan::SetPrototypeMethod(tpl, "newCellIterator", NewCellIterator);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NewPointIterator", NewPointIterator);
	Nan::SetPrototypeMethod(tpl, "newPointIterator", NewPointIterator);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTessellator", SetTessellator);
	Nan::SetPrototypeMethod(tpl, "setTessellator", SetTessellator);

	ptpl.Reset( tpl );
}

void VtkGenericDataSetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkGenericDataSetWrap::ComputeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeBounds();
}

void VtkGenericDataSetWrap::GetAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDataSetAttributes * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAttributes(
			info[0]->Int32Value()
		);
			VtkDataSetAttributesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataSetAttributesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataSetAttributesWrap *w = new VtkDataSetAttributesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkGenericAttributeCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAttributes();
		VtkGenericAttributeCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericAttributeCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericAttributeCollectionWrap *w = new VtkGenericAttributeCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataSetWrap::GetCellDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericDataSetWrap::GetCellTypes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
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

void VtkGenericDataSetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericDataSetWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkGenericDataSet * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
				VtkGenericDataSetWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkGenericDataSetWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkGenericDataSetWrap *w = new VtkGenericDataSetWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkGenericDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
			VtkGenericDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericDataSetWrap *w = new VtkGenericDataSetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericDataSetWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericDataSetWrap::GetLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericDataSetWrap::GetTessellator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	vtkGenericCellTessellator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTessellator();
		VtkGenericCellTessellatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericCellTessellatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericCellTessellatorWrap *w = new VtkGenericCellTessellatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataSetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
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

void VtkGenericDataSetWrap::NewBoundaryIterator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkGenericCellIterator * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->NewBoundaryIterator(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
				VtkGenericCellIteratorWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkGenericCellIteratorWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkGenericCellIteratorWrap *w = new VtkGenericCellIteratorWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericDataSetWrap::NewCellIterator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkGenericCellIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->NewCellIterator(
			info[0]->Int32Value()
		);
			VtkGenericCellIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericCellIteratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericCellIteratorWrap *w = new VtkGenericCellIteratorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericDataSetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	vtkGenericDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGenericDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericDataSetWrap *w = new VtkGenericDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataSetWrap::NewPointIterator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	vtkGenericPointIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewPointIterator();
		VtkGenericPointIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericPointIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericPointIteratorWrap *w = new VtkGenericPointIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericDataSetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGenericDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericDataSetWrap *w = new VtkGenericDataSetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericDataSetWrap::SetTessellator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericDataSetWrap *wrapper = ObjectWrap::Unwrap<VtkGenericDataSetWrap>(info.Holder());
	vtkGenericDataSet *native = (vtkGenericDataSet *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericCellTessellatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericCellTessellatorWrap *a0 = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTessellator(
			(vtkGenericCellTessellator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

