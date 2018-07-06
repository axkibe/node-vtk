/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkInteractorStyleWrap.h"
#include "vtkInteractorStyle3DWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkCameraWrap.h"
#include "vtkPropPickerWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyle3DWrap::ptpl;

VtkInteractorStyle3DWrap::VtkInteractorStyle3DWrap()
{ }

VtkInteractorStyle3DWrap::VtkInteractorStyle3DWrap(vtkSmartPointer<vtkInteractorStyle3D> _native)
{ native = _native; }

VtkInteractorStyle3DWrap::~VtkInteractorStyle3DWrap()
{ }

void VtkInteractorStyle3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyle3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyle3D").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyle3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyle3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyle3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetDollyMotionFactor", GetDollyMotionFactor);
	Nan::SetPrototypeMethod(tpl, "getDollyMotionFactor", GetDollyMotionFactor);

	Nan::SetPrototypeMethod(tpl, "GetInteractionPicker", GetInteractionPicker);
	Nan::SetPrototypeMethod(tpl, "getInteractionPicker", GetInteractionPicker);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDollyMotionFactor", SetDollyMotionFactor);
	Nan::SetPrototypeMethod(tpl, "setDollyMotionFactor", SetDollyMotionFactor);

	Nan::SetPrototypeMethod(tpl, "SetScale", SetScale);
	Nan::SetPrototypeMethod(tpl, "setScale", SetScale);

#ifdef VTK_NODE_PLUS_VTKINTERACTORSTYLE3DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINTERACTORSTYLE3DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkInteractorStyle3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyle3D> native = vtkSmartPointer<vtkInteractorStyle3D>::New();
		VtkInteractorStyle3DWrap* obj = new VtkInteractorStyle3DWrap(native);
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

void VtkInteractorStyle3DWrap::GetDollyMotionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyle3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyle3DWrap>(info.Holder());
	vtkInteractorStyle3D *native = (vtkInteractorStyle3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDollyMotionFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyle3DWrap::GetInteractionPicker(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyle3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyle3DWrap>(info.Holder());
	vtkInteractorStyle3D *native = (vtkInteractorStyle3D *)wrapper->native.GetPointer();
	vtkPropPicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractionPicker();
	VtkPropPickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropPickerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropPickerWrap *w = new VtkPropPickerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyle3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyle3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyle3DWrap>(info.Holder());
	vtkInteractorStyle3D *native = (vtkInteractorStyle3D *)wrapper->native.GetPointer();
	vtkInteractorStyle3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInteractorStyle3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorStyle3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyle3DWrap *w = new VtkInteractorStyle3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyle3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyle3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyle3DWrap>(info.Holder());
	vtkInteractorStyle3D *native = (vtkInteractorStyle3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkInteractorStyle3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkInteractorStyle3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInteractorStyle3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyle3DWrap *w = new VtkInteractorStyle3DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyle3DWrap::SetDollyMotionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyle3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyle3DWrap>(info.Holder());
	vtkInteractorStyle3D *native = (vtkInteractorStyle3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDollyMotionFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyle3DWrap::SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyle3DWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyle3DWrap>(info.Holder());
	vtkInteractorStyle3D *native = (vtkInteractorStyle3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCameraWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCameraWrap *a0 = ObjectWrap::Unwrap<VtkCameraWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetScale(
				(vtkCamera *) a0->native.GetPointer(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}
