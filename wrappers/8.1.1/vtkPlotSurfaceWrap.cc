/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPlot3DWrap.h"
#include "vtkPlotSurfaceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkContext2DWrap.h"
#include "vtkTableWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPlotSurfaceWrap::ptpl;

VtkPlotSurfaceWrap::VtkPlotSurfaceWrap()
{ }

VtkPlotSurfaceWrap::VtkPlotSurfaceWrap(vtkSmartPointer<vtkPlotSurface> _native)
{ native = _native; }

VtkPlotSurfaceWrap::~VtkPlotSurfaceWrap()
{ }

void VtkPlotSurfaceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPlotSurface").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PlotSurface").ToLocalChecked(), ConstructorGetter);
}

void VtkPlotSurfaceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPlotSurfaceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPlot3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPlot3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPlotSurfaceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetXRange", SetXRange);
	Nan::SetPrototypeMethod(tpl, "setXRange", SetXRange);

	Nan::SetPrototypeMethod(tpl, "SetYRange", SetYRange);
	Nan::SetPrototypeMethod(tpl, "setYRange", SetYRange);

#ifdef VTK_NODE_PLUS_VTKPLOTSURFACEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPLOTSURFACEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPlotSurfaceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlotSurface> native = vtkSmartPointer<vtkPlotSurface>::New();
		VtkPlotSurfaceWrap* obj = new VtkPlotSurfaceWrap(native);
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

void VtkPlotSurfaceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotSurfaceWrap *wrapper = ObjectWrap::Unwrap<VtkPlotSurfaceWrap>(info.Holder());
	vtkPlotSurface *native = (vtkPlotSurface *)wrapper->native.GetPointer();
	vtkPlotSurface * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPlotSurfaceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlotSurfaceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlotSurfaceWrap *w = new VtkPlotSurfaceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotSurfaceWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotSurfaceWrap *wrapper = ObjectWrap::Unwrap<VtkPlotSurfaceWrap>(info.Holder());
	vtkPlotSurface *native = (vtkPlotSurface *)wrapper->native.GetPointer();
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

void VtkPlotSurfaceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotSurfaceWrap *wrapper = ObjectWrap::Unwrap<VtkPlotSurfaceWrap>(info.Holder());
	vtkPlotSurface *native = (vtkPlotSurface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPlotSurface * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPlotSurfaceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlotSurfaceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlotSurfaceWrap *w = new VtkPlotSurfaceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotSurfaceWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotSurfaceWrap *wrapper = ObjectWrap::Unwrap<VtkPlotSurfaceWrap>(info.Holder());
	vtkPlotSurface *native = (vtkPlotSurface *)wrapper->native.GetPointer();
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

void VtkPlotSurfaceWrap::SetXRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotSurfaceWrap *wrapper = ObjectWrap::Unwrap<VtkPlotSurfaceWrap>(info.Holder());
	vtkPlotSurface *native = (vtkPlotSurface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetXRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotSurfaceWrap::SetYRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotSurfaceWrap *wrapper = ObjectWrap::Unwrap<VtkPlotSurfaceWrap>(info.Holder());
	vtkPlotSurface *native = (vtkPlotSurface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetYRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

