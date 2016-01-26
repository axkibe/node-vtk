/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtk3DWidgetWrap.h"
#include "vtkSplineWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPlaneSourceWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkParametricSplineWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSplineWidgetWrap::ptpl;

VtkSplineWidgetWrap::VtkSplineWidgetWrap()
{ }

VtkSplineWidgetWrap::VtkSplineWidgetWrap(vtkSmartPointer<vtkSplineWidget> _native)
{ native = _native; }

VtkSplineWidgetWrap::~VtkSplineWidgetWrap()
{ }

void VtkSplineWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSplineWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SplineWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkSplineWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSplineWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	Vtk3DWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(Vtk3DWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSplineWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClosedOff", ClosedOff);
	Nan::SetPrototypeMethod(tpl, "closedOff", ClosedOff);

	Nan::SetPrototypeMethod(tpl, "ClosedOn", ClosedOn);
	Nan::SetPrototypeMethod(tpl, "closedOn", ClosedOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClosed", GetClosed);
	Nan::SetPrototypeMethod(tpl, "getClosed", GetClosed);

	Nan::SetPrototypeMethod(tpl, "GetHandleProperty", GetHandleProperty);
	Nan::SetPrototypeMethod(tpl, "getHandleProperty", GetHandleProperty);

	Nan::SetPrototypeMethod(tpl, "GetLineProperty", GetLineProperty);
	Nan::SetPrototypeMethod(tpl, "getLineProperty", GetLineProperty);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfHandles", GetNumberOfHandles);
	Nan::SetPrototypeMethod(tpl, "getNumberOfHandles", GetNumberOfHandles);

	Nan::SetPrototypeMethod(tpl, "GetParametricSpline", GetParametricSpline);
	Nan::SetPrototypeMethod(tpl, "getParametricSpline", GetParametricSpline);

	Nan::SetPrototypeMethod(tpl, "GetPolyData", GetPolyData);
	Nan::SetPrototypeMethod(tpl, "getPolyData", GetPolyData);

	Nan::SetPrototypeMethod(tpl, "GetProcessEvents", GetProcessEvents);
	Nan::SetPrototypeMethod(tpl, "getProcessEvents", GetProcessEvents);

	Nan::SetPrototypeMethod(tpl, "GetProcessEventsMaxValue", GetProcessEventsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getProcessEventsMaxValue", GetProcessEventsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetProcessEventsMinValue", GetProcessEventsMinValue);
	Nan::SetPrototypeMethod(tpl, "getProcessEventsMinValue", GetProcessEventsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetProjectToPlane", GetProjectToPlane);
	Nan::SetPrototypeMethod(tpl, "getProjectToPlane", GetProjectToPlane);

	Nan::SetPrototypeMethod(tpl, "GetProjectionNormal", GetProjectionNormal);
	Nan::SetPrototypeMethod(tpl, "getProjectionNormal", GetProjectionNormal);

	Nan::SetPrototypeMethod(tpl, "GetProjectionNormalMaxValue", GetProjectionNormalMaxValue);
	Nan::SetPrototypeMethod(tpl, "getProjectionNormalMaxValue", GetProjectionNormalMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetProjectionNormalMinValue", GetProjectionNormalMinValue);
	Nan::SetPrototypeMethod(tpl, "getProjectionNormalMinValue", GetProjectionNormalMinValue);

	Nan::SetPrototypeMethod(tpl, "GetProjectionPosition", GetProjectionPosition);
	Nan::SetPrototypeMethod(tpl, "getProjectionPosition", GetProjectionPosition);

	Nan::SetPrototypeMethod(tpl, "GetResolution", GetResolution);
	Nan::SetPrototypeMethod(tpl, "getResolution", GetResolution);

	Nan::SetPrototypeMethod(tpl, "GetSelectedHandleProperty", GetSelectedHandleProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedHandleProperty", GetSelectedHandleProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedLineProperty", GetSelectedLineProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedLineProperty", GetSelectedLineProperty);

	Nan::SetPrototypeMethod(tpl, "GetSummedLength", GetSummedLength);
	Nan::SetPrototypeMethod(tpl, "getSummedLength", GetSummedLength);

	Nan::SetPrototypeMethod(tpl, "InitializeHandles", InitializeHandles);
	Nan::SetPrototypeMethod(tpl, "initializeHandles", InitializeHandles);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsClosed", IsClosed);
	Nan::SetPrototypeMethod(tpl, "isClosed", IsClosed);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PlaceWidget", PlaceWidget);
	Nan::SetPrototypeMethod(tpl, "placeWidget", PlaceWidget);

	Nan::SetPrototypeMethod(tpl, "ProcessEventsOff", ProcessEventsOff);
	Nan::SetPrototypeMethod(tpl, "processEventsOff", ProcessEventsOff);

	Nan::SetPrototypeMethod(tpl, "ProcessEventsOn", ProcessEventsOn);
	Nan::SetPrototypeMethod(tpl, "processEventsOn", ProcessEventsOn);

	Nan::SetPrototypeMethod(tpl, "ProjectToPlaneOff", ProjectToPlaneOff);
	Nan::SetPrototypeMethod(tpl, "projectToPlaneOff", ProjectToPlaneOff);

	Nan::SetPrototypeMethod(tpl, "ProjectToPlaneOn", ProjectToPlaneOn);
	Nan::SetPrototypeMethod(tpl, "projectToPlaneOn", ProjectToPlaneOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetClosed", SetClosed);
	Nan::SetPrototypeMethod(tpl, "setClosed", SetClosed);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetHandlePosition", SetHandlePosition);
	Nan::SetPrototypeMethod(tpl, "setHandlePosition", SetHandlePosition);

	Nan::SetPrototypeMethod(tpl, "SetHandleProperty", SetHandleProperty);
	Nan::SetPrototypeMethod(tpl, "setHandleProperty", SetHandleProperty);

	Nan::SetPrototypeMethod(tpl, "SetLineProperty", SetLineProperty);
	Nan::SetPrototypeMethod(tpl, "setLineProperty", SetLineProperty);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfHandles", SetNumberOfHandles);
	Nan::SetPrototypeMethod(tpl, "setNumberOfHandles", SetNumberOfHandles);

	Nan::SetPrototypeMethod(tpl, "SetParametricSpline", SetParametricSpline);
	Nan::SetPrototypeMethod(tpl, "setParametricSpline", SetParametricSpline);

	Nan::SetPrototypeMethod(tpl, "SetPlaneSource", SetPlaneSource);
	Nan::SetPrototypeMethod(tpl, "setPlaneSource", SetPlaneSource);

	Nan::SetPrototypeMethod(tpl, "SetProcessEvents", SetProcessEvents);
	Nan::SetPrototypeMethod(tpl, "setProcessEvents", SetProcessEvents);

	Nan::SetPrototypeMethod(tpl, "SetProjectToPlane", SetProjectToPlane);
	Nan::SetPrototypeMethod(tpl, "setProjectToPlane", SetProjectToPlane);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormal", SetProjectionNormal);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormal", SetProjectionNormal);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormalToOblique", SetProjectionNormalToOblique);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormalToOblique", SetProjectionNormalToOblique);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormalToXAxes", SetProjectionNormalToXAxes);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormalToXAxes", SetProjectionNormalToXAxes);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormalToYAxes", SetProjectionNormalToYAxes);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormalToYAxes", SetProjectionNormalToYAxes);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormalToZAxes", SetProjectionNormalToZAxes);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormalToZAxes", SetProjectionNormalToZAxes);

	Nan::SetPrototypeMethod(tpl, "SetProjectionPosition", SetProjectionPosition);
	Nan::SetPrototypeMethod(tpl, "setProjectionPosition", SetProjectionPosition);

	Nan::SetPrototypeMethod(tpl, "SetResolution", SetResolution);
	Nan::SetPrototypeMethod(tpl, "setResolution", SetResolution);

	Nan::SetPrototypeMethod(tpl, "SetSelectedHandleProperty", SetSelectedHandleProperty);
	Nan::SetPrototypeMethod(tpl, "setSelectedHandleProperty", SetSelectedHandleProperty);

	Nan::SetPrototypeMethod(tpl, "SetSelectedLineProperty", SetSelectedLineProperty);
	Nan::SetPrototypeMethod(tpl, "setSelectedLineProperty", SetSelectedLineProperty);

	ptpl.Reset( tpl );
}

void VtkSplineWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSplineWidget> native = vtkSmartPointer<vtkSplineWidget>::New();
		VtkSplineWidgetWrap* obj = new VtkSplineWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSplineWidgetWrap::ClosedOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClosedOff();
}

void VtkSplineWidgetWrap::ClosedOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClosedOn();
}

void VtkSplineWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSplineWidgetWrap::GetClosed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClosed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWidgetWrap::GetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
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
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineWidgetWrap::GetLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineProperty();
		VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineWidgetWrap::GetNumberOfHandles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfHandles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWidgetWrap::GetParametricSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	vtkParametricSpline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParametricSpline();
		VtkParametricSplineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkParametricSplineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParametricSplineWrap *w = new VtkParametricSplineWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineWidgetWrap::GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
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

void VtkSplineWidgetWrap::GetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessEvents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWidgetWrap::GetProcessEventsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessEventsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWidgetWrap::GetProcessEventsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessEventsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWidgetWrap::GetProjectToPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectToPlane();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWidgetWrap::GetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionNormal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWidgetWrap::GetProjectionNormalMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionNormalMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWidgetWrap::GetProjectionNormalMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionNormalMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWidgetWrap::GetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionPosition();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWidgetWrap::GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWidgetWrap::GetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
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
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineWidgetWrap::GetSelectedLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedLineProperty();
		VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineWidgetWrap::GetSummedLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSummedLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWidgetWrap::InitializeHandles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->InitializeHandles(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
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

void VtkSplineWidgetWrap::IsClosed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsClosed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	vtkSplineWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSplineWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSplineWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSplineWidgetWrap *w = new VtkSplineWidgetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineWidgetWrap::PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
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

void VtkSplineWidgetWrap::ProcessEventsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProcessEventsOff();
}

