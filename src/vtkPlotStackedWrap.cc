/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPlotWrap.h"
#include "vtkPlotStackedWrap.h"
#include "vtkObjectWrap.h"
#include "vtkColorSeriesWrap.h"
#include "vtkStringArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPlotStackedWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPlotStackedWrap::ptpl;

VtkPlotStackedWrap::VtkPlotStackedWrap()
{ }

VtkPlotStackedWrap::VtkPlotStackedWrap(vtkSmartPointer<vtkPlotStacked> _native)
{ native = _native; }

VtkPlotStackedWrap::~VtkPlotStackedWrap()
{ }

void VtkPlotStackedWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPlotWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPlotWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkPlotStackedWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkPlotStacked").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PlotStacked").ToLocalChecked(),tpl->GetFunction());
}

void VtkPlotStackedWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColorSeries", GetColorSeries);
	Nan::SetPrototypeMethod(tpl, "getColorSeries", GetColorSeries);

	Nan::SetPrototypeMethod(tpl, "GetLabels", GetLabels);
	Nan::SetPrototypeMethod(tpl, "getLabels", GetLabels);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColor", SetColor);
	Nan::SetPrototypeMethod(tpl, "setColor", SetColor);

	Nan::SetPrototypeMethod(tpl, "SetColorSeries", SetColorSeries);
	Nan::SetPrototypeMethod(tpl, "setColorSeries", SetColorSeries);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

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
		VtkPlotStackedWrap* obj = new VtkPlotStackedWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkColorSeriesWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkColorSeriesWrap *w = new VtkColorSeriesWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStringArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotStackedWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPlotStackedWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlotStackedWrap *w = new VtkPlotStackedWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotStackedWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkPlotStackedWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlotStackedWrap *w = new VtkPlotStackedWrap();
		w->native.TakeReference(r);
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

void VtkPlotStackedWrap::SetColorSeries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotStackedWrap *wrapper = ObjectWrap::Unwrap<VtkPlotStackedWrap>(info.Holder());
	vtkPlotStacked *native = (vtkPlotStacked *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
