/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMapperWrap.h"
#include "vtkGlyph3DMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkRendererWrap.h"
#include "vtkActorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGlyph3DMapperWrap::ptpl;

VtkGlyph3DMapperWrap::VtkGlyph3DMapperWrap()
{ }

VtkGlyph3DMapperWrap::VtkGlyph3DMapperWrap(vtkSmartPointer<vtkGlyph3DMapper> _native)
{ native = _native; }

VtkGlyph3DMapperWrap::~VtkGlyph3DMapperWrap()
{ }

void VtkGlyph3DMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGlyph3DMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Glyph3DMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkGlyph3DMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGlyph3DMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGlyph3DMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClampingOff", ClampingOff);
	Nan::SetPrototypeMethod(tpl, "clampingOff", ClampingOff);

	Nan::SetPrototypeMethod(tpl, "ClampingOn", ClampingOn);
	Nan::SetPrototypeMethod(tpl, "clampingOn", ClampingOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOrientationMode", GetOrientationMode);
	Nan::SetPrototypeMethod(tpl, "getOrientationMode", GetOrientationMode);

	Nan::SetPrototypeMethod(tpl, "GetOrientationModeAsString", GetOrientationModeAsString);
	Nan::SetPrototypeMethod(tpl, "getOrientationModeAsString", GetOrientationModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetOrientationModeMaxValue", GetOrientationModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOrientationModeMaxValue", GetOrientationModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOrientationModeMinValue", GetOrientationModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getOrientationModeMinValue", GetOrientationModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetScaleFactor", GetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "getScaleFactor", GetScaleFactor);

	Nan::SetPrototypeMethod(tpl, "GetScaleMode", GetScaleMode);
	Nan::SetPrototypeMethod(tpl, "getScaleMode", GetScaleMode);

	Nan::SetPrototypeMethod(tpl, "GetScaleModeAsString", GetScaleModeAsString);
	Nan::SetPrototypeMethod(tpl, "getScaleModeAsString", GetScaleModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetSource", GetSource);
	Nan::SetPrototypeMethod(tpl, "getSource", GetSource);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MaskingOff", MaskingOff);
	Nan::SetPrototypeMethod(tpl, "maskingOff", MaskingOff);

	Nan::SetPrototypeMethod(tpl, "MaskingOn", MaskingOn);
	Nan::SetPrototypeMethod(tpl, "maskingOn", MaskingOn);

	Nan::SetPrototypeMethod(tpl, "NestedDisplayListsOff", NestedDisplayListsOff);
	Nan::SetPrototypeMethod(tpl, "nestedDisplayListsOff", NestedDisplayListsOff);

	Nan::SetPrototypeMethod(tpl, "NestedDisplayListsOn", NestedDisplayListsOn);
	Nan::SetPrototypeMethod(tpl, "nestedDisplayListsOn", NestedDisplayListsOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OrientOff", OrientOff);
	Nan::SetPrototypeMethod(tpl, "orientOff", OrientOff);

	Nan::SetPrototypeMethod(tpl, "OrientOn", OrientOn);
	Nan::SetPrototypeMethod(tpl, "orientOn", OrientOn);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScalingOff", ScalingOff);
	Nan::SetPrototypeMethod(tpl, "scalingOff", ScalingOff);

	Nan::SetPrototypeMethod(tpl, "ScalingOn", ScalingOn);
	Nan::SetPrototypeMethod(tpl, "scalingOn", ScalingOn);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetMaskArray", SetMaskArray);
	Nan::SetPrototypeMethod(tpl, "setMaskArray", SetMaskArray);

	Nan::SetPrototypeMethod(tpl, "SetOrientationArray", SetOrientationArray);
	Nan::SetPrototypeMethod(tpl, "setOrientationArray", SetOrientationArray);

	Nan::SetPrototypeMethod(tpl, "SetOrientationMode", SetOrientationMode);
	Nan::SetPrototypeMethod(tpl, "setOrientationMode", SetOrientationMode);

	Nan::SetPrototypeMethod(tpl, "SetOrientationModeToDirection", SetOrientationModeToDirection);
	Nan::SetPrototypeMethod(tpl, "setOrientationModeToDirection", SetOrientationModeToDirection);

	Nan::SetPrototypeMethod(tpl, "SetOrientationModeToRotation", SetOrientationModeToRotation);
	Nan::SetPrototypeMethod(tpl, "setOrientationModeToRotation", SetOrientationModeToRotation);

	Nan::SetPrototypeMethod(tpl, "SetRange", SetRange);
	Nan::SetPrototypeMethod(tpl, "setRange", SetRange);

	Nan::SetPrototypeMethod(tpl, "SetScaleArray", SetScaleArray);
	Nan::SetPrototypeMethod(tpl, "setScaleArray", SetScaleArray);

	Nan::SetPrototypeMethod(tpl, "SetScaleFactor", SetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "setScaleFactor", SetScaleFactor);

	Nan::SetPrototypeMethod(tpl, "SetScaleMode", SetScaleMode);
	Nan::SetPrototypeMethod(tpl, "setScaleMode", SetScaleMode);

	Nan::SetPrototypeMethod(tpl, "SetScaleModeToNoDataScaling", SetScaleModeToNoDataScaling);
	Nan::SetPrototypeMethod(tpl, "setScaleModeToNoDataScaling", SetScaleModeToNoDataScaling);

	Nan::SetPrototypeMethod(tpl, "SetScaleModeToScaleByMagnitude", SetScaleModeToScaleByMagnitude);
	Nan::SetPrototypeMethod(tpl, "setScaleModeToScaleByMagnitude", SetScaleModeToScaleByMagnitude);

	Nan::SetPrototypeMethod(tpl, "SetScaleModeToScaleByVectorComponents", SetScaleModeToScaleByVectorComponents);
	Nan::SetPrototypeMethod(tpl, "setScaleModeToScaleByVectorComponents", SetScaleModeToScaleByVectorComponents);

	Nan::SetPrototypeMethod(tpl, "SetSelectMode", SetSelectMode);
	Nan::SetPrototypeMethod(tpl, "setSelectMode", SetSelectMode);

	Nan::SetPrototypeMethod(tpl, "SetSelectionIdArray", SetSelectionIdArray);
	Nan::SetPrototypeMethod(tpl, "setSelectionIdArray", SetSelectionIdArray);

	Nan::SetPrototypeMethod(tpl, "SetSourceConnection", SetSourceConnection);
	Nan::SetPrototypeMethod(tpl, "setSourceConnection", SetSourceConnection);

	Nan::SetPrototypeMethod(tpl, "SetSourceData", SetSourceData);
	Nan::SetPrototypeMethod(tpl, "setSourceData", SetSourceData);

	Nan::SetPrototypeMethod(tpl, "SetSourceIndexArray", SetSourceIndexArray);
	Nan::SetPrototypeMethod(tpl, "setSourceIndexArray", SetSourceIndexArray);

	Nan::SetPrototypeMethod(tpl, "SourceIndexingOff", SourceIndexingOff);
	Nan::SetPrototypeMethod(tpl, "sourceIndexingOff", SourceIndexingOff);

	Nan::SetPrototypeMethod(tpl, "SourceIndexingOn", SourceIndexingOn);
	Nan::SetPrototypeMethod(tpl, "sourceIndexingOn", SourceIndexingOn);

	Nan::SetPrototypeMethod(tpl, "UseSelectionIdsOff", UseSelectionIdsOff);
	Nan::SetPrototypeMethod(tpl, "useSelectionIdsOff", UseSelectionIdsOff);

	Nan::SetPrototypeMethod(tpl, "UseSelectionIdsOn", UseSelectionIdsOn);
	Nan::SetPrototypeMethod(tpl, "useSelectionIdsOn", UseSelectionIdsOn);

	ptpl.Reset( tpl );
}

void VtkGlyph3DMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGlyph3DMapper> native = vtkSmartPointer<vtkGlyph3DMapper>::New();
		VtkGlyph3DMapperWrap* obj = new VtkGlyph3DMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGlyph3DMapperWrap::ClampingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClampingOff();
}

void VtkGlyph3DMapperWrap::ClampingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClampingOn();
}

void VtkGlyph3DMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGlyph3DMapperWrap::GetOrientationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientationMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyph3DMapperWrap::GetOrientationModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientationModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGlyph3DMapperWrap::GetOrientationModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientationModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyph3DMapperWrap::GetOrientationModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientationModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyph3DMapperWrap::GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyph3DMapperWrap::GetScaleMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlyph3DMapperWrap::GetScaleModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGlyph3DMapperWrap::GetSource(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetSource(
			info[0]->Int32Value()
		);
			VtkPolyDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataWrap *w = new VtkPolyDataWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
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

void VtkGlyph3DMapperWrap::MaskingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MaskingOff();
}

void VtkGlyph3DMapperWrap::MaskingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MaskingOn();
}

