/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkFlyingEdgesPlaneCutterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPlaneWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkFlyingEdgesPlaneCutterWrap::ptpl;

VtkFlyingEdgesPlaneCutterWrap::VtkFlyingEdgesPlaneCutterWrap()
{ }

VtkFlyingEdgesPlaneCutterWrap::VtkFlyingEdgesPlaneCutterWrap(vtkSmartPointer<vtkFlyingEdgesPlaneCutter> _native)
{ native = _native; }

VtkFlyingEdgesPlaneCutterWrap::~VtkFlyingEdgesPlaneCutterWrap()
{ }

void VtkFlyingEdgesPlaneCutterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkFlyingEdgesPlaneCutter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("FlyingEdgesPlaneCutter").ToLocalChecked(), ConstructorGetter);
}

void VtkFlyingEdgesPlaneCutterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkFlyingEdgesPlaneCutterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkFlyingEdgesPlaneCutterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeNormalsOff", ComputeNormalsOff);
	Nan::SetPrototypeMethod(tpl, "computeNormalsOff", ComputeNormalsOff);

	Nan::SetPrototypeMethod(tpl, "ComputeNormalsOn", ComputeNormalsOn);
	Nan::SetPrototypeMethod(tpl, "computeNormalsOn", ComputeNormalsOn);

	Nan::SetPrototypeMethod(tpl, "GetArrayComponent", GetArrayComponent);
	Nan::SetPrototypeMethod(tpl, "getArrayComponent", GetArrayComponent);

	Nan::SetPrototypeMethod(tpl, "GetComputeNormals", GetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "getComputeNormals", GetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "GetInterpolateAttributes", GetInterpolateAttributes);
	Nan::SetPrototypeMethod(tpl, "getInterpolateAttributes", GetInterpolateAttributes);

	Nan::SetPrototypeMethod(tpl, "GetPlane", GetPlane);
	Nan::SetPrototypeMethod(tpl, "getPlane", GetPlane);

	Nan::SetPrototypeMethod(tpl, "InterpolateAttributesOff", InterpolateAttributesOff);
	Nan::SetPrototypeMethod(tpl, "interpolateAttributesOff", InterpolateAttributesOff);

	Nan::SetPrototypeMethod(tpl, "InterpolateAttributesOn", InterpolateAttributesOn);
	Nan::SetPrototypeMethod(tpl, "interpolateAttributesOn", InterpolateAttributesOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetArrayComponent", SetArrayComponent);
	Nan::SetPrototypeMethod(tpl, "setArrayComponent", SetArrayComponent);

	Nan::SetPrototypeMethod(tpl, "SetComputeNormals", SetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "setComputeNormals", SetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "SetInterpolateAttributes", SetInterpolateAttributes);
	Nan::SetPrototypeMethod(tpl, "setInterpolateAttributes", SetInterpolateAttributes);

	Nan::SetPrototypeMethod(tpl, "SetPlane", SetPlane);
	Nan::SetPrototypeMethod(tpl, "setPlane", SetPlane);

#ifdef VTK_NODE_PLUS_VTKFLYINGEDGESPLANECUTTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKFLYINGEDGESPLANECUTTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkFlyingEdgesPlaneCutterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFlyingEdgesPlaneCutter> native = vtkSmartPointer<vtkFlyingEdgesPlaneCutter>::New();
		VtkFlyingEdgesPlaneCutterWrap* obj = new VtkFlyingEdgesPlaneCutterWrap(native);
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

void VtkFlyingEdgesPlaneCutterWrap::ComputeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOff();
}

void VtkFlyingEdgesPlaneCutterWrap::ComputeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOn();
}

void VtkFlyingEdgesPlaneCutterWrap::GetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFlyingEdgesPlaneCutterWrap::GetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFlyingEdgesPlaneCutterWrap::GetInterpolateAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolateAttributes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFlyingEdgesPlaneCutterWrap::GetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
	vtkPlane * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlane();
	VtkPlaneWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlaneWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaneWrap *w = new VtkPlaneWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFlyingEdgesPlaneCutterWrap::InterpolateAttributesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InterpolateAttributesOff();
}

void VtkFlyingEdgesPlaneCutterWrap::InterpolateAttributesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InterpolateAttributesOn();
}

void VtkFlyingEdgesPlaneCutterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
	vtkFlyingEdgesPlaneCutter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkFlyingEdgesPlaneCutterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkFlyingEdgesPlaneCutterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFlyingEdgesPlaneCutterWrap *w = new VtkFlyingEdgesPlaneCutterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFlyingEdgesPlaneCutterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkFlyingEdgesPlaneCutter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkFlyingEdgesPlaneCutterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFlyingEdgesPlaneCutterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFlyingEdgesPlaneCutterWrap *w = new VtkFlyingEdgesPlaneCutterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFlyingEdgesPlaneCutterWrap::SetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFlyingEdgesPlaneCutterWrap::SetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeNormals(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFlyingEdgesPlaneCutterWrap::SetInterpolateAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolateAttributes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFlyingEdgesPlaneCutterWrap::SetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFlyingEdgesPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkFlyingEdgesPlaneCutterWrap>(info.Holder());
	vtkFlyingEdgesPlaneCutter *native = (vtkFlyingEdgesPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlaneWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlaneWrap *a0 = ObjectWrap::Unwrap<VtkPlaneWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlane(
			(vtkPlane *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

