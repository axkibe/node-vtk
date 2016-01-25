/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractCellLocatorWrap.h"
#include "vtkCellLocatorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIdListWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCellLocatorWrap::constructor;

VtkCellLocatorWrap::VtkCellLocatorWrap()
{ }

VtkCellLocatorWrap::VtkCellLocatorWrap(vtkSmartPointer<vtkCellLocator> _native)
{ native = _native; }

VtkCellLocatorWrap::~VtkCellLocatorWrap()
{ }

void VtkCellLocatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkCellLocatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkLocatorWrap::InitTpl(tpl);
	VtkAbstractCellLocatorWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkCellLocator").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CellLocator").ToLocalChecked(),tpl->GetFunction());
}

void VtkCellLocatorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "BuildLocator", BuildLocator);
	Nan::SetPrototypeMethod(tpl, "buildLocator", BuildLocator);

	Nan::SetPrototypeMethod(tpl, "BuildLocatorIfNeeded", BuildLocatorIfNeeded);
	Nan::SetPrototypeMethod(tpl, "buildLocatorIfNeeded", BuildLocatorIfNeeded);

	Nan::SetPrototypeMethod(tpl, "BuildLocatorInternal", BuildLocatorInternal);
	Nan::SetPrototypeMethod(tpl, "buildLocatorInternal", BuildLocatorInternal);

	Nan::SetPrototypeMethod(tpl, "ForceBuildLocator", ForceBuildLocator);
	Nan::SetPrototypeMethod(tpl, "forceBuildLocator", ForceBuildLocator);

	Nan::SetPrototypeMethod(tpl, "FreeSearchStructure", FreeSearchStructure);
	Nan::SetPrototypeMethod(tpl, "freeSearchStructure", FreeSearchStructure);

	Nan::SetPrototypeMethod(tpl, "GenerateRepresentation", GenerateRepresentation);
	Nan::SetPrototypeMethod(tpl, "generateRepresentation", GenerateRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetCells", GetCells);
	Nan::SetPrototypeMethod(tpl, "getCells", GetCells);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfBuckets", GetNumberOfBuckets);
	Nan::SetPrototypeMethod(tpl, "getNumberOfBuckets", GetNumberOfBuckets);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCellsPerBucket", GetNumberOfCellsPerBucket);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCellsPerBucket", GetNumberOfCellsPerBucket);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfCellsPerBucket", SetNumberOfCellsPerBucket);
	Nan::SetPrototypeMethod(tpl, "setNumberOfCellsPerBucket", SetNumberOfCellsPerBucket);

}

void VtkCellLocatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellLocator> native = vtkSmartPointer<vtkCellLocator>::New();
		VtkCellLocatorWrap* obj = new VtkCellLocatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCellLocatorWrap::BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocator();
}

void VtkCellLocatorWrap::BuildLocatorIfNeeded(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocatorIfNeeded();
}

void VtkCellLocatorWrap::BuildLocatorInternal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocatorInternal();
}

void VtkCellLocatorWrap::ForceBuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForceBuildLocator();
}

void VtkCellLocatorWrap::FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FreeSearchStructure();
}

void VtkCellLocatorWrap::GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
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

void VtkCellLocatorWrap::GetCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkIdList * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetCells(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkIdListWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIdListWrap *w = new VtkIdListWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellLocatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCellLocatorWrap::GetNumberOfBuckets(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfBuckets();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellLocatorWrap::GetNumberOfCellsPerBucket(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCellsPerBucket();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellLocatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
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

void VtkCellLocatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	vtkCellLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCellLocatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellLocatorWrap *w = new VtkCellLocatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellLocatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCellLocator * r;
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
			Nan::New<v8::Function>(VtkCellLocatorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellLocatorWrap *w = new VtkCellLocatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellLocatorWrap::SetNumberOfCellsPerBucket(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfCellsPerBucket(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

