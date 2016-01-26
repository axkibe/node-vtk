/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkExtentTranslatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkExtentTranslatorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkExtentTranslatorWrap::ptpl;

VtkExtentTranslatorWrap::VtkExtentTranslatorWrap()
{ }

VtkExtentTranslatorWrap::VtkExtentTranslatorWrap(vtkSmartPointer<vtkExtentTranslator> _native)
{ native = _native; }

VtkExtentTranslatorWrap::~VtkExtentTranslatorWrap()
{ }

void VtkExtentTranslatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtentTranslator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtentTranslator").ToLocalChecked(), ConstructorGetter);
}

void VtkExtentTranslatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtentTranslatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtentTranslatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGhostLevel", GetGhostLevel);
	Nan::SetPrototypeMethod(tpl, "getGhostLevel", GetGhostLevel);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPieces", GetNumberOfPieces);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPieces", GetNumberOfPieces);

	Nan::SetPrototypeMethod(tpl, "GetPiece", GetPiece);
	Nan::SetPrototypeMethod(tpl, "getPiece", GetPiece);

	Nan::SetPrototypeMethod(tpl, "GetSplitMode", GetSplitMode);
	Nan::SetPrototypeMethod(tpl, "getSplitMode", GetSplitMode);

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

	Nan::SetPrototypeMethod(tpl, "SetExtent", SetExtent);
	Nan::SetPrototypeMethod(tpl, "setExtent", SetExtent);

	Nan::SetPrototypeMethod(tpl, "SetGhostLevel", SetGhostLevel);
	Nan::SetPrototypeMethod(tpl, "setGhostLevel", SetGhostLevel);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfPieces", SetNumberOfPieces);
	Nan::SetPrototypeMethod(tpl, "setNumberOfPieces", SetNumberOfPieces);

	Nan::SetPrototypeMethod(tpl, "SetPiece", SetPiece);
	Nan::SetPrototypeMethod(tpl, "setPiece", SetPiece);

	Nan::SetPrototypeMethod(tpl, "SetSplitModeToBlock", SetSplitModeToBlock);
	Nan::SetPrototypeMethod(tpl, "setSplitModeToBlock", SetSplitModeToBlock);

	Nan::SetPrototypeMethod(tpl, "SetSplitModeToXSlab", SetSplitModeToXSlab);
	Nan::SetPrototypeMethod(tpl, "setSplitModeToXSlab", SetSplitModeToXSlab);

	Nan::SetPrototypeMethod(tpl, "SetSplitModeToYSlab", SetSplitModeToYSlab);
	Nan::SetPrototypeMethod(tpl, "setSplitModeToYSlab", SetSplitModeToYSlab);

	Nan::SetPrototypeMethod(tpl, "SetSplitModeToZSlab", SetSplitModeToZSlab);
	Nan::SetPrototypeMethod(tpl, "setSplitModeToZSlab", SetSplitModeToZSlab);

	Nan::SetPrototypeMethod(tpl, "SetWholeExtent", SetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setWholeExtent", SetWholeExtent);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkExtentTranslatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtentTranslator> native = vtkSmartPointer<vtkExtentTranslator>::New();
		VtkExtentTranslatorWrap* obj = new VtkExtentTranslatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExtentTranslatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtentTranslatorWrap::GetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGhostLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtentTranslatorWrap::GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPieces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtentTranslatorWrap::GetPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPiece();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtentTranslatorWrap::GetSplitMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSplitMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtentTranslatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
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

void VtkExtentTranslatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	vtkExtentTranslator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkExtentTranslatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkExtentTranslatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtentTranslatorWrap *w = new VtkExtentTranslatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtentTranslatorWrap::PieceToExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->PieceToExtent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtentTranslatorWrap::PieceToExtentByPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->PieceToExtentByPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtentTranslatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtentTranslator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkExtentTranslatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkExtentTranslatorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtentTranslatorWrap *w = new VtkExtentTranslatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtentTranslatorWrap::SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetExtent(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtentTranslatorWrap::SetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGhostLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtentTranslatorWrap::SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
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

void VtkExtentTranslatorWrap::SetPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPiece(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtentTranslatorWrap::SetSplitModeToBlock(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSplitModeToBlock();
}

void VtkExtentTranslatorWrap::SetSplitModeToXSlab(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSplitModeToXSlab();
}

void VtkExtentTranslatorWrap::SetSplitModeToYSlab(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSplitModeToYSlab();
}

void VtkExtentTranslatorWrap::SetSplitModeToZSlab(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSplitModeToZSlab();
}

void VtkExtentTranslatorWrap::SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtentTranslatorWrap *wrapper = ObjectWrap::Unwrap<VtkExtentTranslatorWrap>(info.Holder());
	vtkExtentTranslator *native = (vtkExtentTranslator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetWholeExtent(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

