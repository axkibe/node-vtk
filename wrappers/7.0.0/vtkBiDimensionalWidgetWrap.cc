/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractWidgetWrap.h"
#include "vtkBiDimensionalWidgetWrap.h"
#include "vtkObjectWrap.h"
#include "vtkBiDimensionalRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBiDimensionalWidgetWrap::ptpl;

VtkBiDimensionalWidgetWrap::VtkBiDimensionalWidgetWrap()
{ }

VtkBiDimensionalWidgetWrap::VtkBiDimensionalWidgetWrap(vtkSmartPointer<vtkBiDimensionalWidget> _native)
{ native = _native; }

VtkBiDimensionalWidgetWrap::~VtkBiDimensionalWidgetWrap()
{ }

void VtkBiDimensionalWidgetWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBiDimensionalWidget").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BiDimensionalWidget").ToLocalChecked(), ConstructorGetter);
}

void VtkBiDimensionalWidgetWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBiDimensionalWidgetWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractWidgetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractWidgetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBiDimensionalWidgetWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultRepresentation", CreateDefaultRepresentation);
	Nan::SetPrototypeMethod(tpl, "createDefaultRepresentation", CreateDefaultRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetBiDimensionalRepresentation", GetBiDimensionalRepresentation);
	Nan::SetPrototypeMethod(tpl, "getBiDimensionalRepresentation", GetBiDimensionalRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetWidgetState", GetWidgetState);
	Nan::SetPrototypeMethod(tpl, "getWidgetState", GetWidgetState);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsMeasureValid", IsMeasureValid);
	Nan::SetPrototypeMethod(tpl, "isMeasureValid", IsMeasureValid);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetProcessEvents", SetProcessEvents);
	Nan::SetPrototypeMethod(tpl, "setProcessEvents", SetProcessEvents);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetWidgetStateToManipulate", SetWidgetStateToManipulate);
	Nan::SetPrototypeMethod(tpl, "setWidgetStateToManipulate", SetWidgetStateToManipulate);

	Nan::SetPrototypeMethod(tpl, "SetWidgetStateToStart", SetWidgetStateToStart);
	Nan::SetPrototypeMethod(tpl, "setWidgetStateToStart", SetWidgetStateToStart);

	ptpl.Reset( tpl );
}

void VtkBiDimensionalWidgetWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBiDimensionalWidget> native = vtkSmartPointer<vtkBiDimensionalWidget>::New();
		VtkBiDimensionalWidgetWrap* obj = new VtkBiDimensionalWidgetWrap(native);
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

void VtkBiDimensionalWidgetWrap::CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalWidgetWrap>(info.Holder());
	vtkBiDimensionalWidget *native = (vtkBiDimensionalWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultRepresentation();
}

void VtkBiDimensionalWidgetWrap::GetBiDimensionalRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalWidgetWrap>(info.Holder());
	vtkBiDimensionalWidget *native = (vtkBiDimensionalWidget *)wrapper->native.GetPointer();
	vtkBiDimensionalRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBiDimensionalRepresentation();
		VtkBiDimensionalRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBiDimensionalRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBiDimensionalRepresentationWrap *w = new VtkBiDimensionalRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBiDimensionalWidgetWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalWidgetWrap>(info.Holder());
	vtkBiDimensionalWidget *native = (vtkBiDimensionalWidget *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBiDimensionalWidgetWrap::GetWidgetState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalWidgetWrap>(info.Holder());
	vtkBiDimensionalWidget *native = (vtkBiDimensionalWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidgetState();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiDimensionalWidgetWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalWidgetWrap>(info.Holder());
	vtkBiDimensionalWidget *native = (vtkBiDimensionalWidget *)wrapper->native.GetPointer();
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

void VtkBiDimensionalWidgetWrap::IsMeasureValid(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalWidgetWrap>(info.Holder());
	vtkBiDimensionalWidget *native = (vtkBiDimensionalWidget *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsMeasureValid();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBiDimensionalWidgetWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalWidgetWrap>(info.Holder());
	vtkBiDimensionalWidget *native = (vtkBiDimensionalWidget *)wrapper->native.GetPointer();
	vtkBiDimensionalWidget * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBiDimensionalWidgetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBiDimensionalWidgetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBiDimensionalWidgetWrap *w = new VtkBiDimensionalWidgetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBiDimensionalWidgetWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalWidgetWrap>(info.Holder());
	vtkBiDimensionalWidget *native = (vtkBiDimensionalWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBiDimensionalWidget * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBiDimensionalWidgetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBiDimensionalWidgetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBiDimensionalWidgetWrap *w = new VtkBiDimensionalWidgetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiDimensionalWidgetWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalWidgetWrap>(info.Holder());
	vtkBiDimensionalWidget *native = (vtkBiDimensionalWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnabled(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiDimensionalWidgetWrap::SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalWidgetWrap>(info.Holder());
	vtkBiDimensionalWidget *native = (vtkBiDimensionalWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProcessEvents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiDimensionalWidgetWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalWidgetWrap>(info.Holder());
	vtkBiDimensionalWidget *native = (vtkBiDimensionalWidget *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkBiDimensionalRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkBiDimensionalRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkBiDimensionalRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkBiDimensionalRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBiDimensionalWidgetWrap::SetWidgetStateToManipulate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalWidgetWrap>(info.Holder());
	vtkBiDimensionalWidget *native = (vtkBiDimensionalWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWidgetStateToManipulate();
}

void VtkBiDimensionalWidgetWrap::SetWidgetStateToStart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBiDimensionalWidgetWrap *wrapper = ObjectWrap::Unwrap<VtkBiDimensionalWidgetWrap>(info.Holder());
	vtkBiDimensionalWidget *native = (vtkBiDimensionalWidget *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetWidgetStateToStart();
}

