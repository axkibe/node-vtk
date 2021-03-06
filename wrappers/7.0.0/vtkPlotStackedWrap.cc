/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPlotWrap.h"
#include "vtkPlotStackedWrap.h"
#include "vtkObjectWrap.h"
#include "vtkContext2DWrap.h"
#include "vtkColorSeriesWrap.h"
#include "vtkStringArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPlotStackedWrap::ptpl;

VtkPlotStackedWrap::VtkPlotStackedWrap()
{ }

VtkPlotStackedWrap::VtkPlotStackedWrap(vtkSmartPointer<vtkPlotStacked> _native)
{ native = _native; }

VtkPlotStackedWrap::~VtkPlotStackedWrap()
{ }

void VtkPlotStackedWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPlotStacked").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PlotStacked").ToLocalChecked(), ConstructorGetter);
}

void VtkPlotStackedWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPlotStackedWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPlotWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPlotWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPlotStackedWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColor", GetColor);
	Nan::SetPrototypeMethod(tpl, "getColor", GetColor);

	Nan::SetPrototypeMethod(tpl, "GetColorSeries", GetColorSeries);
	Nan::SetPrototypeMethod(tpl, "getColorSeries", GetColorSeries);

	Nan::SetPrototypeMethod(tpl, "GetLabels", GetLabels);
	Nan::SetPrototypeMethod(tpl, "getLabels", GetLabels);

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

	Nan::SetPrototypeMethod(tpl, "SetColor", SetColor);
	Nan::SetPrototypeMethod(tpl, "setColor", SetColor);

	Nan::SetPrototypeMethod(tpl, "SetColorSeries", SetColorSeries);
	Nan::SetPrototypeMethod(tpl, "setColorSeries", SetColorSeries);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

#ifdef VTK_NODE_PLUS_VTKPLOTSTACKEDWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPLOTSTACKEDWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPlotStackedWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlotStacked> native = vtkSmartPointer<vtkPlotStacked>::New();
		VtkPlotStackedWrap* obj = new VtkPlotStackedWrap(native);
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

void VtkPlotStackedWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotStackedWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPlotStackedWrap::GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
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
		native->GetColor(
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
		native->GetColor(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotStackedWrap::GetColorSeries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
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

void VtkPlotStackedWrap::GetLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
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

void VtkPlotStackedWrap::GetUnscaledInputBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetUnscaledInputBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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

void VtkPlotStackedWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
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

void VtkPlotStackedWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
	vtkPlotStacked * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPlotStackedWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlotStackedWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlotStackedWrap *w = new VtkPlotStackedWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotStackedWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
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

void VtkPlotStackedWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPlotStacked * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkPlotStackedWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlotStackedWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlotStackedWrap *w = new VtkPlotStackedWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotStackedWrap::SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
			if(info.Length() > 2 && info[2]->IsUint32())
			{
				if(info.Length() > 3 && info[3]->IsUint32())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetColor(
						info[0]->Uint32Value(),
						info[1]->Uint32Value(),
						info[2]->Uint32Value(),
						info[3]->Uint32Value()
					);
					return;
				}
			}
		}
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

void VtkPlotStackedWrap::SetColorSeries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
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

void VtkPlotStackedWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

