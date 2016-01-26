/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkChartWrap.h"
#include "vtkChartPieWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPlotWrap.h"
#include "vtkChartLegendWrap.h"
#include "vtkContextSceneWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkChartPieWrap::ptpl;

VtkChartPieWrap::VtkChartPieWrap()
{ }

VtkChartPieWrap::VtkChartPieWrap(vtkSmartPointer<vtkChartPie> _native)
{ native = _native; }

VtkChartPieWrap::~VtkChartPieWrap()
{ }

void VtkChartPieWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkChartPie").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ChartPie").ToLocalChecked(), ConstructorGetter);
}

void VtkChartPieWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkChartPieWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkChartWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkChartWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkChartPieWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddPlot", AddPlot);
	Nan::SetPrototypeMethod(tpl, "addPlot", AddPlot);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLegend", GetLegend);
	Nan::SetPrototypeMethod(tpl, "getLegend", GetLegend);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetScene", SetScene);
	Nan::SetPrototypeMethod(tpl, "setScene", SetScene);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkChartPieWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkChartPie> native = vtkSmartPointer<vtkChartPie>::New();
		VtkChartPieWrap* obj = new VtkChartPieWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkChartPieWrap::AddPlot(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartPieWrap *wrapper = ObjectWrap::Unwrap<VtkChartPieWrap>(info.Holder());
	vtkChartPie *native = (vtkChartPie *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPlot * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->AddPlot(
			info[0]->Int32Value()
		);
			VtkPlotWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlotWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlotWrap *w = new VtkPlotWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartPieWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartPieWrap *wrapper = ObjectWrap::Unwrap<VtkChartPieWrap>(info.Holder());
	vtkChartPie *native = (vtkChartPie *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkChartPieWrap::GetLegend(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartPieWrap *wrapper = ObjectWrap::Unwrap<VtkChartPieWrap>(info.Holder());
	vtkChartPie *native = (vtkChartPie *)wrapper->native.GetPointer();
	vtkChartLegend * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLegend();
		VtkChartLegendWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkChartLegendWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChartLegendWrap *w = new VtkChartLegendWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChartPieWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartPieWrap *wrapper = ObjectWrap::Unwrap<VtkChartPieWrap>(info.Holder());
	vtkChartPie *native = (vtkChartPie *)wrapper->native.GetPointer();
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

void VtkChartPieWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartPieWrap *wrapper = ObjectWrap::Unwrap<VtkChartPieWrap>(info.Holder());
	vtkChartPie *native = (vtkChartPie *)wrapper->native.GetPointer();
	vtkChartPie * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkChartPieWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkChartPieWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChartPieWrap *w = new VtkChartPieWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChartPieWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartPieWrap *wrapper = ObjectWrap::Unwrap<VtkChartPieWrap>(info.Holder());
	vtkChartPie *native = (vtkChartPie *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkChartPie * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkChartPieWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkChartPieWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkChartPieWrap *w = new VtkChartPieWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartPieWrap::SetScene(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartPieWrap *wrapper = ObjectWrap::Unwrap<VtkChartPieWrap>(info.Holder());
	vtkChartPie *native = (vtkChartPie *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContextSceneWrap::ptpl))->HasInstance(info[0]))
	{
		VtkContextSceneWrap *a0 = ObjectWrap::Unwrap<VtkContextSceneWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScene(
			(vtkContextScene *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartPieWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartPieWrap *wrapper = ObjectWrap::Unwrap<VtkChartPieWrap>(info.Holder());
	vtkChartPie *native = (vtkChartPie *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

