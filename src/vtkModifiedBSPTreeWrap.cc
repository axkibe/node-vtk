/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractCellLocatorWrap.h"
#include "vtkModifiedBSPTreeWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkIdListCollectionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkModifiedBSPTreeWrap::ptpl;

VtkModifiedBSPTreeWrap::VtkModifiedBSPTreeWrap()
{ }

VtkModifiedBSPTreeWrap::VtkModifiedBSPTreeWrap(vtkSmartPointer<vtkModifiedBSPTree> _native)
{ native = _native; }

VtkModifiedBSPTreeWrap::~VtkModifiedBSPTreeWrap()
{ }

void VtkModifiedBSPTreeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkModifiedBSPTree").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ModifiedBSPTree").ToLocalChecked(), ConstructorGetter);
}

void VtkModifiedBSPTreeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkModifiedBSPTreeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractCellLocatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractCellLocatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkModifiedBSPTreeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildLocator", BuildLocator);
	Nan::SetPrototypeMethod(tpl, "buildLocator", BuildLocator);

	Nan::SetPrototypeMethod(tpl, "FreeSearchStructure", FreeSearchStructure);
	Nan::SetPrototypeMethod(tpl, "freeSearchStructure", FreeSearchStructure);

	Nan::SetPrototypeMethod(tpl, "GenerateRepresentation", GenerateRepresentation);
	Nan::SetPrototypeMethod(tpl, "generateRepresentation", GenerateRepresentation);

	Nan::SetPrototypeMethod(tpl, "GenerateRepresentationLeafs", GenerateRepresentationLeafs);
	Nan::SetPrototypeMethod(tpl, "generateRepresentationLeafs", GenerateRepresentationLeafs);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLeafNodeCellInformation", GetLeafNodeCellInformation);
	Nan::SetPrototypeMethod(tpl, "getLeafNodeCellInformation", GetLeafNodeCellInformation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkModifiedBSPTreeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkModifiedBSPTree> native = vtkSmartPointer<vtkModifiedBSPTree>::New();
		VtkModifiedBSPTreeWrap* obj = new VtkModifiedBSPTreeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkModifiedBSPTreeWrap::BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocator();
}

void VtkModifiedBSPTreeWrap::FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FreeSearchStructure();
}

void VtkModifiedBSPTreeWrap::GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPolyDataWrap *a1 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GenerateRepresentation(
				info[0]->Int32Value(),
				(vtkPolyData *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkModifiedBSPTreeWrap::GenerateRepresentationLeafs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GenerateRepresentationLeafs(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkModifiedBSPTreeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkModifiedBSPTreeWrap::GetLeafNodeCellInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	vtkIdListCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeafNodeCellInformation();
		VtkIdListCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdListCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdListCollectionWrap *w = new VtkIdListCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkModifiedBSPTreeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
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

void VtkModifiedBSPTreeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	vtkModifiedBSPTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkModifiedBSPTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkModifiedBSPTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkModifiedBSPTreeWrap *w = new VtkModifiedBSPTreeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkModifiedBSPTreeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkModifiedBSPTree * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkModifiedBSPTreeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkModifiedBSPTreeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkModifiedBSPTreeWrap *w = new VtkModifiedBSPTreeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

