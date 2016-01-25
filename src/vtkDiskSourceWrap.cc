/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkDiskSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDiskSourceWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkDiskSourceWrap::ptpl;

VtkDiskSourceWrap::VtkDiskSourceWrap()
{ }

VtkDiskSourceWrap::VtkDiskSourceWrap(vtkSmartPointer<vtkDiskSource> _native)
{ native = _native; }

VtkDiskSourceWrap::~VtkDiskSourceWrap()
{ }

void VtkDiskSourceWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkDiskSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkDiskSource").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("DiskSource").ToLocalChecked(),tpl->GetFunction());
}

void VtkDiskSourceWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetCircumferentialResolution", GetCircumferentialResolution);
	Nan::SetPrototypeMethod(tpl, "getCircumferentialResolution", GetCircumferentialResolution);

	Nan::SetPrototypeMethod(tpl, "GetCircumferentialResolutionMaxValue", GetCircumferentialResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCircumferentialResolutionMaxValue", GetCircumferentialResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCircumferentialResolutionMinValue", GetCircumferentialResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getCircumferentialResolutionMinValue", GetCircumferentialResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInnerRadius", GetInnerRadius);
	Nan::SetPrototypeMethod(tpl, "getInnerRadius", GetInnerRadius);

	Nan::SetPrototypeMethod(tpl, "GetInnerRadiusMaxValue", GetInnerRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getInnerRadiusMaxValue", GetInnerRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetInnerRadiusMinValue", GetInnerRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getInnerRadiusMinValue", GetInnerRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOuterRadius", GetOuterRadius);
	Nan::SetPrototypeMethod(tpl, "getOuterRadius", GetOuterRadius);

	Nan::SetPrototypeMethod(tpl, "GetOuterRadiusMaxValue", GetOuterRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOuterRadiusMaxValue", GetOuterRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOuterRadiusMinValue", GetOuterRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getOuterRadiusMinValue", GetOuterRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetRadialResolution", GetRadialResolution);
	Nan::SetPrototypeMethod(tpl, "getRadialResolution", GetRadialResolution);

	Nan::SetPrototypeMethod(tpl, "GetRadialResolutionMaxValue", GetRadialResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRadialResolutionMaxValue", GetRadialResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRadialResolutionMinValue", GetRadialResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getRadialResolutionMinValue", GetRadialResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCircumferentialResolution", SetCircumferentialResolution);
	Nan::SetPrototypeMethod(tpl, "setCircumferentialResolution", SetCircumferentialResolution);

	Nan::SetPrototypeMethod(tpl, "SetInnerRadius", SetInnerRadius);
	Nan::SetPrototypeMethod(tpl, "setInnerRadius", SetInnerRadius);

	Nan::SetPrototypeMethod(tpl, "SetOuterRadius", SetOuterRadius);
	Nan::SetPrototypeMethod(tpl, "setOuterRadius", SetOuterRadius);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetRadialResolution", SetRadialResolution);
	Nan::SetPrototypeMethod(tpl, "setRadialResolution", SetRadialResolution);

}

void VtkDiskSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDiskSource> native = vtkSmartPointer<vtkDiskSource>::New();
		VtkDiskSourceWrap* obj = new VtkDiskSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDiskSourceWrap::GetCircumferentialResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCircumferentialResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiskSourceWrap::GetCircumferentialResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCircumferentialResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiskSourceWrap::GetCircumferentialResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCircumferentialResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiskSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDiskSourceWrap::GetInnerRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInnerRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiskSourceWrap::GetInnerRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInnerRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiskSourceWrap::GetInnerRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInnerRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiskSourceWrap::GetOuterRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOuterRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiskSourceWrap::GetOuterRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOuterRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiskSourceWrap::GetOuterRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOuterRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiskSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiskSourceWrap::GetRadialResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadialResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiskSourceWrap::GetRadialResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadialResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiskSourceWrap::GetRadialResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadialResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiskSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
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

void VtkDiskSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	vtkDiskSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDiskSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDiskSourceWrap *w = new VtkDiskSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDiskSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDiskSource * r;
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
			Nan::New<v8::Function>(VtkDiskSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDiskSourceWrap *w = new VtkDiskSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiskSourceWrap::SetCircumferentialResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCircumferentialResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiskSourceWrap::SetInnerRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInnerRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiskSourceWrap::SetOuterRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOuterRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiskSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
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

void VtkDiskSourceWrap::SetRadialResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiskSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiskSourceWrap>(info.Holder());
	vtkDiskSource *native = (vtkDiskSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadialResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

