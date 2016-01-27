/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkTransmitPolyDataPieceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTransmitPolyDataPieceWrap::ptpl;

VtkTransmitPolyDataPieceWrap::VtkTransmitPolyDataPieceWrap()
{ }

VtkTransmitPolyDataPieceWrap::VtkTransmitPolyDataPieceWrap(vtkSmartPointer<vtkTransmitPolyDataPiece> _native)
{ native = _native; }

VtkTransmitPolyDataPieceWrap::~VtkTransmitPolyDataPieceWrap()
{ }

void VtkTransmitPolyDataPieceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTransmitPolyDataPiece").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TransmitPolyDataPiece").ToLocalChecked(), ConstructorGetter);
}

void VtkTransmitPolyDataPieceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTransmitPolyDataPieceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTransmitPolyDataPieceWrap").ToLocalChecked());
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

	ptpl.Reset( tpl );
}

void VtkTransmitPolyDataPieceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTransmitPolyDataPiece> native = vtkSmartPointer<vtkTransmitPolyDataPiece>::New();
		VtkTransmitPolyDataPieceWrap* obj = new VtkTransmitPolyDataPieceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTransmitPolyDataPieceWrap::CreateGhostCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitPolyDataPieceWrap>(info.Holder());
	vtkTransmitPolyDataPiece *native = (vtkTransmitPolyDataPiece *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateGhostCellsOff();
}

void VtkTransmitPolyDataPieceWrap::CreateGhostCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitPolyDataPieceWrap>(info.Holder());
	vtkTransmitPolyDataPiece *native = (vtkTransmitPolyDataPiece *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateGhostCellsOn();
}

void VtkTransmitPolyDataPieceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitPolyDataPieceWrap>(info.Holder());
	vtkTransmitPolyDataPiece *native = (vtkTransmitPolyDataPiece *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTransmitPolyDataPieceWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitPolyDataPieceWrap>(info.Holder());
	vtkTransmitPolyDataPiece *native = (vtkTransmitPolyDataPiece *)wrapper->native.GetPointer();
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
		Nan::New<v8::FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransmitPolyDataPieceWrap::GetCreateGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitPolyDataPieceWrap>(info.Holder());
	vtkTransmitPolyDataPiece *native = (vtkTransmitPolyDataPiece *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCreateGhostCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransmitPolyDataPieceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitPolyDataPieceWrap>(info.Holder());
	vtkTransmitPolyDataPiece *native = (vtkTransmitPolyDataPiece *)wrapper->native.GetPointer();
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

void VtkTransmitPolyDataPieceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitPolyDataPieceWrap>(info.Holder());
	vtkTransmitPolyDataPiece *native = (vtkTransmitPolyDataPiece *)wrapper->native.GetPointer();
	vtkTransmitPolyDataPiece * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTransmitPolyDataPieceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTransmitPolyDataPieceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransmitPolyDataPieceWrap *w = new VtkTransmitPolyDataPieceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransmitPolyDataPieceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitPolyDataPieceWrap>(info.Holder());
	vtkTransmitPolyDataPiece *native = (vtkTransmitPolyDataPiece *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTransmitPolyDataPiece * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTransmitPolyDataPieceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTransmitPolyDataPieceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTransmitPolyDataPieceWrap *w = new VtkTransmitPolyDataPieceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransmitPolyDataPieceWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitPolyDataPieceWrap>(info.Holder());
	vtkTransmitPolyDataPiece *native = (vtkTransmitPolyDataPiece *)wrapper->native.GetPointer();
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

void VtkTransmitPolyDataPieceWrap::SetCreateGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitPolyDataPieceWrap>(info.Holder());
	vtkTransmitPolyDataPiece *native = (vtkTransmitPolyDataPiece *)wrapper->native.GetPointer();
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

