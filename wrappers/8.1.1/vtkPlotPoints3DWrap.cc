/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPlot3DWrap.h"
#include "vtkPlotPoints3DWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkContext2DWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPlotPoints3DWrap::ptpl;

VtkPlotPoints3DWrap::VtkPlotPoints3DWrap()
{ }

VtkPlotPoints3DWrap::VtkPlotPoints3DWrap(vtkSmartPointer<vtkPlotPoints3D> _native)
{ native = _native; }

VtkPlotPoints3DWrap::~VtkPlotPoints3DWrap()
{ }

void VtkPlotPoints3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPlotPoints3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PlotPoints3D").ToLocalChecked(), ConstructorGetter);
}

void VtkPlotPoints3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPlotPoints3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPlot3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPlot3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPlotPoints3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKPLOTPOINTS3DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPLOTPOINTS3DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPlotPoints3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlotPoints3D> native = vtkSmartPointer<vtkPlotPoints3D>::New();
		VtkPlotPoints3DWrap* obj = new VtkPlotPoints3DWrap(native);
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

void VtkPlotPoints3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPoints3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPoints3DWrap>(info.Holder());
	vtkPlotPoints3D *native = (vtkPlotPoints3D *)wrapper->native.GetPointer();
	vtkPlotPoints3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPlotPoints3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlotPoints3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlotPoints3DWrap *w = new VtkPlotPoints3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotPoints3DWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPoints3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPoints3DWrap>(info.Holder());
	vtkPlotPoints3D *native = (vtkPlotPoints3D *)wrapper->native.GetPointer();
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

void VtkPlotPoints3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPoints3DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPoints3DWrap>(info.Holder());
	vtkPlotPoints3D *native = (vtkPlotPoints3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPlotPoints3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPlotPoints3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlotPoints3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlotPoints3DWrap *w = new VtkPlotPoints3DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

