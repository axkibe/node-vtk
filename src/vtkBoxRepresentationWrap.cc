/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWidgetRepresentationWrap.h"
#include "vtkBoxRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPlanesWrap.h"
#include "vtkTransformWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkBoxRepresentationWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkBoxRepresentationWrap::ptpl;

VtkBoxRepresentationWrap::VtkBoxRepresentationWrap()
{ }

VtkBoxRepresentationWrap::VtkBoxRepresentationWrap(vtkSmartPointer<vtkBoxRepresentation> _native)
{ native = _native; }

VtkBoxRepresentationWrap::~VtkBoxRepresentationWrap()
{ }

void VtkBoxRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWidgetRepresentationWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkBoxRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkBoxRepresentation").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("BoxRepresentation").ToLocalChecked(),tpl->GetFunction());
}

void VtkBoxRepresentationWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

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

	Nan::SetPrototypeMethod(tpl, "GetSelectedFaceProperty", GetSelectedFaceProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedFaceProperty", GetSelectedFaceProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedHandleProperty", GetSelectedHandleProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedHandleProperty", GetSelectedHandleProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedOutlineProperty", GetSelectedOutlineProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedOutlineProperty", GetSelectedOutlineProperty);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "HandlesOff", HandlesOff);
	Nan::SetPrototypeMethod(tpl, "handlesOff", HandlesOff);

	Nan::SetPrototypeMethod(tpl, "HandlesOn", HandlesOn);
	Nan::SetPrototypeMethod(tpl, "handlesOn", HandlesOn);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

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

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInsideOut", SetInsideOut);
	Nan::SetPrototypeMethod(tpl, "setInsideOut", SetInsideOut);

	Nan::SetPrototypeMethod(tpl, "SetInteractionState", SetInteractionState);
	Nan::SetPrototypeMethod(tpl, "setInteractionState", SetInteractionState);

	Nan::SetPrototypeMethod(tpl, "SetOutlineCursorWires", SetOutlineCursorWires);
	Nan::SetPrototypeMethod(tpl, "setOutlineCursorWires", SetOutlineCursorWires);

	Nan::SetPrototypeMethod(tpl, "SetOutlineFaceWires", SetOutlineFaceWires);
	Nan::SetPrototypeMethod(tpl, "setOutlineFaceWires", SetOutlineFaceWires);

	Nan::SetPrototypeMethod(tpl, "SetTransform", SetTransform);
	Nan::SetPrototypeMethod(tpl, "setTransform", SetTransform);

}

void VtkBoxRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBoxRepresentation> native = vtkSmartPointer<vtkBoxRepresentation>::New();
		VtkBoxRepresentationWrap* obj = new VtkBoxRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBoxRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkBoxRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->ComputeInteractionState(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBoxRepresentationWrap::GetFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFaceProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxRepresentationWrap::GetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxRepresentationWrap::GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInsideOut();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxRepresentationWrap::GetOutlineCursorWires(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutlineCursorWires();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxRepresentationWrap::GetOutlineFaceWires(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutlineFaceWires();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxRepresentationWrap::GetOutlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutlineProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxRepresentationWrap::GetPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkBoxRepresentationWrap::GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkBoxRepresentationWrap::GetSelectedFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedFaceProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxRepresentationWrap::GetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedHandleProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxRepresentationWrap::GetSelectedOutlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedOutlineProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxRepresentationWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkBoxRepresentationWrap::HandlesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HandlesOff();
}

void VtkBoxRepresentationWrap::HandlesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HandlesOn();
}

void VtkBoxRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoxRepresentationWrap::InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOff();
}

void VtkBoxRepresentationWrap::InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOn();
}

void VtkBoxRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
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

void VtkBoxRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	vtkBoxRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkBoxRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBoxRepresentationWrap *w = new VtkBoxRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoxRepresentationWrap::OutlineCursorWiresOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineCursorWiresOff();
}

void VtkBoxRepresentationWrap::OutlineCursorWiresOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineCursorWiresOn();
}

void VtkBoxRepresentationWrap::OutlineFaceWiresOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineFaceWiresOff();
}

void VtkBoxRepresentationWrap::OutlineFaceWiresOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineFaceWiresOn();
}

void VtkBoxRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
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

void VtkBoxRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
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

void VtkBoxRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
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

void VtkBoxRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBoxRepresentation * r;
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
			Nan::New<v8::Function>(VtkBoxRepresentationWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBoxRepresentationWrap *w = new VtkBoxRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxRepresentationWrap::SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
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

void VtkBoxRepresentationWrap::SetInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractionState(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoxRepresentationWrap::SetOutlineCursorWires(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
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

void VtkBoxRepresentationWrap::SetOutlineFaceWires(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
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

void VtkBoxRepresentationWrap::SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoxRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkBoxRepresentationWrap>(info.Holder());
	vtkBoxRepresentation *native = (vtkBoxRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

