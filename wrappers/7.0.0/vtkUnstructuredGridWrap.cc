/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridBaseWrap.h"
#include "vtkUnstructuredGridWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkCellIteratorWrap.h"
#include "vtkUnsignedCharArrayWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkCellLinksWrap.h"
#include "vtkCellArrayWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkUnstructuredGridWrap::ptpl;

VtkUnstructuredGridWrap::VtkUnstructuredGridWrap()
{ }

VtkUnstructuredGridWrap::VtkUnstructuredGridWrap(vtkSmartPointer<vtkUnstructuredGrid> _native)
{ native = _native; }

VtkUnstructuredGridWrap::~VtkUnstructuredGridWrap()
{ }

void VtkUnstructuredGridWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkUnstructuredGrid").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("UnstructuredGrid").ToLocalChecked(), ConstructorGetter);
}

void VtkUnstructuredGridWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkUnstructuredGridWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridBaseWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridBaseWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkUnstructuredGridWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildLinks", BuildLinks);
	Nan::SetPrototypeMethod(tpl, "buildLinks", BuildLinks);

	Nan::SetPrototypeMethod(tpl, "CopyStructure", CopyStructure);
	Nan::SetPrototypeMethod(tpl, "copyStructure", CopyStructure);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetCellLinks", GetCellLinks);
	Nan::SetPrototypeMethod(tpl, "getCellLinks", GetCellLinks);

	Nan::SetPrototypeMethod(tpl, "GetCellLocationsArray", GetCellLocationsArray);
	Nan::SetPrototypeMethod(tpl, "getCellLocationsArray", GetCellLocationsArray);

	Nan::SetPrototypeMethod(tpl, "GetCellTypesArray", GetCellTypesArray);
	Nan::SetPrototypeMethod(tpl, "getCellTypesArray", GetCellTypesArray);

	Nan::SetPrototypeMethod(tpl, "GetCells", GetCells);
	Nan::SetPrototypeMethod(tpl, "getCells", GetCells);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetFaceLocations", GetFaceLocations);
	Nan::SetPrototypeMethod(tpl, "getFaceLocations", GetFaceLocations);

	Nan::SetPrototypeMethod(tpl, "GetFaces", GetFaces);
	Nan::SetPrototypeMethod(tpl, "getFaces", GetFaces);

	Nan::SetPrototypeMethod(tpl, "GetGhostLevel", GetGhostLevel);
	Nan::SetPrototypeMethod(tpl, "getGhostLevel", GetGhostLevel);

	Nan::SetPrototypeMethod(tpl, "GetIdsOfCellsOfType", GetIdsOfCellsOfType);
	Nan::SetPrototypeMethod(tpl, "getIdsOfCellsOfType", GetIdsOfCellsOfType);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellSize", GetMaxCellSize);
	Nan::SetPrototypeMethod(tpl, "getMaxCellSize", GetMaxCellSize);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPieces", GetNumberOfPieces);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPieces", GetNumberOfPieces);

	Nan::SetPrototypeMethod(tpl, "GetPiece", GetPiece);
	Nan::SetPrototypeMethod(tpl, "getPiece", GetPiece);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsHomogeneous", IsHomogeneous);
	Nan::SetPrototypeMethod(tpl, "isHomogeneous", IsHomogeneous);

	Nan::SetPrototypeMethod(tpl, "NewCellIterator", NewCellIterator);
	Nan::SetPrototypeMethod(tpl, "newCellIterator", NewCellIterator);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveGhostCells", RemoveGhostCells);
	Nan::SetPrototypeMethod(tpl, "removeGhostCells", RemoveGhostCells);

	Nan::SetPrototypeMethod(tpl, "Reset", Reset);
	Nan::SetPrototypeMethod(tpl, "reset", Reset);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCells", SetCells);
	Nan::SetPrototypeMethod(tpl, "setCells", SetCells);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "Squeeze", Squeeze);
	Nan::SetPrototypeMethod(tpl, "squeeze", Squeeze);

	ptpl.Reset( tpl );
}

void VtkUnstructuredGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkUnstructuredGrid> native = vtkSmartPointer<vtkUnstructuredGrid>::New();
		VtkUnstructuredGridWrap* obj = new VtkUnstructuredGridWrap(native);
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

void VtkUnstructuredGridWrap::BuildLinks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLinks();
}

void VtkUnstructuredGridWrap::CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
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

void VtkUnstructuredGridWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
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

void VtkUnstructuredGridWrap::GetCellLinks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	vtkCellLinks * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellLinks();
	VtkCellLinksWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellLinksWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellLinksWrap *w = new VtkCellLinksWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridWrap::GetCellLocationsArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellLocationsArray();
	VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridWrap::GetCellTypesArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	vtkUnsignedCharArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellTypesArray();
	VtkUnsignedCharArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnsignedCharArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridWrap::GetCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	vtkCellArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCells();
	VtkCellArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellArrayWrap *w = new VtkCellArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUnstructuredGridWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkUnstructuredGrid * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			VtkUnstructuredGridWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		vtkUnstructuredGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
		VtkUnstructuredGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridWrap::GetFaceLocations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFaceLocations();
	VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridWrap::GetFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFaces();
	VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridWrap::GetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGhostLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridWrap::GetIdsOfCellsOfType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIdTypeArrayWrap *a1 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetIdsOfCellsOfType(
				info[0]->Int32Value(),
				(vtkIdTypeArray *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridWrap::GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridWrap::GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPieces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridWrap::GetPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPiece();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkUnstructuredGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
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

void VtkUnstructuredGridWrap::IsHomogeneous(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsHomogeneous();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridWrap::NewCellIterator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
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

void VtkUnstructuredGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	vtkUnstructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkUnstructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridWrap::RemoveGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveGhostCells();
}

void VtkUnstructuredGridWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkUnstructuredGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkUnstructuredGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkUnstructuredGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridWrap::SetCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkUnsignedCharArrayWrap *a0 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIdTypeArrayWrap *a1 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkCellArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkCellArrayWrap *a2 = ObjectWrap::Unwrap<VtkCellArrayWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkIdTypeArrayWrap *a3 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkIdTypeArrayWrap *a4 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[4]->ToObject());
												if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						native->SetCells(
							(vtkUnsignedCharArray *) a0->native.GetPointer(),
							(vtkIdTypeArray *) a1->native.GetPointer(),
							(vtkCellArray *) a2->native.GetPointer(),
							(vtkIdTypeArray *) a3->native.GetPointer(),
							(vtkIdTypeArray *) a4->native.GetPointer()
						);
						return;
					}
				}
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetCells(
					(vtkUnsignedCharArray *) a0->native.GetPointer(),
					(vtkIdTypeArray *) a1->native.GetPointer(),
					(vtkCellArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkCellArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkCellArrayWrap *a1 = ObjectWrap::Unwrap<VtkCellArrayWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetCells(
				info[0]->Int32Value(),
				(vtkCellArray *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
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

void VtkUnstructuredGridWrap::Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info.Holder());
	vtkUnstructuredGrid *native = (vtkUnstructuredGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Squeeze();
}

