/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkYoungsMaterialInterfaceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkYoungsMaterialInterfaceWrap::ptpl;

VtkYoungsMaterialInterfaceWrap::VtkYoungsMaterialInterfaceWrap()
{ }

VtkYoungsMaterialInterfaceWrap::VtkYoungsMaterialInterfaceWrap(vtkSmartPointer<vtkYoungsMaterialInterface> _native)
{ native = _native; }

VtkYoungsMaterialInterfaceWrap::~VtkYoungsMaterialInterfaceWrap()
{ }

void VtkYoungsMaterialInterfaceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkYoungsMaterialInterface").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("YoungsMaterialInterface").ToLocalChecked(), ConstructorGetter);
}

void VtkYoungsMaterialInterfaceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkYoungsMaterialInterfaceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkYoungsMaterialInterfaceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddMaterialBlockMapping", AddMaterialBlockMapping);
	Nan::SetPrototypeMethod(tpl, "addMaterialBlockMapping", AddMaterialBlockMapping);

	Nan::SetPrototypeMethod(tpl, "AxisSymetricOff", AxisSymetricOff);
	Nan::SetPrototypeMethod(tpl, "axisSymetricOff", AxisSymetricOff);

	Nan::SetPrototypeMethod(tpl, "AxisSymetricOn", AxisSymetricOn);
	Nan::SetPrototypeMethod(tpl, "axisSymetricOn", AxisSymetricOn);

	Nan::SetPrototypeMethod(tpl, "FillMaterialOff", FillMaterialOff);
	Nan::SetPrototypeMethod(tpl, "fillMaterialOff", FillMaterialOff);

	Nan::SetPrototypeMethod(tpl, "FillMaterialOn", FillMaterialOn);
	Nan::SetPrototypeMethod(tpl, "fillMaterialOn", FillMaterialOn);

	Nan::SetPrototypeMethod(tpl, "GetAxisSymetric", GetAxisSymetric);
	Nan::SetPrototypeMethod(tpl, "getAxisSymetric", GetAxisSymetric);

	Nan::SetPrototypeMethod(tpl, "GetFillMaterial", GetFillMaterial);
	Nan::SetPrototypeMethod(tpl, "getFillMaterial", GetFillMaterial);

	Nan::SetPrototypeMethod(tpl, "GetInverseNormal", GetInverseNormal);
	Nan::SetPrototypeMethod(tpl, "getInverseNormal", GetInverseNormal);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfDomains", GetNumberOfDomains);
	Nan::SetPrototypeMethod(tpl, "getNumberOfDomains", GetNumberOfDomains);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfMaterials", GetNumberOfMaterials);
	Nan::SetPrototypeMethod(tpl, "getNumberOfMaterials", GetNumberOfMaterials);

	Nan::SetPrototypeMethod(tpl, "GetOnionPeel", GetOnionPeel);
	Nan::SetPrototypeMethod(tpl, "getOnionPeel", GetOnionPeel);

	Nan::SetPrototypeMethod(tpl, "GetReverseMaterialOrder", GetReverseMaterialOrder);
	Nan::SetPrototypeMethod(tpl, "getReverseMaterialOrder", GetReverseMaterialOrder);

	Nan::SetPrototypeMethod(tpl, "GetUseAllBlocks", GetUseAllBlocks);
	Nan::SetPrototypeMethod(tpl, "getUseAllBlocks", GetUseAllBlocks);

	Nan::SetPrototypeMethod(tpl, "GetUseFractionAsDistance", GetUseFractionAsDistance);
	Nan::SetPrototypeMethod(tpl, "getUseFractionAsDistance", GetUseFractionAsDistance);

	Nan::SetPrototypeMethod(tpl, "GetVolumeFractionRange", GetVolumeFractionRange);
	Nan::SetPrototypeMethod(tpl, "getVolumeFractionRange", GetVolumeFractionRange);

	Nan::SetPrototypeMethod(tpl, "InverseNormalOff", InverseNormalOff);
	Nan::SetPrototypeMethod(tpl, "inverseNormalOff", InverseNormalOff);

	Nan::SetPrototypeMethod(tpl, "InverseNormalOn", InverseNormalOn);
	Nan::SetPrototypeMethod(tpl, "inverseNormalOn", InverseNormalOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnionPeelOff", OnionPeelOff);
	Nan::SetPrototypeMethod(tpl, "onionPeelOff", OnionPeelOff);

	Nan::SetPrototypeMethod(tpl, "OnionPeelOn", OnionPeelOn);
	Nan::SetPrototypeMethod(tpl, "onionPeelOn", OnionPeelOn);

	Nan::SetPrototypeMethod(tpl, "RemoveAllMaterialBlockMappings", RemoveAllMaterialBlockMappings);
	Nan::SetPrototypeMethod(tpl, "removeAllMaterialBlockMappings", RemoveAllMaterialBlockMappings);

	Nan::SetPrototypeMethod(tpl, "RemoveAllMaterials", RemoveAllMaterials);
	Nan::SetPrototypeMethod(tpl, "removeAllMaterials", RemoveAllMaterials);

	Nan::SetPrototypeMethod(tpl, "ReverseMaterialOrderOff", ReverseMaterialOrderOff);
	Nan::SetPrototypeMethod(tpl, "reverseMaterialOrderOff", ReverseMaterialOrderOff);

	Nan::SetPrototypeMethod(tpl, "ReverseMaterialOrderOn", ReverseMaterialOrderOn);
	Nan::SetPrototypeMethod(tpl, "reverseMaterialOrderOn", ReverseMaterialOrderOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAxisSymetric", SetAxisSymetric);
	Nan::SetPrototypeMethod(tpl, "setAxisSymetric", SetAxisSymetric);

	Nan::SetPrototypeMethod(tpl, "SetFillMaterial", SetFillMaterial);
	Nan::SetPrototypeMethod(tpl, "setFillMaterial", SetFillMaterial);

	Nan::SetPrototypeMethod(tpl, "SetInverseNormal", SetInverseNormal);
	Nan::SetPrototypeMethod(tpl, "setInverseNormal", SetInverseNormal);

	Nan::SetPrototypeMethod(tpl, "SetMaterialArrays", SetMaterialArrays);
	Nan::SetPrototypeMethod(tpl, "setMaterialArrays", SetMaterialArrays);

	Nan::SetPrototypeMethod(tpl, "SetMaterialNormalArray", SetMaterialNormalArray);
	Nan::SetPrototypeMethod(tpl, "setMaterialNormalArray", SetMaterialNormalArray);

	Nan::SetPrototypeMethod(tpl, "SetMaterialOrderingArray", SetMaterialOrderingArray);
	Nan::SetPrototypeMethod(tpl, "setMaterialOrderingArray", SetMaterialOrderingArray);

	Nan::SetPrototypeMethod(tpl, "SetMaterialVolumeFractionArray", SetMaterialVolumeFractionArray);
	Nan::SetPrototypeMethod(tpl, "setMaterialVolumeFractionArray", SetMaterialVolumeFractionArray);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfMaterials", SetNumberOfMaterials);
	Nan::SetPrototypeMethod(tpl, "setNumberOfMaterials", SetNumberOfMaterials);

	Nan::SetPrototypeMethod(tpl, "SetOnionPeel", SetOnionPeel);
	Nan::SetPrototypeMethod(tpl, "setOnionPeel", SetOnionPeel);

	Nan::SetPrototypeMethod(tpl, "SetReverseMaterialOrder", SetReverseMaterialOrder);
	Nan::SetPrototypeMethod(tpl, "setReverseMaterialOrder", SetReverseMaterialOrder);

	Nan::SetPrototypeMethod(tpl, "SetUseAllBlocks", SetUseAllBlocks);
	Nan::SetPrototypeMethod(tpl, "setUseAllBlocks", SetUseAllBlocks);

	Nan::SetPrototypeMethod(tpl, "SetUseFractionAsDistance", SetUseFractionAsDistance);
	Nan::SetPrototypeMethod(tpl, "setUseFractionAsDistance", SetUseFractionAsDistance);

	Nan::SetPrototypeMethod(tpl, "SetVolumeFractionRange", SetVolumeFractionRange);
	Nan::SetPrototypeMethod(tpl, "setVolumeFractionRange", SetVolumeFractionRange);

	Nan::SetPrototypeMethod(tpl, "UseAllBlocksOff", UseAllBlocksOff);
	Nan::SetPrototypeMethod(tpl, "useAllBlocksOff", UseAllBlocksOff);

	Nan::SetPrototypeMethod(tpl, "UseAllBlocksOn", UseAllBlocksOn);
	Nan::SetPrototypeMethod(tpl, "useAllBlocksOn", UseAllBlocksOn);

	Nan::SetPrototypeMethod(tpl, "UseFractionAsDistanceOff", UseFractionAsDistanceOff);
	Nan::SetPrototypeMethod(tpl, "useFractionAsDistanceOff", UseFractionAsDistanceOff);

	Nan::SetPrototypeMethod(tpl, "UseFractionAsDistanceOn", UseFractionAsDistanceOn);
	Nan::SetPrototypeMethod(tpl, "useFractionAsDistanceOn", UseFractionAsDistanceOn);

#ifdef VTK_NODE_PLUS_VTKYOUNGSMATERIALINTERFACEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKYOUNGSMATERIALINTERFACEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkYoungsMaterialInterfaceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkYoungsMaterialInterface> native = vtkSmartPointer<vtkYoungsMaterialInterface>::New();
		VtkYoungsMaterialInterfaceWrap* obj = new VtkYoungsMaterialInterfaceWrap(native);
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

void VtkYoungsMaterialInterfaceWrap::AddMaterialBlockMapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddMaterialBlockMapping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::AxisSymetricOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AxisSymetricOff();
}

void VtkYoungsMaterialInterfaceWrap::AxisSymetricOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AxisSymetricOn();
}

