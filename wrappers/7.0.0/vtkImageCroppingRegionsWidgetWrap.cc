/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtk3DWidgetWrap.h"
#include "vtkImageCroppingRegionsWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkVolumeMapperWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageCroppingRegionsWidgetWrap::ptpl;

VtkImageCroppingRegionsWidgetWrap::VtkImageCroppingRegionsWidgetWrap()
{ }

VtkImageCroppingRegionsWidgetWrap::VtkImageCroppingRegionsWidgetWrap(vtkSmartPointer<vtkImageCroppingRegionsWidget> _native)
{ native = _native; }

VtkImageCroppingRegionsWidgetWrap::~VtkImageCroppingRegionsWidgetWrap()
{ }

void VtkImageCroppingRegionsWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageCroppingRegionsWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageCroppingRegionsWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkImageCroppingRegionsWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageCroppingRegionsWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	Vtk3DWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(Vtk3DWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageCroppingRegionsWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCroppingRegionFlags", GetCroppingRegionFlags);
	Nan::SetPrototypeMethod(tpl, "getCroppingRegionFlags", GetCroppingRegionFlags);

	Nan::SetPrototypeMethod(tpl, "GetLine1Color", GetLine1Color);
	Nan::SetPrototypeMethod(tpl, "getLine1Color", GetLine1Color);

	Nan::SetPrototypeMethod(tpl, "GetLine2Color", GetLine2Color);
	Nan::SetPrototypeMethod(tpl, "getLine2Color", GetLine2Color);

	Nan::SetPrototypeMethod(tpl, "GetLine3Color", GetLine3Color);
	Nan::SetPrototypeMethod(tpl, "getLine3Color", GetLine3Color);

	Nan::SetPrototypeMethod(tpl, "GetLine4Color", GetLine4Color);
	Nan::SetPrototypeMethod(tpl, "getLine4Color", GetLine4Color);

	Nan::SetPrototypeMethod(tpl, "GetSlice", GetSlice);
	Nan::SetPrototypeMethod(tpl, "getSlice", GetSlice);

	Nan::SetPrototypeMethod(tpl, "GetSliceOrientation", GetSliceOrientation);
	Nan::SetPrototypeMethod(tpl, "getSliceOrientation", GetSliceOrientation);

	Nan::SetPrototypeMethod(tpl, "GetVolumeMapper", GetVolumeMapper);
	Nan::SetPrototypeMethod(tpl, "getVolumeMapper", GetVolumeMapper);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MoveHorizontalLine", MoveHorizontalLine);
	Nan::SetPrototypeMethod(tpl, "moveHorizontalLine", MoveHorizontalLine);

	Nan::SetPrototypeMethod(tpl, "MoveIntersectingLines", MoveIntersectingLines);
	Nan::SetPrototypeMethod(tpl, "moveIntersectingLines", MoveIntersectingLines);

	Nan::SetPrototypeMethod(tpl, "MoveVerticalLine", MoveVerticalLine);
	Nan::SetPrototypeMethod(tpl, "moveVerticalLine", MoveVerticalLine);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnButtonPress", OnButtonPress);
	Nan::SetPrototypeMethod(tpl, "onButtonPress", OnButtonPress);

	Nan::SetPrototypeMethod(tpl, "OnButtonRelease", OnButtonRelease);
	Nan::SetPrototypeMethod(tpl, "onButtonRelease", OnButtonRelease);

	Nan::SetPrototypeMethod(tpl, "OnMouseMove", OnMouseMove);
	Nan::SetPrototypeMethod(tpl, "onMouseMove", OnMouseMove);

	Nan::SetPrototypeMethod(tpl, "PlaceWidget", PlaceWidget);
	Nan::SetPrototypeMethod(tpl, "placeWidget", PlaceWidget);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCroppingRegionFlags", SetCroppingRegionFlags);
	Nan::SetPrototypeMethod(tpl, "setCroppingRegionFlags", SetCroppingRegionFlags);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetLine1Color", SetLine1Color);
	Nan::SetPrototypeMethod(tpl, "setLine1Color", SetLine1Color);

	Nan::SetPrototypeMethod(tpl, "SetLine2Color", SetLine2Color);
	Nan::SetPrototypeMethod(tpl, "setLine2Color", SetLine2Color);

	Nan::SetPrototypeMethod(tpl, "SetLine3Color", SetLine3Color);
	Nan::SetPrototypeMethod(tpl, "setLine3Color", SetLine3Color);

	Nan::SetPrototypeMethod(tpl, "SetLine4Color", SetLine4Color);
	Nan::SetPrototypeMethod(tpl, "setLine4Color", SetLine4Color);

	Nan::SetPrototypeMethod(tpl, "SetPlanePositions", SetPlanePositions);
	Nan::SetPrototypeMethod(tpl, "setPlanePositions", SetPlanePositions);

	Nan::SetPrototypeMethod(tpl, "SetSlice", SetSlice);
	Nan::SetPrototypeMethod(tpl, "setSlice", SetSlice);

	Nan::SetPrototypeMethod(tpl, "SetSliceOrientation", SetSliceOrientation);
	Nan::SetPrototypeMethod(tpl, "setSliceOrientation", SetSliceOrientation);

	Nan::SetPrototypeMethod(tpl, "SetSliceOrientationToXY", SetSliceOrientationToXY);
	Nan::SetPrototypeMethod(tpl, "setSliceOrientationToXY", SetSliceOrientationToXY);

	Nan::SetPrototypeMethod(tpl, "SetSliceOrientationToXZ", SetSliceOrientationToXZ);
	Nan::SetPrototypeMethod(tpl, "setSliceOrientationToXZ", SetSliceOrientationToXZ);

	Nan::SetPrototypeMethod(tpl, "SetSliceOrientationToYZ", SetSliceOrientationToYZ);
	Nan::SetPrototypeMethod(tpl, "setSliceOrientationToYZ", SetSliceOrientationToYZ);

	Nan::SetPrototypeMethod(tpl, "SetVolumeMapper", SetVolumeMapper);
	Nan::SetPrototypeMethod(tpl, "setVolumeMapper", SetVolumeMapper);

	Nan::SetPrototypeMethod(tpl, "UpdateAccordingToInput", UpdateAccordingToInput);
	Nan::SetPrototypeMethod(tpl, "updateAccordingToInput", UpdateAccordingToInput);

	Nan::SetPrototypeMethod(tpl, "UpdateCursorIcon", UpdateCursorIcon);
	Nan::SetPrototypeMethod(tpl, "updateCursorIcon", UpdateCursorIcon);

	ptpl.Reset( tpl );
}

void VtkImageCroppingRegionsWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageCroppingRegionsWidget> native = vtkSmartPointer<vtkImageCroppingRegionsWidget>::New();
		VtkImageCroppingRegionsWidgetWrap* obj = new VtkImageCroppingRegionsWidgetWrap(native);
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

void VtkImageCroppingRegionsWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageCroppingRegionsWidgetWrap::GetCroppingRegionFlags(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCroppingRegionFlags();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageCroppingRegionsWidgetWrap::GetLine1Color(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetLine1Color(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->GetLine1Color(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCroppingRegionsWidgetWrap::GetLine2Color(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetLine2Color(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->GetLine2Color(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCroppingRegionsWidgetWrap::GetLine3Color(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetLine3Color(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->GetLine3Color(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCroppingRegionsWidgetWrap::GetLine4Color(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetLine4Color(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->GetLine4Color(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCroppingRegionsWidgetWrap::GetSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSlice();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageCroppingRegionsWidgetWrap::GetSliceOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageCroppingRegionsWidgetWrap::GetVolumeMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	vtkVolumeMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolumeMapper();
		VtkVolumeMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVolumeMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumeMapperWrap *w = new VtkVolumeMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageCroppingRegionsWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
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

void VtkImageCroppingRegionsWidgetWrap::MoveHorizontalLine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MoveHorizontalLine();
}

void VtkImageCroppingRegionsWidgetWrap::MoveIntersectingLines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MoveIntersectingLines();
}

void VtkImageCroppingRegionsWidgetWrap::MoveVerticalLine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MoveVerticalLine();
}

void VtkImageCroppingRegionsWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	vtkImageCroppingRegionsWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageCroppingRegionsWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageCroppingRegionsWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageCroppingRegionsWidgetWrap *w = new VtkImageCroppingRegionsWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageCroppingRegionsWidgetWrap::OnButtonPress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnButtonPress();
}

void VtkImageCroppingRegionsWidgetWrap::OnButtonRelease(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnButtonRelease();
}

void VtkImageCroppingRegionsWidgetWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkImageCroppingRegionsWidgetWrap::PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
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
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCroppingRegionsWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageCroppingRegionsWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageCroppingRegionsWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageCroppingRegionsWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageCroppingRegionsWidgetWrap *w = new VtkImageCroppingRegionsWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCroppingRegionsWidgetWrap::SetCroppingRegionFlags(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCroppingRegionFlags(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCroppingRegionsWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
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

void VtkImageCroppingRegionsWidgetWrap::SetLine1Color(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLine1Color(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetLine1Color(
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
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetLine1Color(
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

void VtkImageCroppingRegionsWidgetWrap::SetLine2Color(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLine2Color(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetLine2Color(
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
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetLine2Color(
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

void VtkImageCroppingRegionsWidgetWrap::SetLine3Color(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLine3Color(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetLine3Color(
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
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetLine3Color(
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

void VtkImageCroppingRegionsWidgetWrap::SetLine4Color(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLine4Color(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetLine4Color(
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
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetLine4Color(
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

void VtkImageCroppingRegionsWidgetWrap::SetPlanePositions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
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
		native->SetPlanePositions(
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
		native->SetPlanePositions(
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
							native->SetPlanePositions(
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
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCroppingRegionsWidgetWrap::SetSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSlice(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCroppingRegionsWidgetWrap::SetSliceOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSliceOrientation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCroppingRegionsWidgetWrap::SetSliceOrientationToXY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSliceOrientationToXY();
}

void VtkImageCroppingRegionsWidgetWrap::SetSliceOrientationToXZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSliceOrientationToXZ();
}

void VtkImageCroppingRegionsWidgetWrap::SetSliceOrientationToYZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSliceOrientationToYZ();
}

void VtkImageCroppingRegionsWidgetWrap::SetVolumeMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkVolumeMapperWrap::ptpl))->HasInstance(info[0]))
	{
		VtkVolumeMapperWrap *a0 = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVolumeMapper(
			(vtkVolumeMapper *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCroppingRegionsWidgetWrap::UpdateAccordingToInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UpdateAccordingToInput();
}

void VtkImageCroppingRegionsWidgetWrap::UpdateCursorIcon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCroppingRegionsWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkImageCroppingRegionsWidgetWrap>(info.Holder());
	vtkImageCroppingRegionsWidget *native = (vtkImageCroppingRegionsWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UpdateCursorIcon();
}

