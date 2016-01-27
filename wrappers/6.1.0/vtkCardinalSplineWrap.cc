/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkSplineWrap.h"
#include "vtkCardinalSplineWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCardinalSplineWrap::ptpl;

VtkCardinalSplineWrap::VtkCardinalSplineWrap()
{ }

VtkCardinalSplineWrap::VtkCardinalSplineWrap(vtkSmartPointer<vtkCardinalSpline> _native)
{ native = _native; }

VtkCardinalSplineWrap::~VtkCardinalSplineWrap()
{ }

void VtkCardinalSplineWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCardinalSpline").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CardinalSpline").ToLocalChecked(), ConstructorGetter);
}

void VtkCardinalSplineWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCardinalSplineWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkSplineWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkSplineWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCardinalSplineWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Compute", Compute);
	Nan::SetPrototypeMethod(tpl, "compute", Compute);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "Evaluate", Evaluate);
	Nan::SetPrototypeMethod(tpl, "evaluate", Evaluate);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkCardinalSplineWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCardinalSpline> native = vtkSmartPointer<vtkCardinalSpline>::New();
		VtkCardinalSplineWrap* obj = new VtkCardinalSplineWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCardinalSplineWrap::Compute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCardinalSplineWrap *wrapper = ObjectWrap::Unwrap<VtkCardinalSplineWrap>(info.Holder());
	vtkCardinalSpline *native = (vtkCardinalSpline *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Compute();
}

void VtkCardinalSplineWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCardinalSplineWrap *wrapper = ObjectWrap::Unwrap<VtkCardinalSplineWrap>(info.Holder());
	vtkCardinalSpline *native = (vtkCardinalSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSplineWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSplineWrap *a0 = ObjectWrap::Unwrap<VtkSplineWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkSpline *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCardinalSplineWrap::Evaluate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCardinalSplineWrap *wrapper = ObjectWrap::Unwrap<VtkCardinalSplineWrap>(info.Holder());
	vtkCardinalSpline *native = (vtkCardinalSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Evaluate(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCardinalSplineWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCardinalSplineWrap *wrapper = ObjectWrap::Unwrap<VtkCardinalSplineWrap>(info.Holder());
	vtkCardinalSpline *native = (vtkCardinalSpline *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCardinalSplineWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCardinalSplineWrap *wrapper = ObjectWrap::Unwrap<VtkCardinalSplineWrap>(info.Holder());
	vtkCardinalSpline *native = (vtkCardinalSpline *)wrapper->native.GetPointer();
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

void VtkCardinalSplineWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCardinalSplineWrap *wrapper = ObjectWrap::Unwrap<VtkCardinalSplineWrap>(info.Holder());
	vtkCardinalSpline *native = (vtkCardinalSpline *)wrapper->native.GetPointer();
	vtkCardinalSpline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCardinalSplineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCardinalSplineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCardinalSplineWrap *w = new VtkCardinalSplineWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCardinalSplineWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCardinalSplineWrap *wrapper = ObjectWrap::Unwrap<VtkCardinalSplineWrap>(info.Holder());
	vtkCardinalSpline *native = (vtkCardinalSpline *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCardinalSpline * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCardinalSplineWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCardinalSplineWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCardinalSplineWrap *w = new VtkCardinalSplineWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

