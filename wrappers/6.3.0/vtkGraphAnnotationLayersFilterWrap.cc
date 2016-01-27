/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkGraphAnnotationLayersFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGraphAnnotationLayersFilterWrap::ptpl;

VtkGraphAnnotationLayersFilterWrap::VtkGraphAnnotationLayersFilterWrap()
{ }

VtkGraphAnnotationLayersFilterWrap::VtkGraphAnnotationLayersFilterWrap(vtkSmartPointer<vtkGraphAnnotationLayersFilter> _native)
{ native = _native; }

VtkGraphAnnotationLayersFilterWrap::~VtkGraphAnnotationLayersFilterWrap()
{ }

void VtkGraphAnnotationLayersFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGraphAnnotationLayersFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GraphAnnotationLayersFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkGraphAnnotationLayersFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGraphAnnotationLayersFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGraphAnnotationLayersFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OutlineOff", OutlineOff);
	Nan::SetPrototypeMethod(tpl, "outlineOff", OutlineOff);

	Nan::SetPrototypeMethod(tpl, "OutlineOn", OutlineOn);
	Nan::SetPrototypeMethod(tpl, "outlineOn", OutlineOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHullShapeToBoundingRectangle", SetHullShapeToBoundingRectangle);
	Nan::SetPrototypeMethod(tpl, "setHullShapeToBoundingRectangle", SetHullShapeToBoundingRectangle);

	Nan::SetPrototypeMethod(tpl, "SetHullShapeToConvexHull", SetHullShapeToConvexHull);
	Nan::SetPrototypeMethod(tpl, "setHullShapeToConvexHull", SetHullShapeToConvexHull);

	Nan::SetPrototypeMethod(tpl, "SetMinHullSizeInDisplay", SetMinHullSizeInDisplay);
	Nan::SetPrototypeMethod(tpl, "setMinHullSizeInDisplay", SetMinHullSizeInDisplay);

	Nan::SetPrototypeMethod(tpl, "SetMinHullSizeInWorld", SetMinHullSizeInWorld);
	Nan::SetPrototypeMethod(tpl, "setMinHullSizeInWorld", SetMinHullSizeInWorld);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	Nan::SetPrototypeMethod(tpl, "SetScaleFactor", SetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "setScaleFactor", SetScaleFactor);

	ptpl.Reset( tpl );
}

void VtkGraphAnnotationLayersFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGraphAnnotationLayersFilter> native = vtkSmartPointer<vtkGraphAnnotationLayersFilter>::New();
		VtkGraphAnnotationLayersFilterWrap* obj = new VtkGraphAnnotationLayersFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGraphAnnotationLayersFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphAnnotationLayersFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphAnnotationLayersFilterWrap>(info.Holder());
	vtkGraphAnnotationLayersFilter *native = (vtkGraphAnnotationLayersFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphAnnotationLayersFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphAnnotationLayersFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphAnnotationLayersFilterWrap>(info.Holder());
	vtkGraphAnnotationLayersFilter *native = (vtkGraphAnnotationLayersFilter *)wrapper->native.GetPointer();
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

void VtkGraphAnnotationLayersFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphAnnotationLayersFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphAnnotationLayersFilterWrap>(info.Holder());
	vtkGraphAnnotationLayersFilter *native = (vtkGraphAnnotationLayersFilter *)wrapper->native.GetPointer();
	vtkGraphAnnotationLayersFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGraphAnnotationLayersFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGraphAnnotationLayersFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphAnnotationLayersFilterWrap *w = new VtkGraphAnnotationLayersFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphAnnotationLayersFilterWrap::OutlineOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphAnnotationLayersFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphAnnotationLayersFilterWrap>(info.Holder());
	vtkGraphAnnotationLayersFilter *native = (vtkGraphAnnotationLayersFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineOff();
}

void VtkGraphAnnotationLayersFilterWrap::OutlineOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphAnnotationLayersFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphAnnotationLayersFilterWrap>(info.Holder());
	vtkGraphAnnotationLayersFilter *native = (vtkGraphAnnotationLayersFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineOn();
}

void VtkGraphAnnotationLayersFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphAnnotationLayersFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphAnnotationLayersFilterWrap>(info.Holder());
	vtkGraphAnnotationLayersFilter *native = (vtkGraphAnnotationLayersFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGraphAnnotationLayersFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGraphAnnotationLayersFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGraphAnnotationLayersFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphAnnotationLayersFilterWrap *w = new VtkGraphAnnotationLayersFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphAnnotationLayersFilterWrap::SetHullShapeToBoundingRectangle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphAnnotationLayersFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphAnnotationLayersFilterWrap>(info.Holder());
	vtkGraphAnnotationLayersFilter *native = (vtkGraphAnnotationLayersFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetHullShapeToBoundingRectangle();
}

void VtkGraphAnnotationLayersFilterWrap::SetHullShapeToConvexHull(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphAnnotationLayersFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphAnnotationLayersFilterWrap>(info.Holder());
	vtkGraphAnnotationLayersFilter *native = (vtkGraphAnnotationLayersFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetHullShapeToConvexHull();
}

void VtkGraphAnnotationLayersFilterWrap::SetMinHullSizeInDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphAnnotationLayersFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphAnnotationLayersFilterWrap>(info.Holder());
	vtkGraphAnnotationLayersFilter *native = (vtkGraphAnnotationLayersFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinHullSizeInDisplay(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphAnnotationLayersFilterWrap::SetMinHullSizeInWorld(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphAnnotationLayersFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphAnnotationLayersFilterWrap>(info.Holder());
	vtkGraphAnnotationLayersFilter *native = (vtkGraphAnnotationLayersFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinHullSizeInWorld(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphAnnotationLayersFilterWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphAnnotationLayersFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphAnnotationLayersFilterWrap>(info.Holder());
	vtkGraphAnnotationLayersFilter *native = (vtkGraphAnnotationLayersFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphAnnotationLayersFilterWrap::SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphAnnotationLayersFilterWrap *wrapper = ObjectWrap::Unwrap<VtkGraphAnnotationLayersFilterWrap>(info.Holder());
	vtkGraphAnnotationLayersFilter *native = (vtkGraphAnnotationLayersFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

