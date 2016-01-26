/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractInterpolatedVelocityFieldWrap.h"
#include "vtkCompositeInterpolatedVelocityFieldWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompositeInterpolatedVelocityFieldWrap::ptpl;

VtkCompositeInterpolatedVelocityFieldWrap::VtkCompositeInterpolatedVelocityFieldWrap()
{ }

VtkCompositeInterpolatedVelocityFieldWrap::VtkCompositeInterpolatedVelocityFieldWrap(vtkSmartPointer<vtkCompositeInterpolatedVelocityField> _native)
{ native = _native; }

VtkCompositeInterpolatedVelocityFieldWrap::~VtkCompositeInterpolatedVelocityFieldWrap()
{ }

void VtkCompositeInterpolatedVelocityFieldWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompositeInterpolatedVelocityField").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompositeInterpolatedVelocityField").ToLocalChecked(), ConstructorGetter);
}

void VtkCompositeInterpolatedVelocityFieldWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompositeInterpolatedVelocityFieldWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractInterpolatedVelocityFieldWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractInterpolatedVelocityFieldWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompositeInterpolatedVelocityFieldWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddDataSet", AddDataSet);
	Nan::SetPrototypeMethod(tpl, "addDataSet", AddDataSet);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLastDataSet", GetLastDataSet);
	Nan::SetPrototypeMethod(tpl, "getLastDataSet", GetLastDataSet);

	Nan::SetPrototypeMethod(tpl, "GetLastDataSetIndex", GetLastDataSetIndex);
	Nan::SetPrototypeMethod(tpl, "getLastDataSetIndex", GetLastDataSetIndex);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkCompositeInterpolatedVelocityFieldWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCompositeInterpolatedVelocityFieldWrap::AddDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCompositeInterpolatedVelocityField *native = (vtkCompositeInterpolatedVelocityField *)wrapper->native.GetPointer();
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

void VtkCompositeInterpolatedVelocityFieldWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCompositeInterpolatedVelocityField *native = (vtkCompositeInterpolatedVelocityField *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompositeInterpolatedVelocityFieldWrap::GetLastDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCompositeInterpolatedVelocityField *native = (vtkCompositeInterpolatedVelocityField *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastDataSet();
		VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeInterpolatedVelocityFieldWrap::GetLastDataSetIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCompositeInterpolatedVelocityField *native = (vtkCompositeInterpolatedVelocityField *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastDataSetIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompositeInterpolatedVelocityFieldWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCompositeInterpolatedVelocityField *native = (vtkCompositeInterpolatedVelocityField *)wrapper->native.GetPointer();
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

void VtkCompositeInterpolatedVelocityFieldWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCompositeInterpolatedVelocityField *native = (vtkCompositeInterpolatedVelocityField *)wrapper->native.GetPointer();
	vtkCompositeInterpolatedVelocityField * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCompositeInterpolatedVelocityFieldWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeInterpolatedVelocityFieldWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeInterpolatedVelocityFieldWrap *w = new VtkCompositeInterpolatedVelocityFieldWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeInterpolatedVelocityFieldWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCompositeInterpolatedVelocityField *native = (vtkCompositeInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompositeInterpolatedVelocityField * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCompositeInterpolatedVelocityFieldWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompositeInterpolatedVelocityFieldWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositeInterpolatedVelocityFieldWrap *w = new VtkCompositeInterpolatedVelocityFieldWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

