/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageButterworthHighPassWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageButterworthHighPassWrap::ptpl;

VtkImageButterworthHighPassWrap::VtkImageButterworthHighPassWrap()
{ }

VtkImageButterworthHighPassWrap::VtkImageButterworthHighPassWrap(vtkSmartPointer<vtkImageButterworthHighPass> _native)
{ native = _native; }

VtkImageButterworthHighPassWrap::~VtkImageButterworthHighPassWrap()
{ }

void VtkImageButterworthHighPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageButterworthHighPass").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageButterworthHighPass").ToLocalChecked(), ConstructorGetter);
}

void VtkImageButterworthHighPassWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageButterworthHighPassWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageButterworthHighPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

	ptpl.Reset( tpl );
}

void VtkImageButterworthHighPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageButterworthHighPass> native = vtkSmartPointer<vtkImageButterworthHighPass>::New();
		VtkImageButterworthHighPassWrap* obj = new VtkImageButterworthHighPassWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageButterworthHighPassWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthHighPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthHighPassWrap>(info.Holder());
	vtkImageButterworthHighPass *native = (vtkImageButterworthHighPass *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageButterworthHighPassWrap::GetOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthHighPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthHighPassWrap>(info.Holder());
	vtkImageButterworthHighPass *native = (vtkImageButterworthHighPass *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageButterworthHighPassWrap::GetXCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthHighPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthHighPassWrap>(info.Holder());
	vtkImageButterworthHighPass *native = (vtkImageButterworthHighPass *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXCutOff();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageButterworthHighPassWrap::GetYCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthHighPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthHighPassWrap>(info.Holder());
	vtkImageButterworthHighPass *native = (vtkImageButterworthHighPass *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYCutOff();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageButterworthHighPassWrap::GetZCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthHighPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthHighPassWrap>(info.Holder());
	vtkImageButterworthHighPass *native = (vtkImageButterworthHighPass *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZCutOff();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageButterworthHighPassWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthHighPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthHighPassWrap>(info.Holder());
	vtkImageButterworthHighPass *native = (vtkImageButterworthHighPass *)wrapper->native.GetPointer();
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

void VtkImageButterworthHighPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthHighPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthHighPassWrap>(info.Holder());
	vtkImageButterworthHighPass *native = (vtkImageButterworthHighPass *)wrapper->native.GetPointer();
	vtkImageButterworthHighPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageButterworthHighPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageButterworthHighPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageButterworthHighPassWrap *w = new VtkImageButterworthHighPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageButterworthHighPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthHighPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthHighPassWrap>(info.Holder());
	vtkImageButterworthHighPass *native = (vtkImageButterworthHighPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageButterworthHighPass * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageButterworthHighPassWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageButterworthHighPassWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageButterworthHighPassWrap *w = new VtkImageButterworthHighPassWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageButterworthHighPassWrap::SetCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthHighPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthHighPassWrap>(info.Holder());
	vtkImageButterworthHighPass *native = (vtkImageButterworthHighPass *)wrapper->native.GetPointer();
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

void VtkImageButterworthHighPassWrap::SetOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthHighPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthHighPassWrap>(info.Holder());
	vtkImageButterworthHighPass *native = (vtkImageButterworthHighPass *)wrapper->native.GetPointer();
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

void VtkImageButterworthHighPassWrap::SetXCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthHighPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthHighPassWrap>(info.Holder());
	vtkImageButterworthHighPass *native = (vtkImageButterworthHighPass *)wrapper->native.GetPointer();
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

void VtkImageButterworthHighPassWrap::SetYCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthHighPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthHighPassWrap>(info.Holder());
	vtkImageButterworthHighPass *native = (vtkImageButterworthHighPass *)wrapper->native.GetPointer();
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

void VtkImageButterworthHighPassWrap::SetZCutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageButterworthHighPassWrap *wrapper = ObjectWrap::Unwrap<VtkImageButterworthHighPassWrap>(info.Holder());
	vtkImageButterworthHighPass *native = (vtkImageButterworthHighPass *)wrapper->native.GetPointer();
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

