/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPickerWrap.h"
#include "vtkCellPickerWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkRendererWrap.h"
#include "vtkAbstractCellLocatorWrap.h"
#include "vtkTextureWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCellPickerWrap::ptpl;

VtkCellPickerWrap::VtkCellPickerWrap()
{ }

VtkCellPickerWrap::VtkCellPickerWrap(vtkSmartPointer<vtkCellPicker> _native)
{ native = _native; }

VtkCellPickerWrap::~VtkCellPickerWrap()
{ }

void VtkCellPickerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCellPicker").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CellPicker").ToLocalChecked(), ConstructorGetter);
}

void VtkCellPickerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCellPickerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPickerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPickerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCellPickerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddLocator", AddLocator);
	Nan::SetPrototypeMethod(tpl, "addLocator", AddLocator);

	Nan::SetPrototypeMethod(tpl, "GetCellIJK", GetCellIJK);
	Nan::SetPrototypeMethod(tpl, "getCellIJK", GetCellIJK);

	Nan::SetPrototypeMethod(tpl, "GetClippingPlaneId", GetClippingPlaneId);
	Nan::SetPrototypeMethod(tpl, "getClippingPlaneId", GetClippingPlaneId);

	Nan::SetPrototypeMethod(tpl, "GetMapperNormal", GetMapperNormal);
	Nan::SetPrototypeMethod(tpl, "getMapperNormal", GetMapperNormal);

	Nan::SetPrototypeMethod(tpl, "GetPCoords", GetPCoords);
	Nan::SetPrototypeMethod(tpl, "getPCoords", GetPCoords);

	Nan::SetPrototypeMethod(tpl, "GetPickClippingPlanes", GetPickClippingPlanes);
	Nan::SetPrototypeMethod(tpl, "getPickClippingPlanes", GetPickClippingPlanes);

	Nan::SetPrototypeMethod(tpl, "GetPickNormal", GetPickNormal);
	Nan::SetPrototypeMethod(tpl, "getPickNormal", GetPickNormal);

	Nan::SetPrototypeMethod(tpl, "GetPickTextureData", GetPickTextureData);
	Nan::SetPrototypeMethod(tpl, "getPickTextureData", GetPickTextureData);

	Nan::SetPrototypeMethod(tpl, "GetPointIJK", GetPointIJK);
	Nan::SetPrototypeMethod(tpl, "getPointIJK", GetPointIJK);

	Nan::SetPrototypeMethod(tpl, "GetSubId", GetSubId);
	Nan::SetPrototypeMethod(tpl, "getSubId", GetSubId);

	Nan::SetPrototypeMethod(tpl, "GetTexture", GetTexture);
	Nan::SetPrototypeMethod(tpl, "getTexture", GetTexture);

	Nan::SetPrototypeMethod(tpl, "GetUseVolumeGradientOpacity", GetUseVolumeGradientOpacity);
	Nan::SetPrototypeMethod(tpl, "getUseVolumeGradientOpacity", GetUseVolumeGradientOpacity);

	Nan::SetPrototypeMethod(tpl, "GetVolumeOpacityIsovalue", GetVolumeOpacityIsovalue);
	Nan::SetPrototypeMethod(tpl, "getVolumeOpacityIsovalue", GetVolumeOpacityIsovalue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Pick", Pick);
	Nan::SetPrototypeMethod(tpl, "pick", Pick);

	Nan::SetPrototypeMethod(tpl, "Pick3DRay", Pick3DRay);
	Nan::SetPrototypeMethod(tpl, "pick3DRay", Pick3DRay);

	Nan::SetPrototypeMethod(tpl, "PickClippingPlanesOff", PickClippingPlanesOff);
	Nan::SetPrototypeMethod(tpl, "pickClippingPlanesOff", PickClippingPlanesOff);

	Nan::SetPrototypeMethod(tpl, "PickClippingPlanesOn", PickClippingPlanesOn);
	Nan::SetPrototypeMethod(tpl, "pickClippingPlanesOn", PickClippingPlanesOn);

	Nan::SetPrototypeMethod(tpl, "PickTextureDataOff", PickTextureDataOff);
	Nan::SetPrototypeMethod(tpl, "pickTextureDataOff", PickTextureDataOff);

	Nan::SetPrototypeMethod(tpl, "PickTextureDataOn", PickTextureDataOn);
	Nan::SetPrototypeMethod(tpl, "pickTextureDataOn", PickTextureDataOn);

	Nan::SetPrototypeMethod(tpl, "RemoveAllLocators", RemoveAllLocators);
	Nan::SetPrototypeMethod(tpl, "removeAllLocators", RemoveAllLocators);

	Nan::SetPrototypeMethod(tpl, "RemoveLocator", RemoveLocator);
	Nan::SetPrototypeMethod(tpl, "removeLocator", RemoveLocator);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPickClippingPlanes", SetPickClippingPlanes);
	Nan::SetPrototypeMethod(tpl, "setPickClippingPlanes", SetPickClippingPlanes);

	Nan::SetPrototypeMethod(tpl, "SetPickTextureData", SetPickTextureData);
	Nan::SetPrototypeMethod(tpl, "setPickTextureData", SetPickTextureData);

	Nan::SetPrototypeMethod(tpl, "SetUseVolumeGradientOpacity", SetUseVolumeGradientOpacity);
	Nan::SetPrototypeMethod(tpl, "setUseVolumeGradientOpacity", SetUseVolumeGradientOpacity);

	Nan::SetPrototypeMethod(tpl, "SetVolumeOpacityIsovalue", SetVolumeOpacityIsovalue);
	Nan::SetPrototypeMethod(tpl, "setVolumeOpacityIsovalue", SetVolumeOpacityIsovalue);

	Nan::SetPrototypeMethod(tpl, "UseVolumeGradientOpacityOff", UseVolumeGradientOpacityOff);
	Nan::SetPrototypeMethod(tpl, "useVolumeGradientOpacityOff", UseVolumeGradientOpacityOff);

	Nan::SetPrototypeMethod(tpl, "UseVolumeGradientOpacityOn", UseVolumeGradientOpacityOn);
	Nan::SetPrototypeMethod(tpl, "useVolumeGradientOpacityOn", UseVolumeGradientOpacityOn);

#ifdef VTK_NODE_PLUS_VTKCELLPICKERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCELLPICKERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCellPickerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellPicker> native = vtkSmartPointer<vtkCellPicker>::New();
		VtkCellPickerWrap* obj = new VtkCellPickerWrap(native);
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

void VtkCellPickerWrap::AddLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractCellLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractCellLocatorWrap *a0 = ObjectWrap::Unwrap<VtkAbstractCellLocatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddLocator(
			(vtkAbstractCellLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellPickerWrap::GetCellIJK(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellIJK();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkCellPickerWrap::GetClippingPlaneId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClippingPlaneId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellPickerWrap::GetMapperNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMapperNormal();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkCellPickerWrap::GetPCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPCoords();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkCellPickerWrap::GetPickClippingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickClippingPlanes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellPickerWrap::GetPickNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickNormal();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkCellPickerWrap::GetPickTextureData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickTextureData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellPickerWrap::GetPointIJK(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointIJK();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkCellPickerWrap::GetSubId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellPickerWrap::GetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	vtkTexture * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTexture();
	VtkTextureWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextureWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextureWrap *w = new VtkTextureWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellPickerWrap::GetUseVolumeGradientOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseVolumeGradientOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellPickerWrap::GetVolumeOpacityIsovalue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolumeOpacityIsovalue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellPickerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	vtkCellPicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCellPickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellPickerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellPickerWrap *w = new VtkCellPickerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellPickerWrap::Pick(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[3]))
				{
					VtkRendererWrap *a3 = ObjectWrap::Unwrap<VtkRendererWrap>(info[3]->ToObject());
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->Pick(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						(vtkRenderer *) a3->native.GetPointer()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellPickerWrap::Pick3DRay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 4 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[2]))
			{
				VtkRendererWrap *a2 = ObjectWrap::Unwrap<VtkRendererWrap>(info[2]->ToObject());
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->Pick3DRay(
					(double *)(a0->Buffer()->GetContents().Data()),
					(double *)(a1->Buffer()->GetContents().Data()),
					(vtkRenderer *) a2->native.GetPointer()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[4];
			if( a1->Length() < 4 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 4; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[2]))
			{
				VtkRendererWrap *a2 = ObjectWrap::Unwrap<VtkRendererWrap>(info[2]->ToObject());
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->Pick3DRay(
					(double *)(a0->Buffer()->GetContents().Data()),
					b1,
					(vtkRenderer *) a2->native.GetPointer()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[4];
			if( a1->Length() < 4 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 4; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[2]))
			{
				VtkRendererWrap *a2 = ObjectWrap::Unwrap<VtkRendererWrap>(info[2]->ToObject());
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->Pick3DRay(
					b0,
					b1,
					(vtkRenderer *) a2->native.GetPointer()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 4 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[2]))
			{
				VtkRendererWrap *a2 = ObjectWrap::Unwrap<VtkRendererWrap>(info[2]->ToObject());
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->Pick3DRay(
					b0,
					(double *)(a1->Buffer()->GetContents().Data()),
					(vtkRenderer *) a2->native.GetPointer()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellPickerWrap::PickClippingPlanesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickClippingPlanesOff();
}

void VtkCellPickerWrap::PickClippingPlanesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickClippingPlanesOn();
}

void VtkCellPickerWrap::PickTextureDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickTextureDataOff();
}

void VtkCellPickerWrap::PickTextureDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickTextureDataOn();
}

void VtkCellPickerWrap::RemoveAllLocators(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllLocators();
}

void VtkCellPickerWrap::RemoveLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractCellLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractCellLocatorWrap *a0 = ObjectWrap::Unwrap<VtkAbstractCellLocatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveLocator(
			(vtkAbstractCellLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellPickerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkCellPicker * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkCellPickerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellPickerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellPickerWrap *w = new VtkCellPickerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellPickerWrap::SetPickClippingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPickClippingPlanes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellPickerWrap::SetPickTextureData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPickTextureData(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellPickerWrap::SetUseVolumeGradientOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseVolumeGradientOpacity(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellPickerWrap::SetVolumeOpacityIsovalue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVolumeOpacityIsovalue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellPickerWrap::UseVolumeGradientOpacityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseVolumeGradientOpacityOff();
}

void VtkCellPickerWrap::UseVolumeGradientOpacityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellPickerWrap *wrapper = ObjectWrap::Unwrap<VtkCellPickerWrap>(info.Holder());
	vtkCellPicker *native = (vtkCellPicker *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseVolumeGradientOpacityOn();
}

