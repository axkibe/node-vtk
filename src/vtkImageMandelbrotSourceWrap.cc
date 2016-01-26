/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageMandelbrotSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageMandelbrotSourceWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageMandelbrotSourceWrap::ptpl;

VtkImageMandelbrotSourceWrap::VtkImageMandelbrotSourceWrap()
{ }

VtkImageMandelbrotSourceWrap::VtkImageMandelbrotSourceWrap(vtkSmartPointer<vtkImageMandelbrotSource> _native)
{ native = _native; }

VtkImageMandelbrotSourceWrap::~VtkImageMandelbrotSourceWrap()
{ }

void VtkImageMandelbrotSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageMandelbrotSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageMandelbrotSource").ToLocalChecked(), ConstructorGetter);
}

void VtkImageMandelbrotSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageMandelbrotSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageMandelbrotSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ConstantSizeOff", ConstantSizeOff);
	Nan::SetPrototypeMethod(tpl, "constantSizeOff", ConstantSizeOff);

	Nan::SetPrototypeMethod(tpl, "ConstantSizeOn", ConstantSizeOn);
	Nan::SetPrototypeMethod(tpl, "constantSizeOn", ConstantSizeOn);

	Nan::SetPrototypeMethod(tpl, "CopyOriginAndSample", CopyOriginAndSample);
	Nan::SetPrototypeMethod(tpl, "copyOriginAndSample", CopyOriginAndSample);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetConstantSize", GetConstantSize);
	Nan::SetPrototypeMethod(tpl, "getConstantSize", GetConstantSize);

	Nan::SetPrototypeMethod(tpl, "GetSubsampleRate", GetSubsampleRate);
	Nan::SetPrototypeMethod(tpl, "getSubsampleRate", GetSubsampleRate);

	Nan::SetPrototypeMethod(tpl, "GetSubsampleRateMaxValue", GetSubsampleRateMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSubsampleRateMaxValue", GetSubsampleRateMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSubsampleRateMinValue", GetSubsampleRateMinValue);
	Nan::SetPrototypeMethod(tpl, "getSubsampleRateMinValue", GetSubsampleRateMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Pan", Pan);
	Nan::SetPrototypeMethod(tpl, "pan", Pan);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetConstantSize", SetConstantSize);
	Nan::SetPrototypeMethod(tpl, "setConstantSize", SetConstantSize);

	Nan::SetPrototypeMethod(tpl, "SetOriginCX", SetOriginCX);
	Nan::SetPrototypeMethod(tpl, "setOriginCX", SetOriginCX);

	Nan::SetPrototypeMethod(tpl, "SetProjectionAxes", SetProjectionAxes);
	Nan::SetPrototypeMethod(tpl, "setProjectionAxes", SetProjectionAxes);

	Nan::SetPrototypeMethod(tpl, "SetSampleCX", SetSampleCX);
	Nan::SetPrototypeMethod(tpl, "setSampleCX", SetSampleCX);

	Nan::SetPrototypeMethod(tpl, "SetSizeCX", SetSizeCX);
	Nan::SetPrototypeMethod(tpl, "setSizeCX", SetSizeCX);

	Nan::SetPrototypeMethod(tpl, "SetSubsampleRate", SetSubsampleRate);
	Nan::SetPrototypeMethod(tpl, "setSubsampleRate", SetSubsampleRate);

	Nan::SetPrototypeMethod(tpl, "SetWholeExtent", SetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setWholeExtent", SetWholeExtent);

	Nan::SetPrototypeMethod(tpl, "Zoom", Zoom);
	Nan::SetPrototypeMethod(tpl, "zoom", Zoom);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkImageMandelbrotSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageMandelbrotSource> native = vtkSmartPointer<vtkImageMandelbrotSource>::New();
		VtkImageMandelbrotSourceWrap* obj = new VtkImageMandelbrotSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageMandelbrotSourceWrap::ConstantSizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConstantSizeOff();
}

void VtkImageMandelbrotSourceWrap::ConstantSizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConstantSizeOn();
}

void VtkImageMandelbrotSourceWrap::CopyOriginAndSample(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageMandelbrotSourceWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageMandelbrotSourceWrap *a0 = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyOriginAndSample(
			(vtkImageMandelbrotSource *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMandelbrotSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageMandelbrotSourceWrap::GetConstantSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetConstantSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMandelbrotSourceWrap::GetSubsampleRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubsampleRate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMandelbrotSourceWrap::GetSubsampleRateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubsampleRateMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMandelbrotSourceWrap::GetSubsampleRateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubsampleRateMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMandelbrotSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
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

void VtkImageMandelbrotSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	vtkImageMandelbrotSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageMandelbrotSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageMandelbrotSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageMandelbrotSourceWrap *w = new VtkImageMandelbrotSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageMandelbrotSourceWrap::Pan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
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
				native->Pan(
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

void VtkImageMandelbrotSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageMandelbrotSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageMandelbrotSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkImageMandelbrotSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageMandelbrotSourceWrap *w = new VtkImageMandelbrotSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMandelbrotSourceWrap::SetConstantSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetConstantSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMandelbrotSourceWrap::SetOriginCX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetOriginCX(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMandelbrotSourceWrap::SetProjectionAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetProjectionAxes(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMandelbrotSourceWrap::SetSampleCX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetSampleCX(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMandelbrotSourceWrap::SetSizeCX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetSizeCX(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMandelbrotSourceWrap::SetSubsampleRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSubsampleRate(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMandelbrotSourceWrap::SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
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

void VtkImageMandelbrotSourceWrap::Zoom(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMandelbrotSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageMandelbrotSourceWrap>(info.Holder());
	vtkImageMandelbrotSource *native = (vtkImageMandelbrotSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Zoom(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

