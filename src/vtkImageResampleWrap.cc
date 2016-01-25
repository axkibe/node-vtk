/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageResliceWrap.h"
#include "vtkImageResampleWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageResampleWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageResampleWrap::ptpl;

VtkImageResampleWrap::VtkImageResampleWrap()
{ }

VtkImageResampleWrap::VtkImageResampleWrap(vtkSmartPointer<vtkImageResample> _native)
{ native = _native; }

VtkImageResampleWrap::~VtkImageResampleWrap()
{ }

void VtkImageResampleWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageResliceWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageResliceWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkImageResampleWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkImageResample").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageResample").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageResampleWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetAxisMagnificationFactor", GetAxisMagnificationFactor);
	Nan::SetPrototypeMethod(tpl, "getAxisMagnificationFactor", GetAxisMagnificationFactor);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimensionality", GetDimensionality);
	Nan::SetPrototypeMethod(tpl, "getDimensionality", GetDimensionality);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAxisMagnificationFactor", SetAxisMagnificationFactor);
	Nan::SetPrototypeMethod(tpl, "setAxisMagnificationFactor", SetAxisMagnificationFactor);

	Nan::SetPrototypeMethod(tpl, "SetAxisOutputSpacing", SetAxisOutputSpacing);
	Nan::SetPrototypeMethod(tpl, "setAxisOutputSpacing", SetAxisOutputSpacing);

	Nan::SetPrototypeMethod(tpl, "SetDimensionality", SetDimensionality);
	Nan::SetPrototypeMethod(tpl, "setDimensionality", SetDimensionality);

}

void VtkImageResampleWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageResample> native = vtkSmartPointer<vtkImageResample>::New();
		VtkImageResampleWrap* obj = new VtkImageResampleWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageResampleWrap::GetAxisMagnificationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResampleWrap *wrapper = ObjectWrap::Unwrap<VtkImageResampleWrap>(info.Holder());
	vtkImageResample *native = (vtkImageResample *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			double r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetAxisMagnificationFactor(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResampleWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResampleWrap *wrapper = ObjectWrap::Unwrap<VtkImageResampleWrap>(info.Holder());
	vtkImageResample *native = (vtkImageResample *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageResampleWrap::GetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResampleWrap *wrapper = ObjectWrap::Unwrap<VtkImageResampleWrap>(info.Holder());
	vtkImageResample *native = (vtkImageResample *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionality();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageResampleWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResampleWrap *wrapper = ObjectWrap::Unwrap<VtkImageResampleWrap>(info.Holder());
	vtkImageResample *native = (vtkImageResample *)wrapper->native.GetPointer();
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

void VtkImageResampleWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResampleWrap *wrapper = ObjectWrap::Unwrap<VtkImageResampleWrap>(info.Holder());
	vtkImageResample *native = (vtkImageResample *)wrapper->native.GetPointer();
	vtkImageResample * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageResampleWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageResampleWrap *w = new VtkImageResampleWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageResampleWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResampleWrap *wrapper = ObjectWrap::Unwrap<VtkImageResampleWrap>(info.Holder());
	vtkImageResample *native = (vtkImageResample *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageResample * r;
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
			Nan::New<v8::Function>(VtkImageResampleWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageResampleWrap *w = new VtkImageResampleWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResampleWrap::SetAxisMagnificationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResampleWrap *wrapper = ObjectWrap::Unwrap<VtkImageResampleWrap>(info.Holder());
	vtkImageResample *native = (vtkImageResample *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAxisMagnificationFactor(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResampleWrap::SetAxisOutputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResampleWrap *wrapper = ObjectWrap::Unwrap<VtkImageResampleWrap>(info.Holder());
	vtkImageResample *native = (vtkImageResample *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAxisOutputSpacing(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageResampleWrap::SetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageResampleWrap *wrapper = ObjectWrap::Unwrap<VtkImageResampleWrap>(info.Holder());
	vtkImageResample *native = (vtkImageResample *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDimensionality(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
