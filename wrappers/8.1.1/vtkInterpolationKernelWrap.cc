/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkInterpolationKernelWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAbstractPointLocatorWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkPointDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInterpolationKernelWrap::ptpl;

VtkInterpolationKernelWrap::VtkInterpolationKernelWrap()
{ }

VtkInterpolationKernelWrap::VtkInterpolationKernelWrap(vtkSmartPointer<vtkInterpolationKernel> _native)
{ native = _native; }

VtkInterpolationKernelWrap::~VtkInterpolationKernelWrap()
{ }

void VtkInterpolationKernelWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInterpolationKernel").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InterpolationKernel").ToLocalChecked(), ConstructorGetter);
}

void VtkInterpolationKernelWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInterpolationKernelWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInterpolationKernelWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetRequiresInitialization", GetRequiresInitialization);
	Nan::SetPrototypeMethod(tpl, "getRequiresInitialization", GetRequiresInitialization);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RequiresInitializationOff", RequiresInitializationOff);
	Nan::SetPrototypeMethod(tpl, "requiresInitializationOff", RequiresInitializationOff);

	Nan::SetPrototypeMethod(tpl, "RequiresInitializationOn", RequiresInitializationOn);
	Nan::SetPrototypeMethod(tpl, "requiresInitializationOn", RequiresInitializationOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRequiresInitialization", SetRequiresInitialization);
	Nan::SetPrototypeMethod(tpl, "setRequiresInitialization", SetRequiresInitialization);

#ifdef VTK_NODE_PLUS_VTKINTERPOLATIONKERNELWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINTERPOLATIONKERNELWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkInterpolationKernelWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkInterpolationKernelWrap::GetRequiresInitialization(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolationKernelWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolationKernelWrap>(info.Holder());
	vtkInterpolationKernel *native = (vtkInterpolationKernel *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRequiresInitialization();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInterpolationKernelWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolationKernelWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolationKernelWrap>(info.Holder());
	vtkInterpolationKernel *native = (vtkInterpolationKernel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractPointLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractPointLocatorWrap *a0 = ObjectWrap::Unwrap<VtkAbstractPointLocatorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataSetWrap *a1 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[2]))
			{
				VtkPointDataWrap *a2 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Initialize(
					(vtkAbstractPointLocator *) a0->native.GetPointer(),
					(vtkDataSet *) a1->native.GetPointer(),
					(vtkPointData *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInterpolationKernelWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolationKernelWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolationKernelWrap>(info.Holder());
	vtkInterpolationKernel *native = (vtkInterpolationKernel *)wrapper->native.GetPointer();
	vtkInterpolationKernel * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInterpolationKernelWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInterpolationKernelWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInterpolationKernelWrap *w = new VtkInterpolationKernelWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInterpolationKernelWrap::RequiresInitializationOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolationKernelWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolationKernelWrap>(info.Holder());
	vtkInterpolationKernel *native = (vtkInterpolationKernel *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RequiresInitializationOff();
}

void VtkInterpolationKernelWrap::RequiresInitializationOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolationKernelWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolationKernelWrap>(info.Holder());
	vtkInterpolationKernel *native = (vtkInterpolationKernel *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RequiresInitializationOn();
}

void VtkInterpolationKernelWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolationKernelWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolationKernelWrap>(info.Holder());
	vtkInterpolationKernel *native = (vtkInterpolationKernel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkInterpolationKernel * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkInterpolationKernelWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInterpolationKernelWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInterpolationKernelWrap *w = new VtkInterpolationKernelWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInterpolationKernelWrap::SetRequiresInitialization(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInterpolationKernelWrap *wrapper = ObjectWrap::Unwrap<VtkInterpolationKernelWrap>(info.Holder());
	vtkInterpolationKernel *native = (vtkInterpolationKernel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRequiresInitialization(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