void VtkYoungsMaterialInterfaceWrap::FillMaterialOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FillMaterialOff();
}

void VtkYoungsMaterialInterfaceWrap::FillMaterialOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FillMaterialOn();
}

void VtkYoungsMaterialInterfaceWrap::GetAxisSymetric(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAxisSymetric();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkYoungsMaterialInterfaceWrap::GetFillMaterial(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFillMaterial();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkYoungsMaterialInterfaceWrap::GetInverseNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInverseNormal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkYoungsMaterialInterfaceWrap::GetNumberOfDomains(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfDomains();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkYoungsMaterialInterfaceWrap::GetNumberOfMaterials(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfMaterials();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkYoungsMaterialInterfaceWrap::GetOnionPeel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnionPeel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkYoungsMaterialInterfaceWrap::GetReverseMaterialOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReverseMaterialOrder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkYoungsMaterialInterfaceWrap::GetUseAllBlocks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseAllBlocks();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkYoungsMaterialInterfaceWrap::GetUseFractionAsDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseFractionAsDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkYoungsMaterialInterfaceWrap::GetVolumeFractionRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolumeFractionRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkYoungsMaterialInterfaceWrap::InverseNormalOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InverseNormalOff();
}

void VtkYoungsMaterialInterfaceWrap::InverseNormalOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InverseNormalOn();
}

void VtkYoungsMaterialInterfaceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	vtkYoungsMaterialInterface * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkYoungsMaterialInterfaceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkYoungsMaterialInterfaceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkYoungsMaterialInterfaceWrap *w = new VtkYoungsMaterialInterfaceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkYoungsMaterialInterfaceWrap::OnionPeelOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnionPeelOff();
}

void VtkYoungsMaterialInterfaceWrap::OnionPeelOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnionPeelOn();
}

