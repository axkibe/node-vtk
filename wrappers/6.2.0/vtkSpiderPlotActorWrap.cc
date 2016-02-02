/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkActor2DWrap.h"
#include "vtkSpiderPlotActorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkLegendBoxActorWrap.h"
#include "vtkViewportWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSpiderPlotActorWrap::ptpl;

VtkSpiderPlotActorWrap::VtkSpiderPlotActorWrap()
{ }

VtkSpiderPlotActorWrap::VtkSpiderPlotActorWrap(vtkSmartPointer<vtkSpiderPlotActor> _native)
{ native = _native; }

VtkSpiderPlotActorWrap::~VtkSpiderPlotActorWrap()
{ }

void VtkSpiderPlotActorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSpiderPlotActor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SpiderPlotActor").ToLocalChecked(), ConstructorGetter);
}

void VtkSpiderPlotActorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSpiderPlotActorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkActor2DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkActor2DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSpiderPlotActorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAxisLabel", GetAxisLabel);
	Nan::SetPrototypeMethod(tpl, "getAxisLabel", GetAxisLabel);

	Nan::SetPrototypeMethod(tpl, "GetAxisRange", GetAxisRange);
	Nan::SetPrototypeMethod(tpl, "getAxisRange", GetAxisRange);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetIndependentVariables", GetIndependentVariables);
	Nan::SetPrototypeMethod(tpl, "getIndependentVariables", GetIndependentVariables);

	Nan::SetPrototypeMethod(tpl, "GetIndependentVariablesMaxValue", GetIndependentVariablesMaxValue);
	Nan::SetPrototypeMethod(tpl, "getIndependentVariablesMaxValue", GetIndependentVariablesMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetIndependentVariablesMinValue", GetIndependentVariablesMinValue);
	Nan::SetPrototypeMethod(tpl, "getIndependentVariablesMinValue", GetIndependentVariablesMinValue);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetLabelTextProperty", GetLabelTextProperty);
	Nan::SetPrototypeMethod(tpl, "getLabelTextProperty", GetLabelTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetLabelVisibility", GetLabelVisibility);
	Nan::SetPrototypeMethod(tpl, "getLabelVisibility", GetLabelVisibility);

	Nan::SetPrototypeMethod(tpl, "GetLegendActor", GetLegendActor);
	Nan::SetPrototypeMethod(tpl, "getLegendActor", GetLegendActor);

	Nan::SetPrototypeMethod(tpl, "GetLegendVisibility", GetLegendVisibility);
	Nan::SetPrototypeMethod(tpl, "getLegendVisibility", GetLegendVisibility);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfRings", GetNumberOfRings);
	Nan::SetPrototypeMethod(tpl, "getNumberOfRings", GetNumberOfRings);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfRingsMaxValue", GetNumberOfRingsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfRingsMaxValue", GetNumberOfRingsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfRingsMinValue", GetNumberOfRingsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfRingsMinValue", GetNumberOfRingsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTitle", GetTitle);
	Nan::SetPrototypeMethod(tpl, "getTitle", GetTitle);

	Nan::SetPrototypeMethod(tpl, "GetTitleTextProperty", GetTitleTextProperty);
	Nan::SetPrototypeMethod(tpl, "getTitleTextProperty", GetTitleTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetTitleVisibility", GetTitleVisibility);
	Nan::SetPrototypeMethod(tpl, "getTitleVisibility", GetTitleVisibility);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LabelVisibilityOff", LabelVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "labelVisibilityOff", LabelVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "LabelVisibilityOn", LabelVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "labelVisibilityOn", LabelVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "LegendVisibilityOff", LegendVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "legendVisibilityOff", LegendVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "LegendVisibilityOn", LegendVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "legendVisibilityOn", LegendVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAxisLabel", SetAxisLabel);
	Nan::SetPrototypeMethod(tpl, "setAxisLabel", SetAxisLabel);

	Nan::SetPrototypeMethod(tpl, "SetAxisRange", SetAxisRange);
	Nan::SetPrototypeMethod(tpl, "setAxisRange", SetAxisRange);

	Nan::SetPrototypeMethod(tpl, "SetIndependentVariables", SetIndependentVariables);
	Nan::SetPrototypeMethod(tpl, "setIndependentVariables", SetIndependentVariables);

	Nan::SetPrototypeMethod(tpl, "SetIndependentVariablesToColumns", SetIndependentVariablesToColumns);
	Nan::SetPrototypeMethod(tpl, "setIndependentVariablesToColumns", SetIndependentVariablesToColumns);

	Nan::SetPrototypeMethod(tpl, "SetIndependentVariablesToRows", SetIndependentVariablesToRows);
	Nan::SetPrototypeMethod(tpl, "setIndependentVariablesToRows", SetIndependentVariablesToRows);

	Nan::SetPrototypeMethod(tpl, "SetInputConnection", SetInputConnection);
	Nan::SetPrototypeMethod(tpl, "setInputConnection", SetInputConnection);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetLabelTextProperty", SetLabelTextProperty);
	Nan::SetPrototypeMethod(tpl, "setLabelTextProperty", SetLabelTextProperty);

	Nan::SetPrototypeMethod(tpl, "SetLabelVisibility", SetLabelVisibility);
	Nan::SetPrototypeMethod(tpl, "setLabelVisibility", SetLabelVisibility);

	Nan::SetPrototypeMethod(tpl, "SetLegendVisibility", SetLegendVisibility);
	Nan::SetPrototypeMethod(tpl, "setLegendVisibility", SetLegendVisibility);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfRings", SetNumberOfRings);
	Nan::SetPrototypeMethod(tpl, "setNumberOfRings", SetNumberOfRings);

	Nan::SetPrototypeMethod(tpl, "SetPlotColor", SetPlotColor);
	Nan::SetPrototypeMethod(tpl, "setPlotColor", SetPlotColor);

	Nan::SetPrototypeMethod(tpl, "SetTitle", SetTitle);
	Nan::SetPrototypeMethod(tpl, "setTitle", SetTitle);

	Nan::SetPrototypeMethod(tpl, "SetTitleTextProperty", SetTitleTextProperty);
	Nan::SetPrototypeMethod(tpl, "setTitleTextProperty", SetTitleTextProperty);

	Nan::SetPrototypeMethod(tpl, "SetTitleVisibility", SetTitleVisibility);
	Nan::SetPrototypeMethod(tpl, "setTitleVisibility", SetTitleVisibility);

	Nan::SetPrototypeMethod(tpl, "TitleVisibilityOff", TitleVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "titleVisibilityOff", TitleVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "TitleVisibilityOn", TitleVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "titleVisibilityOn", TitleVisibilityOn);

	ptpl.Reset( tpl );
}

void VtkSpiderPlotActorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSpiderPlotActor> native = vtkSmartPointer<vtkSpiderPlotActor>::New();
		VtkSpiderPlotActorWrap* obj = new VtkSpiderPlotActorWrap(native);
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

void VtkSpiderPlotActorWrap::GetAxisLabel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAxisLabel(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::GetAxisRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetAxisRange(
				info[0]->Int32Value(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[2];
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 2; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetAxisRange(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSpiderPlotActorWrap::GetIndependentVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIndependentVariables();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSpiderPlotActorWrap::GetIndependentVariablesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIndependentVariablesMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSpiderPlotActorWrap::GetIndependentVariablesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIndependentVariablesMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSpiderPlotActorWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkDataObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSpiderPlotActorWrap::GetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelTextProperty();
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSpiderPlotActorWrap::GetLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSpiderPlotActorWrap::GetLegendActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	vtkLegendBoxActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLegendActor();
		VtkLegendBoxActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLegendBoxActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLegendBoxActorWrap *w = new VtkLegendBoxActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSpiderPlotActorWrap::GetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLegendVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSpiderPlotActorWrap::GetNumberOfRings(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfRings();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSpiderPlotActorWrap::GetNumberOfRingsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfRingsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSpiderPlotActorWrap::GetNumberOfRingsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfRingsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSpiderPlotActorWrap::GetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTitle();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSpiderPlotActorWrap::GetTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTitleTextProperty();
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSpiderPlotActorWrap::GetTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTitleVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSpiderPlotActorWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSpiderPlotActorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
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

void VtkSpiderPlotActorWrap::LabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LabelVisibilityOff();
}

void VtkSpiderPlotActorWrap::LabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LabelVisibilityOn();
}

void VtkSpiderPlotActorWrap::LegendVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LegendVisibilityOff();
}

void VtkSpiderPlotActorWrap::LegendVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LegendVisibilityOn();
}

void VtkSpiderPlotActorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	vtkSpiderPlotActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSpiderPlotActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSpiderPlotActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSpiderPlotActorWrap *w = new VtkSpiderPlotActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSpiderPlotActorWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
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

void VtkSpiderPlotActorWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
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

void VtkSpiderPlotActorWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderOverlay(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
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

void VtkSpiderPlotActorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSpiderPlotActor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSpiderPlotActorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSpiderPlotActorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSpiderPlotActorWrap *w = new VtkSpiderPlotActorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::SetAxisLabel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
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
			native->SetAxisLabel(
				info[0]->Int32Value(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::SetAxisRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAxisRange(
				info[0]->Int32Value(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[2];
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 2; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAxisRange(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetAxisRange(
					info[0]->Int32Value(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::SetIndependentVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIndependentVariables(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::SetIndependentVariablesToColumns(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIndependentVariablesToColumns();
}

void VtkSpiderPlotActorWrap::SetIndependentVariablesToRows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetIndependentVariablesToRows();
}

void VtkSpiderPlotActorWrap::SetInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
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

void VtkSpiderPlotActorWrap::SetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelTextProperty(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::SetLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelVisibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::SetLegendVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLegendVisibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::SetNumberOfRings(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfRings(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::SetPlotColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPlotColor(
				info[0]->Int32Value(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPlotColor(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsNumber())
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
					native->SetPlotColor(
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

void VtkSpiderPlotActorWrap::SetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTitle(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::SetTitleTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTitleTextProperty(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::SetTitleVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTitleVisibility(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpiderPlotActorWrap::TitleVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TitleVisibilityOff();
}

void VtkSpiderPlotActorWrap::TitleVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpiderPlotActorWrap *wrapper = ObjectWrap::Unwrap<VtkSpiderPlotActorWrap>(info.Holder());
	vtkSpiderPlotActor *native = (vtkSpiderPlotActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TitleVisibilityOn();
}

