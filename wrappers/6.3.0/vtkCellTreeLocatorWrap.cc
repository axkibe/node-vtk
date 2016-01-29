/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractCellLocatorWrap.h"
#include "vtkCellTreeLocatorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCellTreeLocatorWrap::ptpl;

VtkCellTreeLocatorWrap::VtkCellTreeLocatorWrap()
{ }

VtkCellTreeLocatorWrap::VtkCellTreeLocatorWrap(vtkSmartPointer<vtkCellTreeLocator> _native)
{ native = _native; }

VtkCellTreeLocatorWrap::~VtkCellTreeLocatorWrap()
{ }

void VtkCellTreeLocatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCellTreeLocator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CellTreeLocator").ToLocalChecked(), ConstructorGetter);
}

void VtkCellTreeLocatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCellTreeLocatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractCellLocatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractCellLocatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCellTreeLocatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkCellTreeLocatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellTreeLocator> native = vtkSmartPointer<vtkCellTreeLocator>::New();
		VtkCellTreeLocatorWrap* obj = new VtkCellTreeLocatorWrap(native);
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

void VtkCellTreeLocatorWrap::BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTreeLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellTreeLocatorWrap>(info.Holder());
	vtkCellTreeLocator *native = (vtkCellTreeLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocator();
}

void VtkCellTreeLocatorWrap::BuildLocatorIfNeeded(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTreeLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellTreeLocatorWrap>(info.Holder());
	vtkCellTreeLocator *native = (vtkCellTreeLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocatorIfNeeded();
}

void VtkCellTreeLocatorWrap::BuildLocatorInternal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTreeLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellTreeLocatorWrap>(info.Holder());
	vtkCellTreeLocator *native = (vtkCellTreeLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocatorInternal();
}

void VtkCellTreeLocatorWrap::ForceBuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTreeLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellTreeLocatorWrap>(info.Holder());
	vtkCellTreeLocator *native = (vtkCellTreeLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForceBuildLocator();
}

void VtkCellTreeLocatorWrap::FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTreeLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellTreeLocatorWrap>(info.Holder());
	vtkCellTreeLocator *native = (vtkCellTreeLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FreeSearchStructure();
}

void VtkCellTreeLocatorWrap::GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTreeLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellTreeLocatorWrap>(info.Holder());
	vtkCellTreeLocator *native = (vtkCellTreeLocator *)wrapper->native.GetPointer();
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

void VtkCellTreeLocatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTreeLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellTreeLocatorWrap>(info.Holder());
	vtkCellTreeLocator *native = (vtkCellTreeLocator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCellTreeLocatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTreeLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellTreeLocatorWrap>(info.Holder());
	vtkCellTreeLocator *native = (vtkCellTreeLocator *)wrapper->native.GetPointer();
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

void VtkCellTreeLocatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTreeLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellTreeLocatorWrap>(info.Holder());
	vtkCellTreeLocator *native = (vtkCellTreeLocator *)wrapper->native.GetPointer();
	vtkCellTreeLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCellTreeLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellTreeLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellTreeLocatorWrap *w = new VtkCellTreeLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellTreeLocatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellTreeLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellTreeLocatorWrap>(info.Holder());
	vtkCellTreeLocator *native = (vtkCellTreeLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCellTreeLocator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCellTreeLocatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellTreeLocatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellTreeLocatorWrap *w = new VtkCellTreeLocatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

