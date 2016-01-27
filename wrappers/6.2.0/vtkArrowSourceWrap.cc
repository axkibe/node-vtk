/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkArrowSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkArrowSourceWrap::ptpl;

VtkArrowSourceWrap::VtkArrowSourceWrap()
{ }

VtkArrowSourceWrap::VtkArrowSourceWrap(vtkSmartPointer<vtkArrowSource> _native)
{ native = _native; }

VtkArrowSourceWrap::~VtkArrowSourceWrap()
{ }

void VtkArrowSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkArrowSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ArrowSource").ToLocalChecked(), ConstructorGetter);
}

void VtkArrowSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkArrowSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkArrowSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetShaftRadius", GetShaftRadius);
	Nan::SetPrototypeMethod(tpl, "getShaftRadius", GetShaftRadius);

	Nan::SetPrototypeMethod(tpl, "GetShaftRadiusMaxValue", GetShaftRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getShaftRadiusMaxValue", GetShaftRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetShaftRadiusMinValue", GetShaftRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getShaftRadiusMinValue", GetShaftRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetShaftResolution", GetShaftResolution);
	Nan::SetPrototypeMethod(tpl, "getShaftResolution", GetShaftResolution);

	Nan::SetPrototypeMethod(tpl, "GetShaftResolutionMaxValue", GetShaftResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getShaftResolutionMaxValue", GetShaftResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetShaftResolutionMinValue", GetShaftResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getShaftResolutionMinValue", GetShaftResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTipLength", GetTipLength);
	Nan::SetPrototypeMethod(tpl, "getTipLength", GetTipLength);

	Nan::SetPrototypeMethod(tpl, "GetTipLengthMaxValue", GetTipLengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTipLengthMaxValue", GetTipLengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTipLengthMinValue", GetTipLengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getTipLengthMinValue", GetTipLengthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTipRadius", GetTipRadius);
	Nan::SetPrototypeMethod(tpl, "getTipRadius", GetTipRadius);

	Nan::SetPrototypeMethod(tpl, "GetTipRadiusMaxValue", GetTipRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTipRadiusMaxValue", GetTipRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTipRadiusMinValue", GetTipRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getTipRadiusMinValue", GetTipRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTipResolution", GetTipResolution);
	Nan::SetPrototypeMethod(tpl, "getTipResolution", GetTipResolution);

	Nan::SetPrototypeMethod(tpl, "GetTipResolutionMaxValue", GetTipResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTipResolutionMaxValue", GetTipResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTipResolutionMinValue", GetTipResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getTipResolutionMinValue", GetTipResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "InvertOff", InvertOff);
	Nan::SetPrototypeMethod(tpl, "invertOff", InvertOff);

	Nan::SetPrototypeMethod(tpl, "InvertOn", InvertOn);
	Nan::SetPrototypeMethod(tpl, "invertOn", InvertOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetShaftRadius", SetShaftRadius);
	Nan::SetPrototypeMethod(tpl, "setShaftRadius", SetShaftRadius);

	Nan::SetPrototypeMethod(tpl, "SetShaftResolution", SetShaftResolution);
	Nan::SetPrototypeMethod(tpl, "setShaftResolution", SetShaftResolution);

	Nan::SetPrototypeMethod(tpl, "SetTipLength", SetTipLength);
	Nan::SetPrototypeMethod(tpl, "setTipLength", SetTipLength);

	Nan::SetPrototypeMethod(tpl, "SetTipRadius", SetTipRadius);
	Nan::SetPrototypeMethod(tpl, "setTipRadius", SetTipRadius);

	Nan::SetPrototypeMethod(tpl, "SetTipResolution", SetTipResolution);
	Nan::SetPrototypeMethod(tpl, "setTipResolution", SetTipResolution);

	ptpl.Reset( tpl );
}

void VtkArrowSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkArrowSource> native = vtkSmartPointer<vtkArrowSource>::New();
		VtkArrowSourceWrap* obj = new VtkArrowSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkArrowSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkArrowSourceWrap::GetShaftRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShaftRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetShaftRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShaftRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetShaftRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShaftRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetShaftResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShaftResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetShaftResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShaftResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetShaftResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShaftResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetTipLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTipLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetTipLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTipLengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetTipLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTipLengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetTipRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTipRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetTipRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTipRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetTipRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTipRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetTipResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTipResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetTipResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTipResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::GetTipResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTipResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArrowSourceWrap::InvertOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InvertOff();
}

void VtkArrowSourceWrap::InvertOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InvertOn();
}

void VtkArrowSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
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

void VtkArrowSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	vtkArrowSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkArrowSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkArrowSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkArrowSourceWrap *w = new VtkArrowSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkArrowSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkArrowSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkArrowSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkArrowSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkArrowSourceWrap *w = new VtkArrowSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrowSourceWrap::SetShaftRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShaftRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrowSourceWrap::SetShaftResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShaftResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrowSourceWrap::SetTipLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTipLength(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrowSourceWrap::SetTipRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTipRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArrowSourceWrap::SetTipResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArrowSourceWrap *wrapper = ObjectWrap::Unwrap<VtkArrowSourceWrap>(info.Holder());
	vtkArrowSource *native = (vtkArrowSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTipResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

