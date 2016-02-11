/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMapper2DWrap.h"
#include "vtkLabeledDataMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkViewportWrap.h"
#include "vtkActor2DWrap.h"
#include "vtkWindowWrap.h"
#include "vtkTransformWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLabeledDataMapperWrap::ptpl;

VtkLabeledDataMapperWrap::VtkLabeledDataMapperWrap()
{ }

VtkLabeledDataMapperWrap::VtkLabeledDataMapperWrap(vtkSmartPointer<vtkLabeledDataMapper> _native)
{ native = _native; }

VtkLabeledDataMapperWrap::~VtkLabeledDataMapperWrap()
{ }

void VtkLabeledDataMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLabeledDataMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LabeledDataMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkLabeledDataMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLabeledDataMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMapper2DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMapper2DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLabeledDataMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CoordinateSystemDisplay", CoordinateSystemDisplay);
	Nan::SetPrototypeMethod(tpl, "coordinateSystemDisplay", CoordinateSystemDisplay);

	Nan::SetPrototypeMethod(tpl, "CoordinateSystemWorld", CoordinateSystemWorld);
	Nan::SetPrototypeMethod(tpl, "coordinateSystemWorld", CoordinateSystemWorld);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCoordinateSystem", GetCoordinateSystem);
	Nan::SetPrototypeMethod(tpl, "getCoordinateSystem", GetCoordinateSystem);

	Nan::SetPrototypeMethod(tpl, "GetCoordinateSystemMaxValue", GetCoordinateSystemMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCoordinateSystemMaxValue", GetCoordinateSystemMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCoordinateSystemMinValue", GetCoordinateSystemMinValue);
	Nan::SetPrototypeMethod(tpl, "getCoordinateSystemMinValue", GetCoordinateSystemMinValue);

	Nan::SetPrototypeMethod(tpl, "GetFieldDataArray", GetFieldDataArray);
	Nan::SetPrototypeMethod(tpl, "getFieldDataArray", GetFieldDataArray);

	Nan::SetPrototypeMethod(tpl, "GetFieldDataName", GetFieldDataName);
	Nan::SetPrototypeMethod(tpl, "getFieldDataName", GetFieldDataName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetLabelFormat", GetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "getLabelFormat", GetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "GetLabelMode", GetLabelMode);
	Nan::SetPrototypeMethod(tpl, "getLabelMode", GetLabelMode);

	Nan::SetPrototypeMethod(tpl, "GetLabelPosition", GetLabelPosition);
	Nan::SetPrototypeMethod(tpl, "getLabelPosition", GetLabelPosition);

	Nan::SetPrototypeMethod(tpl, "GetLabelText", GetLabelText);
	Nan::SetPrototypeMethod(tpl, "getLabelText", GetLabelText);

	Nan::SetPrototypeMethod(tpl, "GetLabelTextProperty", GetLabelTextProperty);
	Nan::SetPrototypeMethod(tpl, "getLabelTextProperty", GetLabelTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetLabeledComponent", GetLabeledComponent);
	Nan::SetPrototypeMethod(tpl, "getLabeledComponent", GetLabeledComponent);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfLabels", GetNumberOfLabels);
	Nan::SetPrototypeMethod(tpl, "getNumberOfLabels", GetNumberOfLabels);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCoordinateSystem", SetCoordinateSystem);
	Nan::SetPrototypeMethod(tpl, "setCoordinateSystem", SetCoordinateSystem);

	Nan::SetPrototypeMethod(tpl, "SetFieldDataArray", SetFieldDataArray);
	Nan::SetPrototypeMethod(tpl, "setFieldDataArray", SetFieldDataArray);

	Nan::SetPrototypeMethod(tpl, "SetFieldDataName", SetFieldDataName);
	Nan::SetPrototypeMethod(tpl, "setFieldDataName", SetFieldDataName);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetLabelFormat", SetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "setLabelFormat", SetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "SetLabelMode", SetLabelMode);
	Nan::SetPrototypeMethod(tpl, "setLabelMode", SetLabelMode);

	Nan::SetPrototypeMethod(tpl, "SetLabelModeToLabelFieldData", SetLabelModeToLabelFieldData);
	Nan::SetPrototypeMethod(tpl, "setLabelModeToLabelFieldData", SetLabelModeToLabelFieldData);

	Nan::SetPrototypeMethod(tpl, "SetLabelModeToLabelIds", SetLabelModeToLabelIds);
	Nan::SetPrototypeMethod(tpl, "setLabelModeToLabelIds", SetLabelModeToLabelIds);

	Nan::SetPrototypeMethod(tpl, "SetLabelModeToLabelNormals", SetLabelModeToLabelNormals);
	Nan::SetPrototypeMethod(tpl, "setLabelModeToLabelNormals", SetLabelModeToLabelNormals);

	Nan::SetPrototypeMethod(tpl, "SetLabelModeToLabelScalars", SetLabelModeToLabelScalars);
	Nan::SetPrototypeMethod(tpl, "setLabelModeToLabelScalars", SetLabelModeToLabelScalars);

	Nan::SetPrototypeMethod(tpl, "SetLabelModeToLabelTCoords", SetLabelModeToLabelTCoords);
	Nan::SetPrototypeMethod(tpl, "setLabelModeToLabelTCoords", SetLabelModeToLabelTCoords);

	Nan::SetPrototypeMethod(tpl, "SetLabelModeToLabelTensors", SetLabelModeToLabelTensors);
	Nan::SetPrototypeMethod(tpl, "setLabelModeToLabelTensors", SetLabelModeToLabelTensors);

	Nan::SetPrototypeMethod(tpl, "SetLabelModeToLabelVectors", SetLabelModeToLabelVectors);
	Nan::SetPrototypeMethod(tpl, "setLabelModeToLabelVectors", SetLabelModeToLabelVectors);

	Nan::SetPrototypeMethod(tpl, "SetLabelTextProperty", SetLabelTextProperty);
	Nan::SetPrototypeMethod(tpl, "setLabelTextProperty", SetLabelTextProperty);

	Nan::SetPrototypeMethod(tpl, "SetLabeledComponent", SetLabeledComponent);
	Nan::SetPrototypeMethod(tpl, "setLabeledComponent", SetLabeledComponent);

	Nan::SetPrototypeMethod(tpl, "SetTransform", SetTransform);
	Nan::SetPrototypeMethod(tpl, "setTransform", SetTransform);

	ptpl.Reset( tpl );
}

void VtkLabeledDataMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLabeledDataMapper> native = vtkSmartPointer<vtkLabeledDataMapper>::New();
		VtkLabeledDataMapperWrap* obj = new VtkLabeledDataMapperWrap(native);
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

void VtkLabeledDataMapperWrap::CoordinateSystemDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CoordinateSystemDisplay();
}

