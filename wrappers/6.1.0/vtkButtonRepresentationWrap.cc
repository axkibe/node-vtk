/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkWidgetRepresentationWrap.h"
#include "vtkButtonRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPropWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkButtonRepresentationWrap::ptpl;

VtkButtonRepresentationWrap::VtkButtonRepresentationWrap()
{ }

VtkButtonRepresentationWrap::VtkButtonRepresentationWrap(vtkSmartPointer<vtkButtonRepresentation> _native)
{ native = _native; }

VtkButtonRepresentationWrap::~VtkButtonRepresentationWrap()
{ }

void VtkButtonRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkButtonRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ButtonRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkButtonRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkButtonRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWidgetRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkButtonRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHighlightState", GetHighlightState);
	Nan::SetPrototypeMethod(tpl, "getHighlightState", GetHighlightState);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfStatesMaxValue", GetNumberOfStatesMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfStatesMaxValue", GetNumberOfStatesMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfStatesMinValue", GetNumberOfStatesMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfStatesMinValue", GetNumberOfStatesMinValue);

	Nan::SetPrototypeMethod(tpl, "GetState", GetState);
	Nan::SetPrototypeMethod(tpl, "getState", GetState);

	Nan::SetPrototypeMethod(tpl, "Highlight", Highlight);
	Nan::SetPrototypeMethod(tpl, "highlight", Highlight);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NextState", NextState);
	Nan::SetPrototypeMethod(tpl, "nextState", NextState);

	Nan::SetPrototypeMethod(tpl, "PreviousState", PreviousState);
	Nan::SetPrototypeMethod(tpl, "previousState", PreviousState);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfStates", SetNumberOfStates);
	Nan::SetPrototypeMethod(tpl, "setNumberOfStates", SetNumberOfStates);

	Nan::SetPrototypeMethod(tpl, "SetState", SetState);
	Nan::SetPrototypeMethod(tpl, "setState", SetState);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkButtonRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkButtonRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkButtonRepresentationWrap::GetHighlightState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHighlightState();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkButtonRepresentationWrap::GetNumberOfStatesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfStatesMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkButtonRepresentationWrap::GetNumberOfStatesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfStatesMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkButtonRepresentationWrap::GetState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetState();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkButtonRepresentationWrap::Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Highlight(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkButtonRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
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

void VtkButtonRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
	vtkButtonRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkButtonRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkButtonRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkButtonRepresentationWrap *w = new VtkButtonRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkButtonRepresentationWrap::NextState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NextState();
}

void VtkButtonRepresentationWrap::PreviousState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreviousState();
}

void VtkButtonRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkButtonRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkButtonRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkButtonRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkButtonRepresentationWrap *w = new VtkButtonRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkButtonRepresentationWrap::SetNumberOfStates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfStates(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkButtonRepresentationWrap::SetState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetState(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkButtonRepresentationWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkButtonRepresentationWrap>(info.Holder());
	vtkButtonRepresentation *native = (vtkButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

