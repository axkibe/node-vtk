/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkCompositeInterpolatedVelocityFieldWrap.h"
#include "vtkCellLocatorInterpolatedVelocityFieldWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAbstractCellLocatorWrap.h"
#include "vtkAbstractInterpolatedVelocityFieldWrap.h"
#include "vtkDataSetWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCellLocatorInterpolatedVelocityFieldWrap::ptpl;

VtkCellLocatorInterpolatedVelocityFieldWrap::VtkCellLocatorInterpolatedVelocityFieldWrap()
{ }

VtkCellLocatorInterpolatedVelocityFieldWrap::VtkCellLocatorInterpolatedVelocityFieldWrap(vtkSmartPointer<vtkCellLocatorInterpolatedVelocityField> _native)
{ native = _native; }

VtkCellLocatorInterpolatedVelocityFieldWrap::~VtkCellLocatorInterpolatedVelocityFieldWrap()
{ }

void VtkCellLocatorInterpolatedVelocityFieldWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCellLocatorInterpolatedVelocityField").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CellLocatorInterpolatedVelocityField").ToLocalChecked(), ConstructorGetter);
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCompositeInterpolatedVelocityFieldWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCompositeInterpolatedVelocityFieldWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCellLocatorInterpolatedVelocityFieldWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddDataSet", AddDataSet);
	Nan::SetPrototypeMethod(tpl, "addDataSet", AddDataSet);

	Nan::SetPrototypeMethod(tpl, "CopyParameters", CopyParameters);
	Nan::SetPrototypeMethod(tpl, "copyParameters", CopyParameters);

	Nan::SetPrototypeMethod(tpl, "GetCellLocatorPrototype", GetCellLocatorPrototype);
	Nan::SetPrototypeMethod(tpl, "getCellLocatorPrototype", GetCellLocatorPrototype);

	Nan::SetPrototypeMethod(tpl, "GetLastCellLocator", GetLastCellLocator);
	Nan::SetPrototypeMethod(tpl, "getLastCellLocator", GetLastCellLocator);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellLocatorPrototype", SetCellLocatorPrototype);
	Nan::SetPrototypeMethod(tpl, "setCellLocatorPrototype", SetCellLocatorPrototype);

#ifdef VTK_NODE_PLUS_VTKCELLLOCATORINTERPOLATEDVELOCITYFIELDWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCELLLOCATORINTERPOLATEDVELOCITYFIELDWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellLocatorInterpolatedVelocityField> native = vtkSmartPointer<vtkCellLocatorInterpolatedVelocityField>::New();
		VtkCellLocatorInterpolatedVelocityFieldWrap* obj = new VtkCellLocatorInterpolatedVelocityFieldWrap(native);
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

void VtkCellLocatorInterpolatedVelocityFieldWrap::AddDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCellLocatorInterpolatedVelocityField *native = (vtkCellLocatorInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddDataSet(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::CopyParameters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCellLocatorInterpolatedVelocityField *native = (vtkCellLocatorInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractInterpolatedVelocityFieldWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractInterpolatedVelocityFieldWrap *a0 = ObjectWrap::Unwrap<VtkAbstractInterpolatedVelocityFieldWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyParameters(
			(vtkAbstractInterpolatedVelocityField *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::GetCellLocatorPrototype(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCellLocatorInterpolatedVelocityField *native = (vtkCellLocatorInterpolatedVelocityField *)wrapper->native.GetPointer();
	vtkAbstractCellLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellLocatorPrototype();
	VtkAbstractCellLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractCellLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractCellLocatorWrap *w = new VtkAbstractCellLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::GetLastCellLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCellLocatorInterpolatedVelocityField *native = (vtkCellLocatorInterpolatedVelocityField *)wrapper->native.GetPointer();
	vtkAbstractCellLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastCellLocator();
	VtkAbstractCellLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractCellLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractCellLocatorWrap *w = new VtkAbstractCellLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCellLocatorInterpolatedVelocityField *native = (vtkCellLocatorInterpolatedVelocityField *)wrapper->native.GetPointer();
	vtkCellLocatorInterpolatedVelocityField * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCellLocatorInterpolatedVelocityFieldWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellLocatorInterpolatedVelocityFieldWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellLocatorInterpolatedVelocityFieldWrap *w = new VtkCellLocatorInterpolatedVelocityFieldWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCellLocatorInterpolatedVelocityField *native = (vtkCellLocatorInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkCellLocatorInterpolatedVelocityField * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkCellLocatorInterpolatedVelocityFieldWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellLocatorInterpolatedVelocityFieldWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellLocatorInterpolatedVelocityFieldWrap *w = new VtkCellLocatorInterpolatedVelocityFieldWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::SetCellLocatorPrototype(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCellLocatorInterpolatedVelocityField *native = (vtkCellLocatorInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractCellLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractCellLocatorWrap *a0 = ObjectWrap::Unwrap<VtkAbstractCellLocatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellLocatorPrototype(
			(vtkAbstractCellLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

