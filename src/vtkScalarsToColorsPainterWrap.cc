/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPainterWrap.h"
#include "vtkScalarsToColorsPainterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationDoubleVectorKeyWrap.h"
#include "vtkInformationObjectBaseKeyWrap.h"
#include "vtkScalarsToColorsWrap.h"
#include "vtkInformationStringKeyWrap.h"
#include "vtkActorWrap.h"
#include "vtkDataObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkScalarsToColorsPainterWrap::ptpl;

VtkScalarsToColorsPainterWrap::VtkScalarsToColorsPainterWrap()
{ }

VtkScalarsToColorsPainterWrap::VtkScalarsToColorsPainterWrap(vtkSmartPointer<vtkScalarsToColorsPainter> _native)
{ native = _native; }

VtkScalarsToColorsPainterWrap::~VtkScalarsToColorsPainterWrap()
{ }

void VtkScalarsToColorsPainterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkScalarsToColorsPainter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ScalarsToColorsPainter").ToLocalChecked(), ConstructorGetter);
}

void VtkScalarsToColorsPainterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkScalarsToColorsPainterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPainterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPainterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkScalarsToColorsPainterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ARRAY_ACCESS_MODE", ARRAY_ACCESS_MODE);

	Nan::SetPrototypeMethod(tpl, "ARRAY_COMPONENT", ARRAY_COMPONENT);

	Nan::SetPrototypeMethod(tpl, "ARRAY_ID", ARRAY_ID);

	Nan::SetPrototypeMethod(tpl, "ARRAY_NAME", ARRAY_NAME);

	Nan::SetPrototypeMethod(tpl, "COLOR_MODE", COLOR_MODE);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultLookupTable", CreateDefaultLookupTable);
	Nan::SetPrototypeMethod(tpl, "createDefaultLookupTable", CreateDefaultLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLookupTable", GetLookupTable);
	Nan::SetPrototypeMethod(tpl, "getLookupTable", GetLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "GetPremultiplyColorsWithAlpha", GetPremultiplyColorsWithAlpha);
	Nan::SetPrototypeMethod(tpl, "getPremultiplyColorsWithAlpha", GetPremultiplyColorsWithAlpha);

	Nan::SetPrototypeMethod(tpl, "INTERPOLATE_SCALARS_BEFORE_MAPPING", INTERPOLATE_SCALARS_BEFORE_MAPPING);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LOOKUP_TABLE", LOOKUP_TABLE);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SCALAR_MATERIAL_MODE", SCALAR_MATERIAL_MODE);

	Nan::SetPrototypeMethod(tpl, "SCALAR_MODE", SCALAR_MODE);

	Nan::SetPrototypeMethod(tpl, "SCALAR_RANGE", SCALAR_RANGE);

	Nan::SetPrototypeMethod(tpl, "SCALAR_VISIBILITY", SCALAR_VISIBILITY);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLookupTable", SetLookupTable);
	Nan::SetPrototypeMethod(tpl, "setLookupTable", SetLookupTable);

	Nan::SetPrototypeMethod(tpl, "USE_LOOKUP_TABLE_SCALAR_RANGE", USE_LOOKUP_TABLE_SCALAR_RANGE);

	ptpl.Reset( tpl );
}

void VtkScalarsToColorsPainterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkScalarsToColorsPainter> native = vtkSmartPointer<vtkScalarsToColorsPainter>::New();
		VtkScalarsToColorsPainterWrap* obj = new VtkScalarsToColorsPainterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkScalarsToColorsPainterWrap::ARRAY_ACCESS_MODE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ARRAY_ACCESS_MODE();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::ARRAY_COMPONENT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ARRAY_COMPONENT();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::ARRAY_ID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ARRAY_ID();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::ARRAY_NAME(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkInformationStringKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ARRAY_NAME();
		VtkInformationStringKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationStringKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationStringKeyWrap *w = new VtkInformationStringKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::COLOR_MODE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->COLOR_MODE();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::CreateDefaultLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLookupTable();
}

void VtkScalarsToColorsPainterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkScalarsToColorsPainterWrap::GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkScalarsToColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLookupTable();
		VtkScalarsToColorsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarsToColorsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarsToColorsWrap *w = new VtkScalarsToColorsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
		VtkDataObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::GetPremultiplyColorsWithAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkActorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkActorWrap *a0 = ObjectWrap::Unwrap<VtkActorWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPremultiplyColorsWithAlpha(
			(vtkActor *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsPainterWrap::INTERPOLATE_SCALARS_BEFORE_MAPPING(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->INTERPOLATE_SCALARS_BEFORE_MAPPING();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
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

void VtkScalarsToColorsPainterWrap::LOOKUP_TABLE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkInformationObjectBaseKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->LOOKUP_TABLE();
		VtkInformationObjectBaseKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationObjectBaseKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationObjectBaseKeyWrap *w = new VtkInformationObjectBaseKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkScalarsToColorsPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkScalarsToColorsPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarsToColorsPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarsToColorsPainterWrap *w = new VtkScalarsToColorsPainterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::SCALAR_MATERIAL_MODE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->SCALAR_MATERIAL_MODE();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::SCALAR_MODE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->SCALAR_MODE();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::SCALAR_RANGE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkInformationDoubleVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->SCALAR_RANGE();
		VtkInformationDoubleVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationDoubleVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDoubleVectorKeyWrap *w = new VtkInformationDoubleVectorKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::SCALAR_VISIBILITY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->SCALAR_VISIBILITY();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsPainterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkScalarsToColorsPainter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkScalarsToColorsPainterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkScalarsToColorsPainterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkScalarsToColorsPainterWrap *w = new VtkScalarsToColorsPainterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsPainterWrap::SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarsToColorsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarsToColorsWrap *a0 = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLookupTable(
			(vtkScalarsToColors *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsPainterWrap::USE_LOOKUP_TABLE_SCALAR_RANGE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsPainterWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsPainterWrap>(info.Holder());
	vtkScalarsToColorsPainter *native = (vtkScalarsToColorsPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->USE_LOOKUP_TABLE_SCALAR_RANGE();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

