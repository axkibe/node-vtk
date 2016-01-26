/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataPointPlacerWrap.h"
#include "vtkPolygonalSurfacePointPlacerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPropWrap.h"
#include "vtkCellPickerWrap.h"
#include "vtkPolyDataCollectionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPolygonalSurfacePointPlacerWrap::ptpl;

VtkPolygonalSurfacePointPlacerWrap::VtkPolygonalSurfacePointPlacerWrap()
{ }

VtkPolygonalSurfacePointPlacerWrap::VtkPolygonalSurfacePointPlacerWrap(vtkSmartPointer<vtkPolygonalSurfacePointPlacer> _native)
{ native = _native; }

VtkPolygonalSurfacePointPlacerWrap::~VtkPolygonalSurfacePointPlacerWrap()
{ }

void VtkPolygonalSurfacePointPlacerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPolygonalSurfacePointPlacer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PolygonalSurfacePointPlacer").ToLocalChecked(), ConstructorGetter);
}

void VtkPolygonalSurfacePointPlacerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPolygonalSurfacePointPlacerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataPointPlacerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataPointPlacerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPolygonalSurfacePointPlacerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddProp", AddProp);
	Nan::SetPrototypeMethod(tpl, "addProp", AddProp);

	Nan::SetPrototypeMethod(tpl, "GetCellPicker", GetCellPicker);
	Nan::SetPrototypeMethod(tpl, "getCellPicker", GetCellPicker);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDistanceOffset", GetDistanceOffset);
	Nan::SetPrototypeMethod(tpl, "getDistanceOffset", GetDistanceOffset);

	Nan::SetPrototypeMethod(tpl, "GetPolys", GetPolys);
	Nan::SetPrototypeMethod(tpl, "getPolys", GetPolys);

	Nan::SetPrototypeMethod(tpl, "GetSnapToClosestPoint", GetSnapToClosestPoint);
	Nan::SetPrototypeMethod(tpl, "getSnapToClosestPoint", GetSnapToClosestPoint);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllProps", RemoveAllProps);
	Nan::SetPrototypeMethod(tpl, "removeAllProps", RemoveAllProps);

	Nan::SetPrototypeMethod(tpl, "RemoveViewProp", RemoveViewProp);
	Nan::SetPrototypeMethod(tpl, "removeViewProp", RemoveViewProp);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDistanceOffset", SetDistanceOffset);
	Nan::SetPrototypeMethod(tpl, "setDistanceOffset", SetDistanceOffset);

	Nan::SetPrototypeMethod(tpl, "SetSnapToClosestPoint", SetSnapToClosestPoint);
	Nan::SetPrototypeMethod(tpl, "setSnapToClosestPoint", SetSnapToClosestPoint);

	Nan::SetPrototypeMethod(tpl, "SnapToClosestPointOff", SnapToClosestPointOff);
	Nan::SetPrototypeMethod(tpl, "snapToClosestPointOff", SnapToClosestPointOff);

	Nan::SetPrototypeMethod(tpl, "SnapToClosestPointOn", SnapToClosestPointOn);
	Nan::SetPrototypeMethod(tpl, "snapToClosestPointOn", SnapToClosestPointOn);

	ptpl.Reset( tpl );
}

void VtkPolygonalSurfacePointPlacerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolygonalSurfacePointPlacer> native = vtkSmartPointer<vtkPolygonalSurfacePointPlacer>::New();
		VtkPolygonalSurfacePointPlacerWrap* obj = new VtkPolygonalSurfacePointPlacerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPolygonalSurfacePointPlacerWrap::AddProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddProp(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolygonalSurfacePointPlacerWrap::GetCellPicker(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	vtkCellPicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellPicker();
		VtkCellPickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellPickerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellPickerWrap *w = new VtkCellPickerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolygonalSurfacePointPlacerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolygonalSurfacePointPlacerWrap::GetDistanceOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolygonalSurfacePointPlacerWrap::GetPolys(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	vtkPolyDataCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolys();
		VtkPolyDataCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataCollectionWrap *w = new VtkPolyDataCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolygonalSurfacePointPlacerWrap::GetSnapToClosestPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSnapToClosestPoint();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolygonalSurfacePointPlacerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
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

void VtkPolygonalSurfacePointPlacerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	vtkPolygonalSurfacePointPlacer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPolygonalSurfacePointPlacerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolygonalSurfacePointPlacerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolygonalSurfacePointPlacerWrap *w = new VtkPolygonalSurfacePointPlacerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolygonalSurfacePointPlacerWrap::RemoveAllProps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllProps();
}

void VtkPolygonalSurfacePointPlacerWrap::RemoveViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveViewProp(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolygonalSurfacePointPlacerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPolygonalSurfacePointPlacer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPolygonalSurfacePointPlacerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolygonalSurfacePointPlacerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolygonalSurfacePointPlacerWrap *w = new VtkPolygonalSurfacePointPlacerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolygonalSurfacePointPlacerWrap::SetDistanceOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDistanceOffset(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolygonalSurfacePointPlacerWrap::SetSnapToClosestPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSnapToClosestPoint(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolygonalSurfacePointPlacerWrap::SnapToClosestPointOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SnapToClosestPointOff();
}

void VtkPolygonalSurfacePointPlacerWrap::SnapToClosestPointOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalSurfacePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalSurfacePointPlacerWrap>(info.Holder());
	vtkPolygonalSurfacePointPlacer *native = (vtkPolygonalSurfacePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SnapToClosestPointOn();
}

