/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCellDataToPointDataWrap.h"
#include "vtkPCellDataToPointDataWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPCellDataToPointDataWrap::ptpl;

VtkPCellDataToPointDataWrap::VtkPCellDataToPointDataWrap()
{ }

VtkPCellDataToPointDataWrap::VtkPCellDataToPointDataWrap(vtkSmartPointer<vtkPCellDataToPointData> _native)
{ native = _native; }

VtkPCellDataToPointDataWrap::~VtkPCellDataToPointDataWrap()
{ }

void VtkPCellDataToPointDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPCellDataToPointData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PCellDataToPointData").ToLocalChecked(), ConstructorGetter);
}

void VtkPCellDataToPointDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPCellDataToPointDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCellDataToPointDataWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCellDataToPointDataWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPCellDataToPointDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPieceInvariant", GetPieceInvariant);
	Nan::SetPrototypeMethod(tpl, "getPieceInvariant", GetPieceInvariant);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PieceInvariantOff", PieceInvariantOff);
	Nan::SetPrototypeMethod(tpl, "pieceInvariantOff", PieceInvariantOff);

	Nan::SetPrototypeMethod(tpl, "PieceInvariantOn", PieceInvariantOn);
	Nan::SetPrototypeMethod(tpl, "pieceInvariantOn", PieceInvariantOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPieceInvariant", SetPieceInvariant);
	Nan::SetPrototypeMethod(tpl, "setPieceInvariant", SetPieceInvariant);

	ptpl.Reset( tpl );
}

void VtkPCellDataToPointDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPCellDataToPointData> native = vtkSmartPointer<vtkPCellDataToPointData>::New();
		VtkPCellDataToPointDataWrap* obj = new VtkPCellDataToPointDataWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPCellDataToPointDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkPCellDataToPointDataWrap>(info.Holder());
	vtkPCellDataToPointData *native = (vtkPCellDataToPointData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPCellDataToPointDataWrap::GetPieceInvariant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkPCellDataToPointDataWrap>(info.Holder());
	vtkPCellDataToPointData *native = (vtkPCellDataToPointData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPieceInvariant();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPCellDataToPointDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkPCellDataToPointDataWrap>(info.Holder());
	vtkPCellDataToPointData *native = (vtkPCellDataToPointData *)wrapper->native.GetPointer();
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

void VtkPCellDataToPointDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkPCellDataToPointDataWrap>(info.Holder());
	vtkPCellDataToPointData *native = (vtkPCellDataToPointData *)wrapper->native.GetPointer();
	vtkPCellDataToPointData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPCellDataToPointDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPCellDataToPointDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPCellDataToPointDataWrap *w = new VtkPCellDataToPointDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPCellDataToPointDataWrap::PieceInvariantOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkPCellDataToPointDataWrap>(info.Holder());
	vtkPCellDataToPointData *native = (vtkPCellDataToPointData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PieceInvariantOff();
}

void VtkPCellDataToPointDataWrap::PieceInvariantOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkPCellDataToPointDataWrap>(info.Holder());
	vtkPCellDataToPointData *native = (vtkPCellDataToPointData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PieceInvariantOn();
}

void VtkPCellDataToPointDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkPCellDataToPointDataWrap>(info.Holder());
	vtkPCellDataToPointData *native = (vtkPCellDataToPointData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPCellDataToPointData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPCellDataToPointDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPCellDataToPointDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPCellDataToPointDataWrap *w = new VtkPCellDataToPointDataWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPCellDataToPointDataWrap::SetPieceInvariant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkPCellDataToPointDataWrap>(info.Holder());
	vtkPCellDataToPointData *native = (vtkPCellDataToPointData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPieceInvariant(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

