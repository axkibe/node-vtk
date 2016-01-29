/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPlotWrap.h"
#include "vtkPlotBarWrap.h"
#include "vtkObjectWrap.h"
#include "vtkContext2DWrap.h"
#include "vtkColorSeriesWrap.h"
#include "vtkScalarsToColorsWrap.h"
#include "vtkStringArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPlotBarWrap::ptpl;

VtkPlotBarWrap::VtkPlotBarWrap()
{ }

VtkPlotBarWrap::VtkPlotBarWrap(vtkSmartPointer<vtkPlotBar> _native)
{ native = _native; }

VtkPlotBarWrap::~VtkPlotBarWrap()
{ }

void VtkPlotBarWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPlotBar").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PlotBar").ToLocalChecked(), ConstructorGetter);
}

void VtkPlotBarWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPlotBarWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPlotWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPlotWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPlotBarWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultLookupTable", CreateDefaultLookupTable);
	Nan::SetPrototypeMethod(tpl, "createDefaultLookupTable", CreateDefaultLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetBarsCount", GetBarsCount);
	Nan::SetPrototypeMethod(tpl, "getBarsCount", GetBarsCount);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColor", GetColor);
	Nan::SetPrototypeMethod(tpl, "getColor", GetColor);

	Nan::SetPrototypeMethod(tpl, "GetColorSeries", GetColorSeries);
	Nan::SetPrototypeMethod(tpl, "getColorSeries", GetColorSeries);

	Nan::SetPrototypeMethod(tpl, "GetDataBounds", GetDataBounds);
	Nan::SetPrototypeMethod(tpl, "getDataBounds", GetDataBounds);

	Nan::SetPrototypeMethod(tpl, "GetLabels", GetLabels);
	Nan::SetPrototypeMethod(tpl, "getLabels", GetLabels);

	Nan::SetPrototypeMethod(tpl, "GetLookupTable", GetLookupTable);
	Nan::SetPrototypeMethod(tpl, "getLookupTable", GetLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetScalarVisibility", GetScalarVisibility);
	Nan::SetPrototypeMethod(tpl, "getScalarVisibility", GetScalarVisibility);

	Nan::SetPrototypeMethod(tpl, "GetUnscaledInputBounds", GetUnscaledInputBounds);
	Nan::SetPrototypeMethod(tpl, "getUnscaledInputBounds", GetUnscaledInputBounds);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScalarVisibilityOff", ScalarVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "scalarVisibilityOff", ScalarVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "ScalarVisibilityOn", ScalarVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "scalarVisibilityOn", ScalarVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "SetColor", SetColor);
	Nan::SetPrototypeMethod(tpl, "setColor", SetColor);

	Nan::SetPrototypeMethod(tpl, "SetColorSeries", SetColorSeries);
	Nan::SetPrototypeMethod(tpl, "setColorSeries", SetColorSeries);

	Nan::SetPrototypeMethod(tpl, "SetLookupTable", SetLookupTable);
	Nan::SetPrototypeMethod(tpl, "setLookupTable", SetLookupTable);

	Nan::SetPrototypeMethod(tpl, "SetOrientation", SetOrientation);
	Nan::SetPrototypeMethod(tpl, "setOrientation", SetOrientation);

	Nan::SetPrototypeMethod(tpl, "SetScalarVisibility", SetScalarVisibility);
	Nan::SetPrototypeMethod(tpl, "setScalarVisibility", SetScalarVisibility);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkPlotBarWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlotBar> native = vtkSmartPointer<vtkPlotBar>::New();
		VtkPlotBarWrap* obj = new VtkPlotBarWrap(native);
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

void VtkPlotBarWrap::CreateDefaultLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLookupTable();
}

void VtkPlotBarWrap::GetBarsCount(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBarsCount();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlotBarWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() > 1 && info[1]->IsBoolean())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetBounds(
				b0,
				info[1]->BooleanValue()
			);
			return;
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotBarWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPlotBarWrap::GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
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
		native->GetColor(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotBarWrap::GetColorSeries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	vtkColorSeries * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorSeries();
		VtkColorSeriesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkColorSeriesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkColorSeriesWrap *w = new VtkColorSeriesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotBarWrap::GetDataBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->GetDataBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotBarWrap::GetLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabels();
		VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotBarWrap::GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	vtkScalarsToColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLookupTable();
		VtkScalarsToColorsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarsToColorsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarsToColorsWrap *w = new VtkScalarsToColorsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotBarWrap::GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlotBarWrap::GetScalarVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarVisibility();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlotBarWrap::GetUnscaledInputBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
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
		native->GetUnscaledInputBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotBarWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
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

void VtkPlotBarWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	vtkPlotBar * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPlotBarWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlotBarWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlotBarWrap *w = new VtkPlotBarWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotBarWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContext2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkContext2DWrap *a0 = ObjectWrap::Unwrap<VtkContext2DWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Paint(
			(vtkContext2D *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotBarWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPlotBar * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPlotBarWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlotBarWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlotBarWrap *w = new VtkPlotBarWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotBarWrap::ScalarVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarVisibilityOff();
}

void VtkPlotBarWrap::ScalarVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarVisibilityOn();
}

void VtkPlotBarWrap::SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
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
				native->SetColor(
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

void VtkPlotBarWrap::SetColorSeries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkColorSeriesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkColorSeriesWrap *a0 = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorSeries(
			(vtkColorSeries *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotBarWrap::SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarsToColorsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarsToColorsWrap *a0 = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLookupTable(
			(vtkScalarsToColors *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotBarWrap::SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotBarWrap::SetScalarVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarVisibility(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotBarWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotBarWrap *wrapper = ObjectWrap::Unwrap<VtkPlotBarWrap>(info.Holder());
	vtkPlotBar *native = (vtkPlotBar *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

