/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageGaussianSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageGaussianSourceWrap::ptpl;

VtkImageGaussianSourceWrap::VtkImageGaussianSourceWrap()
{ }

VtkImageGaussianSourceWrap::VtkImageGaussianSourceWrap(vtkSmartPointer<vtkImageGaussianSource> _native)
{ native = _native; }

VtkImageGaussianSourceWrap::~VtkImageGaussianSourceWrap()
{ }

void VtkImageGaussianSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageGaussianSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageGaussianSource").ToLocalChecked(), ConstructorGetter);
}

void VtkImageGaussianSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageGaussianSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageGaussianSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaximum", GetMaximum);
	Nan::SetPrototypeMethod(tpl, "getMaximum", GetMaximum);

	Nan::SetPrototypeMethod(tpl, "GetStandardDeviation", GetStandardDeviation);
	Nan::SetPrototypeMethod(tpl, "getStandardDeviation", GetStandardDeviation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetMaximum", SetMaximum);
	Nan::SetPrototypeMethod(tpl, "setMaximum", SetMaximum);

	Nan::SetPrototypeMethod(tpl, "SetStandardDeviation", SetStandardDeviation);
	Nan::SetPrototypeMethod(tpl, "setStandardDeviation", SetStandardDeviation);

	Nan::SetPrototypeMethod(tpl, "SetWholeExtent", SetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setWholeExtent", SetWholeExtent);

	ptpl.Reset( tpl );
}

void VtkImageGaussianSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageGaussianSource> native = vtkSmartPointer<vtkImageGaussianSource>::New();
		VtkImageGaussianSourceWrap* obj = new VtkImageGaussianSourceWrap(native);
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

void VtkImageGaussianSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSourceWrap>(info.Holder());
	vtkImageGaussianSource *native = (vtkImageGaussianSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageGaussianSourceWrap::GetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSourceWrap>(info.Holder());
	vtkImageGaussianSource *native = (vtkImageGaussianSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGaussianSourceWrap::GetStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSourceWrap>(info.Holder());
	vtkImageGaussianSource *native = (vtkImageGaussianSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStandardDeviation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGaussianSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSourceWrap>(info.Holder());
	vtkImageGaussianSource *native = (vtkImageGaussianSource *)wrapper->native.GetPointer();
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

void VtkImageGaussianSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSourceWrap>(info.Holder());
	vtkImageGaussianSource *native = (vtkImageGaussianSource *)wrapper->native.GetPointer();
	vtkImageGaussianSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageGaussianSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageGaussianSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageGaussianSourceWrap *w = new VtkImageGaussianSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageGaussianSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSourceWrap>(info.Holder());
	vtkImageGaussianSource *native = (vtkImageGaussianSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageGaussianSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageGaussianSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageGaussianSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageGaussianSourceWrap *w = new VtkImageGaussianSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGaussianSourceWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSourceWrap>(info.Holder());
	vtkImageGaussianSource *native = (vtkImageGaussianSource *)wrapper->native.GetPointer();
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
				native->SetCenter(
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

void VtkImageGaussianSourceWrap::SetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSourceWrap>(info.Holder());
	vtkImageGaussianSource *native = (vtkImageGaussianSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximum(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGaussianSourceWrap::SetStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSourceWrap>(info.Holder());
	vtkImageGaussianSource *native = (vtkImageGaussianSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStandardDeviation(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGaussianSourceWrap::SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGaussianSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGaussianSourceWrap>(info.Holder());
	vtkImageGaussianSource *native = (vtkImageGaussianSource *)wrapper->native.GetPointer();
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
							native->SetWholeExtent(
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

