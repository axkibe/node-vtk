/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCompositeInterpolatedVelocityFieldWrap.h"
#include "vtkCellLocatorInterpolatedVelocityFieldWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAbstractCellLocatorWrap.h"
#include "vtkAbstractInterpolatedVelocityFieldWrap.h"
#include "vtkDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCellLocatorInterpolatedVelocityFieldWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkCellLocatorInterpolatedVelocityFieldWrap::ptpl;

VtkCellLocatorInterpolatedVelocityFieldWrap::VtkCellLocatorInterpolatedVelocityFieldWrap()
{ }

VtkCellLocatorInterpolatedVelocityFieldWrap::VtkCellLocatorInterpolatedVelocityFieldWrap(vtkSmartPointer<vtkCellLocatorInterpolatedVelocityField> _native)
{ native = _native; }

VtkCellLocatorInterpolatedVelocityFieldWrap::~VtkCellLocatorInterpolatedVelocityFieldWrap()
{ }

void VtkCellLocatorInterpolatedVelocityFieldWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCompositeInterpolatedVelocityFieldWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCompositeInterpolatedVelocityFieldWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkCellLocatorInterpolatedVelocityFieldWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkCellLocatorInterpolatedVelocityField").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("CellLocatorInterpolatedVelocityField").ToLocalChecked(),tpl->GetFunction());
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddDataSet", AddDataSet);
	Nan::SetPrototypeMethod(tpl, "addDataSet", AddDataSet);

	Nan::SetPrototypeMethod(tpl, "CopyParameters", CopyParameters);
	Nan::SetPrototypeMethod(tpl, "copyParameters", CopyParameters);

	Nan::SetPrototypeMethod(tpl, "GetCellLocatorPrototype", GetCellLocatorPrototype);
	Nan::SetPrototypeMethod(tpl, "getCellLocatorPrototype", GetCellLocatorPrototype);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLastCellLocator", GetLastCellLocator);
	Nan::SetPrototypeMethod(tpl, "getLastCellLocator", GetLastCellLocator);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellLocatorPrototype", SetCellLocatorPrototype);
	Nan::SetPrototypeMethod(tpl, "setCellLocatorPrototype", SetCellLocatorPrototype);

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
		VtkCellLocatorInterpolatedVelocityFieldWrap* obj = new VtkCellLocatorInterpolatedVelocityFieldWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::AddDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCellLocatorInterpolatedVelocityField *native = (vtkCellLocatorInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAbstractCellLocatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractCellLocatorWrap *w = new VtkAbstractCellLocatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCellLocatorInterpolatedVelocityField *native = (vtkCellLocatorInterpolatedVelocityField *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAbstractCellLocatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractCellLocatorWrap *w = new VtkAbstractCellLocatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCellLocatorInterpolatedVelocityField *native = (vtkCellLocatorInterpolatedVelocityField *)wrapper->native.GetPointer();
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCellLocatorInterpolatedVelocityFieldWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellLocatorInterpolatedVelocityFieldWrap *w = new VtkCellLocatorInterpolatedVelocityFieldWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellLocatorInterpolatedVelocityFieldWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCellLocatorInterpolatedVelocityField *native = (vtkCellLocatorInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCellLocatorInterpolatedVelocityField * r;
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
			Nan::New<v8::Function>(VtkCellLocatorInterpolatedVelocityFieldWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellLocatorInterpolatedVelocityFieldWrap *w = new VtkCellLocatorInterpolatedVelocityFieldWrap();
		w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsObject())
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

