/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkContextItemWrap.h"
#include "vtkPlot3DWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPenWrap.h"
#include "vtkTableWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkChartXYZWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPlot3DWrap::ptpl;

VtkPlot3DWrap::VtkPlot3DWrap()
{ }

VtkPlot3DWrap::VtkPlot3DWrap(vtkSmartPointer<vtkPlot3D> _native)
{ native = _native; }

VtkPlot3DWrap::~VtkPlot3DWrap()
{ }

void VtkPlot3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPlot3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Plot3D").ToLocalChecked(), ConstructorGetter);
}

void VtkPlot3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPlot3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPlot3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetChart", GetChart);
	Nan::SetPrototypeMethod(tpl, "getChart", GetChart);

	Nan::SetPrototypeMethod(tpl, "GetPen", GetPen);
	Nan::SetPrototypeMethod(tpl, "getPen", GetPen);

	Nan::SetPrototypeMethod(tpl, "GetSelection", GetSelection);
	Nan::SetPrototypeMethod(tpl, "getSelection", GetSelection);

	Nan::SetPrototypeMethod(tpl, "GetSelectionPen", GetSelectionPen);
	Nan::SetPrototypeMethod(tpl, "getSelectionPen", GetSelectionPen);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetChart", SetChart);
	Nan::SetPrototypeMethod(tpl, "setChart", SetChart);

	Nan::SetPrototypeMethod(tpl, "SetColors", SetColors);
	Nan::SetPrototypeMethod(tpl, "setColors", SetColors);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetPen", SetPen);
	Nan::SetPrototypeMethod(tpl, "setPen", SetPen);

	Nan::SetPrototypeMethod(tpl, "SetSelection", SetSelection);
	Nan::SetPrototypeMethod(tpl, "setSelection", SetSelection);

	Nan::SetPrototypeMethod(tpl, "SetSelectionPen", SetSelectionPen);
	Nan::SetPrototypeMethod(tpl, "setSelectionPen", SetSelectionPen);

#ifdef VTK_NODE_PLUS_VTKPLOT3DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPLOT3DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPlot3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkPlot3DWrap::GetChart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlot3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlot3DWrap>(info.Holder());
	vtkPlot3D *native = (vtkPlot3D *)wrapper->native.GetPointer();
	vtkChartXYZ * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetChart();
	VtkChartXYZWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkChartXYZWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChartXYZWrap *w = new VtkChartXYZWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlot3DWrap::GetPen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlot3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlot3DWrap>(info.Holder());
	vtkPlot3D *native = (vtkPlot3D *)wrapper->native.GetPointer();
	vtkPen * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPen();
	VtkPenWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPenWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPenWrap *w = new VtkPenWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlot3DWrap::GetSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlot3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlot3DWrap>(info.Holder());
	vtkPlot3D *native = (vtkPlot3D *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelection();
	VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlot3DWrap::GetSelectionPen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlot3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlot3DWrap>(info.Holder());
	vtkPlot3D *native = (vtkPlot3D *)wrapper->native.GetPointer();
	vtkPen * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionPen();
	VtkPenWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPenWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPenWrap *w = new VtkPenWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlot3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlot3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlot3DWrap>(info.Holder());
	vtkPlot3D *native = (vtkPlot3D *)wrapper->native.GetPointer();
	vtkPlot3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPlot3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlot3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlot3DWrap *w = new VtkPlot3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlot3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlot3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlot3DWrap>(info.Holder());
	vtkPlot3D *native = (vtkPlot3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPlot3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPlot3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlot3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlot3DWrap *w = new VtkPlot3DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlot3DWrap::SetChart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlot3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlot3DWrap>(info.Holder());
	vtkPlot3D *native = (vtkPlot3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkChartXYZWrap::ptpl))->HasInstance(info[0]))
	{
		VtkChartXYZWrap *a0 = ObjectWrap::Unwrap<VtkChartXYZWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetChart(
			(vtkChartXYZ *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlot3DWrap::SetColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlot3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlot3DWrap>(info.Holder());
	vtkPlot3D *native = (vtkPlot3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColors(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlot3DWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlot3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlot3DWrap>(info.Holder());
	vtkPlot3D *native = (vtkPlot3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTableWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTableWrap *a0 = ObjectWrap::Unwrap<VtkTableWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkTable *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlot3DWrap::SetPen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlot3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlot3DWrap>(info.Holder());
	vtkPlot3D *native = (vtkPlot3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPenWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPenWrap *a0 = ObjectWrap::Unwrap<VtkPenWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPen(
			(vtkPen *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlot3DWrap::SetSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlot3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlot3DWrap>(info.Holder());
	vtkPlot3D *native = (vtkPlot3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdTypeArrayWrap *a0 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelection(
			(vtkIdTypeArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlot3DWrap::SetSelectionPen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlot3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlot3DWrap>(info.Holder());
	vtkPlot3D *native = (vtkPlot3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPenWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPenWrap *a0 = ObjectWrap::Unwrap<VtkPenWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionPen(
			(vtkPen *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

