/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageAccumulateWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageStencilDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageAccumulateWrap::constructor;

VtkImageAccumulateWrap::VtkImageAccumulateWrap()
{ }

VtkImageAccumulateWrap::VtkImageAccumulateWrap(vtkSmartPointer<vtkImageAccumulate> _native)
{ native = _native; }

VtkImageAccumulateWrap::~VtkImageAccumulateWrap()
{ }

void VtkImageAccumulateWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkImageAccumulateWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkImageAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkImageAccumulate").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageAccumulate").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageAccumulateWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetIgnoreZero", GetIgnoreZero);
	Nan::SetPrototypeMethod(tpl, "getIgnoreZero", GetIgnoreZero);

	Nan::SetPrototypeMethod(tpl, "GetIgnoreZeroMaxValue", GetIgnoreZeroMaxValue);
	Nan::SetPrototypeMethod(tpl, "getIgnoreZeroMaxValue", GetIgnoreZeroMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetIgnoreZeroMinValue", GetIgnoreZeroMinValue);
	Nan::SetPrototypeMethod(tpl, "getIgnoreZeroMinValue", GetIgnoreZeroMinValue);

	Nan::SetPrototypeMethod(tpl, "GetReverseStencil", GetReverseStencil);
	Nan::SetPrototypeMethod(tpl, "getReverseStencil", GetReverseStencil);

	Nan::SetPrototypeMethod(tpl, "GetReverseStencilMaxValue", GetReverseStencilMaxValue);
	Nan::SetPrototypeMethod(tpl, "getReverseStencilMaxValue", GetReverseStencilMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetReverseStencilMinValue", GetReverseStencilMinValue);
	Nan::SetPrototypeMethod(tpl, "getReverseStencilMinValue", GetReverseStencilMinValue);

	Nan::SetPrototypeMethod(tpl, "GetStencil", GetStencil);
	Nan::SetPrototypeMethod(tpl, "getStencil", GetStencil);

	Nan::SetPrototypeMethod(tpl, "IgnoreZeroOff", IgnoreZeroOff);
	Nan::SetPrototypeMethod(tpl, "ignoreZeroOff", IgnoreZeroOff);

	Nan::SetPrototypeMethod(tpl, "IgnoreZeroOn", IgnoreZeroOn);
	Nan::SetPrototypeMethod(tpl, "ignoreZeroOn", IgnoreZeroOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReverseStencilOff", ReverseStencilOff);
	Nan::SetPrototypeMethod(tpl, "reverseStencilOff", ReverseStencilOff);

	Nan::SetPrototypeMethod(tpl, "ReverseStencilOn", ReverseStencilOn);
	Nan::SetPrototypeMethod(tpl, "reverseStencilOn", ReverseStencilOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetComponentExtent", SetComponentExtent);
	Nan::SetPrototypeMethod(tpl, "setComponentExtent", SetComponentExtent);

	Nan::SetPrototypeMethod(tpl, "SetComponentOrigin", SetComponentOrigin);
	Nan::SetPrototypeMethod(tpl, "setComponentOrigin", SetComponentOrigin);

	Nan::SetPrototypeMethod(tpl, "SetComponentSpacing", SetComponentSpacing);
	Nan::SetPrototypeMethod(tpl, "setComponentSpacing", SetComponentSpacing);

	Nan::SetPrototypeMethod(tpl, "SetIgnoreZero", SetIgnoreZero);
	Nan::SetPrototypeMethod(tpl, "setIgnoreZero", SetIgnoreZero);

	Nan::SetPrototypeMethod(tpl, "SetReverseStencil", SetReverseStencil);
	Nan::SetPrototypeMethod(tpl, "setReverseStencil", SetReverseStencil);

	Nan::SetPrototypeMethod(tpl, "SetStencilData", SetStencilData);
	Nan::SetPrototypeMethod(tpl, "setStencilData", SetStencilData);

}

void VtkImageAccumulateWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageAccumulate> native = vtkSmartPointer<vtkImageAccumulate>::New();
		VtkImageAccumulateWrap* obj = new VtkImageAccumulateWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageAccumulateWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageAccumulateWrap::GetIgnoreZero(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIgnoreZero();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAccumulateWrap::GetIgnoreZeroMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIgnoreZeroMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAccumulateWrap::GetIgnoreZeroMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIgnoreZeroMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAccumulateWrap::GetReverseStencil(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReverseStencil();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAccumulateWrap::GetReverseStencilMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReverseStencilMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAccumulateWrap::GetReverseStencilMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReverseStencilMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAccumulateWrap::GetStencil(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	vtkImageStencilData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStencil();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageStencilDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageStencilDataWrap *w = new VtkImageStencilDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageAccumulateWrap::IgnoreZeroOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IgnoreZeroOff();
}

void VtkImageAccumulateWrap::IgnoreZeroOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IgnoreZeroOn();
}

void VtkImageAccumulateWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
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

void VtkImageAccumulateWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	vtkImageAccumulate * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageAccumulateWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageAccumulateWrap *w = new VtkImageAccumulateWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageAccumulateWrap::ReverseStencilOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReverseStencilOff();
}

void VtkImageAccumulateWrap::ReverseStencilOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReverseStencilOn();
}

void VtkImageAccumulateWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageAccumulate * r;
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
			Nan::New<v8::Function>(VtkImageAccumulateWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageAccumulateWrap *w = new VtkImageAccumulateWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAccumulateWrap::SetComponentExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
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
							native->SetComponentExtent(
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

void VtkImageAccumulateWrap::SetComponentOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
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
				native->SetComponentOrigin(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAccumulateWrap::SetComponentSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
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
				native->SetComponentSpacing(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAccumulateWrap::SetIgnoreZero(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIgnoreZero(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAccumulateWrap::SetReverseStencil(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReverseStencil(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAccumulateWrap::SetStencilData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAccumulateWrap *wrapper = ObjectWrap::Unwrap<VtkImageAccumulateWrap>(info.Holder());
	vtkImageAccumulate *native = (vtkImageAccumulate *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkImageStencilDataWrap *a0 = ObjectWrap::Unwrap<VtkImageStencilDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStencilData(
			(vtkImageStencilData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

