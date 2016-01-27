/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkExtractPolyDataPieceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractPolyDataPieceWrap::ptpl;

VtkExtractPolyDataPieceWrap::VtkExtractPolyDataPieceWrap()
{ }

VtkExtractPolyDataPieceWrap::VtkExtractPolyDataPieceWrap(vtkSmartPointer<vtkExtractPolyDataPiece> _native)
{ native = _native; }

VtkExtractPolyDataPieceWrap::~VtkExtractPolyDataPieceWrap()
{ }

void VtkExtractPolyDataPieceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractPolyDataPiece").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractPolyDataPiece").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractPolyDataPieceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractPolyDataPieceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractPolyDataPieceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateGhostCellsOff", CreateGhostCellsOff);
	Nan::SetPrototypeMethod(tpl, "createGhostCellsOff", CreateGhostCellsOff);

	Nan::SetPrototypeMethod(tpl, "CreateGhostCellsOn", CreateGhostCellsOn);
	Nan::SetPrototypeMethod(tpl, "createGhostCellsOn", CreateGhostCellsOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCreateGhostCells", GetCreateGhostCells);
	Nan::SetPrototypeMethod(tpl, "getCreateGhostCells", GetCreateGhostCells);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCreateGhostCells", SetCreateGhostCells);
	Nan::SetPrototypeMethod(tpl, "setCreateGhostCells", SetCreateGhostCells);

	ptpl.Reset( tpl );
}

void VtkExtractPolyDataPieceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractPolyDataPiece> native = vtkSmartPointer<vtkExtractPolyDataPiece>::New();
		VtkExtractPolyDataPieceWrap* obj = new VtkExtractPolyDataPieceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExtractPolyDataPieceWrap::CreateGhostCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataPieceWrap>(info.Holder());
	vtkExtractPolyDataPiece *native = (vtkExtractPolyDataPiece *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateGhostCellsOff();
}

void VtkExtractPolyDataPieceWrap::CreateGhostCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataPieceWrap>(info.Holder());
	vtkExtractPolyDataPiece *native = (vtkExtractPolyDataPiece *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateGhostCellsOn();
}

void VtkExtractPolyDataPieceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataPieceWrap>(info.Holder());
	vtkExtractPolyDataPiece *native = (vtkExtractPolyDataPiece *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractPolyDataPieceWrap::GetCreateGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataPieceWrap>(info.Holder());
	vtkExtractPolyDataPiece *native = (vtkExtractPolyDataPiece *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCreateGhostCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractPolyDataPieceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataPieceWrap>(info.Holder());
	vtkExtractPolyDataPiece *native = (vtkExtractPolyDataPiece *)wrapper->native.GetPointer();
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

void VtkExtractPolyDataPieceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataPieceWrap>(info.Holder());
	vtkExtractPolyDataPiece *native = (vtkExtractPolyDataPiece *)wrapper->native.GetPointer();
	vtkExtractPolyDataPiece * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkExtractPolyDataPieceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractPolyDataPieceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractPolyDataPieceWrap *w = new VtkExtractPolyDataPieceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractPolyDataPieceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataPieceWrap>(info.Holder());
	vtkExtractPolyDataPiece *native = (vtkExtractPolyDataPiece *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractPolyDataPiece * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkExtractPolyDataPieceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractPolyDataPieceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractPolyDataPieceWrap *w = new VtkExtractPolyDataPieceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractPolyDataPieceWrap::SetCreateGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataPieceWrap>(info.Holder());
	vtkExtractPolyDataPiece *native = (vtkExtractPolyDataPiece *)wrapper->native.GetPointer();
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

