/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkProp3DWrap.h"
#include "vtkLODProp3DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMapperWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkTextureWrap.h"
#include "vtkAbstractVolumeMapperWrap.h"
#include "vtkVolumePropertyWrap.h"
#include "vtkImageMapper3DWrap.h"
#include "vtkImagePropertyWrap.h"
#include "vtkAbstractMapper3DWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkPropWrap.h"
#include "vtkViewportWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkLODProp3DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkLODProp3DWrap::ptpl;

VtkLODProp3DWrap::VtkLODProp3DWrap()
{ }

VtkLODProp3DWrap::VtkLODProp3DWrap(vtkSmartPointer<vtkLODProp3D> _native)
{ native = _native; }

VtkLODProp3DWrap::~VtkLODProp3DWrap()
{ }

void VtkLODProp3DWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkProp3DWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkProp3DWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkLODProp3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkLODProp3D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("LODProp3D").ToLocalChecked(),tpl->GetFunction());
}

void VtkLODProp3DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddEstimatedRenderTime", AddEstimatedRenderTime);
	Nan::SetPrototypeMethod(tpl, "addEstimatedRenderTime", AddEstimatedRenderTime);

	Nan::SetPrototypeMethod(tpl, "AddLOD", AddLOD);
	Nan::SetPrototypeMethod(tpl, "addLOD", AddLOD);

	Nan::SetPrototypeMethod(tpl, "AutomaticLODSelectionOff", AutomaticLODSelectionOff);
	Nan::SetPrototypeMethod(tpl, "automaticLODSelectionOff", AutomaticLODSelectionOff);

	Nan::SetPrototypeMethod(tpl, "AutomaticLODSelectionOn", AutomaticLODSelectionOn);
	Nan::SetPrototypeMethod(tpl, "automaticLODSelectionOn", AutomaticLODSelectionOn);

	Nan::SetPrototypeMethod(tpl, "AutomaticPickLODSelectionOff", AutomaticPickLODSelectionOff);
	Nan::SetPrototypeMethod(tpl, "automaticPickLODSelectionOff", AutomaticPickLODSelectionOff);

	Nan::SetPrototypeMethod(tpl, "AutomaticPickLODSelectionOn", AutomaticPickLODSelectionOn);
	Nan::SetPrototypeMethod(tpl, "automaticPickLODSelectionOn", AutomaticPickLODSelectionOn);

	Nan::SetPrototypeMethod(tpl, "DisableLOD", DisableLOD);
	Nan::SetPrototypeMethod(tpl, "disableLOD", DisableLOD);

	Nan::SetPrototypeMethod(tpl, "EnableLOD", EnableLOD);
	Nan::SetPrototypeMethod(tpl, "enableLOD", EnableLOD);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetAutomaticLODSelection", GetAutomaticLODSelection);
	Nan::SetPrototypeMethod(tpl, "getAutomaticLODSelection", GetAutomaticLODSelection);

	Nan::SetPrototypeMethod(tpl, "GetAutomaticLODSelectionMaxValue", GetAutomaticLODSelectionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAutomaticLODSelectionMaxValue", GetAutomaticLODSelectionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAutomaticLODSelectionMinValue", GetAutomaticLODSelectionMinValue);
	Nan::SetPrototypeMethod(tpl, "getAutomaticLODSelectionMinValue", GetAutomaticLODSelectionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetAutomaticPickLODSelection", GetAutomaticPickLODSelection);
	Nan::SetPrototypeMethod(tpl, "getAutomaticPickLODSelection", GetAutomaticPickLODSelection);

	Nan::SetPrototypeMethod(tpl, "GetAutomaticPickLODSelectionMaxValue", GetAutomaticPickLODSelectionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAutomaticPickLODSelectionMaxValue", GetAutomaticPickLODSelectionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAutomaticPickLODSelectionMinValue", GetAutomaticPickLODSelectionMinValue);
	Nan::SetPrototypeMethod(tpl, "getAutomaticPickLODSelectionMinValue", GetAutomaticPickLODSelectionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentIndex", GetCurrentIndex);
	Nan::SetPrototypeMethod(tpl, "getCurrentIndex", GetCurrentIndex);

	Nan::SetPrototypeMethod(tpl, "GetLODEstimatedRenderTime", GetLODEstimatedRenderTime);
	Nan::SetPrototypeMethod(tpl, "getLODEstimatedRenderTime", GetLODEstimatedRenderTime);

	Nan::SetPrototypeMethod(tpl, "GetLODIndexEstimatedRenderTime", GetLODIndexEstimatedRenderTime);
	Nan::SetPrototypeMethod(tpl, "getLODIndexEstimatedRenderTime", GetLODIndexEstimatedRenderTime);

	Nan::SetPrototypeMethod(tpl, "GetLODIndexLevel", GetLODIndexLevel);
	Nan::SetPrototypeMethod(tpl, "getLODIndexLevel", GetLODIndexLevel);

	Nan::SetPrototypeMethod(tpl, "GetLODLevel", GetLODLevel);
	Nan::SetPrototypeMethod(tpl, "getLODLevel", GetLODLevel);

	Nan::SetPrototypeMethod(tpl, "GetLODMapper", GetLODMapper);
	Nan::SetPrototypeMethod(tpl, "getLODMapper", GetLODMapper);

	Nan::SetPrototypeMethod(tpl, "GetLastRenderedLODID", GetLastRenderedLODID);
	Nan::SetPrototypeMethod(tpl, "getLastRenderedLODID", GetLastRenderedLODID);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfLODs", GetNumberOfLODs);
	Nan::SetPrototypeMethod(tpl, "getNumberOfLODs", GetNumberOfLODs);

	Nan::SetPrototypeMethod(tpl, "GetPickLODID", GetPickLODID);
	Nan::SetPrototypeMethod(tpl, "getPickLODID", GetPickLODID);

	Nan::SetPrototypeMethod(tpl, "GetSelectedLODID", GetSelectedLODID);
	Nan::SetPrototypeMethod(tpl, "getSelectedLODID", GetSelectedLODID);

	Nan::SetPrototypeMethod(tpl, "GetSelectedPickLODID", GetSelectedPickLODID);
	Nan::SetPrototypeMethod(tpl, "getSelectedPickLODID", GetSelectedPickLODID);

	Nan::SetPrototypeMethod(tpl, "GetVolumes", GetVolumes);
	Nan::SetPrototypeMethod(tpl, "getVolumes", GetVolumes);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsLODEnabled", IsLODEnabled);
	Nan::SetPrototypeMethod(tpl, "isLODEnabled", IsLODEnabled);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RemoveLOD", RemoveLOD);
	Nan::SetPrototypeMethod(tpl, "removeLOD", RemoveLOD);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderVolumetricGeometry", RenderVolumetricGeometry);
	Nan::SetPrototypeMethod(tpl, "renderVolumetricGeometry", RenderVolumetricGeometry);

	Nan::SetPrototypeMethod(tpl, "RestoreEstimatedRenderTime", RestoreEstimatedRenderTime);
	Nan::SetPrototypeMethod(tpl, "restoreEstimatedRenderTime", RestoreEstimatedRenderTime);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAllocatedRenderTime", SetAllocatedRenderTime);
	Nan::SetPrototypeMethod(tpl, "setAllocatedRenderTime", SetAllocatedRenderTime);

	Nan::SetPrototypeMethod(tpl, "SetAutomaticLODSelection", SetAutomaticLODSelection);
	Nan::SetPrototypeMethod(tpl, "setAutomaticLODSelection", SetAutomaticLODSelection);

	Nan::SetPrototypeMethod(tpl, "SetAutomaticPickLODSelection", SetAutomaticPickLODSelection);
	Nan::SetPrototypeMethod(tpl, "setAutomaticPickLODSelection", SetAutomaticPickLODSelection);

	Nan::SetPrototypeMethod(tpl, "SetLODBackfaceProperty", SetLODBackfaceProperty);
	Nan::SetPrototypeMethod(tpl, "setLODBackfaceProperty", SetLODBackfaceProperty);

	Nan::SetPrototypeMethod(tpl, "SetLODLevel", SetLODLevel);
	Nan::SetPrototypeMethod(tpl, "setLODLevel", SetLODLevel);

	Nan::SetPrototypeMethod(tpl, "SetLODMapper", SetLODMapper);
	Nan::SetPrototypeMethod(tpl, "setLODMapper", SetLODMapper);

	Nan::SetPrototypeMethod(tpl, "SetLODProperty", SetLODProperty);
	Nan::SetPrototypeMethod(tpl, "setLODProperty", SetLODProperty);

	Nan::SetPrototypeMethod(tpl, "SetLODTexture", SetLODTexture);
	Nan::SetPrototypeMethod(tpl, "setLODTexture", SetLODTexture);

	Nan::SetPrototypeMethod(tpl, "SetSelectedLODID", SetSelectedLODID);
	Nan::SetPrototypeMethod(tpl, "setSelectedLODID", SetSelectedLODID);

	Nan::SetPrototypeMethod(tpl, "SetSelectedPickLODID", SetSelectedPickLODID);
	Nan::SetPrototypeMethod(tpl, "setSelectedPickLODID", SetSelectedPickLODID);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

}

void VtkLODProp3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLODProp3D> native = vtkSmartPointer<vtkLODProp3D>::New();
		VtkLODProp3DWrap* obj = new VtkLODProp3DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLODProp3DWrap::AddEstimatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkViewportWrap *a1 = ObjectWrap::Unwrap<VtkViewportWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddEstimatedRenderTime(
				info[0]->NumberValue(),
				(vtkViewport *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::AddLOD(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMapperWrap *a0 = ObjectWrap::Unwrap<VtkMapperWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkPropertyWrap *a1 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject())
			{
				VtkPropertyWrap *a2 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject())
				{
					VtkTextureWrap *a3 = ObjectWrap::Unwrap<VtkTextureWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						int r;
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						r = native->AddLOD(
							(vtkMapper *) a0->native.GetPointer(),
							(vtkProperty *) a1->native.GetPointer(),
							(vtkProperty *) a2->native.GetPointer(),
							(vtkTexture *) a3->native.GetPointer(),
							info[4]->NumberValue()
						);
						info.GetReturnValue().Set(Nan::New(r));
						return;
					}
				}
				else if(info.Length() > 3 && info[3]->IsNumber())
				{
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->AddLOD(
						(vtkMapper *) a0->native.GetPointer(),
						(vtkProperty *) a1->native.GetPointer(),
						(vtkProperty *) a2->native.GetPointer(),
						info[3]->NumberValue()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
			else if(info.Length() > 2 && info[2]->IsNumber())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->AddLOD(
					(vtkImageMapper3D *) a0->native.GetPointer(),
					(vtkImageProperty *) a1->native.GetPointer(),
					info[2]->NumberValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsNumber())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->AddLOD(
				(vtkImageMapper3D *) a0->native.GetPointer(),
				info[1]->NumberValue()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::AutomaticLODSelectionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticLODSelectionOff();
}

void VtkLODProp3DWrap::AutomaticLODSelectionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticLODSelectionOn();
}

void VtkLODProp3DWrap::AutomaticPickLODSelectionOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticPickLODSelectionOff();
}

void VtkLODProp3DWrap::AutomaticPickLODSelectionOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticPickLODSelectionOn();
}

void VtkLODProp3DWrap::DisableLOD(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DisableLOD(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::EnableLOD(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->EnableLOD(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetActors(
			(vtkPropCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::GetAutomaticLODSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutomaticLODSelection();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLODProp3DWrap::GetAutomaticLODSelectionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutomaticLODSelectionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLODProp3DWrap::GetAutomaticLODSelectionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutomaticLODSelectionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLODProp3DWrap::GetAutomaticPickLODSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutomaticPickLODSelection();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLODProp3DWrap::GetAutomaticPickLODSelectionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutomaticPickLODSelectionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLODProp3DWrap::GetAutomaticPickLODSelectionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutomaticPickLODSelectionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLODProp3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLODProp3DWrap::GetCurrentIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLODProp3DWrap::GetLODEstimatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetLODEstimatedRenderTime(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::GetLODIndexEstimatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetLODIndexEstimatedRenderTime(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::GetLODIndexLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetLODIndexLevel(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::GetLODLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetLODLevel(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::GetLODMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkAbstractMapper3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetLODMapper(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkAbstractMapper3DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractMapper3DWrap *w = new VtkAbstractMapper3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::GetLastRenderedLODID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastRenderedLODID();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLODProp3DWrap::GetNumberOfLODs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfLODs();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLODProp3DWrap::GetPickLODID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickLODID();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLODProp3DWrap::GetSelectedLODID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedLODID();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLODProp3DWrap::GetSelectedPickLODID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedPickLODID();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLODProp3DWrap::GetVolumes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetVolumes(
			(vtkPropCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLODProp3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
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

void VtkLODProp3DWrap::IsLODEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsLODEnabled(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	vtkLODProp3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLODProp3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLODProp3DWrap *w = new VtkLODProp3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLODProp3DWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::RemoveLOD(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveLOD(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderOpaqueGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderTranslucentPolygonalGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::RenderVolumetricGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderVolumetricGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::RestoreEstimatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RestoreEstimatedRenderTime();
}

void VtkLODProp3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLODProp3D * r;
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
			Nan::New<v8::Function>(VtkLODProp3DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLODProp3DWrap *w = new VtkLODProp3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::SetAllocatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkViewportWrap *a1 = ObjectWrap::Unwrap<VtkViewportWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAllocatedRenderTime(
				info[0]->NumberValue(),
				(vtkViewport *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::SetAutomaticLODSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutomaticLODSelection(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::SetAutomaticPickLODSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutomaticPickLODSelection(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::SetLODBackfaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkPropertyWrap *a1 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetLODBackfaceProperty(
				info[0]->Int32Value(),
				(vtkProperty *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::SetLODLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetLODLevel(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::SetLODMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkImageMapper3DWrap *a1 = ObjectWrap::Unwrap<VtkImageMapper3DWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetLODMapper(
				info[0]->Int32Value(),
				(vtkImageMapper3D *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::SetLODProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkImagePropertyWrap *a1 = ObjectWrap::Unwrap<VtkImagePropertyWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetLODProperty(
				info[0]->Int32Value(),
				(vtkImageProperty *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::SetLODTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkTextureWrap *a1 = ObjectWrap::Unwrap<VtkTextureWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetLODTexture(
				info[0]->Int32Value(),
				(vtkTexture *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::SetSelectedLODID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedLODID(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::SetSelectedPickLODID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedPickLODID(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLODProp3DWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLODProp3DWrap *wrapper = ObjectWrap::Unwrap<VtkLODProp3DWrap>(info.Holder());
	vtkLODProp3D *native = (vtkLODProp3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

