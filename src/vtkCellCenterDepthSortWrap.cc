/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkVisibilitySortWrap.h"
#include "vtkCellCenterDepthSortWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIdTypeArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCellCenterDepthSortWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkCellCenterDepthSortWrap::ptpl;

VtkCellCenterDepthSortWrap::VtkCellCenterDepthSortWrap()
{ }

VtkCellCenterDepthSortWrap::VtkCellCenterDepthSortWrap(vtkSmartPointer<vtkCellCenterDepthSort> _native)
{ native = _native; }

VtkCellCenterDepthSortWrap::~VtkCellCenterDepthSortWrap()
{ }

void VtkCellCenterDepthSortWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCellCenterDepthSort").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CellCenterDepthSort").ToLocalChecked(), ConstructorGetter);
}

void VtkCellCenterDepthSortWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCellCenterDepthSortWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkVisibilitySortWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkVisibilitySortWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCellCenterDepthSortWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNextCells", GetNextCells);
	Nan::SetPrototypeMethod(tpl, "getNextCells", GetNextCells);

	Nan::SetPrototypeMethod(tpl, "InitTraversal", InitTraversal);
	Nan::SetPrototypeMethod(tpl, "initTraversal", InitTraversal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkCellCenterDepthSortWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellCenterDepthSort> native = vtkSmartPointer<vtkCellCenterDepthSort>::New();
		VtkCellCenterDepthSortWrap* obj = new VtkCellCenterDepthSortWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCellCenterDepthSortWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCenterDepthSortWrap *wrapper = ObjectWrap::Unwrap<VtkCellCenterDepthSortWrap>(info.Holder());
	vtkCellCenterDepthSort *native = (vtkCellCenterDepthSort *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCellCenterDepthSortWrap::GetNextCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCenterDepthSortWrap *wrapper = ObjectWrap::Unwrap<VtkCellCenterDepthSortWrap>(info.Holder());
	vtkCellCenterDepthSort *native = (vtkCellCenterDepthSort *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextCells();
		VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkIdTypeArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellCenterDepthSortWrap::InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCenterDepthSortWrap *wrapper = ObjectWrap::Unwrap<VtkCellCenterDepthSortWrap>(info.Holder());
	vtkCellCenterDepthSort *native = (vtkCellCenterDepthSort *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitTraversal();
}

void VtkCellCenterDepthSortWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCenterDepthSortWrap *wrapper = ObjectWrap::Unwrap<VtkCellCenterDepthSortWrap>(info.Holder());
	vtkCellCenterDepthSort *native = (vtkCellCenterDepthSort *)wrapper->native.GetPointer();
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

void VtkCellCenterDepthSortWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCenterDepthSortWrap *wrapper = ObjectWrap::Unwrap<VtkCellCenterDepthSortWrap>(info.Holder());
	vtkCellCenterDepthSort *native = (vtkCellCenterDepthSort *)wrapper->native.GetPointer();
	vtkCellCenterDepthSort * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCellCenterDepthSortWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCellCenterDepthSortWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellCenterDepthSortWrap *w = new VtkCellCenterDepthSortWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellCenterDepthSortWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellCenterDepthSortWrap *wrapper = ObjectWrap::Unwrap<VtkCellCenterDepthSortWrap>(info.Holder());
	vtkCellCenterDepthSort *native = (vtkCellCenterDepthSort *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCellCenterDepthSort * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCellCenterDepthSortWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkCellCenterDepthSortWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellCenterDepthSortWrap *w = new VtkCellCenterDepthSortWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

