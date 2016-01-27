/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPointSetAlgorithmWrap.h"
#include "vtkTransformCoordinateSystemsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTransformCoordinateSystemsWrap::ptpl;

VtkTransformCoordinateSystemsWrap::VtkTransformCoordinateSystemsWrap()
{ }

VtkTransformCoordinateSystemsWrap::VtkTransformCoordinateSystemsWrap(vtkSmartPointer<vtkTransformCoordinateSystems> _native)
{ native = _native; }

VtkTransformCoordinateSystemsWrap::~VtkTransformCoordinateSystemsWrap()
{ }

void VtkTransformCoordinateSystemsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTransformCoordinateSystems").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TransformCoordinateSystems").ToLocalChecked(), ConstructorGetter);
}

void VtkTransformCoordinateSystemsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTransformCoordinateSystemsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTransformCoordinateSystemsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInputCoordinateSystem", GetInputCoordinateSystem);
	Nan::SetPrototypeMethod(tpl, "getInputCoordinateSystem", GetInputCoordinateSystem);

	Nan::SetPrototypeMethod(tpl, "GetOutputCoordinateSystem", GetOutputCoordinateSystem);
	Nan::SetPrototypeMethod(tpl, "getOutputCoordinateSystem", GetOutputCoordinateSystem);

	Nan::SetPrototypeMethod(tpl, "GetViewport", GetViewport);
	Nan::SetPrototypeMethod(tpl, "getViewport", GetViewport);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputCoordinateSystem", SetInputCoordinateSystem);
	Nan::SetPrototypeMethod(tpl, "setInputCoordinateSystem", SetInputCoordinateSystem);

	Nan::SetPrototypeMethod(tpl, "SetInputCoordinateSystemToDisplay", SetInputCoordinateSystemToDisplay);
	Nan::SetPrototypeMethod(tpl, "setInputCoordinateSystemToDisplay", SetInputCoordinateSystemToDisplay);

	Nan::SetPrototypeMethod(tpl, "SetInputCoordinateSystemToViewport", SetInputCoordinateSystemToViewport);
	Nan::SetPrototypeMethod(tpl, "setInputCoordinateSystemToViewport", SetInputCoordinateSystemToViewport);

	Nan::SetPrototypeMethod(tpl, "SetInputCoordinateSystemToWorld", SetInputCoordinateSystemToWorld);
	Nan::SetPrototypeMethod(tpl, "setInputCoordinateSystemToWorld", SetInputCoordinateSystemToWorld);

	Nan::SetPrototypeMethod(tpl, "SetOutputCoordinateSystem", SetOutputCoordinateSystem);
	Nan::SetPrototypeMethod(tpl, "setOutputCoordinateSystem", SetOutputCoordinateSystem);

	Nan::SetPrototypeMethod(tpl, "SetOutputCoordinateSystemToDisplay", SetOutputCoordinateSystemToDisplay);
	Nan::SetPrototypeMethod(tpl, "setOutputCoordinateSystemToDisplay", SetOutputCoordinateSystemToDisplay);

	Nan::SetPrototypeMethod(tpl, "SetOutputCoordinateSystemToViewport", SetOutputCoordinateSystemToViewport);
	Nan::SetPrototypeMethod(tpl, "setOutputCoordinateSystemToViewport", SetOutputCoordinateSystemToViewport);

	Nan::SetPrototypeMethod(tpl, "SetOutputCoordinateSystemToWorld", SetOutputCoordinateSystemToWorld);
	Nan::SetPrototypeMethod(tpl, "setOutputCoordinateSystemToWorld", SetOutputCoordinateSystemToWorld);

	Nan::SetPrototypeMethod(tpl, "SetViewport", SetViewport);
	Nan::SetPrototypeMethod(tpl, "setViewport", SetViewport);

	ptpl.Reset( tpl );
}

void VtkTransformCoordinateSystemsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTransformCoordinateSystems> native = vtkSmartPointer<vtkTransformCoordinateSystems>::New();
		VtkTransformCoordinateSystemsWrap* obj = new VtkTransformCoordinateSystemsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTransformCoordinateSystemsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTransformCoordinateSystemsWrap::GetInputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputCoordinateSystem();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformCoordinateSystemsWrap::GetOutputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputCoordinateSystem();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformCoordinateSystemsWrap::GetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	vtkViewport * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetViewport();
		VtkViewportWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkViewportWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkViewportWrap *w = new VtkViewportWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformCoordinateSystemsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
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

void VtkTransformCoordinateSystemsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	vtkTransformCoordinateSystems * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTransformCoordinateSystemsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTransformCoordinateSystemsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransformCoordinateSystemsWrap *w = new VtkTransformCoordinateSystemsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformCoordinateSystemsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTransformCoordinateSystems * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTransformCoordinateSystemsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTransformCoordinateSystemsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTransformCoordinateSystemsWrap *w = new VtkTransformCoordinateSystemsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformCoordinateSystemsWrap::SetInputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputCoordinateSystem(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformCoordinateSystemsWrap::SetInputCoordinateSystemToDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInputCoordinateSystemToDisplay();
}

void VtkTransformCoordinateSystemsWrap::SetInputCoordinateSystemToViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInputCoordinateSystemToViewport();
}

void VtkTransformCoordinateSystemsWrap::SetInputCoordinateSystemToWorld(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInputCoordinateSystemToWorld();
}

void VtkTransformCoordinateSystemsWrap::SetOutputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputCoordinateSystem(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformCoordinateSystemsWrap::SetOutputCoordinateSystemToDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputCoordinateSystemToDisplay();
}

void VtkTransformCoordinateSystemsWrap::SetOutputCoordinateSystemToViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputCoordinateSystemToViewport();
}

void VtkTransformCoordinateSystemsWrap::SetOutputCoordinateSystemToWorld(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputCoordinateSystemToWorld();
}

void VtkTransformCoordinateSystemsWrap::SetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformCoordinateSystemsWrap *wrapper = ObjectWrap::Unwrap<VtkTransformCoordinateSystemsWrap>(info.Holder());
	vtkTransformCoordinateSystems *native = (vtkTransformCoordinateSystems *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetViewport(
			(vtkViewport *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

