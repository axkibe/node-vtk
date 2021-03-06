/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtk3DWidgetWrap.h"
#include "vtkBoxWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPlanesWrap.h"
#include "vtkTransformWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkPropertyWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBoxWidgetWrap::ptpl;

VtkBoxWidgetWrap::VtkBoxWidgetWrap()
{ }

VtkBoxWidgetWrap::VtkBoxWidgetWrap(vtkSmartPointer<vtkBoxWidget> _native)
{ native = _native; }

VtkBoxWidgetWrap::~VtkBoxWidgetWrap()
{ }

void VtkBoxWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBoxWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BoxWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkBoxWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBoxWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	Vtk3DWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(Vtk3DWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBoxWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFaceProperty", GetFaceProperty);
	Nan::SetPrototypeMethod(tpl, "getFaceProperty", GetFaceProperty);

	Nan::SetPrototypeMethod(tpl, "GetHandleProperty", GetHandleProperty);
	Nan::SetPrototypeMethod(tpl, "getHandleProperty", GetHandleProperty);

	Nan::SetPrototypeMethod(tpl, "GetInsideOut", GetInsideOut);
	Nan::SetPrototypeMethod(tpl, "getInsideOut", GetInsideOut);

	Nan::SetPrototypeMethod(tpl, "GetOutlineCursorWires", GetOutlineCursorWires);
	Nan::SetPrototypeMethod(tpl, "getOutlineCursorWires", GetOutlineCursorWires);

	Nan::SetPrototypeMethod(tpl, "GetOutlineFaceWires", GetOutlineFaceWires);
	Nan::SetPrototypeMethod(tpl, "getOutlineFaceWires", GetOutlineFaceWires);

	Nan::SetPrototypeMethod(tpl, "GetOutlineProperty", GetOutlineProperty);
	Nan::SetPrototypeMethod(tpl, "getOutlineProperty", GetOutlineProperty);

	Nan::SetPrototypeMethod(tpl, "GetPlanes", GetPlanes);
	Nan::SetPrototypeMethod(tpl, "getPlanes", GetPlanes);

	Nan::SetPrototypeMethod(tpl, "GetPolyData", GetPolyData);
	Nan::SetPrototypeMethod(tpl, "getPolyData", GetPolyData);

	Nan::SetPrototypeMethod(tpl, "GetRotationEnabled", GetRotationEnabled);
	Nan::SetPrototypeMethod(tpl, "getRotationEnabled", GetRotationEnabled);

	Nan::SetPrototypeMethod(tpl, "GetScalingEnabled", GetScalingEnabled);
	Nan::SetPrototypeMethod(tpl, "getScalingEnabled", GetScalingEnabled);

	Nan::SetPrototypeMethod(tpl, "GetSelectedFaceProperty", GetSelectedFaceProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedFaceProperty", GetSelectedFaceProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedHandleProperty", GetSelectedHandleProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedHandleProperty", GetSelectedHandleProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedOutlineProperty", GetSelectedOutlineProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedOutlineProperty", GetSelectedOutlineProperty);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "GetTranslationEnabled", GetTranslationEnabled);
	Nan::SetPrototypeMethod(tpl, "getTranslationEnabled", GetTranslationEnabled);

	Nan::SetPrototypeMethod(tpl, "HandlesOff", HandlesOff);
	Nan::SetPrototypeMethod(tpl, "handlesOff", HandlesOff);

	Nan::SetPrototypeMethod(tpl, "HandlesOn", HandlesOn);
	Nan::SetPrototypeMethod(tpl, "handlesOn", HandlesOn);

	Nan::SetPrototypeMethod(tpl, "InsideOutOff", InsideOutOff);
	Nan::SetPrototypeMethod(tpl, "insideOutOff", InsideOutOff);

	Nan::SetPrototypeMethod(tpl, "InsideOutOn", InsideOutOn);
	Nan::SetPrototypeMethod(tpl, "insideOutOn", InsideOutOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OutlineCursorWiresOff", OutlineCursorWiresOff);
	Nan::SetPrototypeMethod(tpl, "outlineCursorWiresOff", OutlineCursorWiresOff);

	Nan::SetPrototypeMethod(tpl, "OutlineCursorWiresOn", OutlineCursorWiresOn);
	Nan::SetPrototypeMethod(tpl, "outlineCursorWiresOn", OutlineCursorWiresOn);

	Nan::SetPrototypeMethod(tpl, "OutlineFaceWiresOff", OutlineFaceWiresOff);
	Nan::SetPrototypeMethod(tpl, "outlineFaceWiresOff", OutlineFaceWiresOff);

	Nan::SetPrototypeMethod(tpl, "OutlineFaceWiresOn", OutlineFaceWiresOn);
	Nan::SetPrototypeMethod(tpl, "outlineFaceWiresOn", OutlineFaceWiresOn);

	Nan::SetPrototypeMethod(tpl, "PlaceWidget", PlaceWidget);
	Nan::SetPrototypeMethod(tpl, "placeWidget", PlaceWidget);

	Nan::SetPrototypeMethod(tpl, "RotationEnabledOff", RotationEnabledOff);
	Nan::SetPrototypeMethod(tpl, "rotationEnabledOff", RotationEnabledOff);

	Nan::SetPrototypeMethod(tpl, "RotationEnabledOn", RotationEnabledOn);
	Nan::SetPrototypeMethod(tpl, "rotationEnabledOn", RotationEnabledOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScalingEnabledOff", ScalingEnabledOff);
	Nan::SetPrototypeMethod(tpl, "scalingEnabledOff", ScalingEnabledOff);

	Nan::SetPrototypeMethod(tpl, "ScalingEnabledOn", ScalingEnabledOn);
	Nan::SetPrototypeMethod(tpl, "scalingEnabledOn", ScalingEnabledOn);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetInsideOut", SetInsideOut);
	Nan::SetPrototypeMethod(tpl, "setInsideOut", SetInsideOut);

	Nan::SetPrototypeMethod(tpl, "SetOutlineCursorWires", SetOutlineCursorWires);
	Nan::SetPrototypeMethod(tpl, "setOutlineCursorWires", SetOutlineCursorWires);

	Nan::SetPrototypeMethod(tpl, "SetOutlineFaceWires", SetOutlineFaceWires);
	Nan::SetPrototypeMethod(tpl, "setOutlineFaceWires", SetOutlineFaceWires);

	Nan::SetPrototypeMethod(tpl, "SetRotationEnabled", SetRotationEnabled);
	Nan::SetPrototypeMethod(tpl, "setRotationEnabled", SetRotationEnabled);

	Nan::SetPrototypeMethod(tpl, "SetScalingEnabled", SetScalingEnabled);
	Nan::SetPrototypeMethod(tpl, "setScalingEnabled", SetScalingEnabled);

	Nan::SetPrototypeMethod(tpl, "SetTransform", SetTransform);
	Nan::SetPrototypeMethod(tpl, "setTransform", SetTransform);

	Nan::SetPrototypeMethod(tpl, "SetTranslationEnabled", SetTranslationEnabled);
	Nan::SetPrototypeMethod(tpl, "setTranslationEnabled", SetTranslationEnabled);

	Nan::SetPrototypeMethod(tpl, "TranslationEnabledOff", TranslationEnabledOff);
	Nan::SetPrototypeMethod(tpl, "translationEnabledOff", TranslationEnabledOff);

	Nan::SetPrototypeMethod(tpl, "TranslationEnabledOn", TranslationEnabledOn);
	Nan::SetPrototypeMethod(tpl, "translationEnabledOn", TranslationEnabledOn);

#ifdef VTK_NODE_PLUS_VTKBOXWIDGETWRAP_INITPTPL
	VTK_NODE_PLUS_VTKBOXWIDGETWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkBoxWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBoxWidget> native = vtkSmartPointer<vtkBoxWidget>::New();
		VtkBoxWidgetWrap* obj = new VtkBoxWidgetWrap(native);
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

void VtkBoxWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBoxWidgetWrap::GetFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFaceProperty();
	VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxWidgetWrap::GetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleProperty();
	VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxWidgetWrap::GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInsideOut();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxWidgetWrap::GetOutlineCursorWires(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutlineCursorWires();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxWidgetWrap::GetOutlineFaceWires(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutlineFaceWires();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxWidgetWrap::GetOutlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutlineProperty();
	VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxWidgetWrap::GetPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlanesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlanesWrap *a0 = ObjectWrap::Unwrap<VtkPlanesWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetPlanes(
			(vtkPlanes *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidgetWrap::GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetPolyData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidgetWrap::GetRotationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRotationEnabled();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxWidgetWrap::GetScalingEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalingEnabled();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxWidgetWrap::GetSelectedFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedFaceProperty();
	VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxWidgetWrap::GetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedHandleProperty();
	VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxWidgetWrap::GetSelectedOutlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedOutlineProperty();
	VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxWidgetWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTransformWrap *a0 = ObjectWrap::Unwrap<VtkTransformWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetTransform(
			(vtkTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidgetWrap::GetTranslationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslationEnabled();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxWidgetWrap::HandlesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HandlesOff();
}

void VtkBoxWidgetWrap::HandlesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HandlesOn();
}

void VtkBoxWidgetWrap::InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOff();
}

void VtkBoxWidgetWrap::InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOn();
}

void VtkBoxWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
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

void VtkBoxWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	vtkBoxWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkBoxWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBoxWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBoxWidgetWrap *w = new VtkBoxWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxWidgetWrap::OutlineCursorWiresOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineCursorWiresOff();
}

void VtkBoxWidgetWrap::OutlineCursorWiresOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineCursorWiresOn();
}

void VtkBoxWidgetWrap::OutlineFaceWiresOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineFaceWiresOff();
}

void VtkBoxWidgetWrap::OutlineFaceWiresOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineFaceWiresOn();
}

void VtkBoxWidgetWrap::PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PlaceWidget(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->PlaceWidget(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
														if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->PlaceWidget(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PlaceWidget();
}

void VtkBoxWidgetWrap::RotationEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RotationEnabledOff();
}

void VtkBoxWidgetWrap::RotationEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RotationEnabledOn();
}

void VtkBoxWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBoxWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkBoxWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBoxWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBoxWidgetWrap *w = new VtkBoxWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidgetWrap::ScalingEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalingEnabledOff();
}

void VtkBoxWidgetWrap::ScalingEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalingEnabledOn();
}

void VtkBoxWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnabled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidgetWrap::SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInsideOut(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidgetWrap::SetOutlineCursorWires(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutlineCursorWires(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidgetWrap::SetOutlineFaceWires(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutlineFaceWires(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidgetWrap::SetRotationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRotationEnabled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidgetWrap::SetScalingEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalingEnabled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidgetWrap::SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTransformWrap *a0 = ObjectWrap::Unwrap<VtkTransformWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransform(
			(vtkTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidgetWrap::SetTranslationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTranslationEnabled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxWidgetWrap::TranslationEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationEnabledOff();
}

void VtkBoxWidgetWrap::TranslationEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBoxWidgetWrap>(info.Holder());
	vtkBoxWidget *native = (vtkBoxWidget *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationEnabledOn();
}

