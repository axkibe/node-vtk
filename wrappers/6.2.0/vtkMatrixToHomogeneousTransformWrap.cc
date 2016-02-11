/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkHomogeneousTransformWrap.h"
#include "vtkMatrixToHomogeneousTransformWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMatrix4x4Wrap.h"
#include "vtkAbstractTransformWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMatrixToHomogeneousTransformWrap::ptpl;

VtkMatrixToHomogeneousTransformWrap::VtkMatrixToHomogeneousTransformWrap()
{ }

VtkMatrixToHomogeneousTransformWrap::VtkMatrixToHomogeneousTransformWrap(vtkSmartPointer<vtkMatrixToHomogeneousTransform> _native)
{ native = _native; }

VtkMatrixToHomogeneousTransformWrap::~VtkMatrixToHomogeneousTransformWrap()
{ }

void VtkMatrixToHomogeneousTransformWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMatrixToHomogeneousTransform").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MatrixToHomogeneousTransform").ToLocalChecked(), ConstructorGetter);
}

void VtkMatrixToHomogeneousTransformWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMatrixToHomogeneousTransformWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHomogeneousTransformWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHomogeneousTransformWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMatrixToHomogeneousTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "Inverse", Inverse);
	Nan::SetPrototypeMethod(tpl, "inverse", Inverse);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MakeTransform", MakeTransform);
	Nan::SetPrototypeMethod(tpl, "makeTransform", MakeTransform);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	ptpl.Reset( tpl );
}

void VtkMatrixToHomogeneousTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMatrixToHomogeneousTransform> native = vtkSmartPointer<vtkMatrixToHomogeneousTransform>::New();
		VtkMatrixToHomogeneousTransformWrap* obj = new VtkMatrixToHomogeneousTransformWrap(native);
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

void VtkMatrixToHomogeneousTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixToHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixToHomogeneousTransformWrap>(info.Holder());
	vtkMatrixToHomogeneousTransform *native = (vtkMatrixToHomogeneousTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMatrixToHomogeneousTransformWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixToHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixToHomogeneousTransformWrap>(info.Holder());
	vtkMatrixToHomogeneousTransform *native = (vtkMatrixToHomogeneousTransform *)wrapper->native.GetPointer();
	vtkMatrix4x4 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	VtkMatrix4x4Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMatrix4x4Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMatrixToHomogeneousTransformWrap::Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixToHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixToHomogeneousTransformWrap>(info.Holder());
	vtkMatrixToHomogeneousTransform *native = (vtkMatrixToHomogeneousTransform *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Inverse();
}

void VtkMatrixToHomogeneousTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixToHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixToHomogeneousTransformWrap>(info.Holder());
	vtkMatrixToHomogeneousTransform *native = (vtkMatrixToHomogeneousTransform *)wrapper->native.GetPointer();
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

void VtkMatrixToHomogeneousTransformWrap::MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixToHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixToHomogeneousTransformWrap>(info.Holder());
	vtkMatrixToHomogeneousTransform *native = (vtkMatrixToHomogeneousTransform *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->MakeTransform();
	VtkAbstractTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMatrixToHomogeneousTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixToHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixToHomogeneousTransformWrap>(info.Holder());
	vtkMatrixToHomogeneousTransform *native = (vtkMatrixToHomogeneousTransform *)wrapper->native.GetPointer();
	vtkMatrixToHomogeneousTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMatrixToHomogeneousTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMatrixToHomogeneousTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrixToHomogeneousTransformWrap *w = new VtkMatrixToHomogeneousTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMatrixToHomogeneousTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixToHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixToHomogeneousTransformWrap>(info.Holder());
	vtkMatrixToHomogeneousTransform *native = (vtkMatrixToHomogeneousTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMatrixToHomogeneousTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkMatrixToHomogeneousTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMatrixToHomogeneousTransformWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMatrixToHomogeneousTransformWrap *w = new VtkMatrixToHomogeneousTransformWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMatrixToHomogeneousTransformWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMatrixToHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkMatrixToHomogeneousTransformWrap>(info.Holder());
	vtkMatrixToHomogeneousTransform *native = (vtkMatrixToHomogeneousTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

