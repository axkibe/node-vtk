/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMapperWrap.h"
#include "vtkGraphMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkActorWrap.h"
#include "vtkTextureWrap.h"
#include "vtkWindowWrap.h"
#include "vtkGraphWrap.h"
#include "vtkLookupTableWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGraphMapperWrap::constructor;

VtkGraphMapperWrap::VtkGraphMapperWrap()
{ }

VtkGraphMapperWrap::VtkGraphMapperWrap(vtkSmartPointer<vtkGraphMapper> _native)
{ native = _native; }

VtkGraphMapperWrap::~VtkGraphMapperWrap()
{ }

void VtkGraphMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkGraphMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkAbstractMapperWrap::InitTpl(tpl);
	VtkAbstractMapper3DWrap::InitTpl(tpl);
	VtkMapperWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkGraphMapper").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("GraphMapper").ToLocalChecked(),tpl->GetFunction());
}

void VtkGraphMapperWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddIconType", AddIconType);
	Nan::SetPrototypeMethod(tpl, "addIconType", AddIconType);

	Nan::SetPrototypeMethod(tpl, "ClearIconTypes", ClearIconTypes);
	Nan::SetPrototypeMethod(tpl, "clearIconTypes", ClearIconTypes);

	Nan::SetPrototypeMethod(tpl, "ColorEdgesOff", ColorEdgesOff);
	Nan::SetPrototypeMethod(tpl, "colorEdgesOff", ColorEdgesOff);

	Nan::SetPrototypeMethod(tpl, "ColorEdgesOn", ColorEdgesOn);
	Nan::SetPrototypeMethod(tpl, "colorEdgesOn", ColorEdgesOn);

	Nan::SetPrototypeMethod(tpl, "ColorVerticesOff", ColorVerticesOff);
	Nan::SetPrototypeMethod(tpl, "colorVerticesOff", ColorVerticesOff);

	Nan::SetPrototypeMethod(tpl, "ColorVerticesOn", ColorVerticesOn);
	Nan::SetPrototypeMethod(tpl, "colorVerticesOn", ColorVerticesOn);

	Nan::SetPrototypeMethod(tpl, "EdgeVisibilityOff", EdgeVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "edgeVisibilityOff", EdgeVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "EdgeVisibilityOn", EdgeVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "edgeVisibilityOn", EdgeVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "EnableEdgesByArrayOff", EnableEdgesByArrayOff);
	Nan::SetPrototypeMethod(tpl, "enableEdgesByArrayOff", EnableEdgesByArrayOff);

	Nan::SetPrototypeMethod(tpl, "EnableEdgesByArrayOn", EnableEdgesByArrayOn);
	Nan::SetPrototypeMethod(tpl, "enableEdgesByArrayOn", EnableEdgesByArrayOn);

	Nan::SetPrototypeMethod(tpl, "EnableVerticesByArrayOff", EnableVerticesByArrayOff);
	Nan::SetPrototypeMethod(tpl, "enableVerticesByArrayOff", EnableVerticesByArrayOff);

	Nan::SetPrototypeMethod(tpl, "EnableVerticesByArrayOn", EnableVerticesByArrayOn);
	Nan::SetPrototypeMethod(tpl, "enableVerticesByArrayOn", EnableVerticesByArrayOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEdgeColorArrayName", GetEdgeColorArrayName);
	Nan::SetPrototypeMethod(tpl, "getEdgeColorArrayName", GetEdgeColorArrayName);

	Nan::SetPrototypeMethod(tpl, "GetEdgeLookupTable", GetEdgeLookupTable);
	Nan::SetPrototypeMethod(tpl, "getEdgeLookupTable", GetEdgeLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetEnableEdgesByArray", GetEnableEdgesByArray);
	Nan::SetPrototypeMethod(tpl, "getEnableEdgesByArray", GetEnableEdgesByArray);

	Nan::SetPrototypeMethod(tpl, "GetEnableVerticesByArray", GetEnableVerticesByArray);
	Nan::SetPrototypeMethod(tpl, "getEnableVerticesByArray", GetEnableVerticesByArray);

	Nan::SetPrototypeMethod(tpl, "GetEnabledEdgesArrayName", GetEnabledEdgesArrayName);
	Nan::SetPrototypeMethod(tpl, "getEnabledEdgesArrayName", GetEnabledEdgesArrayName);

	Nan::SetPrototypeMethod(tpl, "GetEnabledVerticesArrayName", GetEnabledVerticesArrayName);
	Nan::SetPrototypeMethod(tpl, "getEnabledVerticesArrayName", GetEnabledVerticesArrayName);

	Nan::SetPrototypeMethod(tpl, "GetIconArrayName", GetIconArrayName);
	Nan::SetPrototypeMethod(tpl, "getIconArrayName", GetIconArrayName);

	Nan::SetPrototypeMethod(tpl, "GetIconTexture", GetIconTexture);
	Nan::SetPrototypeMethod(tpl, "getIconTexture", GetIconTexture);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetScalingArrayName", GetScalingArrayName);
	Nan::SetPrototypeMethod(tpl, "getScalingArrayName", GetScalingArrayName);

	Nan::SetPrototypeMethod(tpl, "GetVertexColorArrayName", GetVertexColorArrayName);
	Nan::SetPrototypeMethod(tpl, "getVertexColorArrayName", GetVertexColorArrayName);

	Nan::SetPrototypeMethod(tpl, "GetVertexLookupTable", GetVertexLookupTable);
	Nan::SetPrototypeMethod(tpl, "getVertexLookupTable", GetVertexLookupTable);

	Nan::SetPrototypeMethod(tpl, "IconVisibilityOff", IconVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "iconVisibilityOff", IconVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "IconVisibilityOn", IconVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "iconVisibilityOn", IconVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScaledGlyphsOff", ScaledGlyphsOff);
	Nan::SetPrototypeMethod(tpl, "scaledGlyphsOff", ScaledGlyphsOff);

	Nan::SetPrototypeMethod(tpl, "ScaledGlyphsOn", ScaledGlyphsOn);
	Nan::SetPrototypeMethod(tpl, "scaledGlyphsOn", ScaledGlyphsOn);

	Nan::SetPrototypeMethod(tpl, "SetEdgeColorArrayName", SetEdgeColorArrayName);
	Nan::SetPrototypeMethod(tpl, "setEdgeColorArrayName", SetEdgeColorArrayName);

	Nan::SetPrototypeMethod(tpl, "SetEnableEdgesByArray", SetEnableEdgesByArray);
	Nan::SetPrototypeMethod(tpl, "setEnableEdgesByArray", SetEnableEdgesByArray);

	Nan::SetPrototypeMethod(tpl, "SetEnableVerticesByArray", SetEnableVerticesByArray);
	Nan::SetPrototypeMethod(tpl, "setEnableVerticesByArray", SetEnableVerticesByArray);

	Nan::SetPrototypeMethod(tpl, "SetEnabledEdgesArrayName", SetEnabledEdgesArrayName);
	Nan::SetPrototypeMethod(tpl, "setEnabledEdgesArrayName", SetEnabledEdgesArrayName);

	Nan::SetPrototypeMethod(tpl, "SetEnabledVerticesArrayName", SetEnabledVerticesArrayName);
	Nan::SetPrototypeMethod(tpl, "setEnabledVerticesArrayName", SetEnabledVerticesArrayName);

	Nan::SetPrototypeMethod(tpl, "SetIconAlignment", SetIconAlignment);
	Nan::SetPrototypeMethod(tpl, "setIconAlignment", SetIconAlignment);

	Nan::SetPrototypeMethod(tpl, "SetIconArrayName", SetIconArrayName);
	Nan::SetPrototypeMethod(tpl, "setIconArrayName", SetIconArrayName);

	Nan::SetPrototypeMethod(tpl, "SetIconTexture", SetIconTexture);
	Nan::SetPrototypeMethod(tpl, "setIconTexture", SetIconTexture);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetScalingArrayName", SetScalingArrayName);
	Nan::SetPrototypeMethod(tpl, "setScalingArrayName", SetScalingArrayName);

	Nan::SetPrototypeMethod(tpl, "SetVertexColorArrayName", SetVertexColorArrayName);
	Nan::SetPrototypeMethod(tpl, "setVertexColorArrayName", SetVertexColorArrayName);

}

void VtkGraphMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGraphMapper> native = vtkSmartPointer<vtkGraphMapper>::New();
		VtkGraphMapperWrap* obj = new VtkGraphMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGraphMapperWrap::AddIconType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddIconType(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphMapperWrap::ClearIconTypes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearIconTypes();
}

void VtkGraphMapperWrap::ColorEdgesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorEdgesOff();
}

void VtkGraphMapperWrap::ColorEdgesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorEdgesOn();
}

