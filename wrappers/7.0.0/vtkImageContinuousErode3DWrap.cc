/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageSpatialAlgorithmWrap.h"
#include "vtkImageContinuousErode3DWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageContinuousErode3DWrap::ptpl;

VtkImageContinuousErode3DWrap::VtkImageContinuousErode3DWrap()
{ }

VtkImageContinuousErode3DWrap::VtkImageContinuousErode3DWrap(vtkSmartPointer<vtkImageContinuousErode3D> _native)
{ native = _native; }

VtkImageContinuousErode3DWrap::~VtkImageContinuousErode3DWrap()
{ }

void VtkImageContinuousErode3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageContinuousErode3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageContinuousErode3D").ToLocalChecked(), ConstructorGetter);
}

void VtkImageContinuousErode3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageContinuousErode3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageSpatialAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageSpatialAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageContinuousErode3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

#ifdef VTK_NODE_PLUS_VTKIMAGECONTINUOUSERODE3DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGECONTINUOUSERODE3DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageContinuousErode3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageContinuousErode3D> native = vtkSmartPointer<vtkImageContinuousErode3D>::New();
		VtkImageContinuousErode3DWrap* obj = new VtkImageContinuousErode3DWrap(native);
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

void VtkImageContinuousErode3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageContinuousErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageContinuousErode3DWrap>(info.Holder());
	vtkImageContinuousErode3D *native = (vtkImageContinuousErode3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageContinuousErode3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageContinuousErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageContinuousErode3DWrap>(info.Holder());
	vtkImageContinuousErode3D *native = (vtkImageContinuousErode3D *)wrapper->native.GetPointer();
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

void VtkImageContinuousErode3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageContinuousErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageContinuousErode3DWrap>(info.Holder());
	vtkImageContinuousErode3D *native = (vtkImageContinuousErode3D *)wrapper->native.GetPointer();
	vtkImageContinuousErode3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageContinuousErode3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageContinuousErode3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageContinuousErode3DWrap *w = new VtkImageContinuousErode3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageContinuousErode3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageContinuousErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageContinuousErode3DWrap>(info.Holder());
	vtkImageContinuousErode3D *native = (vtkImageContinuousErode3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageContinuousErode3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImageContinuousErode3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageContinuousErode3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageContinuousErode3DWrap *w = new VtkImageContinuousErode3DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageContinuousErode3DWrap::SetKernelSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageContinuousErode3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageContinuousErode3DWrap>(info.Holder());
	vtkImageContinuousErode3D *native = (vtkImageContinuousErode3D *)wrapper->native.GetPointer();
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

