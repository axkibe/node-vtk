/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPlotPointsWrap.h"
#include "vtkPlotLineWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPlotLineWrap::ptpl;

VtkPlotLineWrap::VtkPlotLineWrap()
{ }

VtkPlotLineWrap::VtkPlotLineWrap(vtkSmartPointer<vtkPlotLine> _native)
{ native = _native; }

VtkPlotLineWrap::~VtkPlotLineWrap()
{ }

void VtkPlotLineWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPlotLine").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PlotLine").ToLocalChecked(), ConstructorGetter);
}

void VtkPlotLineWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPlotLineWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPlotPointsWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPlotPointsWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPlotLineWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PolyLineOff", PolyLineOff);
	Nan::SetPrototypeMethod(tpl, "polyLineOff", PolyLineOff);

	Nan::SetPrototypeMethod(tpl, "PolyLineOn", PolyLineOn);
	Nan::SetPrototypeMethod(tpl, "polyLineOn", PolyLineOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkPlotLineWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlotLine> native = vtkSmartPointer<vtkPlotLine>::New();
		VtkPlotLineWrap* obj = new VtkPlotLineWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPlotLineWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotLineWrap *wrapper = ObjectWrap::Unwrap<VtkPlotLineWrap>(info.Holder());
	vtkPlotLine *native = (vtkPlotLine *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPlotLineWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotLineWrap *wrapper = ObjectWrap::Unwrap<VtkPlotLineWrap>(info.Holder());
	vtkPlotLine *native = (vtkPlotLine *)wrapper->native.GetPointer();
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

void VtkPlotLineWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotLineWrap *wrapper = ObjectWrap::Unwrap<VtkPlotLineWrap>(info.Holder());
	vtkPlotLine *native = (vtkPlotLine *)wrapper->native.GetPointer();
	vtkPlotLine * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPlotLineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlotLineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlotLineWrap *w = new VtkPlotLineWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotLineWrap::PolyLineOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotLineWrap *wrapper = ObjectWrap::Unwrap<VtkPlotLineWrap>(info.Holder());
	vtkPlotLine *native = (vtkPlotLine *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PolyLineOff();
}

void VtkPlotLineWrap::PolyLineOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotLineWrap *wrapper = ObjectWrap::Unwrap<VtkPlotLineWrap>(info.Holder());
	vtkPlotLine *native = (vtkPlotLine *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PolyLineOn();
}

void VtkPlotLineWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotLineWrap *wrapper = ObjectWrap::Unwrap<VtkPlotLineWrap>(info.Holder());
	vtkPlotLine *native = (vtkPlotLine *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPlotLine * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPlotLineWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlotLineWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlotLineWrap *w = new VtkPlotLineWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

