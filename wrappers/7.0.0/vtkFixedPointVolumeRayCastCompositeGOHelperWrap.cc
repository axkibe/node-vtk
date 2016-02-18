/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkFixedPointVolumeRayCastHelperWrap.h"
#include "vtkFixedPointVolumeRayCastCompositeGOHelperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkFixedPointVolumeRayCastMapperWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFixedPointVolumeRayCastCompositeGOHelperWrap::ptpl;

VtkFixedPointVolumeRayCastCompositeGOHelperWrap::VtkFixedPointVolumeRayCastCompositeGOHelperWrap()
{ }

VtkFixedPointVolumeRayCastCompositeGOHelperWrap::VtkFixedPointVolumeRayCastCompositeGOHelperWrap(vtkSmartPointer<vtkFixedPointVolumeRayCastCompositeGOHelper> _native)
{ native = _native; }

VtkFixedPointVolumeRayCastCompositeGOHelperWrap::~VtkFixedPointVolumeRayCastCompositeGOHelperWrap()
{ }

void VtkFixedPointVolumeRayCastCompositeGOHelperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFixedPointVolumeRayCastCompositeGOHelper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FixedPointVolumeRayCastCompositeGOHelper").ToLocalChecked(), ConstructorGetter);
}

void VtkFixedPointVolumeRayCastCompositeGOHelperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFixedPointVolumeRayCastCompositeGOHelperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkFixedPointVolumeRayCastHelperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkFixedPointVolumeRayCastHelperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFixedPointVolumeRayCastCompositeGOHelperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

#ifdef VTK_NODE_PLUS_VTKFIXEDPOINTVOLUMERAYCASTCOMPOSITEGOHELPERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKFIXEDPOINTVOLUMERAYCASTCOMPOSITEGOHELPERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkFixedPointVolumeRayCastCompositeGOHelperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFixedPointVolumeRayCastCompositeGOHelper> native = vtkSmartPointer<vtkFixedPointVolumeRayCastCompositeGOHelper>::New();
		VtkFixedPointVolumeRayCastCompositeGOHelperWrap* obj = new VtkFixedPointVolumeRayCastCompositeGOHelperWrap(native);
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

void VtkFixedPointVolumeRayCastCompositeGOHelperWrap::GenerateImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointVolumeRayCastCompositeGOHelperWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointVolumeRayCastCompositeGOHelperWrap>(info.Holder());
	vtkFixedPointVolumeRayCastCompositeGOHelper *native = (vtkFixedPointVolumeRayCastCompositeGOHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkVolumeWrap::ptpl))->HasInstance(info[2]))
			{
				VtkVolumeWrap *a2 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkFixedPointVolumeRayCastMapperWrap::ptpl))->HasInstance(info[3]))
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

void VtkFixedPointVolumeRayCastCompositeGOHelperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointVolumeRayCastCompositeGOHelperWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointVolumeRayCastCompositeGOHelperWrap>(info.Holder());
	vtkFixedPointVolumeRayCastCompositeGOHelper *native = (vtkFixedPointVolumeRayCastCompositeGOHelper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFixedPointVolumeRayCastCompositeGOHelperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointVolumeRayCastCompositeGOHelperWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointVolumeRayCastCompositeGOHelperWrap>(info.Holder());
	vtkFixedPointVolumeRayCastCompositeGOHelper *native = (vtkFixedPointVolumeRayCastCompositeGOHelper *)wrapper->native.GetPointer();
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

void VtkFixedPointVolumeRayCastCompositeGOHelperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointVolumeRayCastCompositeGOHelperWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointVolumeRayCastCompositeGOHelperWrap>(info.Holder());
	vtkFixedPointVolumeRayCastCompositeGOHelper *native = (vtkFixedPointVolumeRayCastCompositeGOHelper *)wrapper->native.GetPointer();
	vtkFixedPointVolumeRayCastCompositeGOHelper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkFixedPointVolumeRayCastCompositeGOHelperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFixedPointVolumeRayCastCompositeGOHelperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFixedPointVolumeRayCastCompositeGOHelperWrap *w = new VtkFixedPointVolumeRayCastCompositeGOHelperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFixedPointVolumeRayCastCompositeGOHelperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFixedPointVolumeRayCastCompositeGOHelperWrap *wrapper = ObjectWrap::Unwrap<VtkFixedPointVolumeRayCastCompositeGOHelperWrap>(info.Holder());
	vtkFixedPointVolumeRayCastCompositeGOHelper *native = (vtkFixedPointVolumeRayCastCompositeGOHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkFixedPointVolumeRayCastCompositeGOHelper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkFixedPointVolumeRayCastCompositeGOHelperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFixedPointVolumeRayCastCompositeGOHelperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFixedPointVolumeRayCastCompositeGOHelperWrap *w = new VtkFixedPointVolumeRayCastCompositeGOHelperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