void VtkGraphMapperWrap::ColorVerticesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorVerticesOff();
}

void VtkGraphMapperWrap::ColorVerticesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorVerticesOn();
}

void VtkGraphMapperWrap::EdgeVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EdgeVisibilityOff();
}

void VtkGraphMapperWrap::EdgeVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EdgeVisibilityOn();
}

void VtkGraphMapperWrap::EnableEdgesByArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableEdgesByArrayOff();
}

void VtkGraphMapperWrap::EnableEdgesByArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableEdgesByArrayOn();
}

void VtkGraphMapperWrap::EnableVerticesByArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableVerticesByArrayOff();
}

void VtkGraphMapperWrap::EnableVerticesByArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableVerticesByArrayOn();
}

void VtkGraphMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphMapperWrap::GetEdgeColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeColorArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphMapperWrap::GetEdgeLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	vtkLookupTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeLookupTable();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLookupTableWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLookupTableWrap *w = new VtkLookupTableWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphMapperWrap::GetEnableEdgesByArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnableEdgesByArray();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphMapperWrap::GetEnableVerticesByArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnableVerticesByArray();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphMapperWrap::GetEnabledEdgesArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnabledEdgesArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphMapperWrap::GetEnabledVerticesArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnabledVerticesArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphMapperWrap::GetIconArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIconArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphMapperWrap::GetIconTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	vtkTexture * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIconTexture();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTextureWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextureWrap *w = new VtkTextureWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphMapperWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	vtkGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGraphWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphWrap *w = new VtkGraphWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphMapperWrap::GetScalingArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalingArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphMapperWrap::GetVertexColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVertexColorArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphMapperWrap::GetVertexLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	vtkLookupTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVertexLookupTable();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLookupTableWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLookupTableWrap *w = new VtkLookupTableWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphMapperWrap::IconVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IconVisibilityOff();
}

