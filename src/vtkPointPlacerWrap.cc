/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkPointPlacerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPointPlacerWrap::constructor;

VtkPointPlacerWrap::VtkPointPlacerWrap()
{ }

VtkPointPlacerWrap::VtkPointPlacerWrap(vtkSmartPointer<vtkPointPlacer> _native)
{ native = _native; }

VtkPointPlacerWrap::~VtkPointPlacerWrap()
{ }

void VtkPointPlacerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkPointPlacerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkPointPlacer").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PointPlacer").ToLocalChecked(),tpl->GetFunction());
}

void VtkPointPlacerWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPixelTolerance", GetPixelTolerance);
	Nan::SetPrototypeMethod(tpl, "getPixelTolerance", GetPixelTolerance);

	Nan::SetPrototypeMethod(tpl, "GetPixelToleranceMaxValue", GetPixelToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getPixelToleranceMaxValue", GetPixelToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetPixelToleranceMinValue", GetPixelToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getPixelToleranceMinValue", GetPixelToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetWorldTolerance", GetWorldTolerance);
	Nan::SetPrototypeMethod(tpl, "getWorldTolerance", GetWorldTolerance);

	Nan::SetPrototypeMethod(tpl, "GetWorldToleranceMaxValue", GetWorldToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getWorldToleranceMaxValue", GetWorldToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetWorldToleranceMinValue", GetWorldToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getWorldToleranceMinValue", GetWorldToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPixelTolerance", SetPixelTolerance);
	Nan::SetPrototypeMethod(tpl, "setPixelTolerance", SetPixelTolerance);

	Nan::SetPrototypeMethod(tpl, "SetWorldTolerance", SetWorldTolerance);
	Nan::SetPrototypeMethod(tpl, "setWorldTolerance", SetWorldTolerance);

	Nan::SetPrototypeMethod(tpl, "UpdateInternalState", UpdateInternalState);
	Nan::SetPrototypeMethod(tpl, "updateInternalState", UpdateInternalState);

}

void VtkPointPlacerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPointPlacer> native = vtkSmartPointer<vtkPointPlacer>::New();
		VtkPointPlacerWrap* obj = new VtkPointPlacerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPointPlacerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info.Holder());
	vtkPointPlacer *native = (vtkPointPlacer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPointPlacerWrap::GetPixelTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info.Holder());
	vtkPointPlacer *native = (vtkPointPlacer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPixelTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointPlacerWrap::GetPixelToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info.Holder());
	vtkPointPlacer *native = (vtkPointPlacer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPixelToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointPlacerWrap::GetPixelToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info.Holder());
	vtkPointPlacer *native = (vtkPointPlacer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPixelToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointPlacerWrap::GetWorldTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info.Holder());
	vtkPointPlacer *native = (vtkPointPlacer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWorldTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointPlacerWrap::GetWorldToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info.Holder());
	vtkPointPlacer *native = (vtkPointPlacer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWorldToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointPlacerWrap::GetWorldToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info.Holder());
	vtkPointPlacer *native = (vtkPointPlacer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWorldToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointPlacerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info.Holder());
	vtkPointPlacer *native = (vtkPointPlacer *)wrapper->native.GetPointer();
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

void VtkPointPlacerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info.Holder());
	vtkPointPlacer *native = (vtkPointPlacer *)wrapper->native.GetPointer();
	vtkPointPlacer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPointPlacerWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointPlacerWrap *w = new VtkPointPlacerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointPlacerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info.Holder());
	vtkPointPlacer *native = (vtkPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPointPlacer * r;
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
			Nan::New<v8::Function>(VtkPointPlacerWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointPlacerWrap *w = new VtkPointPlacerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointPlacerWrap::SetPixelTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info.Holder());
	vtkPointPlacer *native = (vtkPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPixelTolerance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointPlacerWrap::SetWorldTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info.Holder());
	vtkPointPlacer *native = (vtkPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWorldTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointPlacerWrap::UpdateInternalState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPlacerWrap>(info.Holder());
	vtkPointPlacer *native = (vtkPointPlacer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->UpdateInternalState();
	info.GetReturnValue().Set(Nan::New(r));
}