void VtkSplineWidgetWrap::ProcessEventsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProcessEventsOn();
}

void VtkSplineWidgetWrap::ProjectToPlaneOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProjectToPlaneOff();
}

void VtkSplineWidgetWrap::ProjectToPlaneOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProjectToPlaneOn();
}

void VtkSplineWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSplineWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSplineWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSplineWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSplineWidgetWrap *w = new VtkSplineWidgetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::SetClosed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClosed(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
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

void VtkSplineWidgetWrap::SetHandlePosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetHandlePosition(
						info[0]->Int32Value(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::SetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHandleProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::SetLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLineProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::SetNumberOfHandles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfHandles(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::SetParametricSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkParametricSplineWrap::ptpl))->HasInstance(info[0]))
	{
		VtkParametricSplineWrap *a0 = ObjectWrap::Unwrap<VtkParametricSplineWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParametricSpline(
			(vtkParametricSpline *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::SetPlaneSource(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlaneSourceWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlaneSourceWrap *a0 = ObjectWrap::Unwrap<VtkPlaneSourceWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlaneSource(
			(vtkPlaneSource *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProcessEvents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::SetProjectToPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProjectToPlane(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::SetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProjectionNormal(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::SetProjectionNormalToOblique(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToOblique();
}

void VtkSplineWidgetWrap::SetProjectionNormalToXAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToXAxes();
}

void VtkSplineWidgetWrap::SetProjectionNormalToYAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToYAxes();
}

void VtkSplineWidgetWrap::SetProjectionNormalToZAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToZAxes();
}

void VtkSplineWidgetWrap::SetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProjectionPosition(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
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

void VtkSplineWidgetWrap::SetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedHandleProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineWidgetWrap::SetSelectedLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkSplineWidgetWrap>(info.Holder());
	vtkSplineWidget *native = (vtkSplineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedLineProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