void VtkYoungsMaterialInterfaceWrap::RemoveAllMaterialBlockMappings(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllMaterialBlockMappings();
}

void VtkYoungsMaterialInterfaceWrap::RemoveAllMaterials(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllMaterials();
}

void VtkYoungsMaterialInterfaceWrap::ReverseMaterialOrderOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReverseMaterialOrderOff();
}

void VtkYoungsMaterialInterfaceWrap::ReverseMaterialOrderOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReverseMaterialOrderOn();
}

void VtkYoungsMaterialInterfaceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkYoungsMaterialInterface * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkYoungsMaterialInterfaceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkYoungsMaterialInterfaceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkYoungsMaterialInterfaceWrap *w = new VtkYoungsMaterialInterfaceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::SetAxisSymetric(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAxisSymetric(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::SetFillMaterial(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFillMaterial(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::SetInverseNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInverseNormal(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::SetMaterialArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsString())
			{
				Nan::Utf8String a2(info[2]);
				if(info.Length() > 3 && info[3]->IsString())
				{
					Nan::Utf8String a3(info[3]);
					if(info.Length() > 4 && info[4]->IsString())
					{
						Nan::Utf8String a4(info[4]);
						if(info.Length() > 5 && info[5]->IsString())
						{
							Nan::Utf8String a5(info[5]);
														if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetMaterialArrays(
								info[0]->Int32Value(),
								*a1,
								*a2,
								*a3,
								*a4,
								*a5
							);
							return;
						}
					}
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetMaterialArrays(
						info[0]->Int32Value(),
						*a1,
						*a2,
						*a3
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::SetMaterialNormalArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetMaterialNormalArray(
				*a0,
				*a1
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetMaterialNormalArray(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::SetMaterialOrderingArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetMaterialOrderingArray(
				*a0,
				*a1
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetMaterialOrderingArray(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::SetMaterialVolumeFractionArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetMaterialVolumeFractionArray(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::SetNumberOfMaterials(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfMaterials(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::SetOnionPeel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOnionPeel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::SetReverseMaterialOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReverseMaterialOrder(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::SetUseAllBlocks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseAllBlocks(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::SetUseFractionAsDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseFractionAsDistance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::SetVolumeFractionRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVolumeFractionRange(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVolumeFractionRange(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetVolumeFractionRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkYoungsMaterialInterfaceWrap::UseAllBlocksOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseAllBlocksOff();
}

void VtkYoungsMaterialInterfaceWrap::UseAllBlocksOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseAllBlocksOn();
}

void VtkYoungsMaterialInterfaceWrap::UseFractionAsDistanceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseFractionAsDistanceOff();
}

void VtkYoungsMaterialInterfaceWrap::UseFractionAsDistanceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkYoungsMaterialInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkYoungsMaterialInterfaceWrap>(info.Holder());
	vtkYoungsMaterialInterface *native = (vtkYoungsMaterialInterface *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseFractionAsDistanceOn();
}

