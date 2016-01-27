/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWarpTransformWrap.h"
#include "vtkBSplineTransformWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkAbstractTransformWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBSplineTransformWrap::ptpl;

VtkBSplineTransformWrap::VtkBSplineTransformWrap()
{ }

VtkBSplineTransformWrap::VtkBSplineTransformWrap(vtkSmartPointer<vtkBSplineTransform> _native)
{ native = _native; }

VtkBSplineTransformWrap::~VtkBSplineTransformWrap()
{ }

void VtkBSplineTransformWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBSplineTransform").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BSplineTransform").ToLocalChecked(), ConstructorGetter);
}

void VtkBSplineTransformWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBSplineTransformWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWarpTransformWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWarpTransformWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBSplineTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBorderMode", GetBorderMode);
	Nan::SetPrototypeMethod(tpl, "getBorderMode", GetBorderMode);

	Nan::SetPrototypeMethod(tpl, "GetBorderModeAsString", GetBorderModeAsString);
	Nan::SetPrototypeMethod(tpl, "getBorderModeAsString", GetBorderModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetBorderModeMaxValue", GetBorderModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getBorderModeMaxValue", GetBorderModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetBorderModeMinValue", GetBorderModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getBorderModeMinValue", GetBorderModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCoefficientData", GetCoefficientData);
	Nan::SetPrototypeMethod(tpl, "getCoefficientData", GetCoefficientData);

	Nan::SetPrototypeMethod(tpl, "GetDisplacementScale", GetDisplacementScale);
	Nan::SetPrototypeMethod(tpl, "getDisplacementScale", GetDisplacementScale);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MakeTransform", MakeTransform);
	Nan::SetPrototypeMethod(tpl, "makeTransform", MakeTransform);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBorderMode", SetBorderMode);
	Nan::SetPrototypeMethod(tpl, "setBorderMode", SetBorderMode);

	Nan::SetPrototypeMethod(tpl, "SetBorderModeToEdge", SetBorderModeToEdge);
	Nan::SetPrototypeMethod(tpl, "setBorderModeToEdge", SetBorderModeToEdge);

	Nan::SetPrototypeMethod(tpl, "SetBorderModeToZero", SetBorderModeToZero);
	Nan::SetPrototypeMethod(tpl, "setBorderModeToZero", SetBorderModeToZero);

	Nan::SetPrototypeMethod(tpl, "SetBorderModeToZeroAtBorder", SetBorderModeToZeroAtBorder);
	Nan::SetPrototypeMethod(tpl, "setBorderModeToZeroAtBorder", SetBorderModeToZeroAtBorder);

	Nan::SetPrototypeMethod(tpl, "SetCoefficientConnection", SetCoefficientConnection);
	Nan::SetPrototypeMethod(tpl, "setCoefficientConnection", SetCoefficientConnection);

	Nan::SetPrototypeMethod(tpl, "SetCoefficientData", SetCoefficientData);
	Nan::SetPrototypeMethod(tpl, "setCoefficientData", SetCoefficientData);

	Nan::SetPrototypeMethod(tpl, "SetDisplacementScale", SetDisplacementScale);
	Nan::SetPrototypeMethod(tpl, "setDisplacementScale", SetDisplacementScale);

	ptpl.Reset( tpl );
}

void VtkBSplineTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBSplineTransform> native = vtkSmartPointer<vtkBSplineTransform>::New();
		VtkBSplineTransformWrap* obj = new VtkBSplineTransformWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBSplineTransformWrap::GetBorderMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBorderMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBSplineTransformWrap::GetBorderModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBorderModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBSplineTransformWrap::GetBorderModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBorderModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBSplineTransformWrap::GetBorderModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBorderModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBSplineTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBSplineTransformWrap::GetCoefficientData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoefficientData();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBSplineTransformWrap::GetDisplacementScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplacementScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBSplineTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
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

void VtkBSplineTransformWrap::MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
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
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBSplineTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	vtkBSplineTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBSplineTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBSplineTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBSplineTransformWrap *w = new VtkBSplineTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBSplineTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBSplineTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBSplineTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBSplineTransformWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBSplineTransformWrap *w = new VtkBSplineTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSplineTransformWrap::SetBorderMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBorderMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSplineTransformWrap::SetBorderModeToEdge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBorderModeToEdge();
}

void VtkBSplineTransformWrap::SetBorderModeToZero(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBorderModeToZero();
}

void VtkBSplineTransformWrap::SetBorderModeToZeroAtBorder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBorderModeToZeroAtBorder();
}

void VtkBSplineTransformWrap::SetCoefficientConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCoefficientConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSplineTransformWrap::SetCoefficientData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCoefficientData(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSplineTransformWrap::SetDisplacementScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSplineTransformWrap *wrapper = ObjectWrap::Unwrap<VtkBSplineTransformWrap>(info.Holder());
	vtkBSplineTransform *native = (vtkBSplineTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplacementScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

