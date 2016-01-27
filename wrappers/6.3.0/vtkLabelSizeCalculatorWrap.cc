/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkLabelSizeCalculatorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTextPropertyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLabelSizeCalculatorWrap::ptpl;

VtkLabelSizeCalculatorWrap::VtkLabelSizeCalculatorWrap()
{ }

VtkLabelSizeCalculatorWrap::VtkLabelSizeCalculatorWrap(vtkSmartPointer<vtkLabelSizeCalculator> _native)
{ native = _native; }

VtkLabelSizeCalculatorWrap::~VtkLabelSizeCalculatorWrap()
{ }

void VtkLabelSizeCalculatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLabelSizeCalculator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LabelSizeCalculator").ToLocalChecked(), ConstructorGetter);
}

void VtkLabelSizeCalculatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLabelSizeCalculatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPassInputTypeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLabelSizeCalculatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFontProperty", GetFontProperty);
	Nan::SetPrototypeMethod(tpl, "getFontProperty", GetFontProperty);

	Nan::SetPrototypeMethod(tpl, "GetLabelSizeArrayName", GetLabelSizeArrayName);
	Nan::SetPrototypeMethod(tpl, "getLabelSizeArrayName", GetLabelSizeArrayName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFontProperty", SetFontProperty);
	Nan::SetPrototypeMethod(tpl, "setFontProperty", SetFontProperty);

	Nan::SetPrototypeMethod(tpl, "SetLabelSizeArrayName", SetLabelSizeArrayName);
	Nan::SetPrototypeMethod(tpl, "setLabelSizeArrayName", SetLabelSizeArrayName);

	ptpl.Reset( tpl );
}

void VtkLabelSizeCalculatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLabelSizeCalculator> native = vtkSmartPointer<vtkLabelSizeCalculator>::New();
		VtkLabelSizeCalculatorWrap* obj = new VtkLabelSizeCalculatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLabelSizeCalculatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelSizeCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelSizeCalculatorWrap>(info.Holder());
	vtkLabelSizeCalculator *native = (vtkLabelSizeCalculator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLabelSizeCalculatorWrap::GetFontProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelSizeCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelSizeCalculatorWrap>(info.Holder());
	vtkLabelSizeCalculator *native = (vtkLabelSizeCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkTextProperty * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetFontProperty(
			info[0]->Int32Value()
		);
			VtkTextPropertyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelSizeCalculatorWrap::GetLabelSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelSizeCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelSizeCalculatorWrap>(info.Holder());
	vtkLabelSizeCalculator *native = (vtkLabelSizeCalculator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelSizeArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLabelSizeCalculatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelSizeCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelSizeCalculatorWrap>(info.Holder());
	vtkLabelSizeCalculator *native = (vtkLabelSizeCalculator *)wrapper->native.GetPointer();
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

void VtkLabelSizeCalculatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelSizeCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelSizeCalculatorWrap>(info.Holder());
	vtkLabelSizeCalculator *native = (vtkLabelSizeCalculator *)wrapper->native.GetPointer();
	vtkLabelSizeCalculator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkLabelSizeCalculatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLabelSizeCalculatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLabelSizeCalculatorWrap *w = new VtkLabelSizeCalculatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabelSizeCalculatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelSizeCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelSizeCalculatorWrap>(info.Holder());
	vtkLabelSizeCalculator *native = (vtkLabelSizeCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLabelSizeCalculator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkLabelSizeCalculatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLabelSizeCalculatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLabelSizeCalculatorWrap *w = new VtkLabelSizeCalculatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelSizeCalculatorWrap::SetFontProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelSizeCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelSizeCalculatorWrap>(info.Holder());
	vtkLabelSizeCalculator *native = (vtkLabelSizeCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetFontProperty(
				(vtkTextProperty *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabelSizeCalculatorWrap::SetLabelSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabelSizeCalculatorWrap *wrapper = ObjectWrap::Unwrap<VtkLabelSizeCalculatorWrap>(info.Holder());
	vtkLabelSizeCalculator *native = (vtkLabelSizeCalculator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelSizeArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

