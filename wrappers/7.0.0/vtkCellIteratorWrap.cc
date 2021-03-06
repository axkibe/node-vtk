/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkCellIteratorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkIdListWrap.h"
#include "vtkPointsWrap.h"
#include "vtkGenericCellWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCellIteratorWrap::ptpl;

VtkCellIteratorWrap::VtkCellIteratorWrap()
{ }

VtkCellIteratorWrap::VtkCellIteratorWrap(vtkSmartPointer<vtkCellIterator> _native)
{ native = _native; }

VtkCellIteratorWrap::~VtkCellIteratorWrap()
{ }

void VtkCellIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCellIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CellIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkCellIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCellIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCellIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCell", GetCell);
	Nan::SetPrototypeMethod(tpl, "getCell", GetCell);

	Nan::SetPrototypeMethod(tpl, "GetCellType", GetCellType);
	Nan::SetPrototypeMethod(tpl, "getCellType", GetCellType);

	Nan::SetPrototypeMethod(tpl, "GetFaces", GetFaces);
	Nan::SetPrototypeMethod(tpl, "getFaces", GetFaces);

	Nan::SetPrototypeMethod(tpl, "GetPointIds", GetPointIds);
	Nan::SetPrototypeMethod(tpl, "getPointIds", GetPointIds);

	Nan::SetPrototypeMethod(tpl, "GetPoints", GetPoints);
	Nan::SetPrototypeMethod(tpl, "getPoints", GetPoints);

	Nan::SetPrototypeMethod(tpl, "GoToNextCell", GoToNextCell);
	Nan::SetPrototypeMethod(tpl, "goToNextCell", GoToNextCell);

	Nan::SetPrototypeMethod(tpl, "InitTraversal", InitTraversal);
	Nan::SetPrototypeMethod(tpl, "initTraversal", InitTraversal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsTypeOf", IsTypeOf);
	Nan::SetPrototypeMethod(tpl, "isTypeOf", IsTypeOf);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKCELLITERATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCELLITERATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCellIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCellIteratorWrap::GetCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCellIteratorWrap>(info.Holder());
	vtkCellIterator *native = (vtkCellIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericCellWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericCellWrap *a0 = ObjectWrap::Unwrap<VtkGenericCellWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetCell(
			(vtkGenericCell *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellIteratorWrap::GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCellIteratorWrap>(info.Holder());
	vtkCellIterator *native = (vtkCellIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellIteratorWrap::GetFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCellIteratorWrap>(info.Holder());
	vtkCellIterator *native = (vtkCellIterator *)wrapper->native.GetPointer();
	vtkIdList * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFaces();
	VtkIdListWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdListWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdListWrap *w = new VtkIdListWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellIteratorWrap::GetPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCellIteratorWrap>(info.Holder());
	vtkCellIterator *native = (vtkCellIterator *)wrapper->native.GetPointer();
	vtkIdList * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointIds();
	VtkIdListWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdListWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdListWrap *w = new VtkIdListWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellIteratorWrap::GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCellIteratorWrap>(info.Holder());
	vtkCellIterator *native = (vtkCellIterator *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoints();
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

void VtkCellIteratorWrap::GoToNextCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCellIteratorWrap>(info.Holder());
	vtkCellIterator *native = (vtkCellIterator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GoToNextCell();
}

void VtkCellIteratorWrap::InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCellIteratorWrap>(info.Holder());
	vtkCellIterator *native = (vtkCellIterator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitTraversal();
}

void VtkCellIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCellIteratorWrap>(info.Holder());
	vtkCellIterator *native = (vtkCellIterator *)wrapper->native.GetPointer();
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

void VtkCellIteratorWrap::IsTypeOf(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCellIteratorWrap>(info.Holder());
	vtkCellIterator *native = (vtkCellIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsTypeOf(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCellIteratorWrap>(info.Holder());
	vtkCellIterator *native = (vtkCellIterator *)wrapper->native.GetPointer();
	vtkCellIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
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

void VtkCellIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkCellIteratorWrap>(info.Holder());
	vtkCellIterator *native = (vtkCellIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkCellIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
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
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

