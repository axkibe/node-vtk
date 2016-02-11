/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkTupleInterpolatorWrap.h"
#include "vtkSplineWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTupleInterpolatorWrap::ptpl;

VtkTupleInterpolatorWrap::VtkTupleInterpolatorWrap()
{ }

VtkTupleInterpolatorWrap::VtkTupleInterpolatorWrap(vtkSmartPointer<vtkTupleInterpolator> _native)
{ native = _native; }

VtkTupleInterpolatorWrap::~VtkTupleInterpolatorWrap()
{ }

void VtkTupleInterpolatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTupleInterpolator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TupleInterpolator").ToLocalChecked(), ConstructorGetter);
}

void VtkTupleInterpolatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTupleInterpolatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTupleInterpolatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInterpolatingSpline", GetInterpolatingSpline);
	Nan::SetPrototypeMethod(tpl, "getInterpolatingSpline", GetInterpolatingSpline);

	Nan::SetPrototypeMethod(tpl, "GetInterpolationType", GetInterpolationType);
	Nan::SetPrototypeMethod(tpl, "getInterpolationType", GetInterpolationType);

	Nan::SetPrototypeMethod(tpl, "GetMaximumT", GetMaximumT);
	Nan::SetPrototypeMethod(tpl, "getMaximumT", GetMaximumT);

	Nan::SetPrototypeMethod(tpl, "GetMinimumT", GetMinimumT);
	Nan::SetPrototypeMethod(tpl, "getMinimumT", GetMinimumT);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfComponents", GetNumberOfComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfComponents", GetNumberOfComponents);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTuples", GetNumberOfTuples);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTuples", GetNumberOfTuples);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveTuple", RemoveTuple);
	Nan::SetPrototypeMethod(tpl, "removeTuple", RemoveTuple);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInterpolatingSpline", SetInterpolatingSpline);
	Nan::SetPrototypeMethod(tpl, "setInterpolatingSpline", SetInterpolatingSpline);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationType", SetInterpolationType);
	Nan::SetPrototypeMethod(tpl, "setInterpolationType", SetInterpolationType);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationTypeToLinear", SetInterpolationTypeToLinear);
	Nan::SetPrototypeMethod(tpl, "setInterpolationTypeToLinear", SetInterpolationTypeToLinear);

	Nan::SetPrototypeMethod(tpl, "SetInterpolationTypeToSpline", SetInterpolationTypeToSpline);
	Nan::SetPrototypeMethod(tpl, "setInterpolationTypeToSpline", SetInterpolationTypeToSpline);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfComponents", SetNumberOfComponents);
	Nan::SetPrototypeMethod(tpl, "setNumberOfComponents", SetNumberOfComponents);

	ptpl.Reset( tpl );
}

void VtkTupleInterpolatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTupleInterpolator> native = vtkSmartPointer<vtkTupleInterpolator>::New();
		VtkTupleInterpolatorWrap* obj = new VtkTupleInterpolatorWrap(native);
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

void VtkTupleInterpolatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTupleInterpolatorWrap::GetInterpolatingSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
	vtkSpline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolatingSpline();
	VtkSplineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSplineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSplineWrap *w = new VtkSplineWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTupleInterpolatorWrap::GetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInterpolationType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTupleInterpolatorWrap::GetMaximumT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumT();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTupleInterpolatorWrap::GetMinimumT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinimumT();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTupleInterpolatorWrap::GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTupleInterpolatorWrap::GetNumberOfTuples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTuples();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTupleInterpolatorWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkTupleInterpolatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
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

void VtkTupleInterpolatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
	vtkTupleInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTupleInterpolatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTupleInterpolatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTupleInterpolatorWrap *w = new VtkTupleInterpolatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTupleInterpolatorWrap::RemoveTuple(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveTuple(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTupleInterpolatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTupleInterpolator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTupleInterpolatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTupleInterpolatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTupleInterpolatorWrap *w = new VtkTupleInterpolatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTupleInterpolatorWrap::SetInterpolatingSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSplineWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSplineWrap *a0 = ObjectWrap::Unwrap<VtkSplineWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolatingSpline(
			(vtkSpline *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTupleInterpolatorWrap::SetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInterpolationType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTupleInterpolatorWrap::SetInterpolationTypeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationTypeToLinear();
}

void VtkTupleInterpolatorWrap::SetInterpolationTypeToSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInterpolationTypeToSpline();
}

void VtkTupleInterpolatorWrap::SetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTupleInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkTupleInterpolatorWrap>(info.Holder());
	vtkTupleInterpolator *native = (vtkTupleInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfComponents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

