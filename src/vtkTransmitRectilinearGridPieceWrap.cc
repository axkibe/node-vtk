/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRectilinearGridAlgorithmWrap.h"
#include "vtkTransmitRectilinearGridPieceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTransmitRectilinearGridPieceWrap::constructor;

VtkTransmitRectilinearGridPieceWrap::VtkTransmitRectilinearGridPieceWrap()
{ }

VtkTransmitRectilinearGridPieceWrap::VtkTransmitRectilinearGridPieceWrap(vtkSmartPointer<vtkTransmitRectilinearGridPiece> _native)
{ native = _native; }

VtkTransmitRectilinearGridPieceWrap::~VtkTransmitRectilinearGridPieceWrap()
{ }

void VtkTransmitRectilinearGridPieceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkTransmitRectilinearGridPieceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkRectilinearGridAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkTransmitRectilinearGridPiece").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("TransmitRectilinearGridPiece").ToLocalChecked(),tpl->GetFunction());
}

void VtkTransmitRectilinearGridPieceWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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

}

void VtkTransmitRectilinearGridPieceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTransmitRectilinearGridPiece> native = vtkSmartPointer<vtkTransmitRectilinearGridPiece>::New();
		VtkTransmitRectilinearGridPieceWrap* obj = new VtkTransmitRectilinearGridPieceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTransmitRectilinearGridPieceWrap::CreateGhostCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitRectilinearGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitRectilinearGridPieceWrap>(info.Holder());
	vtkTransmitRectilinearGridPiece *native = (vtkTransmitRectilinearGridPiece *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateGhostCellsOff();
}

void VtkTransmitRectilinearGridPieceWrap::CreateGhostCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitRectilinearGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitRectilinearGridPieceWrap>(info.Holder());
	vtkTransmitRectilinearGridPiece *native = (vtkTransmitRectilinearGridPiece *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateGhostCellsOn();
}

void VtkTransmitRectilinearGridPieceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitRectilinearGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitRectilinearGridPieceWrap>(info.Holder());
	vtkTransmitRectilinearGridPiece *native = (vtkTransmitRectilinearGridPiece *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTransmitRectilinearGridPieceWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitRectilinearGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitRectilinearGridPieceWrap>(info.Holder());
	vtkTransmitRectilinearGridPiece *native = (vtkTransmitRectilinearGridPiece *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
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

void VtkTransmitRectilinearGridPieceWrap::GetCreateGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitRectilinearGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitRectilinearGridPieceWrap>(info.Holder());
	vtkTransmitRectilinearGridPiece *native = (vtkTransmitRectilinearGridPiece *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCreateGhostCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransmitRectilinearGridPieceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitRectilinearGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitRectilinearGridPieceWrap>(info.Holder());
	vtkTransmitRectilinearGridPiece *native = (vtkTransmitRectilinearGridPiece *)wrapper->native.GetPointer();
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

void VtkTransmitRectilinearGridPieceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitRectilinearGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitRectilinearGridPieceWrap>(info.Holder());
	vtkTransmitRectilinearGridPiece *native = (vtkTransmitRectilinearGridPiece *)wrapper->native.GetPointer();
	vtkTransmitRectilinearGridPiece * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTransmitRectilinearGridPieceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransmitRectilinearGridPieceWrap *w = new VtkTransmitRectilinearGridPieceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransmitRectilinearGridPieceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitRectilinearGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitRectilinearGridPieceWrap>(info.Holder());
	vtkTransmitRectilinearGridPiece *native = (vtkTransmitRectilinearGridPiece *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTransmitRectilinearGridPiece * r;
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
			Nan::New<v8::Function>(VtkTransmitRectilinearGridPieceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTransmitRectilinearGridPieceWrap *w = new VtkTransmitRectilinearGridPieceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransmitRectilinearGridPieceWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitRectilinearGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitRectilinearGridPieceWrap>(info.Holder());
	vtkTransmitRectilinearGridPiece *native = (vtkTransmitRectilinearGridPiece *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkTransmitRectilinearGridPieceWrap::SetCreateGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitRectilinearGridPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitRectilinearGridPieceWrap>(info.Holder());
	vtkTransmitRectilinearGridPiece *native = (vtkTransmitRectilinearGridPiece *)wrapper->native.GetPointer();
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

