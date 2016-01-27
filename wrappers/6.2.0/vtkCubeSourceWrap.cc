/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkCubeSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCubeSourceWrap::ptpl;

VtkCubeSourceWrap::VtkCubeSourceWrap()
{ }

VtkCubeSourceWrap::VtkCubeSourceWrap(vtkSmartPointer<vtkCubeSource> _native)
{ native = _native; }

VtkCubeSourceWrap::~VtkCubeSourceWrap()
{ }

void VtkCubeSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCubeSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CubeSource").ToLocalChecked(), ConstructorGetter);
}

void VtkCubeSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCubeSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCubeSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetXLength", GetXLength);
	Nan::SetPrototypeMethod(tpl, "getXLength", GetXLength);

	Nan::SetPrototypeMethod(tpl, "GetXLengthMaxValue", GetXLengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getXLengthMaxValue", GetXLengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetXLengthMinValue", GetXLengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getXLengthMinValue", GetXLengthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetYLength", GetYLength);
	Nan::SetPrototypeMethod(tpl, "getYLength", GetYLength);

	Nan::SetPrototypeMethod(tpl, "GetYLengthMaxValue", GetYLengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getYLengthMaxValue", GetYLengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetYLengthMinValue", GetYLengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getYLengthMinValue", GetYLengthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetZLength", GetZLength);
	Nan::SetPrototypeMethod(tpl, "getZLength", GetZLength);

	Nan::SetPrototypeMethod(tpl, "GetZLengthMaxValue", GetZLengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getZLengthMaxValue", GetZLengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetZLengthMinValue", GetZLengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getZLengthMinValue", GetZLengthMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBounds", SetBounds);
	Nan::SetPrototypeMethod(tpl, "setBounds", SetBounds);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetXLength", SetXLength);
	Nan::SetPrototypeMethod(tpl, "setXLength", SetXLength);

	Nan::SetPrototypeMethod(tpl, "SetYLength", SetYLength);
	Nan::SetPrototypeMethod(tpl, "setYLength", SetYLength);

	Nan::SetPrototypeMethod(tpl, "SetZLength", SetZLength);
	Nan::SetPrototypeMethod(tpl, "setZLength", SetZLength);

	ptpl.Reset( tpl );
}

void VtkCubeSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCubeSource> native = vtkSmartPointer<vtkCubeSource>::New();
		VtkCubeSourceWrap* obj = new VtkCubeSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCubeSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCubeSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCubeSourceWrap::GetXLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCubeSourceWrap::GetXLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXLengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCubeSourceWrap::GetXLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXLengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCubeSourceWrap::GetYLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCubeSourceWrap::GetYLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYLengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCubeSourceWrap::GetYLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYLengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCubeSourceWrap::GetZLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCubeSourceWrap::GetZLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZLengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCubeSourceWrap::GetZLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZLengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCubeSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
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

void VtkCubeSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	vtkCubeSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCubeSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCubeSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCubeSourceWrap *w = new VtkCubeSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCubeSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCubeSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCubeSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCubeSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCubeSourceWrap *w = new VtkCubeSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCubeSourceWrap::SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
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

void VtkCubeSourceWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
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

void VtkCubeSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCubeSourceWrap::SetXLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXLength(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCubeSourceWrap::SetYLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYLength(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCubeSourceWrap::SetZLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCubeSourceWrap *wrapper = ObjectWrap::Unwrap<VtkCubeSourceWrap>(info.Holder());
	vtkCubeSource *native = (vtkCubeSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZLength(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

