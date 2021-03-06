/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkArrayDataAlgorithmWrap.h"
#include "vtkTableToSparseArrayWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTableToSparseArrayWrap::ptpl;

VtkTableToSparseArrayWrap::VtkTableToSparseArrayWrap()
{ }

VtkTableToSparseArrayWrap::VtkTableToSparseArrayWrap(vtkSmartPointer<vtkTableToSparseArray> _native)
{ native = _native; }

VtkTableToSparseArrayWrap::~VtkTableToSparseArrayWrap()
{ }

void VtkTableToSparseArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTableToSparseArray").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TableToSparseArray").ToLocalChecked(), ConstructorGetter);
}

void VtkTableToSparseArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTableToSparseArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkArrayDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkArrayDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTableToSparseArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddCoordinateColumn", AddCoordinateColumn);
	Nan::SetPrototypeMethod(tpl, "addCoordinateColumn", AddCoordinateColumn);

	Nan::SetPrototypeMethod(tpl, "ClearCoordinateColumns", ClearCoordinateColumns);
	Nan::SetPrototypeMethod(tpl, "clearCoordinateColumns", ClearCoordinateColumns);

	Nan::SetPrototypeMethod(tpl, "ClearOutputExtents", ClearOutputExtents);
	Nan::SetPrototypeMethod(tpl, "clearOutputExtents", ClearOutputExtents);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetValueColumn", GetValueColumn);
	Nan::SetPrototypeMethod(tpl, "getValueColumn", GetValueColumn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetValueColumn", SetValueColumn);
	Nan::SetPrototypeMethod(tpl, "setValueColumn", SetValueColumn);

#ifdef VTK_NODE_PLUS_VTKTABLETOSPARSEARRAYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTABLETOSPARSEARRAYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTableToSparseArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTableToSparseArray> native = vtkSmartPointer<vtkTableToSparseArray>::New();
		VtkTableToSparseArrayWrap* obj = new VtkTableToSparseArrayWrap(native);
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

void VtkTableToSparseArrayWrap::AddCoordinateColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToSparseArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTableToSparseArrayWrap>(info.Holder());
	vtkTableToSparseArray *native = (vtkTableToSparseArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddCoordinateColumn(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToSparseArrayWrap::ClearCoordinateColumns(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToSparseArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTableToSparseArrayWrap>(info.Holder());
	vtkTableToSparseArray *native = (vtkTableToSparseArray *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearCoordinateColumns();
}

void VtkTableToSparseArrayWrap::ClearOutputExtents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToSparseArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTableToSparseArrayWrap>(info.Holder());
	vtkTableToSparseArray *native = (vtkTableToSparseArray *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearOutputExtents();
}

void VtkTableToSparseArrayWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToSparseArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTableToSparseArrayWrap>(info.Holder());
	vtkTableToSparseArray *native = (vtkTableToSparseArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableToSparseArrayWrap::GetValueColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToSparseArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTableToSparseArrayWrap>(info.Holder());
	vtkTableToSparseArray *native = (vtkTableToSparseArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValueColumn();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableToSparseArrayWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToSparseArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTableToSparseArrayWrap>(info.Holder());
	vtkTableToSparseArray *native = (vtkTableToSparseArray *)wrapper->native.GetPointer();
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

void VtkTableToSparseArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToSparseArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTableToSparseArrayWrap>(info.Holder());
	vtkTableToSparseArray *native = (vtkTableToSparseArray *)wrapper->native.GetPointer();
	vtkTableToSparseArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTableToSparseArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTableToSparseArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableToSparseArrayWrap *w = new VtkTableToSparseArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTableToSparseArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToSparseArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTableToSparseArrayWrap>(info.Holder());
	vtkTableToSparseArray *native = (vtkTableToSparseArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTableToSparseArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTableToSparseArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTableToSparseArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTableToSparseArrayWrap *w = new VtkTableToSparseArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToSparseArrayWrap::SetValueColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToSparseArrayWrap *wrapper = ObjectWrap::Unwrap<VtkTableToSparseArrayWrap>(info.Holder());
	vtkTableToSparseArray *native = (vtkTableToSparseArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetValueColumn(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

