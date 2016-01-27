/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataSourceWidgetWrap.h"
#include "vtkPlaneWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkPlaneWrap.h"
#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkPropertyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPlaneWidgetWrap::ptpl;

VtkPlaneWidgetWrap::VtkPlaneWidgetWrap()
{ }

VtkPlaneWidgetWrap::VtkPlaneWidgetWrap(vtkSmartPointer<vtkPlaneWidget> _native)
{ native = _native; }

VtkPlaneWidgetWrap::~VtkPlaneWidgetWrap()
{ }

void VtkPlaneWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPlaneWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PlaneWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkPlaneWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPlaneWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataSourceWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataSourceWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPlaneWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHandleProperty", GetHandleProperty);
	Nan::SetPrototypeMethod(tpl, "getHandleProperty", GetHandleProperty);

	Nan::SetPrototypeMethod(tpl, "GetNormalToXAxis", GetNormalToXAxis);
	Nan::SetPrototypeMethod(tpl, "getNormalToXAxis", GetNormalToXAxis);

	Nan::SetPrototypeMethod(tpl, "GetNormalToYAxis", GetNormalToYAxis);
	Nan::SetPrototypeMethod(tpl, "getNormalToYAxis", GetNormalToYAxis);

	Nan::SetPrototypeMethod(tpl, "GetNormalToZAxis", GetNormalToZAxis);
	Nan::SetPrototypeMethod(tpl, "getNormalToZAxis", GetNormalToZAxis);

	Nan::SetPrototypeMethod(tpl, "GetPlane", GetPlane);
	Nan::SetPrototypeMethod(tpl, "getPlane", GetPlane);

	Nan::SetPrototypeMethod(tpl, "GetPlaneProperty", GetPlaneProperty);
	Nan::SetPrototypeMethod(tpl, "getPlaneProperty", GetPlaneProperty);

	Nan::SetPrototypeMethod(tpl, "GetPolyData", GetPolyData);
	Nan::SetPrototypeMethod(tpl, "getPolyData", GetPolyData);

	Nan::SetPrototypeMethod(tpl, "GetPolyDataAlgorithm", GetPolyDataAlgorithm);
	Nan::SetPrototypeMethod(tpl, "getPolyDataAlgorithm", GetPolyDataAlgorithm);

	Nan::SetPrototypeMethod(tpl, "GetRepresentation", GetRepresentation);
	Nan::SetPrototypeMethod(tpl, "getRepresentation", GetRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetRepresentationMaxValue", GetRepresentationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRepresentationMaxValue", GetRepresentationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRepresentationMinValue", GetRepresentationMinValue);
	Nan::SetPrototypeMethod(tpl, "getRepresentationMinValue", GetRepresentationMinValue);

	Nan::SetPrototypeMethod(tpl, "GetResolution", GetResolution);
	Nan::SetPrototypeMethod(tpl, "getResolution", GetResolution);

	Nan::SetPrototypeMethod(tpl, "GetSelectedHandleProperty", GetSelectedHandleProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedHandleProperty", GetSelectedHandleProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedPlaneProperty", GetSelectedPlaneProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedPlaneProperty", GetSelectedPlaneProperty);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NormalToXAxisOff", NormalToXAxisOff);
	Nan::SetPrototypeMethod(tpl, "normalToXAxisOff", NormalToXAxisOff);

	Nan::SetPrototypeMethod(tpl, "NormalToXAxisOn", NormalToXAxisOn);
	Nan::SetPrototypeMethod(tpl, "normalToXAxisOn", NormalToXAxisOn);

	Nan::SetPrototypeMethod(tpl, "NormalToYAxisOff", NormalToYAxisOff);
	Nan::SetPrototypeMethod(tpl, "normalToYAxisOff", NormalToYAxisOff);

	Nan::SetPrototypeMethod(tpl, "NormalToYAxisOn", NormalToYAxisOn);
	Nan::SetPrototypeMethod(tpl, "normalToYAxisOn", NormalToYAxisOn);

	Nan::SetPrototypeMethod(tpl, "NormalToZAxisOff", NormalToZAxisOff);
	Nan::SetPrototypeMethod(tpl, "normalToZAxisOff", NormalToZAxisOff);

	Nan::SetPrototypeMethod(tpl, "NormalToZAxisOn", NormalToZAxisOn);
	Nan::SetPrototypeMethod(tpl, "normalToZAxisOn", NormalToZAxisOn);

	Nan::SetPrototypeMethod(tpl, "PlaceWidget", PlaceWidget);
	Nan::SetPrototypeMethod(tpl, "placeWidget", PlaceWidget);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetNormal", SetNormal);
	Nan::SetPrototypeMethod(tpl, "setNormal", SetNormal);

	Nan::SetPrototypeMethod(tpl, "SetNormalToXAxis", SetNormalToXAxis);
	Nan::SetPrototypeMethod(tpl, "setNormalToXAxis", SetNormalToXAxis);

	Nan::SetPrototypeMethod(tpl, "SetNormalToYAxis", SetNormalToYAxis);
	Nan::SetPrototypeMethod(tpl, "setNormalToYAxis", SetNormalToYAxis);

	Nan::SetPrototypeMethod(tpl, "SetNormalToZAxis", SetNormalToZAxis);
	Nan::SetPrototypeMethod(tpl, "setNormalToZAxis", SetNormalToZAxis);

	Nan::SetPrototypeMethod(tpl, "SetOrigin", SetOrigin);
	Nan::SetPrototypeMethod(tpl, "setOrigin", SetOrigin);

	Nan::SetPrototypeMethod(tpl, "SetPlaneProperty", SetPlaneProperty);
	Nan::SetPrototypeMethod(tpl, "setPlaneProperty", SetPlaneProperty);

	Nan::SetPrototypeMethod(tpl, "SetPoint1", SetPoint1);
	Nan::SetPrototypeMethod(tpl, "setPoint1", SetPoint1);

	Nan::SetPrototypeMethod(tpl, "SetPoint2", SetPoint2);
	Nan::SetPrototypeMethod(tpl, "setPoint2", SetPoint2);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetRepresentationToOff", SetRepresentationToOff);
	Nan::SetPrototypeMethod(tpl, "setRepresentationToOff", SetRepresentationToOff);

	Nan::SetPrototypeMethod(tpl, "SetRepresentationToOutline", SetRepresentationToOutline);
	Nan::SetPrototypeMethod(tpl, "setRepresentationToOutline", SetRepresentationToOutline);

	Nan::SetPrototypeMethod(tpl, "SetRepresentationToSurface", SetRepresentationToSurface);
	Nan::SetPrototypeMethod(tpl, "setRepresentationToSurface", SetRepresentationToSurface);

	Nan::SetPrototypeMethod(tpl, "SetRepresentationToWireframe", SetRepresentationToWireframe);
	Nan::SetPrototypeMethod(tpl, "setRepresentationToWireframe", SetRepresentationToWireframe);

	Nan::SetPrototypeMethod(tpl, "SetResolution", SetResolution);
	Nan::SetPrototypeMethod(tpl, "setResolution", SetResolution);

	Nan::SetPrototypeMethod(tpl, "UpdatePlacement", UpdatePlacement);
	Nan::SetPrototypeMethod(tpl, "updatePlacement", UpdatePlacement);

	ptpl.Reset( tpl );
}

void VtkPlaneWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlaneWidget> native = vtkSmartPointer<vtkPlaneWidget>::New();
		VtkPlaneWidgetWrap* obj = new VtkPlaneWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPlaneWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPlaneWidgetWrap::GetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
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

void VtkPlaneWidgetWrap::GetNormalToXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalToXAxis();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlaneWidgetWrap::GetNormalToYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalToYAxis();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlaneWidgetWrap::GetNormalToZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalToZAxis();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlaneWidgetWrap::GetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlaneWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlaneWrap *a0 = ObjectWrap::Unwrap<VtkPlaneWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetPlane(
			(vtkPlane *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWidgetWrap::GetPlaneProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlaneProperty();
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

void VtkPlaneWidgetWrap::GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
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

void VtkPlaneWidgetWrap::GetPolyDataAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	vtkPolyDataAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolyDataAlgorithm();
		VtkPolyDataAlgorithmWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataAlgorithmWrap *w = new VtkPolyDataAlgorithmWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlaneWidgetWrap::GetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRepresentation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlaneWidgetWrap::GetRepresentationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRepresentationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlaneWidgetWrap::GetRepresentationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRepresentationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlaneWidgetWrap::GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlaneWidgetWrap::GetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
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

void VtkPlaneWidgetWrap::GetSelectedPlaneProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedPlaneProperty();
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

void VtkPlaneWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
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

void VtkPlaneWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	vtkPlaneWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPlaneWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlaneWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaneWidgetWrap *w = new VtkPlaneWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlaneWidgetWrap::NormalToXAxisOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalToXAxisOff();
}

void VtkPlaneWidgetWrap::NormalToXAxisOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalToXAxisOn();
}

void VtkPlaneWidgetWrap::NormalToYAxisOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalToYAxisOff();
}

void VtkPlaneWidgetWrap::NormalToYAxisOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalToYAxisOn();
}

void VtkPlaneWidgetWrap::NormalToZAxisOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalToZAxisOff();
}

void VtkPlaneWidgetWrap::NormalToZAxisOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalToZAxisOn();
}

void VtkPlaneWidgetWrap::PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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

void VtkPlaneWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPlaneWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPlaneWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlaneWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlaneWidgetWrap *w = new VtkPlaneWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWidgetWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetCenter(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
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

void VtkPlaneWidgetWrap::SetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetNormal(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWidgetWrap::SetNormalToXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalToXAxis(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWidgetWrap::SetNormalToYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalToYAxis(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWidgetWrap::SetNormalToZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalToZAxis(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWidgetWrap::SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOrigin(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWidgetWrap::SetPlaneProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlaneProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWidgetWrap::SetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetPoint1(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWidgetWrap::SetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetPoint2(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWidgetWrap::SetRepresentationToOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRepresentationToOff();
}

void VtkPlaneWidgetWrap::SetRepresentationToOutline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRepresentationToOutline();
}

void VtkPlaneWidgetWrap::SetRepresentationToSurface(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRepresentationToSurface();
}

void VtkPlaneWidgetWrap::SetRepresentationToWireframe(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRepresentationToWireframe();
}

void VtkPlaneWidgetWrap::SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlaneWidgetWrap::UpdatePlacement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlaneWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkPlaneWidgetWrap>(info.Holder());
	vtkPlaneWidget *native = (vtkPlaneWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UpdatePlacement();
}

