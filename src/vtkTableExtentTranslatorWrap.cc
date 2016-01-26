/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkExtentTranslatorWrap.h"
#include "vtkTableExtentTranslatorWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTableExtentTranslatorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTableExtentTranslatorWrap::ptpl;

VtkTableExtentTranslatorWrap::VtkTableExtentTranslatorWrap()
{ }

VtkTableExtentTranslatorWrap::VtkTableExtentTranslatorWrap(vtkSmartPointer<vtkTableExtentTranslator> _native)
{ native = _native; }

VtkTableExtentTranslatorWrap::~VtkTableExtentTranslatorWrap()
{ }

void VtkTableExtentTranslatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTableExtentTranslator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TableExtentTranslator").ToLocalChecked(), ConstructorGetter);
}

void VtkTableExtentTranslatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTableExtentTranslatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkExtentTranslatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkExtentTranslatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTableExtentTranslatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaximumGhostLevel", GetMaximumGhostLevel);
	Nan::SetPrototypeMethod(tpl, "getMaximumGhostLevel", GetMaximumGhostLevel);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPiecesInTable", GetNumberOfPiecesInTable);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPiecesInTable", GetNumberOfPiecesInTable);

	Nan::SetPrototypeMethod(tpl, "GetPieceAvailable", GetPieceAvailable);
	Nan::SetPrototypeMethod(tpl, "getPieceAvailable", GetPieceAvailable);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PieceToExtent", PieceToExtent);
	Nan::SetPrototypeMethod(tpl, "pieceToExtent", PieceToExtent);

	Nan::SetPrototypeMethod(tpl, "PieceToExtentByPoints", PieceToExtentByPoints);
	Nan::SetPrototypeMethod(tpl, "pieceToExtentByPoints", PieceToExtentByPoints);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMaximumGhostLevel", SetMaximumGhostLevel);
	Nan::SetPrototypeMethod(tpl, "setMaximumGhostLevel", SetMaximumGhostLevel);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfPieces", SetNumberOfPieces);
	Nan::SetPrototypeMethod(tpl, "setNumberOfPieces", SetNumberOfPieces);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfPiecesInTable", SetNumberOfPiecesInTable);
	Nan::SetPrototypeMethod(tpl, "setNumberOfPiecesInTable", SetNumberOfPiecesInTable);

	Nan::SetPrototypeMethod(tpl, "SetPieceAvailable", SetPieceAvailable);
	Nan::SetPrototypeMethod(tpl, "setPieceAvailable", SetPieceAvailable);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkTableExtentTranslatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTableExtentTranslator> native = vtkSmartPointer<vtkTableExtentTranslator>::New();
		VtkTableExtentTranslatorWrap* obj = new VtkTableExtentTranslatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTableExtentTranslatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkTableExtentTranslatorWrap>(info.Holder());
	vtkTableExtentTranslator *native = (vtkTableExtentTranslator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableExtentTranslatorWrap::GetMaximumGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkTableExtentTranslatorWrap>(info.Holder());
	vtkTableExtentTranslator *native = (vtkTableExtentTranslator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumGhostLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableExtentTranslatorWrap::GetNumberOfPiecesInTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkTableExtentTranslatorWrap>(info.Holder());
	vtkTableExtentTranslator *native = (vtkTableExtentTranslator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPiecesInTable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableExtentTranslatorWrap::GetPieceAvailable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkTableExtentTranslatorWrap>(info.Holder());
	vtkTableExtentTranslator *native = (vtkTableExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPieceAvailable(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableExtentTranslatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkTableExtentTranslatorWrap>(info.Holder());
	vtkTableExtentTranslator *native = (vtkTableExtentTranslator *)wrapper->native.GetPointer();
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

void VtkTableExtentTranslatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkTableExtentTranslatorWrap>(info.Holder());
	vtkTableExtentTranslator *native = (vtkTableExtentTranslator *)wrapper->native.GetPointer();
	vtkTableExtentTranslator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTableExtentTranslatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTableExtentTranslatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableExtentTranslatorWrap *w = new VtkTableExtentTranslatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTableExtentTranslatorWrap::PieceToExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkTableExtentTranslatorWrap>(info.Holder());
	vtkTableExtentTranslator *native = (vtkTableExtentTranslator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->PieceToExtent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableExtentTranslatorWrap::PieceToExtentByPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkTableExtentTranslatorWrap>(info.Holder());
	vtkTableExtentTranslator *native = (vtkTableExtentTranslator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->PieceToExtentByPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableExtentTranslatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkTableExtentTranslatorWrap>(info.Holder());
	vtkTableExtentTranslator *native = (vtkTableExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTableExtentTranslator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTableExtentTranslatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkTableExtentTranslatorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTableExtentTranslatorWrap *w = new VtkTableExtentTranslatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableExtentTranslatorWrap::SetMaximumGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkTableExtentTranslatorWrap>(info.Holder());
	vtkTableExtentTranslator *native = (vtkTableExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumGhostLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableExtentTranslatorWrap::SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkTableExtentTranslatorWrap>(info.Holder());
	vtkTableExtentTranslator *native = (vtkTableExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfPieces(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableExtentTranslatorWrap::SetNumberOfPiecesInTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkTableExtentTranslatorWrap>(info.Holder());
	vtkTableExtentTranslator *native = (vtkTableExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfPiecesInTable(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableExtentTranslatorWrap::SetPieceAvailable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkTableExtentTranslatorWrap>(info.Holder());
	vtkTableExtentTranslator *native = (vtkTableExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPieceAvailable(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

