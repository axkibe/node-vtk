/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWidgetRepresentationWrap.h"
#include "vtkSeedRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkHandleRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSeedRepresentationWrap::ptpl;

VtkSeedRepresentationWrap::VtkSeedRepresentationWrap()
{ }

VtkSeedRepresentationWrap::VtkSeedRepresentationWrap(vtkSmartPointer<vtkSeedRepresentation> _native)
{ native = _native; }

VtkSeedRepresentationWrap::~VtkSeedRepresentationWrap()
{ }

void VtkSeedRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSeedRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SeedRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkSeedRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSeedRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWidgetRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSeedRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "GetActiveHandle", GetActiveHandle);
	Nan::SetPrototypeMethod(tpl, "getActiveHandle", GetActiveHandle);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHandleRepresentation", GetHandleRepresentation);
	Nan::SetPrototypeMethod(tpl, "getHandleRepresentation", GetHandleRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSeeds", GetNumberOfSeeds);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSeeds", GetNumberOfSeeds);

	Nan::SetPrototypeMethod(tpl, "GetTolerance", GetTolerance);
	Nan::SetPrototypeMethod(tpl, "getTolerance", GetTolerance);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMaxValue", GetToleranceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMaxValue", GetToleranceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetToleranceMinValue", GetToleranceMinValue);
	Nan::SetPrototypeMethod(tpl, "getToleranceMinValue", GetToleranceMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveActiveHandle", RemoveActiveHandle);
	Nan::SetPrototypeMethod(tpl, "removeActiveHandle", RemoveActiveHandle);

	Nan::SetPrototypeMethod(tpl, "RemoveHandle", RemoveHandle);
	Nan::SetPrototypeMethod(tpl, "removeHandle", RemoveHandle);

	Nan::SetPrototypeMethod(tpl, "RemoveLastHandle", RemoveLastHandle);
	Nan::SetPrototypeMethod(tpl, "removeLastHandle", RemoveLastHandle);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHandleRepresentation", SetHandleRepresentation);
	Nan::SetPrototypeMethod(tpl, "setHandleRepresentation", SetHandleRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetTolerance", SetTolerance);
	Nan::SetPrototypeMethod(tpl, "setTolerance", SetTolerance);

	ptpl.Reset( tpl );
}

void VtkSeedRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSeedRepresentation> native = vtkSmartPointer<vtkSeedRepresentation>::New();
		VtkSeedRepresentationWrap* obj = new VtkSeedRepresentationWrap(native);
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

void VtkSeedRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkSeedRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->ComputeInteractionState(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSeedRepresentationWrap::GetActiveHandle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveHandle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSeedRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSeedRepresentationWrap::GetHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	vtkHandleRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHandleRepresentation();
		VtkHandleRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHandleRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHandleRepresentationWrap *w = new VtkHandleRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSeedRepresentationWrap::GetNumberOfSeeds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSeeds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSeedRepresentationWrap::GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTolerance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSeedRepresentationWrap::GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSeedRepresentationWrap::GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetToleranceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSeedRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
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

void VtkSeedRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	vtkSeedRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSeedRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSeedRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSeedRepresentationWrap *w = new VtkSeedRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSeedRepresentationWrap::RemoveActiveHandle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveActiveHandle();
}

void VtkSeedRepresentationWrap::RemoveHandle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveHandle(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSeedRepresentationWrap::RemoveLastHandle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveLastHandle();
}

void VtkSeedRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSeedRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSeedRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSeedRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSeedRepresentationWrap *w = new VtkSeedRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSeedRepresentationWrap::SetHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHandleRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHandleRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkHandleRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHandleRepresentation(
			(vtkHandleRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSeedRepresentationWrap::SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSeedRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkSeedRepresentationWrap>(info.Holder());
	vtkSeedRepresentation *native = (vtkSeedRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTolerance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