void VtkLabeledDataMapperWrap::CoordinateSystemWorld(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CoordinateSystemWorld();
}

void VtkLabeledDataMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLabeledDataMapperWrap::GetCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoordinateSystem();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabeledDataMapperWrap::GetCoordinateSystemMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoordinateSystemMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabeledDataMapperWrap::GetCoordinateSystemMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoordinateSystemMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabeledDataMapperWrap::GetFieldDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldDataArray();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabeledDataMapperWrap::GetFieldDataName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldDataName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLabeledDataMapperWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabeledDataMapperWrap::GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelFormat();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLabeledDataMapperWrap::GetLabelMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabeledDataMapperWrap::GetLabelPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
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
			native->GetLabelPosition(
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
			native->GetLabelPosition(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledDataMapperWrap::GetLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetLabelText(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledDataMapperWrap::GetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkTextProperty * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetLabelTextProperty(
			info[0]->Int32Value()
		);
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
		return;
	}
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

void VtkLabeledDataMapperWrap::GetLabeledComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabeledComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabeledDataMapperWrap::GetNumberOfLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfLabels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabeledDataMapperWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	vtkTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransform();
	VtkTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransformWrap *w = new VtkTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabeledDataMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
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

void VtkLabeledDataMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	vtkLabeledDataMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkLabeledDataMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLabeledDataMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLabeledDataMapperWrap *w = new VtkLabeledDataMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabeledDataMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
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

void VtkLabeledDataMapperWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkActor2DWrap::ptpl))->HasInstance(info[1]))
		{
			VtkActor2DWrap *a1 = ObjectWrap::Unwrap<VtkActor2DWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->RenderOpaqueGeometry(
				(vtkViewport *) a0->native.GetPointer(),
				(vtkActor2D *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledDataMapperWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkActor2DWrap::ptpl))->HasInstance(info[1]))
		{
			VtkActor2DWrap *a1 = ObjectWrap::Unwrap<VtkActor2DWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->RenderOverlay(
				(vtkViewport *) a0->native.GetPointer(),
				(vtkActor2D *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledDataMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLabeledDataMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkLabeledDataMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLabeledDataMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLabeledDataMapperWrap *w = new VtkLabeledDataMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledDataMapperWrap::SetCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCoordinateSystem(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledDataMapperWrap::SetFieldDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFieldDataArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledDataMapperWrap::SetFieldDataName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFieldDataName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledDataMapperWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
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

void VtkLabeledDataMapperWrap::SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelFormat(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledDataMapperWrap::SetLabelMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledDataMapperWrap::SetLabelModeToLabelFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelModeToLabelFieldData();
}

void VtkLabeledDataMapperWrap::SetLabelModeToLabelIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelModeToLabelIds();
}

void VtkLabeledDataMapperWrap::SetLabelModeToLabelNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelModeToLabelNormals();
}

void VtkLabeledDataMapperWrap::SetLabelModeToLabelScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelModeToLabelScalars();
}

void VtkLabeledDataMapperWrap::SetLabelModeToLabelTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelModeToLabelTCoords();
}

void VtkLabeledDataMapperWrap::SetLabelModeToLabelTensors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelModeToLabelTensors();
}

void VtkLabeledDataMapperWrap::SetLabelModeToLabelVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetLabelModeToLabelVectors();
}

void VtkLabeledDataMapperWrap::SetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetLabelTextProperty(
				(vtkTextProperty *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
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

void VtkLabeledDataMapperWrap::SetLabeledComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabeledComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledDataMapperWrap::SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledDataMapperWrap>(info.Holder());
	vtkLabeledDataMapper *native = (vtkLabeledDataMapper *)wrapper->native.GetPointer();
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

