/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkTableAlgorithmWrap.h"
#include "vtkExtractFunctionalBagPlotWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractFunctionalBagPlotWrap::ptpl;

VtkExtractFunctionalBagPlotWrap::VtkExtractFunctionalBagPlotWrap()
{ }

VtkExtractFunctionalBagPlotWrap::VtkExtractFunctionalBagPlotWrap(vtkSmartPointer<vtkExtractFunctionalBagPlot> _native)
{ native = _native; }

VtkExtractFunctionalBagPlotWrap::~VtkExtractFunctionalBagPlotWrap()
{ }

void VtkExtractFunctionalBagPlotWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractFunctionalBagPlot").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractFunctionalBagPlot").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractFunctionalBagPlotWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractFunctionalBagPlotWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractFunctionalBagPlotWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDensityForP50", SetDensityForP50);
	Nan::SetPrototypeMethod(tpl, "setDensityForP50", SetDensityForP50);

	Nan::SetPrototypeMethod(tpl, "SetDensityForPUser", SetDensityForPUser);
	Nan::SetPrototypeMethod(tpl, "setDensityForPUser", SetDensityForPUser);

	Nan::SetPrototypeMethod(tpl, "SetPUser", SetPUser);
	Nan::SetPrototypeMethod(tpl, "setPUser", SetPUser);

#ifdef VTK_NODE_PLUS_VTKEXTRACTFUNCTIONALBAGPLOTWRAP_INITPTPL
	VTK_NODE_PLUS_VTKEXTRACTFUNCTIONALBAGPLOTWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkExtractFunctionalBagPlotWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractFunctionalBagPlot> native = vtkSmartPointer<vtkExtractFunctionalBagPlot>::New();
		VtkExtractFunctionalBagPlotWrap* obj = new VtkExtractFunctionalBagPlotWrap(native);
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

void VtkExtractFunctionalBagPlotWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractFunctionalBagPlotWrap *wrapper = ObjectWrap::Unwrap<VtkExtractFunctionalBagPlotWrap>(info.Holder());
	vtkExtractFunctionalBagPlot *native = (vtkExtractFunctionalBagPlot *)wrapper->native.GetPointer();
	vtkExtractFunctionalBagPlot * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkExtractFunctionalBagPlotWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractFunctionalBagPlotWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractFunctionalBagPlotWrap *w = new VtkExtractFunctionalBagPlotWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractFunctionalBagPlotWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractFunctionalBagPlotWrap *wrapper = ObjectWrap::Unwrap<VtkExtractFunctionalBagPlotWrap>(info.Holder());
	vtkExtractFunctionalBagPlot *native = (vtkExtractFunctionalBagPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkExtractFunctionalBagPlot * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkExtractFunctionalBagPlotWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractFunctionalBagPlotWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractFunctionalBagPlotWrap *w = new VtkExtractFunctionalBagPlotWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractFunctionalBagPlotWrap::SetDensityForP50(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractFunctionalBagPlotWrap *wrapper = ObjectWrap::Unwrap<VtkExtractFunctionalBagPlotWrap>(info.Holder());
	vtkExtractFunctionalBagPlot *native = (vtkExtractFunctionalBagPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDensityForP50(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractFunctionalBagPlotWrap::SetDensityForPUser(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractFunctionalBagPlotWrap *wrapper = ObjectWrap::Unwrap<VtkExtractFunctionalBagPlotWrap>(info.Holder());
	vtkExtractFunctionalBagPlot *native = (vtkExtractFunctionalBagPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDensityForPUser(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractFunctionalBagPlotWrap::SetPUser(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractFunctionalBagPlotWrap *wrapper = ObjectWrap::Unwrap<VtkExtractFunctionalBagPlotWrap>(info.Holder());
	vtkExtractFunctionalBagPlot *native = (vtkExtractFunctionalBagPlot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPUser(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

