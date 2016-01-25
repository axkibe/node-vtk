/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtk3DWidgetWrap.h"
#include "vtkBrokenLineWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPlaneSourceWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkBrokenLineWidgetWrap::constructor;

VtkBrokenLineWidgetWrap::VtkBrokenLineWidgetWrap()
{ }

VtkBrokenLineWidgetWrap::VtkBrokenLineWidgetWrap(vtkSmartPointer<vtkBrokenLineWidget> _native)
{ native = _native; }

VtkBrokenLineWidgetWrap::~VtkBrokenLineWidgetWrap()
{ }

void VtkBrokenLineWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkBrokenLineWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkInteractorObserverWrap::InitTpl(tpl);
	Vtk3DWidgetWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkBrokenLineWidget").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("BrokenLineWidget").ToLocalChecked(),tpl->GetFunction());
}

void VtkBrokenLineWidgetWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHandleProperty", GetHandleProperty);
	Nan::SetPrototypeMethod(tpl, "getHandleProperty", GetHandleProperty);

	Nan::SetPrototypeMethod(tpl, "GetHandleSizeFactor", GetHandleSizeFactor);
	Nan::SetPrototypeMethod(tpl, "getHandleSizeFactor", GetHandleSizeFactor);

	Nan::SetPrototypeMethod(tpl, "GetHandleSizeFactorMaxValue", GetHandleSizeFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getHandleSizeFactorMaxValue", GetHandleSizeFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetHandleSizeFactorMinValue", GetHandleSizeFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getHandleSizeFactorMinValue", GetHandleSizeFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLineProperty", GetLineProperty);
	Nan::SetPrototypeMethod(tpl, "getLineProperty", GetLineProperty);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfHandles", GetNumberOfHandles);
	Nan::SetPrototypeMethod(tpl, "getNumberOfHandles", GetNumberOfHandles);

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

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetHandlePosition", SetHandlePosition);
	Nan::SetPrototypeMethod(tpl, "setHandlePosition", SetHandlePosition);

	Nan::SetPrototypeMethod(tpl, "SetHandleProperty", SetHandleProperty);
	Nan::SetPrototypeMethod(tpl, "setHandleProperty", SetHandleProperty);

	Nan::SetPrototypeMethod(tpl, "SetHandleSizeFactor", SetHandleSizeFactor);
	Nan::SetPrototypeMethod(tpl, "setHandleSizeFactor", SetHandleSizeFactor);

	Nan::SetPrototypeMethod(tpl, "SetLineProperty", SetLineProperty);
	Nan::SetPrototypeMethod(tpl, "setLineProperty", SetLineProperty);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfHandles", SetNumberOfHandles);
	Nan::SetPrototypeMethod(tpl, "setNumberOfHandles", SetNumberOfHandles);

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

	Nan::SetPrototypeMethod(tpl, "SetSelectedHandleProperty", SetSelectedHandleProperty);
	Nan::SetPrototypeMethod(tpl, "setSelectedHandleProperty", SetSelectedHandleProperty);

	Nan::SetPrototypeMethod(tpl, "SetSelectedLineProperty", SetSelectedLineProperty);
	Nan::SetPrototypeMethod(tpl, "setSelectedLineProperty", SetSelectedLineProperty);

}

void VtkBrokenLineWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBrokenLineWidget> native = vtkSmartPointer<vtkBrokenLineWidget>::New();
		VtkBrokenLineWidgetWrap* obj = new VtkBrokenLineWidgetWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBrokenLineWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBrokenLineWidgetWrap::GetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
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

void VtkBrokenLineWidgetWrap::GetHandleSizeFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleSizeFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrokenLineWidgetWrap::GetHandleSizeFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleSizeFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrokenLineWidgetWrap::GetHandleSizeFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleSizeFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrokenLineWidgetWrap::GetLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineProperty();
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

void VtkBrokenLineWidgetWrap::GetNumberOfHandles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfHandles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrokenLineWidgetWrap::GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
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

void VtkBrokenLineWidgetWrap::GetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessEvents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrokenLineWidgetWrap::GetProcessEventsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessEventsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrokenLineWidgetWrap::GetProcessEventsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessEventsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrokenLineWidgetWrap::GetProjectToPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectToPlane();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrokenLineWidgetWrap::GetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionNormal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrokenLineWidgetWrap::GetProjectionNormalMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionNormalMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrokenLineWidgetWrap::GetProjectionNormalMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionNormalMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrokenLineWidgetWrap::GetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionPosition();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrokenLineWidgetWrap::GetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
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

void VtkBrokenLineWidgetWrap::GetSelectedLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedLineProperty();
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

void VtkBrokenLineWidgetWrap::GetSummedLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSummedLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBrokenLineWidgetWrap::InitializeHandles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkBrokenLineWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
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

void VtkBrokenLineWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	vtkBrokenLineWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkBrokenLineWidgetWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBrokenLineWidgetWrap *w = new VtkBrokenLineWidgetWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBrokenLineWidgetWrap::PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
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

void VtkBrokenLineWidgetWrap::ProcessEventsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProcessEventsOff();
}

void VtkBrokenLineWidgetWrap::ProcessEventsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProcessEventsOn();
}

void VtkBrokenLineWidgetWrap::ProjectToPlaneOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProjectToPlaneOff();
}

void VtkBrokenLineWidgetWrap::ProjectToPlaneOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ProjectToPlaneOn();
}

void VtkBrokenLineWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBrokenLineWidget * r;
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
			Nan::New<v8::Function>(VtkBrokenLineWidgetWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBrokenLineWidgetWrap *w = new VtkBrokenLineWidgetWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrokenLineWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
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

void VtkBrokenLineWidgetWrap::SetHandlePosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
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

void VtkBrokenLineWidgetWrap::SetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkBrokenLineWidgetWrap::SetHandleSizeFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHandleSizeFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBrokenLineWidgetWrap::SetLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkBrokenLineWidgetWrap::SetNumberOfHandles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
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

void VtkBrokenLineWidgetWrap::SetPlaneSource(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkBrokenLineWidgetWrap::SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
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

void VtkBrokenLineWidgetWrap::SetProjectToPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
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

void VtkBrokenLineWidgetWrap::SetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
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

void VtkBrokenLineWidgetWrap::SetProjectionNormalToOblique(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToOblique();
}

void VtkBrokenLineWidgetWrap::SetProjectionNormalToXAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToXAxes();
}

void VtkBrokenLineWidgetWrap::SetProjectionNormalToYAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToYAxes();
}

void VtkBrokenLineWidgetWrap::SetProjectionNormalToZAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToZAxes();
}

void VtkBrokenLineWidgetWrap::SetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
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

void VtkBrokenLineWidgetWrap::SetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkBrokenLineWidgetWrap::SetSelectedLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBrokenLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBrokenLineWidgetWrap>(info.Holder());
	vtkBrokenLineWidget *native = (vtkBrokenLineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

