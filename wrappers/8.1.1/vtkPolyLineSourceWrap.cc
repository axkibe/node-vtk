/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkPolyLineSourceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPointsWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPolyLineSourceWrap::ptpl;

VtkPolyLineSourceWrap::VtkPolyLineSourceWrap()
{ }

VtkPolyLineSourceWrap::VtkPolyLineSourceWrap(vtkSmartPointer<vtkPolyLineSource> _native)
{ native = _native; }

VtkPolyLineSourceWrap::~VtkPolyLineSourceWrap()
{ }

void VtkPolyLineSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPolyLineSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PolyLineSource").ToLocalChecked(), ConstructorGetter);
}

void VtkPolyLineSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPolyLineSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPolyLineSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClosedOff", ClosedOff);
	Nan::SetPrototypeMethod(tpl, "closedOff", ClosedOff);

	Nan::SetPrototypeMethod(tpl, "ClosedOn", ClosedOn);
	Nan::SetPrototypeMethod(tpl, "closedOn", ClosedOn);

	Nan::SetPrototypeMethod(tpl, "GetClosed", GetClosed);
	Nan::SetPrototypeMethod(tpl, "getClosed", GetClosed);

	Nan::SetPrototypeMethod(tpl, "GetPoints", GetPoints);
	Nan::SetPrototypeMethod(tpl, "getPoints", GetPoints);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetClosed", SetClosed);
	Nan::SetPrototypeMethod(tpl, "setClosed", SetClosed);

	Nan::SetPrototypeMethod(tpl, "SetPoints", SetPoints);
	Nan::SetPrototypeMethod(tpl, "setPoints", SetPoints);

#ifdef VTK_NODE_PLUS_VTKPOLYLINESOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPOLYLINESOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPolyLineSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolyLineSource> native = vtkSmartPointer<vtkPolyLineSource>::New();
		VtkPolyLineSourceWrap* obj = new VtkPolyLineSourceWrap(native);
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

void VtkPolyLineSourceWrap::ClosedOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyLineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPolyLineSourceWrap>(info.Holder());
	vtkPolyLineSource *native = (vtkPolyLineSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClosedOff();
}

void VtkPolyLineSourceWrap::ClosedOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyLineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPolyLineSourceWrap>(info.Holder());
	vtkPolyLineSource *native = (vtkPolyLineSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClosedOn();
}

void VtkPolyLineSourceWrap::GetClosed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyLineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPolyLineSourceWrap>(info.Holder());
	vtkPolyLineSource *native = (vtkPolyLineSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClosed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyLineSourceWrap::GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyLineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPolyLineSourceWrap>(info.Holder());
	vtkPolyLineSource *native = (vtkPolyLineSource *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoints();
	VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyLineSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyLineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPolyLineSourceWrap>(info.Holder());
	vtkPolyLineSource *native = (vtkPolyLineSource *)wrapper->native.GetPointer();
	vtkPolyLineSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPolyLineSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyLineSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyLineSourceWrap *w = new VtkPolyLineSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyLineSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyLineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPolyLineSourceWrap>(info.Holder());
	vtkPolyLineSource *native = (vtkPolyLineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPolyLineSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPolyLineSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolyLineSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyLineSourceWrap *w = new VtkPolyLineSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyLineSourceWrap::SetClosed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyLineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPolyLineSourceWrap>(info.Holder());
	vtkPolyLineSource *native = (vtkPolyLineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClosed(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyLineSourceWrap::SetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyLineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPolyLineSourceWrap>(info.Holder());
	vtkPolyLineSource *native = (vtkPolyLineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoints(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

