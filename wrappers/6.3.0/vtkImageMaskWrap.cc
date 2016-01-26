/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageMaskWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkDataObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageMaskWrap::ptpl;

VtkImageMaskWrap::VtkImageMaskWrap()
{ }

VtkImageMaskWrap::VtkImageMaskWrap(vtkSmartPointer<vtkImageMask> _native)
{ native = _native; }

VtkImageMaskWrap::~VtkImageMaskWrap()
{ }

void VtkImageMaskWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageMask").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageMask").ToLocalChecked(), ConstructorGetter);
}

void VtkImageMaskWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageMaskWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageMaskWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaskAlpha", GetMaskAlpha);
	Nan::SetPrototypeMethod(tpl, "getMaskAlpha", GetMaskAlpha);

	Nan::SetPrototypeMethod(tpl, "GetMaskAlphaMaxValue", GetMaskAlphaMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaskAlphaMaxValue", GetMaskAlphaMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaskAlphaMinValue", GetMaskAlphaMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaskAlphaMinValue", GetMaskAlphaMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMaskedOutputValueLength", GetMaskedOutputValueLength);
	Nan::SetPrototypeMethod(tpl, "getMaskedOutputValueLength", GetMaskedOutputValueLength);

	Nan::SetPrototypeMethod(tpl, "GetNotMask", GetNotMask);
	Nan::SetPrototypeMethod(tpl, "getNotMask", GetNotMask);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NotMaskOff", NotMaskOff);
	Nan::SetPrototypeMethod(tpl, "notMaskOff", NotMaskOff);

	Nan::SetPrototypeMethod(tpl, "NotMaskOn", NotMaskOn);
	Nan::SetPrototypeMethod(tpl, "notMaskOn", NotMaskOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetImageInputData", SetImageInputData);
	Nan::SetPrototypeMethod(tpl, "setImageInputData", SetImageInputData);

	Nan::SetPrototypeMethod(tpl, "SetInput1Data", SetInput1Data);
	Nan::SetPrototypeMethod(tpl, "setInput1Data", SetInput1Data);

	Nan::SetPrototypeMethod(tpl, "SetInput2Data", SetInput2Data);
	Nan::SetPrototypeMethod(tpl, "setInput2Data", SetInput2Data);

	Nan::SetPrototypeMethod(tpl, "SetMaskAlpha", SetMaskAlpha);
	Nan::SetPrototypeMethod(tpl, "setMaskAlpha", SetMaskAlpha);

	Nan::SetPrototypeMethod(tpl, "SetMaskInputData", SetMaskInputData);
	Nan::SetPrototypeMethod(tpl, "setMaskInputData", SetMaskInputData);

	Nan::SetPrototypeMethod(tpl, "SetMaskedOutputValue", SetMaskedOutputValue);
	Nan::SetPrototypeMethod(tpl, "setMaskedOutputValue", SetMaskedOutputValue);

	Nan::SetPrototypeMethod(tpl, "SetNotMask", SetNotMask);
	Nan::SetPrototypeMethod(tpl, "setNotMask", SetNotMask);

	ptpl.Reset( tpl );
}

void VtkImageMaskWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageMask> native = vtkSmartPointer<vtkImageMask>::New();
		VtkImageMaskWrap* obj = new VtkImageMaskWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageMaskWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageMaskWrap::GetMaskAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaskAlpha();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMaskWrap::GetMaskAlphaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaskAlphaMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMaskWrap::GetMaskAlphaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaskAlphaMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMaskWrap::GetMaskedOutputValueLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaskedOutputValueLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMaskWrap::GetNotMask(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNotMask();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMaskWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
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

void VtkImageMaskWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	vtkImageMask * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageMaskWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageMaskWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageMaskWrap *w = new VtkImageMaskWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageMaskWrap::NotMaskOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NotMaskOff();
}

void VtkImageMaskWrap::NotMaskOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NotMaskOn();
}

void VtkImageMaskWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageMask * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageMaskWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageMaskWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageMaskWrap *w = new VtkImageMaskWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMaskWrap::SetImageInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImageInputData(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMaskWrap::SetInput1Data(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput1Data(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMaskWrap::SetInput2Data(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput2Data(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMaskWrap::SetMaskAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaskAlpha(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMaskWrap::SetMaskInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaskInputData(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMaskWrap::SetMaskedOutputValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetMaskedOutputValue(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetMaskedOutputValue(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaskedOutputValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMaskWrap::SetNotMask(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMaskWrap *wrapper = ObjectWrap::Unwrap<VtkImageMaskWrap>(info.Holder());
	vtkImageMask *native = (vtkImageMask *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNotMask(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

