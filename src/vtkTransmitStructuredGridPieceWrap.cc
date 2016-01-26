/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStructuredGridAlgorithmWrap.h"
#include "vtkTransmitStructuredGridPieceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTransmitStructuredGridPieceWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTransmitStructuredGridPieceWrap::ptpl;

VtkTransmitStructuredGridPieceWrap::VtkTransmitStructuredGridPieceWrap()
{ }

VtkTransmitStructuredGridPieceWrap::VtkTransmitStructuredGridPieceWrap(vtkSmartPointer<vtkTransmitStructuredGridPiece> _native)
{ native = _native; }

VtkTransmitStructuredGridPieceWrap::~VtkTransmitStructuredGridPieceWrap()
{ }

void VtkTransmitStructuredGridPieceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTransmitStructuredGridPiece").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TransmitStructuredGridPiece").ToLocalChecked(), ConstructorGetter);
}

void VtkTransmitStructuredGridPieceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTransmitStructuredGridPieceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTransmitStructuredGridPieceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateGhostCellsOff", CreateGhostCellsOff);
	Nan::SetPrototypeMethod(tpl, "createGhostCellsOff", CreateGhostCellsOff);

	Nan::SetPrototypeMethod(tpl, "CreateGhostCellsOn", CreateGhostCellsOn);
	Nan::SetPrototypeMethod(tpl, "createGhostCellsOn", CreateGhostCellsOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "GetCreateGhostCells", GetCreateGhostCells);
	Nan::SetPrototypeMethod(tpl, "getCreateGhostCells", GetCreateGhostCells);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

	Nan::SetPrototypeMethod(tpl, "SetCreateGhostCells", SetCreateGhostCells);
	Nan::SetPrototypeMethod(tpl, "setCreateGhostCells", SetCreateGhostCells);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkTransmitStructuredGridPieceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTransmitStructuredGridPiece> native = vtkSmartPointer<vtkTransmitStructuredGridPiece>::New();
		VtkTransmitStructuredGridPieceWrap* obj = new VtkTransmitStructuredGridPieceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTransmitStructuredGridPieceWrap::CreateGhostCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitStructuredGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitStructuredGridPieceWrap>(info.Holder());
	vtkTransmitStructuredGridPiece *native = (vtkTransmitStructuredGridPiece *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateGhostCellsOff();
}

void VtkTransmitStructuredGridPieceWrap::CreateGhostCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitStructuredGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitStructuredGridPieceWrap>(info.Holder());
	vtkTransmitStructuredGridPiece *native = (vtkTransmitStructuredGridPiece *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateGhostCellsOn();
}

void VtkTransmitStructuredGridPieceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitStructuredGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitStructuredGridPieceWrap>(info.Holder());
	vtkTransmitStructuredGridPiece *native = (vtkTransmitStructuredGridPiece *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTransmitStructuredGridPieceWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitStructuredGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitStructuredGridPieceWrap>(info.Holder());
	vtkTransmitStructuredGridPiece *native = (vtkTransmitStructuredGridPiece *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
		VtkMultiProcessControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMultiProcessControllerWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransmitStructuredGridPieceWrap::GetCreateGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitStructuredGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitStructuredGridPieceWrap>(info.Holder());
	vtkTransmitStructuredGridPiece *native = (vtkTransmitStructuredGridPiece *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCreateGhostCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransmitStructuredGridPieceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitStructuredGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitStructuredGridPieceWrap>(info.Holder());
	vtkTransmitStructuredGridPiece *native = (vtkTransmitStructuredGridPiece *)wrapper->native.GetPointer();
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

void VtkTransmitStructuredGridPieceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitStructuredGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitStructuredGridPieceWrap>(info.Holder());
	vtkTransmitStructuredGridPiece *native = (vtkTransmitStructuredGridPiece *)wrapper->native.GetPointer();
	vtkTransmitStructuredGridPiece * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTransmitStructuredGridPieceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTransmitStructuredGridPieceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransmitStructuredGridPieceWrap *w = new VtkTransmitStructuredGridPieceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransmitStructuredGridPieceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitStructuredGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitStructuredGridPieceWrap>(info.Holder());
	vtkTransmitStructuredGridPiece *native = (vtkTransmitStructuredGridPiece *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTransmitStructuredGridPiece * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTransmitStructuredGridPieceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkTransmitStructuredGridPieceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTransmitStructuredGridPieceWrap *w = new VtkTransmitStructuredGridPieceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransmitStructuredGridPieceWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitStructuredGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitStructuredGridPieceWrap>(info.Holder());
	vtkTransmitStructuredGridPiece *native = (vtkTransmitStructuredGridPiece *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMultiProcessControllerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetController(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransmitStructuredGridPieceWrap::SetCreateGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitStructuredGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitStructuredGridPieceWrap>(info.Holder());
	vtkTransmitStructuredGridPiece *native = (vtkTransmitStructuredGridPiece *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCreateGhostCells(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

