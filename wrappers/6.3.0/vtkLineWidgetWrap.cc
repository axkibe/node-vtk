/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtk3DWidgetWrap.h"
#include "vtkLineWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkPropertyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLineWidgetWrap::ptpl;

VtkLineWidgetWrap::VtkLineWidgetWrap()
{ }

VtkLineWidgetWrap::VtkLineWidgetWrap(vtkSmartPointer<vtkLineWidget> _native)
{ native = _native; }

VtkLineWidgetWrap::~VtkLineWidgetWrap()
{ }

void VtkLineWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLineWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LineWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkLineWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLineWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	Vtk3DWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(Vtk3DWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLineWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClampToBoundsOff", ClampToBoundsOff);
	Nan::SetPrototypeMethod(tpl, "clampToBoundsOff", ClampToBoundsOff);

	Nan::SetPrototypeMethod(tpl, "ClampToBoundsOn", ClampToBoundsOn);
	Nan::SetPrototypeMethod(tpl, "clampToBoundsOn", ClampToBoundsOn);

	Nan::SetPrototypeMethod(tpl, "GetAlign", GetAlign);
	Nan::SetPrototypeMethod(tpl, "getAlign", GetAlign);

	Nan::SetPrototypeMethod(tpl, "GetAlignMaxValue", GetAlignMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAlignMaxValue", GetAlignMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAlignMinValue", GetAlignMinValue);
	Nan::SetPrototypeMethod(tpl, "getAlignMinValue", GetAlignMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClampToBounds", GetClampToBounds);
	Nan::SetPrototypeMethod(tpl, "getClampToBounds", GetClampToBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHandleProperty", GetHandleProperty);
	Nan::SetPrototypeMethod(tpl, "getHandleProperty", GetHandleProperty);

	Nan::SetPrototypeMethod(tpl, "GetLineProperty", GetLineProperty);
	Nan::SetPrototypeMethod(tpl, "getLineProperty", GetLineProperty);

	Nan::SetPrototypeMethod(tpl, "GetPoint1", GetPoint1);
	Nan::SetPrototypeMethod(tpl, "getPoint1", GetPoint1);

	Nan::SetPrototypeMethod(tpl, "GetPoint2", GetPoint2);
	Nan::SetPrototypeMethod(tpl, "getPoint2", GetPoint2);

	Nan::SetPrototypeMethod(tpl, "GetPolyData", GetPolyData);
	Nan::SetPrototypeMethod(tpl, "getPolyData", GetPolyData);

	Nan::SetPrototypeMethod(tpl, "GetResolution", GetResolution);
	Nan::SetPrototypeMethod(tpl, "getResolution", GetResolution);

	Nan::SetPrototypeMethod(tpl, "GetSelectedHandleProperty", GetSelectedHandleProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedHandleProperty", GetSelectedHandleProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectedLineProperty", GetSelectedLineProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectedLineProperty", GetSelectedLineProperty);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PlaceWidget", PlaceWidget);
	Nan::SetPrototypeMethod(tpl, "placeWidget", PlaceWidget);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAlign", SetAlign);
	Nan::SetPrototypeMethod(tpl, "setAlign", SetAlign);

	Nan::SetPrototypeMethod(tpl, "SetAlignToNone", SetAlignToNone);
	Nan::SetPrototypeMethod(tpl, "setAlignToNone", SetAlignToNone);

	Nan::SetPrototypeMethod(tpl, "SetAlignToXAxis", SetAlignToXAxis);
	Nan::SetPrototypeMethod(tpl, "setAlignToXAxis", SetAlignToXAxis);

	Nan::SetPrototypeMethod(tpl, "SetAlignToYAxis", SetAlignToYAxis);
	Nan::SetPrototypeMethod(tpl, "setAlignToYAxis", SetAlignToYAxis);

	Nan::SetPrototypeMethod(tpl, "SetAlignToZAxis", SetAlignToZAxis);
	Nan::SetPrototypeMethod(tpl, "setAlignToZAxis", SetAlignToZAxis);

	Nan::SetPrototypeMethod(tpl, "SetClampToBounds", SetClampToBounds);
	Nan::SetPrototypeMethod(tpl, "setClampToBounds", SetClampToBounds);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetPoint1", SetPoint1);
	Nan::SetPrototypeMethod(tpl, "setPoint1", SetPoint1);

	Nan::SetPrototypeMethod(tpl, "SetPoint2", SetPoint2);
	Nan::SetPrototypeMethod(tpl, "setPoint2", SetPoint2);

	Nan::SetPrototypeMethod(tpl, "SetResolution", SetResolution);
	Nan::SetPrototypeMethod(tpl, "setResolution", SetResolution);

	ptpl.Reset( tpl );
}

void VtkLineWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLineWidget> native = vtkSmartPointer<vtkLineWidget>::New();
		VtkLineWidgetWrap* obj = new VtkLineWidgetWrap(native);
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

void VtkLineWidgetWrap::ClampToBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClampToBoundsOff();
}

void VtkLineWidgetWrap::ClampToBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClampToBoundsOn();
}

void VtkLineWidgetWrap::GetAlign(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlign();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLineWidgetWrap::GetAlignMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlignMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLineWidgetWrap::GetAlignMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlignMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLineWidgetWrap::GetClampToBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClampToBounds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLineWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLineWidgetWrap::GetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
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

void VtkLineWidgetWrap::GetLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLineWidgetWrap::GetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
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
		native->GetPoint1(
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
		native->GetPoint1(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLineWidgetWrap::GetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
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
		native->GetPoint2(
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
		native->GetPoint2(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLineWidgetWrap::GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
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

void VtkLineWidgetWrap::GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLineWidgetWrap::GetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
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

void VtkLineWidgetWrap::GetSelectedLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLineWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
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

void VtkLineWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	vtkLineWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkLineWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLineWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLineWidgetWrap *w = new VtkLineWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLineWidgetWrap::PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
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

void VtkLineWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLineWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkLineWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLineWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLineWidgetWrap *w = new VtkLineWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLineWidgetWrap::SetAlign(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAlign(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLineWidgetWrap::SetAlignToNone(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAlignToNone();
}

void VtkLineWidgetWrap::SetAlignToXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAlignToXAxis();
}

void VtkLineWidgetWrap::SetAlignToYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAlignToYAxis();
}

void VtkLineWidgetWrap::SetAlignToZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAlignToZAxis();
}

void VtkLineWidgetWrap::SetClampToBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClampToBounds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLineWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
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

void VtkLineWidgetWrap::SetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
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
		native->SetPoint1(
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
		native->SetPoint1(
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

void VtkLineWidgetWrap::SetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
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
		native->SetPoint2(
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
		native->SetPoint2(
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

void VtkLineWidgetWrap::SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLineWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkLineWidgetWrap>(info.Holder());
	vtkLineWidget *native = (vtkLineWidget *)wrapper->native.GetPointer();
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

