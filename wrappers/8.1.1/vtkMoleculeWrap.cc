/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUndirectedGraphWrap.h"
#include "vtkMoleculeWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPointsWrap.h"
#include "vtkUnsignedShortArrayWrap.h"
#include "vtkAbstractElectronicDataWrap.h"
#include "vtkGraphWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkMatrix3x3Wrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMoleculeWrap::ptpl;

VtkMoleculeWrap::VtkMoleculeWrap()
{ }

VtkMoleculeWrap::VtkMoleculeWrap(vtkSmartPointer<vtkMolecule> _native)
{ native = _native; }

VtkMoleculeWrap::~VtkMoleculeWrap()
{ }

void VtkMoleculeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMolecule").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Molecule").ToLocalChecked(), ConstructorGetter);
}

void VtkMoleculeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMoleculeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUndirectedGraphWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUndirectedGraphWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMoleculeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CheckedDeepCopy", CheckedDeepCopy);
	Nan::SetPrototypeMethod(tpl, "checkedDeepCopy", CheckedDeepCopy);

	Nan::SetPrototypeMethod(tpl, "CheckedShallowCopy", CheckedShallowCopy);
	Nan::SetPrototypeMethod(tpl, "checkedShallowCopy", CheckedShallowCopy);

	Nan::SetPrototypeMethod(tpl, "ClearLattice", ClearLattice);
	Nan::SetPrototypeMethod(tpl, "clearLattice", ClearLattice);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "DeepCopyAttributes", DeepCopyAttributes);
	Nan::SetPrototypeMethod(tpl, "deepCopyAttributes", DeepCopyAttributes);

	Nan::SetPrototypeMethod(tpl, "DeepCopyStructure", DeepCopyStructure);
	Nan::SetPrototypeMethod(tpl, "deepCopyStructure", DeepCopyStructure);

	Nan::SetPrototypeMethod(tpl, "GetAtomicNumberArray", GetAtomicNumberArray);
	Nan::SetPrototypeMethod(tpl, "getAtomicNumberArray", GetAtomicNumberArray);

	Nan::SetPrototypeMethod(tpl, "GetAtomicPositionArray", GetAtomicPositionArray);
	Nan::SetPrototypeMethod(tpl, "getAtomicPositionArray", GetAtomicPositionArray);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetElectronicData", GetElectronicData);
	Nan::SetPrototypeMethod(tpl, "getElectronicData", GetElectronicData);

	Nan::SetPrototypeMethod(tpl, "GetLattice", GetLattice);
	Nan::SetPrototypeMethod(tpl, "getLattice", GetLattice);

	Nan::SetPrototypeMethod(tpl, "HasLattice", HasLattice);
	Nan::SetPrototypeMethod(tpl, "hasLattice", HasLattice);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetElectronicData", SetElectronicData);
	Nan::SetPrototypeMethod(tpl, "setElectronicData", SetElectronicData);

	Nan::SetPrototypeMethod(tpl, "SetLattice", SetLattice);
	Nan::SetPrototypeMethod(tpl, "setLattice", SetLattice);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "ShallowCopyAttributes", ShallowCopyAttributes);
	Nan::SetPrototypeMethod(tpl, "shallowCopyAttributes", ShallowCopyAttributes);

	Nan::SetPrototypeMethod(tpl, "ShallowCopyStructure", ShallowCopyStructure);
	Nan::SetPrototypeMethod(tpl, "shallowCopyStructure", ShallowCopyStructure);

#ifdef VTK_NODE_PLUS_VTKMOLECULEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMOLECULEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMoleculeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMolecule> native = vtkSmartPointer<vtkMolecule>::New();
		VtkMoleculeWrap* obj = new VtkMoleculeWrap(native);
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

void VtkMoleculeWrap::CheckedDeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CheckedDeepCopy(
			(vtkGraph *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMoleculeWrap::CheckedShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CheckedShallowCopy(
			(vtkGraph *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMoleculeWrap::ClearLattice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearLattice();
}

void VtkMoleculeWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
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

void VtkMoleculeWrap::DeepCopyAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMoleculeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMoleculeWrap *a0 = ObjectWrap::Unwrap<VtkMoleculeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopyAttributes(
			(vtkMolecule *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMoleculeWrap::DeepCopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMoleculeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMoleculeWrap *a0 = ObjectWrap::Unwrap<VtkMoleculeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopyStructure(
			(vtkMolecule *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMoleculeWrap::GetAtomicNumberArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	vtkUnsignedShortArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAtomicNumberArray();
	VtkUnsignedShortArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnsignedShortArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnsignedShortArrayWrap *w = new VtkUnsignedShortArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMoleculeWrap::GetAtomicPositionArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAtomicPositionArray();
	VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMoleculeWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMoleculeWrap::GetElectronicData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	vtkAbstractElectronicData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetElectronicData();
	VtkAbstractElectronicDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractElectronicDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractElectronicDataWrap *w = new VtkAbstractElectronicDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMoleculeWrap::GetLattice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	vtkMatrix3x3 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLattice();
	VtkMatrix3x3Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMatrix3x3Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrix3x3Wrap *w = new VtkMatrix3x3Wrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMoleculeWrap::HasLattice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasLattice();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMoleculeWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkMoleculeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	vtkMolecule * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMoleculeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMoleculeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMoleculeWrap *w = new VtkMoleculeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMoleculeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkMolecule * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkMoleculeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMoleculeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMoleculeWrap *w = new VtkMoleculeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMoleculeWrap::SetElectronicData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractElectronicDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractElectronicDataWrap *a0 = ObjectWrap::Unwrap<VtkAbstractElectronicDataWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetElectronicData(
			(vtkAbstractElectronicData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMoleculeWrap::SetLattice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix3x3Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix3x3Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix3x3Wrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLattice(
			(vtkMatrix3x3 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMoleculeWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
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

void VtkMoleculeWrap::ShallowCopyAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMoleculeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMoleculeWrap *a0 = ObjectWrap::Unwrap<VtkMoleculeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopyAttributes(
			(vtkMolecule *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMoleculeWrap::ShallowCopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeWrap>(info.Holder());
	vtkMolecule *native = (vtkMolecule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMoleculeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMoleculeWrap *a0 = ObjectWrap::Unwrap<VtkMoleculeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopyStructure(
			(vtkMolecule *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

