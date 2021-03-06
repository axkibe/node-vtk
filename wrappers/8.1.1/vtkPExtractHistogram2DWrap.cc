/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkExtractHistogram2DWrap.h"
#include "vtkPExtractHistogram2DWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkMultiProcessControllerWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPExtractHistogram2DWrap::ptpl;

VtkPExtractHistogram2DWrap::VtkPExtractHistogram2DWrap()
{ }

VtkPExtractHistogram2DWrap::VtkPExtractHistogram2DWrap(vtkSmartPointer<vtkPExtractHistogram2D> _native)
{ native = _native; }

VtkPExtractHistogram2DWrap::~VtkPExtractHistogram2DWrap()
{ }

void VtkPExtractHistogram2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPExtractHistogram2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PExtractHistogram2D").ToLocalChecked(), ConstructorGetter);
}

void VtkPExtractHistogram2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPExtractHistogram2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkExtractHistogram2DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkExtractHistogram2DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPExtractHistogram2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

#ifdef VTK_NODE_PLUS_VTKPEXTRACTHISTOGRAM2DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPEXTRACTHISTOGRAM2DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPExtractHistogram2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPExtractHistogram2D> native = vtkSmartPointer<vtkPExtractHistogram2D>::New();
		VtkPExtractHistogram2DWrap* obj = new VtkPExtractHistogram2DWrap(native);
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

void VtkPExtractHistogram2DWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPExtractHistogram2DWrap>(info.Holder());
	vtkPExtractHistogram2D *native = (vtkPExtractHistogram2D *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
	VtkMultiProcessControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPExtractHistogram2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPExtractHistogram2DWrap>(info.Holder());
	vtkPExtractHistogram2D *native = (vtkPExtractHistogram2D *)wrapper->native.GetPointer();
	vtkPExtractHistogram2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPExtractHistogram2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPExtractHistogram2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPExtractHistogram2DWrap *w = new VtkPExtractHistogram2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPExtractHistogram2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPExtractHistogram2DWrap>(info.Holder());
	vtkPExtractHistogram2D *native = (vtkPExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPExtractHistogram2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPExtractHistogram2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPExtractHistogram2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPExtractHistogram2DWrap *w = new VtkPExtractHistogram2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPExtractHistogram2DWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPExtractHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPExtractHistogram2DWrap>(info.Holder());
	vtkPExtractHistogram2D *native = (vtkPExtractHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMultiProcessControllerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetController(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

