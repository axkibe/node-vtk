/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageSpatialAlgorithmWrap.h"
#include "vtkImageVariance3DWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageVariance3DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageVariance3DWrap::ptpl;

VtkImageVariance3DWrap::VtkImageVariance3DWrap()
{ }

VtkImageVariance3DWrap::VtkImageVariance3DWrap(vtkSmartPointer<vtkImageVariance3D> _native)
{ native = _native; }

VtkImageVariance3DWrap::~VtkImageVariance3DWrap()
{ }

void VtkImageVariance3DWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageSpatialAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageSpatialAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkImageVariance3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkImageVariance3D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageVariance3D").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageVariance3DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetKernelSize", SetKernelSize);
	Nan::SetPrototypeMethod(tpl, "setKernelSize", SetKernelSize);

}

void VtkImageVariance3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageVariance3D> native = vtkSmartPointer<vtkImageVariance3D>::New();
		VtkImageVariance3DWrap* obj = new VtkImageVariance3DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageVariance3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageVariance3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageVariance3DWrap>(info.Holder());
	vtkImageVariance3D *native = (vtkImageVariance3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageVariance3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageVariance3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageVariance3DWrap>(info.Holder());
	vtkImageVariance3D *native = (vtkImageVariance3D *)wrapper->native.GetPointer();
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

void VtkImageVariance3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageVariance3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageVariance3DWrap>(info.Holder());
	vtkImageVariance3D *native = (vtkImageVariance3D *)wrapper->native.GetPointer();
	vtkImageVariance3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageVariance3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageVariance3DWrap *w = new VtkImageVariance3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageVariance3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageVariance3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageVariance3DWrap>(info.Holder());
	vtkImageVariance3D *native = (vtkImageVariance3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageVariance3D * r;
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
			Nan::New<v8::Function>(VtkImageVariance3DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageVariance3DWrap *w = new VtkImageVariance3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageVariance3DWrap::SetKernelSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageVariance3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageVariance3DWrap>(info.Holder());
	vtkImageVariance3D *native = (vtkImageVariance3D *)wrapper->native.GetPointer();
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
				native->SetKernelSize(
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

