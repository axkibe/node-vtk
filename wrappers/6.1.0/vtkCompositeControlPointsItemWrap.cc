/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkColorTransferControlPointsItemWrap.h"
#include "vtkCompositeControlPointsItemWrap.h"
#include "vtkObjectWrap.h"
#include "vtkColorTransferFunctionWrap.h"
#include "vtkPiecewiseFunctionWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompositeControlPointsItemWrap::ptpl;

VtkCompositeControlPointsItemWrap::VtkCompositeControlPointsItemWrap()
{ }

VtkCompositeControlPointsItemWrap::VtkCompositeControlPointsItemWrap(vtkSmartPointer<vtkCompositeControlPointsItem> _native)
{ native = _native; }

VtkCompositeControlPointsItemWrap::~VtkCompositeControlPointsItemWrap()
{ }

void VtkCompositeControlPointsItemWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompositeControlPointsItem").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompositeControlPointsItem").ToLocalChecked(), ConstructorGetter);
}

void VtkCompositeControlPointsItemWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompositeControlPointsItemWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkColorTransferControlPointsItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkColorTransferControlPointsItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompositeControlPointsItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOpacityFunction", GetOpacityFunction);
	Nan::SetPrototypeMethod(tpl, "getOpacityFunction", GetOpacityFunction);

	Nan::SetPrototypeMethod(tpl, "GetPointsFunction", GetPointsFunction);
	Nan::SetPrototypeMethod(tpl, "getPointsFunction", GetPointsFunction);

	Nan::SetPrototypeMethod(tpl, "GetUseOpacityPointHandles", GetUseOpacityPointHandles);
	Nan::SetPrototypeMethod(tpl, "getUseOpacityPointHandles", GetUseOpacityPointHandles);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColorTransferFunction", SetColorTransferFunction);
	Nan::SetPrototypeMethod(tpl, "setColorTransferFunction", SetColorTransferFunction);

	Nan::SetPrototypeMethod(tpl, "SetOpacityFunction", SetOpacityFunction);
	Nan::SetPrototypeMethod(tpl, "setOpacityFunction", SetOpacityFunction);

	Nan::SetPrototypeMethod(tpl, "SetPointsFunction", SetPointsFunction);
	Nan::SetPrototypeMethod(tpl, "setPointsFunction", SetPointsFunction);

	Nan::SetPrototypeMethod(tpl, "SetUseOpacityPointHandles", SetUseOpacityPointHandles);
	Nan::SetPrototypeMethod(tpl, "setUseOpacityPointHandles", SetUseOpacityPointHandles);

#ifdef VTK_NODE_PLUS_VTKCOMPOSITECONTROLPOINTSITEMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCOMPOSITECONTROLPOINTSITEMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCompositeControlPointsItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCompositeControlPointsItem> native = vtkSmartPointer<vtkCompositeControlPointsItem>::New();
		VtkCompositeControlPointsItemWrap* obj = new VtkCompositeControlPointsItemWrap(native);
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

void VtkCompositeControlPointsItemWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeControlPointsItemWrap>(info.Holder());
	vtkCompositeControlPointsItem *native = (vtkCompositeControlPointsItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompositeControlPointsItemWrap::GetOpacityFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeControlPointsItemWrap>(info.Holder());
	vtkCompositeControlPointsItem *native = (vtkCompositeControlPointsItem *)wrapper->native.GetPointer();
	vtkPiecewiseFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpacityFunction();
	VtkPiecewiseFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPiecewiseFunctionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPiecewiseFunctionWrap *w = new VtkPiecewiseFunctionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeControlPointsItemWrap::GetPointsFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeControlPointsItemWrap>(info.Holder());
	vtkCompositeControlPointsItem *native = (vtkCompositeControlPointsItem *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointsFunction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompositeControlPointsItemWrap::GetUseOpacityPointHandles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeControlPointsItemWrap>(info.Holder());
	vtkCompositeControlPointsItem *native = (vtkCompositeControlPointsItem *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseOpacityPointHandles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompositeControlPointsItemWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeControlPointsItemWrap>(info.Holder());
	vtkCompositeControlPointsItem *native = (vtkCompositeControlPointsItem *)wrapper->native.GetPointer();
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

void VtkCompositeControlPointsItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeControlPointsItemWrap>(info.Holder());
	vtkCompositeControlPointsItem *native = (vtkCompositeControlPointsItem *)wrapper->native.GetPointer();
	vtkCompositeControlPointsItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCompositeControlPointsItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeControlPointsItemWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeControlPointsItemWrap *w = new VtkCompositeControlPointsItemWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeControlPointsItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeControlPointsItemWrap>(info.Holder());
	vtkCompositeControlPointsItem *native = (vtkCompositeControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompositeControlPointsItem * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkCompositeControlPointsItemWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompositeControlPointsItemWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositeControlPointsItemWrap *w = new VtkCompositeControlPointsItemWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeControlPointsItemWrap::SetColorTransferFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeControlPointsItemWrap>(info.Holder());
	vtkCompositeControlPointsItem *native = (vtkCompositeControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkColorTransferFunctionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkColorTransferFunctionWrap *a0 = ObjectWrap::Unwrap<VtkColorTransferFunctionWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorTransferFunction(
			(vtkColorTransferFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeControlPointsItemWrap::SetOpacityFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeControlPointsItemWrap>(info.Holder());
	vtkCompositeControlPointsItem *native = (vtkCompositeControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPiecewiseFunctionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPiecewiseFunctionWrap *a0 = ObjectWrap::Unwrap<VtkPiecewiseFunctionWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOpacityFunction(
			(vtkPiecewiseFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeControlPointsItemWrap::SetPointsFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeControlPointsItemWrap>(info.Holder());
	vtkCompositeControlPointsItem *native = (vtkCompositeControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointsFunction(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeControlPointsItemWrap::SetUseOpacityPointHandles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeControlPointsItemWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeControlPointsItemWrap>(info.Holder());
	vtkCompositeControlPointsItem *native = (vtkCompositeControlPointsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseOpacityPointHandles(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

