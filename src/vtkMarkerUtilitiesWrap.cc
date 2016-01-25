/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkMarkerUtilitiesWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkMarkerUtilitiesWrap::constructor;

VtkMarkerUtilitiesWrap::VtkMarkerUtilitiesWrap()
{ }

VtkMarkerUtilitiesWrap::VtkMarkerUtilitiesWrap(vtkSmartPointer<vtkMarkerUtilities> _native)
{ native = _native; }

VtkMarkerUtilitiesWrap::~VtkMarkerUtilitiesWrap()
{ }

void VtkMarkerUtilitiesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkMarkerUtilitiesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkMarkerUtilities").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("MarkerUtilities").ToLocalChecked(),tpl->GetFunction());
}

void VtkMarkerUtilitiesWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GenerateMarker", GenerateMarker);
	Nan::SetPrototypeMethod(tpl, "generateMarker", GenerateMarker);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkMarkerUtilitiesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMarkerUtilitiesWrap::GenerateMarker(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarkerUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkMarkerUtilitiesWrap>(info.Holder());
	vtkMarkerUtilities *native = (vtkMarkerUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GenerateMarker(
					(vtkImageData *) a0->native.GetPointer(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMarkerUtilitiesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarkerUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkMarkerUtilitiesWrap>(info.Holder());
	vtkMarkerUtilities *native = (vtkMarkerUtilities *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMarkerUtilitiesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarkerUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkMarkerUtilitiesWrap>(info.Holder());
	vtkMarkerUtilities *native = (vtkMarkerUtilities *)wrapper->native.GetPointer();
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

void VtkMarkerUtilitiesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarkerUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkMarkerUtilitiesWrap>(info.Holder());
	vtkMarkerUtilities *native = (vtkMarkerUtilities *)wrapper->native.GetPointer();
	vtkMarkerUtilities * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMarkerUtilitiesWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMarkerUtilitiesWrap *w = new VtkMarkerUtilitiesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMarkerUtilitiesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarkerUtilitiesWrap *wrapper = ObjectWrap::Unwrap<VtkMarkerUtilitiesWrap>(info.Holder());
	vtkMarkerUtilities *native = (vtkMarkerUtilities *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMarkerUtilities * r;
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
			Nan::New<v8::Function>(VtkMarkerUtilitiesWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMarkerUtilitiesWrap *w = new VtkMarkerUtilitiesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