void VtkGlyph3DMapperWrap::NestedDisplayListsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NestedDisplayListsOff();
}

void VtkGlyph3DMapperWrap::NestedDisplayListsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NestedDisplayListsOn();
}

void VtkGlyph3DMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	vtkGlyph3DMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGlyph3DMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGlyph3DMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGlyph3DMapperWrap *w = new VtkGlyph3DMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGlyph3DMapperWrap::OrientOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OrientOff();
}

void VtkGlyph3DMapperWrap::OrientOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OrientOn();
}

void VtkGlyph3DMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkActorWrap::ptpl))->HasInstance(info[1]))
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

void VtkGlyph3DMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGlyph3DMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGlyph3DMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGlyph3DMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGlyph3DMapperWrap *w = new VtkGlyph3DMapperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::ScalingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalingOff();
}

void VtkGlyph3DMapperWrap::ScalingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalingOn();
}

void VtkGlyph3DMapperWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::SetMaskArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaskArray(
			*a0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaskArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::SetOrientationArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientationArray(
			*a0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientationArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::SetOrientationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientationMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::SetOrientationModeToDirection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOrientationModeToDirection();
}

void VtkGlyph3DMapperWrap::SetOrientationModeToRotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOrientationModeToRotation();
}

void VtkGlyph3DMapperWrap::SetRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::SetScaleArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleArray(
			*a0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::SetScaleMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::SetScaleModeToNoDataScaling(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScaleModeToNoDataScaling();
}

void VtkGlyph3DMapperWrap::SetScaleModeToScaleByMagnitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScaleModeToScaleByMagnitude();
}

void VtkGlyph3DMapperWrap::SetScaleModeToScaleByVectorComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScaleModeToScaleByVectorComponents();
}

void VtkGlyph3DMapperWrap::SetSelectMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::SetSelectionIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionIdArray(
			*a0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionIdArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::SetSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[1]))
		{
			VtkAlgorithmOutputWrap *a1 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetSourceConnection(
				info[0]->Int32Value(),
				(vtkAlgorithmOutput *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::SetSourceData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPolyDataWrap *a1 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetSourceData(
				info[0]->Int32Value(),
				(vtkPolyData *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::SetSourceIndexArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceIndexArray(
			*a0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSourceIndexArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlyph3DMapperWrap::SourceIndexingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SourceIndexingOff();
}

void VtkGlyph3DMapperWrap::SourceIndexingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SourceIndexingOn();
}

void VtkGlyph3DMapperWrap::UseSelectionIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseSelectionIdsOff();
}

void VtkGlyph3DMapperWrap::UseSelectionIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlyph3DMapperWrap *wrapper = ObjectWrap::Unwrap<VtkGlyph3DMapperWrap>(info.Holder());
	vtkGlyph3DMapper *native = (vtkGlyph3DMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseSelectionIdsOn();
}

