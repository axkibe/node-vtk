/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridVolumeMapperWrap.h"
#include "vtkUnstructuredGridVolumeZSweepMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkUnstructuredGridVolumeRayIntegratorWrap.h"
#include "vtkRendererWrap.h"
#include "vtkVolumeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkUnstructuredGridVolumeZSweepMapperWrap::constructor;

VtkUnstructuredGridVolumeZSweepMapperWrap::VtkUnstructuredGridVolumeZSweepMapperWrap()
{ }

VtkUnstructuredGridVolumeZSweepMapperWrap::VtkUnstructuredGridVolumeZSweepMapperWrap(vtkSmartPointer<vtkUnstructuredGridVolumeZSweepMapper> _native)
{ native = _native; }

VtkUnstructuredGridVolumeZSweepMapperWrap::~VtkUnstructuredGridVolumeZSweepMapperWrap()
{ }

void VtkUnstructuredGridVolumeZSweepMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkUnstructuredGridVolumeZSweepMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkAbstractMapperWrap::InitTpl(tpl);
	VtkAbstractMapper3DWrap::InitTpl(tpl);
	VtkAbstractVolumeMapperWrap::InitTpl(tpl);
	VtkUnstructuredGridVolumeMapperWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkUnstructuredGridVolumeZSweepMapper").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("UnstructuredGridVolumeZSweepMapper").ToLocalChecked(),tpl->GetFunction());
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AutoAdjustSampleDistancesOff", AutoAdjustSampleDistancesOff);
	Nan::SetPrototypeMethod(tpl, "autoAdjustSampleDistancesOff", AutoAdjustSampleDistancesOff);

	Nan::SetPrototypeMethod(tpl, "AutoAdjustSampleDistancesOn", AutoAdjustSampleDistancesOn);
	Nan::SetPrototypeMethod(tpl, "autoAdjustSampleDistancesOn", AutoAdjustSampleDistancesOn);

	Nan::SetPrototypeMethod(tpl, "GetAutoAdjustSampleDistances", GetAutoAdjustSampleDistances);
	Nan::SetPrototypeMethod(tpl, "getAutoAdjustSampleDistances", GetAutoAdjustSampleDistances);

	Nan::SetPrototypeMethod(tpl, "GetAutoAdjustSampleDistancesMaxValue", GetAutoAdjustSampleDistancesMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAutoAdjustSampleDistancesMaxValue", GetAutoAdjustSampleDistancesMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAutoAdjustSampleDistancesMinValue", GetAutoAdjustSampleDistancesMinValue);
	Nan::SetPrototypeMethod(tpl, "getAutoAdjustSampleDistancesMinValue", GetAutoAdjustSampleDistancesMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetIntermixIntersectingGeometry", GetIntermixIntersectingGeometry);
	Nan::SetPrototypeMethod(tpl, "getIntermixIntersectingGeometry", GetIntermixIntersectingGeometry);

	Nan::SetPrototypeMethod(tpl, "GetIntermixIntersectingGeometryMaxValue", GetIntermixIntersectingGeometryMaxValue);
	Nan::SetPrototypeMethod(tpl, "getIntermixIntersectingGeometryMaxValue", GetIntermixIntersectingGeometryMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetIntermixIntersectingGeometryMinValue", GetIntermixIntersectingGeometryMinValue);
	Nan::SetPrototypeMethod(tpl, "getIntermixIntersectingGeometryMinValue", GetIntermixIntersectingGeometryMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMaxPixelListSize", GetMaxPixelListSize);
	Nan::SetPrototypeMethod(tpl, "getMaxPixelListSize", GetMaxPixelListSize);

	Nan::SetPrototypeMethod(tpl, "GetRayIntegrator", GetRayIntegrator);
	Nan::SetPrototypeMethod(tpl, "getRayIntegrator", GetRayIntegrator);

	Nan::SetPrototypeMethod(tpl, "IntermixIntersectingGeometryOff", IntermixIntersectingGeometryOff);
	Nan::SetPrototypeMethod(tpl, "intermixIntersectingGeometryOff", IntermixIntersectingGeometryOff);

	Nan::SetPrototypeMethod(tpl, "IntermixIntersectingGeometryOn", IntermixIntersectingGeometryOn);
	Nan::SetPrototypeMethod(tpl, "intermixIntersectingGeometryOn", IntermixIntersectingGeometryOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAutoAdjustSampleDistances", SetAutoAdjustSampleDistances);
	Nan::SetPrototypeMethod(tpl, "setAutoAdjustSampleDistances", SetAutoAdjustSampleDistances);

	Nan::SetPrototypeMethod(tpl, "SetIntermixIntersectingGeometry", SetIntermixIntersectingGeometry);
	Nan::SetPrototypeMethod(tpl, "setIntermixIntersectingGeometry", SetIntermixIntersectingGeometry);

	Nan::SetPrototypeMethod(tpl, "SetMaxPixelListSize", SetMaxPixelListSize);
	Nan::SetPrototypeMethod(tpl, "setMaxPixelListSize", SetMaxPixelListSize);

	Nan::SetPrototypeMethod(tpl, "SetRayIntegrator", SetRayIntegrator);
	Nan::SetPrototypeMethod(tpl, "setRayIntegrator", SetRayIntegrator);

}

void VtkUnstructuredGridVolumeZSweepMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkUnstructuredGridVolumeZSweepMapper> native = vtkSmartPointer<vtkUnstructuredGridVolumeZSweepMapper>::New();
		VtkUnstructuredGridVolumeZSweepMapperWrap* obj = new VtkUnstructuredGridVolumeZSweepMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::AutoAdjustSampleDistancesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoAdjustSampleDistancesOff();
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::AutoAdjustSampleDistancesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoAdjustSampleDistancesOn();
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::GetAutoAdjustSampleDistances(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutoAdjustSampleDistances();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::GetAutoAdjustSampleDistancesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutoAdjustSampleDistancesMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::GetAutoAdjustSampleDistancesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutoAdjustSampleDistancesMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::GetIntermixIntersectingGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntermixIntersectingGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::GetIntermixIntersectingGeometryMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntermixIntersectingGeometryMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::GetIntermixIntersectingGeometryMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIntermixIntersectingGeometryMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::GetMaxPixelListSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxPixelListSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::GetRayIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	vtkUnstructuredGridVolumeRayIntegrator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRayIntegrator();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkUnstructuredGridVolumeRayIntegratorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridVolumeRayIntegratorWrap *w = new VtkUnstructuredGridVolumeRayIntegratorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::IntermixIntersectingGeometryOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IntermixIntersectingGeometryOff();
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::IntermixIntersectingGeometryOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IntermixIntersectingGeometryOn();
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
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

void VtkUnstructuredGridVolumeZSweepMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	vtkUnstructuredGridVolumeZSweepMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkUnstructuredGridVolumeZSweepMapperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridVolumeZSweepMapperWrap *w = new VtkUnstructuredGridVolumeZSweepMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkVolumeWrap *a1 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkVolume *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkUnstructuredGridVolumeZSweepMapper * r;
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
			Nan::New<v8::Function>(VtkUnstructuredGridVolumeZSweepMapperWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnstructuredGridVolumeZSweepMapperWrap *w = new VtkUnstructuredGridVolumeZSweepMapperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::SetAutoAdjustSampleDistances(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutoAdjustSampleDistances(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::SetIntermixIntersectingGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIntermixIntersectingGeometry(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::SetMaxPixelListSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxPixelListSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridVolumeZSweepMapperWrap::SetRayIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeZSweepMapperWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeZSweepMapperWrap>(info.Holder());
	vtkUnstructuredGridVolumeZSweepMapper *native = (vtkUnstructuredGridVolumeZSweepMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkUnstructuredGridVolumeRayIntegratorWrap *a0 = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeRayIntegratorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRayIntegrator(
			(vtkUnstructuredGridVolumeRayIntegrator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

