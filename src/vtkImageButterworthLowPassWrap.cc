/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageButterworthLowPassWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageButterworthLowPassWrap::constructor;

VtkImageButterworthLowPassWrap::VtkImageButterworthLowPassWrap()
{ }

VtkImageButterworthLowPassWrap::VtkImageButterworthLowPassWrap(vtkSmartPointer<vtkImageButterworthLowPass> _native)
{ native = _native; }

VtkImageButterworthLowPassWrap::~VtkImageButterworthLowPassWrap()
{ }

void VtkImageButterworthLowPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkImageButterworthLowPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkImageAlgorithmWrap::InitTpl(tpl);
	VtkThreadedImageAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkImageButterworthLowPass").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageButterworthLowPass").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageButterworthLowPassWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOrder", GetOrder);
	Nan::SetPrototypeMethod(tpl, "getOrder", GetOrder);

	Nan::SetPrototypeMethod(tpl, "GetXCutOff", GetXCutOff);
	Nan::SetPrototypeMethod(tpl, "getXCutOff", GetXCutOff);

	Nan::SetPrototypeMethod(tpl, "GetYCutOff", GetYCutOff);
	Nan::SetPrototypeMethod(tpl, "getYCutOff", GetYCutOff);

	Nan::SetPrototypeMethod(tpl, "GetZCutOff", GetZCutOff);
	Nan::SetPrototypeMethod(tpl, "getZCutOff", GetZCutOff);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCutOff", SetCutOff);
	Nan::SetPrototypeMethod(tpl, "setCutOff", SetCutOff);

	Nan::SetPrototypeMethod(tpl, "SetOrder", SetOrder);
	Nan::SetPrototypeMethod(tpl, "setOrder", SetOrder);

	Nan::SetPrototypeMethod(tpl, "SetXCutOff", SetXCutOff);
	Nan::SetPrototypeMethod(tpl, "setXCutOff", SetXCutOff);

	Nan::SetPrototypeMethod(tpl, "SetYCutOff", SetYCutOff);
	Nan::SetPrototypeMethod(tpl, "setYCutOff", SetYCutOff);

	Nan::SetPrototypeMethod(tpl, "SetZCutOff", SetZCutOff);
	Nan::SetPrototypeMethod(tpl, "setZCutOff", SetZCutOff);

}

void VtkImageButterworthLowPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageButterworthLowPass> native = vtkSmartPointer<vtkImageButterworthLowPass>::New();
		VtkImageButterworthLowPassWrap* obj = new VtkImageButterworthLowPassWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageButterworthLowPassWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthLowPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthLowPassWrap>(info.Holder());
	vtkImageButterworthLowPass *native = (vtkImageButterworthLowPass *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageButterworthLowPassWrap::GetOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthLowPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthLowPassWrap>(info.Holder());
	vtkImageButterworthLowPass *native = (vtkImageButterworthLowPass *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageButterworthLowPassWrap::GetXCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthLowPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthLowPassWrap>(info.Holder());
	vtkImageButterworthLowPass *native = (vtkImageButterworthLowPass *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXCutOff();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageButterworthLowPassWrap::GetYCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthLowPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthLowPassWrap>(info.Holder());
	vtkImageButterworthLowPass *native = (vtkImageButterworthLowPass *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYCutOff();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageButterworthLowPassWrap::GetZCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthLowPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthLowPassWrap>(info.Holder());
	vtkImageButterworthLowPass *native = (vtkImageButterworthLowPass *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZCutOff();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageButterworthLowPassWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthLowPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthLowPassWrap>(info.Holder());
	vtkImageButterworthLowPass *native = (vtkImageButterworthLowPass *)wrapper->native.GetPointer();
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

void VtkImageButterworthLowPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthLowPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthLowPassWrap>(info.Holder());
	vtkImageButterworthLowPass *native = (vtkImageButterworthLowPass *)wrapper->native.GetPointer();
	vtkImageButterworthLowPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageButterworthLowPassWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageButterworthLowPassWrap *w = new VtkImageButterworthLowPassWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageButterworthLowPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthLowPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthLowPassWrap>(info.Holder());
	vtkImageButterworthLowPass *native = (vtkImageButterworthLowPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageButterworthLowPass * r;
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
			Nan::New<v8::Function>(VtkImageButterworthLowPassWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageButterworthLowPassWrap *w = new VtkImageButterworthLowPassWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageButterworthLowPassWrap::SetCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthLowPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthLowPassWrap>(info.Holder());
	vtkImageButterworthLowPass *native = (vtkImageButterworthLowPass *)wrapper->native.GetPointer();
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
				native->SetCutOff(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCutOff(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageButterworthLowPassWrap::SetOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthLowPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthLowPassWrap>(info.Holder());
	vtkImageButterworthLowPass *native = (vtkImageButterworthLowPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageButterworthLowPassWrap::SetXCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthLowPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthLowPassWrap>(info.Holder());
	vtkImageButterworthLowPass *native = (vtkImageButterworthLowPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXCutOff(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageButterworthLowPassWrap::SetYCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthLowPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthLowPassWrap>(info.Holder());
	vtkImageButterworthLowPass *native = (vtkImageButterworthLowPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYCutOff(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageButterworthLowPassWrap::SetZCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthLowPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthLowPassWrap>(info.Holder());
	vtkImageButterworthLowPass *native = (vtkImageButterworthLowPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZCutOff(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

