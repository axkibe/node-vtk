/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetWrap.h"
#include "vtkHyperTreeGridWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationDoubleVectorKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkBitArrayWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkDataObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperTreeGridWrap::ptpl;

VtkHyperTreeGridWrap::VtkHyperTreeGridWrap()
{ }

VtkHyperTreeGridWrap::VtkHyperTreeGridWrap(vtkSmartPointer<vtkHyperTreeGrid> _native)
{ native = _native; }

VtkHyperTreeGridWrap::~VtkHyperTreeGridWrap()
{ }

void VtkHyperTreeGridWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperTreeGrid").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperTreeGrid").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperTreeGridWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperTreeGridWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperTreeGridWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CopyStructure", CopyStructure);
	Nan::SetPrototypeMethod(tpl, "copyStructure", CopyStructure);

	Nan::SetPrototypeMethod(tpl, "DIMENSION", DIMENSION);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GenerateSuperCursorTraversalTable", GenerateSuperCursorTraversalTable);
	Nan::SetPrototypeMethod(tpl, "generateSuperCursorTraversalTable", GenerateSuperCursorTraversalTable);

	Nan::SetPrototypeMethod(tpl, "GenerateTrees", GenerateTrees);
	Nan::SetPrototypeMethod(tpl, "generateTrees", GenerateTrees);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetMaterialMask", GetMaterialMask);
	Nan::SetPrototypeMethod(tpl, "getMaterialMask", GetMaterialMask);

	Nan::SetPrototypeMethod(tpl, "GetMaterialMaskIndex", GetMaterialMaskIndex);
	Nan::SetPrototypeMethod(tpl, "getMaterialMaskIndex", GetMaterialMaskIndex);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellSize", GetMaxCellSize);
	Nan::SetPrototypeMethod(tpl, "getMaxCellSize", GetMaxCellSize);

	Nan::SetPrototypeMethod(tpl, "GetXCoordinates", GetXCoordinates);
	Nan::SetPrototypeMethod(tpl, "getXCoordinates", GetXCoordinates);

	Nan::SetPrototypeMethod(tpl, "GetYCoordinates", GetYCoordinates);
	Nan::SetPrototypeMethod(tpl, "getYCoordinates", GetYCoordinates);

	Nan::SetPrototypeMethod(tpl, "GetZCoordinates", GetZCoordinates);
	Nan::SetPrototypeMethod(tpl, "getZCoordinates", GetZCoordinates);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LEVELS", LEVELS);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SIZES", SIZES);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetIndexingModeToIJK", SetIndexingModeToIJK);
	Nan::SetPrototypeMethod(tpl, "setIndexingModeToIJK", SetIndexingModeToIJK);

	Nan::SetPrototypeMethod(tpl, "SetIndexingModeToKJI", SetIndexingModeToKJI);
	Nan::SetPrototypeMethod(tpl, "setIndexingModeToKJI", SetIndexingModeToKJI);

	Nan::SetPrototypeMethod(tpl, "SetMaterialMask", SetMaterialMask);
	Nan::SetPrototypeMethod(tpl, "setMaterialMask", SetMaterialMask);

	Nan::SetPrototypeMethod(tpl, "SetMaterialMaskIndex", SetMaterialMaskIndex);
	Nan::SetPrototypeMethod(tpl, "setMaterialMaskIndex", SetMaterialMaskIndex);

	Nan::SetPrototypeMethod(tpl, "SetXCoordinates", SetXCoordinates);
	Nan::SetPrototypeMethod(tpl, "setXCoordinates", SetXCoordinates);

	Nan::SetPrototypeMethod(tpl, "SetYCoordinates", SetYCoordinates);
	Nan::SetPrototypeMethod(tpl, "setYCoordinates", SetYCoordinates);

	Nan::SetPrototypeMethod(tpl, "SetZCoordinates", SetZCoordinates);
	Nan::SetPrototypeMethod(tpl, "setZCoordinates", SetZCoordinates);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkHyperTreeGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperTreeGrid> native = vtkSmartPointer<vtkHyperTreeGrid>::New();
		VtkHyperTreeGridWrap* obj = new VtkHyperTreeGridWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHyperTreeGridWrap::CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
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

void VtkHyperTreeGridWrap::DIMENSION(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DIMENSION();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
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

void VtkHyperTreeGridWrap::GenerateSuperCursorTraversalTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateSuperCursorTraversalTable();
}

void VtkHyperTreeGridWrap::GenerateTrees(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTrees();
}

void VtkHyperTreeGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHyperTreeGridWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridWrap::GetMaterialMask(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	vtkBitArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaterialMask();
		VtkBitArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBitArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBitArrayWrap *w = new VtkBitArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridWrap::GetMaterialMaskIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaterialMaskIndex();
		VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridWrap::GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridWrap::GetXCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	vtkDataArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXCoordinates();
		VtkDataArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArrayWrap *w = new VtkDataArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridWrap::GetYCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	vtkDataArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYCoordinates();
		VtkDataArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArrayWrap *w = new VtkDataArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridWrap::GetZCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	vtkDataArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZCoordinates();
		VtkDataArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArrayWrap *w = new VtkDataArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkHyperTreeGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
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

void VtkHyperTreeGridWrap::LEVELS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->LEVELS();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	vtkHyperTreeGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHyperTreeGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperTreeGridWrap *w = new VtkHyperTreeGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridWrap::SIZES(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	vtkInformationDoubleVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->SIZES();
		VtkInformationDoubleVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationDoubleVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDoubleVectorKeyWrap *w = new VtkInformationDoubleVectorKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHyperTreeGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHyperTreeGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperTreeGridWrap *w = new VtkHyperTreeGridWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridWrap::SetIndexingModeToIJK(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIndexingModeToIJK();
}

void VtkHyperTreeGridWrap::SetIndexingModeToKJI(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIndexingModeToKJI();
}

void VtkHyperTreeGridWrap::SetMaterialMask(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkBitArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkBitArrayWrap *a0 = ObjectWrap::Unwrap<VtkBitArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaterialMask(
			(vtkBitArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridWrap::SetMaterialMaskIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdTypeArrayWrap *a0 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaterialMaskIndex(
			(vtkIdTypeArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridWrap::SetXCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXCoordinates(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridWrap::SetYCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYCoordinates(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridWrap::SetZCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZCoordinates(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridWrap>(info.Holder());
	vtkHyperTreeGrid *native = (vtkHyperTreeGrid *)wrapper->native.GetPointer();
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

