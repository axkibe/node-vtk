/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkFixedPointVolumeRayCastHelperWrap.h"
#include "vtkFixedPointVolumeRayCastMIPHelperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkFixedPointVolumeRayCastMapperWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkFixedPointVolumeRayCastMIPHelperWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkFixedPointVolumeRayCastMIPHelperWrap::ptpl;

VtkFixedPointVolumeRayCastMIPHelperWrap::VtkFixedPointVolumeRayCastMIPHelperWrap()
{ }

VtkFixedPointVolumeRayCastMIPHelperWrap::VtkFixedPointVolumeRayCastMIPHelperWrap(vtkSmartPointer<vtkFixedPointVolumeRayCastMIPHelper> _native)
{ native = _native; }

VtkFixedPointVolumeRayCastMIPHelperWrap::~VtkFixedPointVolumeRayCastMIPHelperWrap()
{ }

void VtkFixedPointVolumeRayCastMIPHelperWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkFixedPointVolumeRayCastHelperWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkFixedPointVolumeRayCastHelperWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkFixedPointVolumeRayCastMIPHelperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkFixedPointVolumeRayCastMIPHelper").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("FixedPointVolumeRayCastMIPHelper").ToLocalChecked(),tpl->GetFunction());
}

void VtkFixedPointVolumeRayCastMIPHelperWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GenerateImage", GenerateImage);
	Nan::SetPrototypeMethod(tpl, "generateImage", GenerateImage);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkFixedPointVolumeRayCastMIPHelperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFixedPointVolumeRayCastMIPHelper> native = vtkSmartPointer<vtkFixedPointVolumeRayCastMIPHelper>::New();
		VtkFixedPointVolumeRayCastMIPHelperWrap* obj = new VtkFixedPointVolumeRayCastMIPHelperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkFixedPointVolumeRayCastMIPHelperWrap::GenerateImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointVolumeRayCastMIPHelperWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointVolumeRayCastMIPHelperWrap>(info.Holder());
	vtkFixedPointVolumeRayCastMIPHelper *native = (vtkFixedPointVolumeRayCastMIPHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsObject())
			{
				VtkVolumeWrap *a2 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject())
				{
					VtkFixedPointVolumeRayCastMapperWrap *a3 = ObjectWrap::Unwrap<VtkFixedPointVolumeRayCastMapperWrap>(info[3]->ToObject());
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->GenerateImage(
						info[0]->Int32Value(),
						info[1]->Int32Value(),
						(vtkVolume *) a2->native.GetPointer(),
						(vtkFixedPointVolumeRayCastMapper *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFixedPointVolumeRayCastMIPHelperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointVolumeRayCastMIPHelperWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointVolumeRayCastMIPHelperWrap>(info.Holder());
	vtkFixedPointVolumeRayCastMIPHelper *native = (vtkFixedPointVolumeRayCastMIPHelper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFixedPointVolumeRayCastMIPHelperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointVolumeRayCastMIPHelperWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointVolumeRayCastMIPHelperWrap>(info.Holder());
	vtkFixedPointVolumeRayCastMIPHelper *native = (vtkFixedPointVolumeRayCastMIPHelper *)wrapper->native.GetPointer();
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

void VtkFixedPointVolumeRayCastMIPHelperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointVolumeRayCastMIPHelperWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointVolumeRayCastMIPHelperWrap>(info.Holder());
	vtkFixedPointVolumeRayCastMIPHelper *native = (vtkFixedPointVolumeRayCastMIPHelper *)wrapper->native.GetPointer();
	vtkFixedPointVolumeRayCastMIPHelper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkFixedPointVolumeRayCastMIPHelperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFixedPointVolumeRayCastMIPHelperWrap *w = new VtkFixedPointVolumeRayCastMIPHelperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFixedPointVolumeRayCastMIPHelperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointVolumeRayCastMIPHelperWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointVolumeRayCastMIPHelperWrap>(info.Holder());
	vtkFixedPointVolumeRayCastMIPHelper *native = (vtkFixedPointVolumeRayCastMIPHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkFixedPointVolumeRayCastMIPHelper * r;
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
			Nan::New<v8::Function>(VtkFixedPointVolumeRayCastMIPHelperWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFixedPointVolumeRayCastMIPHelperWrap *w = new VtkFixedPointVolumeRayCastMIPHelperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