void VtkGraphMapperWrap::IconVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IconVisibilityOn();
}

void VtkGraphMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
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

void VtkGraphMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	vtkGraphMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGraphMapperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphMapperWrap *w = new VtkGraphMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
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

void VtkGraphMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkActorWrap *a1 = ObjectWrap::Unwrap<VtkActorWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkActor *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGraphMapper * r;
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
			Nan::New<v8::Function>(VtkGraphMapperWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphMapperWrap *w = new VtkGraphMapperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphMapperWrap::ScaledGlyphsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScaledGlyphsOff();
}

void VtkGraphMapperWrap::ScaledGlyphsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScaledGlyphsOn();
}

void VtkGraphMapperWrap::SetEdgeColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdgeColorArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphMapperWrap::SetEnableEdgesByArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnableEdgesByArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphMapperWrap::SetEnableVerticesByArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnableVerticesByArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphMapperWrap::SetEnabledEdgesArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnabledEdgesArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphMapperWrap::SetEnabledVerticesArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnabledVerticesArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphMapperWrap::SetIconAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIconAlignment(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphMapperWrap::SetIconArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIconArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphMapperWrap::SetIconTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTextureWrap *a0 = ObjectWrap::Unwrap<VtkTextureWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIconTexture(
			(vtkTexture *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphMapperWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkGraph *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphMapperWrap::SetScalingArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalingArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphMapperWrap::SetVertexColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGraphMapperWrap>(info.Holder());
	vtkGraphMapper *native = (vtkGraphMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVertexColorArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

