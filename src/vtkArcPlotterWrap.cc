/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkArcPlotterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCameraWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkArcPlotterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkArcPlotterWrap::ptpl;

VtkArcPlotterWrap::VtkArcPlotterWrap()
{ }

VtkArcPlotterWrap::VtkArcPlotterWrap(vtkSmartPointer<vtkArcPlotter> _native)
{ native = _native; }

VtkArcPlotterWrap::~VtkArcPlotterWrap()
{ }

void VtkArcPlotterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkArcPlotterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkArcPlotter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ArcPlotter").ToLocalChecked(),tpl->GetFunction());
}

void VtkArcPlotterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetCamera", GetCamera);
	Nan::SetPrototypeMethod(tpl, "getCamera", GetCamera);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFieldDataArray", GetFieldDataArray);
	Nan::SetPrototypeMethod(tpl, "getFieldDataArray", GetFieldDataArray);

	Nan::SetPrototypeMethod(tpl, "GetFieldDataArrayMaxValue", GetFieldDataArrayMaxValue);
	Nan::SetPrototypeMethod(tpl, "getFieldDataArrayMaxValue", GetFieldDataArrayMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetFieldDataArrayMinValue", GetFieldDataArrayMinValue);
	Nan::SetPrototypeMethod(tpl, "getFieldDataArrayMinValue", GetFieldDataArrayMinValue);

	Nan::SetPrototypeMethod(tpl, "GetHeight", GetHeight);
	Nan::SetPrototypeMethod(tpl, "getHeight", GetHeight);

	Nan::SetPrototypeMethod(tpl, "GetHeightMaxValue", GetHeightMaxValue);
	Nan::SetPrototypeMethod(tpl, "getHeightMaxValue", GetHeightMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetHeightMinValue", GetHeightMinValue);
	Nan::SetPrototypeMethod(tpl, "getHeightMinValue", GetHeightMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOffset", GetOffset);
	Nan::SetPrototypeMethod(tpl, "getOffset", GetOffset);

	Nan::SetPrototypeMethod(tpl, "GetOffsetMaxValue", GetOffsetMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOffsetMaxValue", GetOffsetMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOffsetMinValue", GetOffsetMinValue);
	Nan::SetPrototypeMethod(tpl, "getOffsetMinValue", GetOffsetMinValue);

	Nan::SetPrototypeMethod(tpl, "GetPlotComponent", GetPlotComponent);
	Nan::SetPrototypeMethod(tpl, "getPlotComponent", GetPlotComponent);

	Nan::SetPrototypeMethod(tpl, "GetPlotMode", GetPlotMode);
	Nan::SetPrototypeMethod(tpl, "getPlotMode", GetPlotMode);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMaxValue", GetRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMaxValue", GetRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMinValue", GetRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMinValue", GetRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetUseDefaultNormal", GetUseDefaultNormal);
	Nan::SetPrototypeMethod(tpl, "getUseDefaultNormal", GetUseDefaultNormal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCamera", SetCamera);
	Nan::SetPrototypeMethod(tpl, "setCamera", SetCamera);

	Nan::SetPrototypeMethod(tpl, "SetFieldDataArray", SetFieldDataArray);
	Nan::SetPrototypeMethod(tpl, "setFieldDataArray", SetFieldDataArray);

	Nan::SetPrototypeMethod(tpl, "SetHeight", SetHeight);
	Nan::SetPrototypeMethod(tpl, "setHeight", SetHeight);

	Nan::SetPrototypeMethod(tpl, "SetOffset", SetOffset);
	Nan::SetPrototypeMethod(tpl, "setOffset", SetOffset);

	Nan::SetPrototypeMethod(tpl, "SetPlotComponent", SetPlotComponent);
	Nan::SetPrototypeMethod(tpl, "setPlotComponent", SetPlotComponent);

	Nan::SetPrototypeMethod(tpl, "SetPlotMode", SetPlotMode);
	Nan::SetPrototypeMethod(tpl, "setPlotMode", SetPlotMode);

	Nan::SetPrototypeMethod(tpl, "SetPlotModeToPlotFieldData", SetPlotModeToPlotFieldData);
	Nan::SetPrototypeMethod(tpl, "setPlotModeToPlotFieldData", SetPlotModeToPlotFieldData);

	Nan::SetPrototypeMethod(tpl, "SetPlotModeToPlotNormals", SetPlotModeToPlotNormals);
	Nan::SetPrototypeMethod(tpl, "setPlotModeToPlotNormals", SetPlotModeToPlotNormals);

	Nan::SetPrototypeMethod(tpl, "SetPlotModeToPlotScalars", SetPlotModeToPlotScalars);
	Nan::SetPrototypeMethod(tpl, "setPlotModeToPlotScalars", SetPlotModeToPlotScalars);

	Nan::SetPrototypeMethod(tpl, "SetPlotModeToPlotTCoords", SetPlotModeToPlotTCoords);
	Nan::SetPrototypeMethod(tpl, "setPlotModeToPlotTCoords", SetPlotModeToPlotTCoords);

	Nan::SetPrototypeMethod(tpl, "SetPlotModeToPlotTensors", SetPlotModeToPlotTensors);
	Nan::SetPrototypeMethod(tpl, "setPlotModeToPlotTensors", SetPlotModeToPlotTensors);

	Nan::SetPrototypeMethod(tpl, "SetPlotModeToPlotVectors", SetPlotModeToPlotVectors);
	Nan::SetPrototypeMethod(tpl, "setPlotModeToPlotVectors", SetPlotModeToPlotVectors);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

	Nan::SetPrototypeMethod(tpl, "SetUseDefaultNormal", SetUseDefaultNormal);
	Nan::SetPrototypeMethod(tpl, "setUseDefaultNormal", SetUseDefaultNormal);

	Nan::SetPrototypeMethod(tpl, "UseDefaultNormalOff", UseDefaultNormalOff);
	Nan::SetPrototypeMethod(tpl, "useDefaultNormalOff", UseDefaultNormalOff);

	Nan::SetPrototypeMethod(tpl, "UseDefaultNormalOn", UseDefaultNormalOn);
	Nan::SetPrototypeMethod(tpl, "useDefaultNormalOn", UseDefaultNormalOn);

}

void VtkArcPlotterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkArcPlotter> native = vtkSmartPointer<vtkArcPlotter>::New();
		VtkArcPlotterWrap* obj = new VtkArcPlotterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkArcPlotterWrap::GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	vtkCamera * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCamera();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCameraWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCameraWrap *w = new VtkCameraWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkArcPlotterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkArcPlotterWrap::GetFieldDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldDataArray();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetFieldDataArrayMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldDataArrayMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetFieldDataArrayMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldDataArrayMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetHeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeightMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetHeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeightMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffsetMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffsetMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetPlotComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlotComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetPlotMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlotMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::GetUseDefaultNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseDefaultNormal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkArcPlotterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
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

void VtkArcPlotterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	vtkArcPlotter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkArcPlotterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkArcPlotterWrap *w = new VtkArcPlotterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkArcPlotterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkArcPlotter * r;
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
			Nan::New<v8::Function>(VtkArcPlotterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkArcPlotterWrap *w = new VtkArcPlotterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcPlotterWrap::SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkCameraWrap *a0 = ObjectWrap::Unwrap<VtkCameraWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCamera(
			(vtkCamera *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcPlotterWrap::SetFieldDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
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

void VtkArcPlotterWrap::SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcPlotterWrap::SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOffset(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcPlotterWrap::SetPlotComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlotComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcPlotterWrap::SetPlotMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlotMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcPlotterWrap::SetPlotModeToPlotFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlotModeToPlotFieldData();
}

void VtkArcPlotterWrap::SetPlotModeToPlotNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlotModeToPlotNormals();
}

void VtkArcPlotterWrap::SetPlotModeToPlotScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlotModeToPlotScalars();
}

void VtkArcPlotterWrap::SetPlotModeToPlotTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlotModeToPlotTCoords();
}

void VtkArcPlotterWrap::SetPlotModeToPlotTensors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlotModeToPlotTensors();
}

void VtkArcPlotterWrap::SetPlotModeToPlotVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlotModeToPlotVectors();
}

void VtkArcPlotterWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcPlotterWrap::SetUseDefaultNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseDefaultNormal(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkArcPlotterWrap::UseDefaultNormalOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseDefaultNormalOff();
}

void VtkArcPlotterWrap::UseDefaultNormalOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkArcPlotterWrap *wrapper = ObjectWrap::Unwrap<VtkArcPlotterWrap>(info.Holder());
	vtkArcPlotter *native = (vtkArcPlotter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseDefaultNormalOn();
}

